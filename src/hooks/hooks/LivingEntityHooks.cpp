//
// Created by .1qxz on 11/14/2024.
//

#include "../Hooks.hpp"
#include "features/impl/movement/NoPush.h"

jmethodID LivingEntityHooks::original_push_away_from;
void LivingEntityHooks::hkPushAwayFrom(JNIEnv *env, jobject thiz, jobject entity) {

    if (auto noPush = FeatureManager::getInstance().findFeatureByClass<NoPush>();
        MinecraftSDK::isObjectsEqual(thiz, _PLAYER) && noPush->isEnabled() && noPush->remove.is("Players")
    ) {
        Entity::_addVelocity(thiz, 0, 0.0, 0);
        return;
    }

    env->CallNonvirtualVoidMethod(thiz, LivingEntity::self(), original_push_away_from, entity);
}