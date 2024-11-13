//
// Created by .1qxz on 11/13/2024.
//

#include "../Hooks.hpp"
#include "../../features/FeatureManager.h"
#include "../../features/impl/render/FullBright.h"

jmethodID LightmapTextureManagerHooks::original_get_brightness;
jfloat LightmapTextureManagerHooks::hkGetBrightness(JNIEnv *env, jclass clazz, jobject dimensionType, jint lightLevel) {
    if(!FeatureManager::getInstance().findFeatureByClass<FullBright>()->isEnabled())
        return env->CallStaticFloatMethod(clazz, original_get_brightness, dimensionType, lightLevel);
    return .9f;
}