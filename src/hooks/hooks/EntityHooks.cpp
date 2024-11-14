//
// Created by .1qxz on 11/13/2024.
//

#include "../Hooks.hpp"
#include "net/minecraft/util/math/MathHelper.hpp"

#include "utils/RandomUtil.h"



jmethodID EntityHooks::original_get_bounding_box;
jobject EntityHooks::hkGetBoundingBox(JNIEnv *env, jobject thiz) {
    return env->CallNonvirtualObjectMethod(thiz, Entity::self(), original_get_bounding_box);
}