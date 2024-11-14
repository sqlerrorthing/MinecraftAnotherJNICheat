//
// Created by .1qxz on 11/13/2024.
//

#include "../Hooks.hpp"

jmethodID MinecraftClientHooks::original_render_methodID;
JNIEXPORT void JNICALL MinecraftClientHooks::hkRender(JNIEnv *env, jobject obj, jboolean tick) {
    FrameRateCounterUtil::getInstance().recordFrame();

    Listeners::getInstance().onRender(tick);
    env->CallNonvirtualVoidMethod(obj, MinecraftClient::self(), original_render_methodID, tick);
}