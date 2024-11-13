//
// Created by .1qxz on 11/12/2024.
//

#ifndef MINECRAFTANOTHERJNICHEAT_HOOKS_HPP
#define MINECRAFTANOTHERJNICHEAT_HOOKS_HPP

#include "../Includes.h"
#include "jnihook.hpp"

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
