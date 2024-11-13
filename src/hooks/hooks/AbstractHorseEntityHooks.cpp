//
// Created by .1qxz on 11/13/2024.
//

#include "../Hooks.hpp"
#include "../../features/impl/movement/EntityControl.h"

jmethodID AbstractHorseEntityHooks::original_get_is_saddled;
jboolean AbstractHorseEntityHooks::hkIsSaddled(JNIEnv *env, jobject thiz) {
    return FeatureManager::getInstance().findFeatureByClass<EntityControl>()->isEnabled() ||
           env->CallNonvirtualBooleanMethod(thiz, AbstractHorseEntity::self(), original_get_is_saddled);
}