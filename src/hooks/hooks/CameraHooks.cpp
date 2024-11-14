//
// Created by .1qxz on 11/14/2024.
//


#include "../Hooks.hpp"
#include "features/impl/render/NoCameraClip.h"

jmethodID CameraHooks::original_clipToSpace;
jfloat CameraHooks::hkClipToSpace(JNIEnv *env, jobject thiz, jfloat f) {
    return FeatureManager::getInstance().findFeatureByClass<NoCameraClip>()->isEnabled()
        ? f : env->CallNonvirtualFloatMethod(thiz, Camera::self(), original_clipToSpace, f);
}