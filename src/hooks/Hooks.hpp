//
// Created by .1qxz on 11/12/2024.
//

#ifndef MINECRAFTANOTHERJNICHEAT_HOOKS_HPP
#define MINECRAFTANOTHERJNICHEAT_HOOKS_HPP

#include "../Includes.h"
#include "../listeners/Listeners.h"
#include "../features/FeatureManager.h"
#include "../MinecraftIncludes.h"
#include "utils/FrameRateCounterUtil.h"
#include "jnihook.hpp"

namespace CameraHooks {
    extern jmethodID original_clipToSpace;
    extern jmethodID original_get_submersion_type;
    extern jmethodID original_set_rotation;
    extern jmethodID original_set_pos;

    JNIEXPORT jfloat JNICALL hkClipToSpace(JNIEnv *env, jobject thiz, jfloat f);
    JNIEXPORT jobject JNICALL hkGetSubmersionType(JNIEnv *env, jobject thiz);

    JNIEXPORT void JNICALL hkSetRotation(JNIEnv *env, jobject thiz, jfloat yaw, jfloat pitch);
    JNIEXPORT void JNICALL hkSetPos(JNIEnv *env, jobject thiz, jdouble x, jdouble y, jdouble z);
}

namespace PlayerEntityHooks {
    extern jmethodID original_get_entity_interaction_range;

    JNIEXPORT jdouble JNICALL hkGetEntityInteractionRange(JNIEnv *env, jobject thiz);
}

namespace AbstractHorseEntityHooks {
    extern jmethodID original_get_is_saddled;

    JNIEXPORT jboolean JNICALL hkIsSaddled(JNIEnv *env, jobject thiz);
}

namespace LightmapTextureManagerHooks {
    extern jmethodID original_get_brightness;

    JNIEXPORT jfloat JNICALL hkGetBrightness(JNIEnv *env, jclass clazz, jobject dimensionType, jint lightLevel);
}

namespace LivingEntityHooks {
    extern jmethodID original_push_away_from;

    JNIEXPORT void JNICALL hkPushAwayFrom(JNIEnv *env, jobject thiz, jobject entity);
};

namespace EntityHooks {
    extern jmethodID original_get_bounding_box;

    JNIEXPORT jobject JNICALL hkGetBoundingBox(JNIEnv *env, jobject thiz);
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
    extern jmethodID original_move;
    extern jmethodID original_send_movement_packets;

    JNIEXPORT void JNICALL hkTick(JNIEnv *env, jobject obj);
    JNIEXPORT void JNICALL hkPushOutOfBlocks(JNIEnv *env, jobject obj, jdouble x, jdouble y);
    JNIEXPORT void JNICALL hkTickNausea(JNIEnv *env, jobject obj, jboolean fromPortalEffect);
    JNIEXPORT void JNICALL hkMove(JNIEnv *env, jobject obj, jobject movementType, jobject movement);
    JNIEXPORT void JNICALL hkSendMovementPackets(JNIEnv *env, jobject thiz);
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
