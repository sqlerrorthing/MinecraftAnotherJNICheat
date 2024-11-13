//
// Created by .1qxz on 11/13/2024.
//

#include "../Hooks.hpp"

jmethodID ClientPlayerEntityHooks::original_tick_methodID;
void ClientPlayerEntityHooks::hkTick(JNIEnv *env, jobject obj) {
    EventLocalPlayerUpdate event;
    Listeners::getInstance().onLocalPlayerUpdate(event);

    if(event.cancelled)
        return;

    env->CallNonvirtualVoidMethod(obj, ClientPlayerEntity::self(), original_tick_methodID);
}
