//
// Created by .1qxz on 11/13/2024.
//

#include "../Hooks.hpp"

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