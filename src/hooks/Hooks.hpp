//
// Created by .1qxz on 11/12/2024.
//

#ifndef MINECRAFTANOTHERJNICHEAT_HOOKS_HPP
#define MINECRAFTANOTHERJNICHEAT_HOOKS_HPP

#include "../Includes.h"
#include "../listeners/Listeners.h"
#include "../features/FeatureManager.h"
#include "jnihook.hpp"
#include "net/minecraft/client/util/Window.hpp"
#include "net/minecraft/client/MinecraftClient.hpp"
#include "net/minecraft/client/Keyboard.hpp"
#include "net/minecraft/client/network/ClientPlayerEntity.hpp"
#include "net/minecraft/network/ClientConnection.hpp"
#include "net/minecraft/entity/Entity.hpp"
#include "net/minecraft/fluid/FlowableFluid.hpp"
#include "net/minecraft/client/render/LightmapTextureManager.hpp"
#include "net/minecraft/entity/passive/AbstractHorseEntity.hpp"

namespace AbstractHorseEntityHooks {
    extern jmethodID original_get_is_saddled;

    JNIEXPORT jboolean JNICALL hkIsSaddled(JNIEnv *env, jobject thiz);
}

namespace LightmapTextureManagerHooks {
    extern jmethodID original_get_brightness;

    JNIEXPORT jfloat JNICALL hkGetBrightness(JNIEnv *env, jclass clazz, jobject dimensionType, jint lightLevel);
}

namespace EntityHooks {
    JNIEXPORT void JNICALL hkPushAwayFrom(JNIEnv *env, jobject thiz, jobject entity);
}

namespace ClientConnectionHooks {
    extern jmethodID original_handle_packet;

    JNIEXPORT void JNICALL hkHandlePacket(JNIEnv *env, jclass clazz, jobject packet, jobject listener);
    JNIEXPORT void JNICALL hkSend(JNIEnv *env, jobject obj, jobject packet);
}

namespace ClientPlayerEntityHooks {
    extern jmethodID original_tick_methodID;
    extern jmethodID original_push_out_of_blocks_methodID;
    extern jmethodID original_tick_nausea;

    JNIEXPORT void JNICALL hkTick(JNIEnv *env, jobject obj);
    JNIEXPORT void JNICALL hkPushOutOfBlocks(JNIEnv *env, jobject obj, jdouble x, jdouble y);
    JNIEXPORT void JNICALL hkTickNausea(JNIEnv *env, jobject obj, jboolean fromPortalEffect);
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
