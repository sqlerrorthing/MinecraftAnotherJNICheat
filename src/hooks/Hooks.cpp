//
// Created by .1qxz on 11/12/2024.
//

#include "Hooks.hpp"
#include "net/minecraft/client/util/Window.hpp"
#include "net/minecraft/client/MinecraftClient.hpp"
#include "net/minecraft/client/Keyboard.hpp"
#include "net/minecraft/client/network/ClientPlayerEntity.hpp"
#include "net/minecraft/network/ClientConnection.hpp"
#include "../listeners/Listeners.h"

using namespace fmt;

jmethodID ClientConnectionHooks::original_handle_packet;
void ClientConnectionHooks::hkHandlePacket(JNIEnv *env, jclass clazz, jobject packet, jobject listener) {
    EventPacketReceived event(packet);
    Listeners::getInstance().onPacketReceived(event);

    if(event.cancelled)
        return;

    env->CallStaticVoidMethod(clazz, original_handle_packet, event.packet, listener);
}

void ClientConnectionHooks::hkSend(JNIEnv *env, jobject obj, jobject packet) {
    EventPacketSend event(packet);
    Listeners::getInstance().onPacketSend(event);

    if(event.cancelled)
        return;

    env->CallVoidMethod(obj, ClientConnection::methodID__send(), event.packet, nullptr);
}

jmethodID ClientPlayerEntityHooks::original_tick_methodID;
void ClientPlayerEntityHooks::hkTick(JNIEnv *env, jobject obj) {
    EventLocalPlayerUpdate event;
    Listeners::getInstance().onLocalPlayerUpdate(event);

    if(event.cancelled)
        return;

    env->CallNonvirtualVoidMethod(obj, ClientPlayerEntity::self(), original_tick_methodID);
}

jmethodID KeyboardHooks::original_on_key_methodID;
void KeyboardHooks::hkOnKey(JNIEnv *env, jobject obj, jlong window, jint key, jint scancode, jint action,
                            jint modifiers) {
    EventOnKey event(key, scancode, action, modifiers);
    Listeners::getInstance().onKey(event);

    if(event.cancelled)
        return;

    env->CallNonvirtualVoidMethod(obj, Keyboard::self(), original_on_key_methodID, window, event.key, event.scancode,
                                  event.action, event.modifiers);
}

jmethodID MinecraftClientHooks::original_render_methodID;
JNIEXPORT void JNICALL MinecraftClientHooks::hkRender(JNIEnv *env, jobject obj, jboolean tick) {
    Listeners::getInstance().onRender(tick);
    env->CallNonvirtualVoidMethod(obj, MinecraftClient::self(), original_render_methodID, tick);
}

jmethodID addHook(const jmethodID &methodID, void *func) {
    jmethodID original_methodID;
    JNIHook_Attach(methodID, func, &original_methodID);
    return original_methodID;
}

int Hooks::init() {
    println("[+] Initializing methods hooks...");

    if(auto result = JNIHook_Init(MinecraftSDK::vm); result != JNIHOOK_OK) {
        std::cerr << "[!] Failed to initialize JNIHook: " << result << std::endl;
        return 1;
    }

    println("[+] Initializing hooks...");


    println("[++] MinecraftClient hooks...");
    MinecraftClientHooks::original_render_methodID =
            addHook(MinecraftClient::methodID_render(), reinterpret_cast<void *>(MinecraftClientHooks::hkRender));

    println("[++] KeyboardHandler hooks...");
    KeyboardHooks::original_on_key_methodID =
            addHook(Keyboard::methodID_onKey(), reinterpret_cast<void *>(KeyboardHooks::hkOnKey));

    println("[++] ClientPlayerEntity hooks...");
    ClientPlayerEntityHooks::original_tick_methodID =
            addHook(ClientPlayerEntity::methodID_tick(), reinterpret_cast<void *>(ClientPlayerEntityHooks::hkTick));

    println("[++] ClientConnection hooks...");
    ClientConnectionHooks::original_handle_packet =
            addHook(ClientConnection::methodID_handlePacket(), reinterpret_cast<void *>(ClientConnectionHooks::hkHandlePacket));

    addHook(ClientConnection::methodID_send(), reinterpret_cast<void *>(ClientConnectionHooks::hkSend));

    return 0;
}