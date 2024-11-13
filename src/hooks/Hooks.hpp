//
// Created by .1qxz on 11/12/2024.
//

#ifndef MINECRAFTANOTHERJNICHEAT_HOOKS_HPP
#define MINECRAFTANOTHERJNICHEAT_HOOKS_HPP

#include "../Includes.h"
#include "../listeners/Listeners.h"
#include "jnihook.hpp"
#include "net/minecraft/client/util/Window.hpp"
#include "net/minecraft/client/MinecraftClient.hpp"
#include "net/minecraft/client/Keyboard.hpp"
#include "net/minecraft/client/network/ClientPlayerEntity.hpp"
#include "net/minecraft/network/ClientConnection.hpp"

namespace ClientConnectionHooks {
    extern jmethodID original_handle_packet;

    JNIEXPORT void JNICALL hkHandlePacket(JNIEnv *env, jclass clazz, jobject packet, jobject listener);
    JNIEXPORT void JNICALL hkSend(JNIEnv *env, jobject obj, jobject packet);
}

namespace ClientPlayerEntityHooks {
    extern jmethodID original_tick_methodID;

    JNIEXPORT void JNICALL hkTick(JNIEnv *env, jobject obj);
}

namespace KeyboardHooks {
    extern jmethodID original_on_key_methodID;

    JNIEXPORT void JNICALL hkOnKey(JNIEnv *env, jobject obj, jlong window, jint key, jint scancode, jint action, jint modifiers);
}

namespace MinecraftClientHooks {
    extern jmethodID original_render_methodID;

    JNIEXPORT void JNICALL hkRender(JNIEnv *env, jobject obj, jboolean tick);
}

namespace Hooks {
    int init();
};

#endif //MINECRAFTANOTHERJNICHEAT_HOOKS_HPP
