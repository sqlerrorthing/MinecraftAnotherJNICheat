//
// Created by .1qxz on 11/13/2024.
//

#include "../Hooks.hpp"
#include "../../utils/RandomUtil.h"
#include "../../features/impl/combat/Reach.h"
#include "net/minecraft/entity/attribute/EntityAttribute.hpp"

jmethodID PlayerEntityHooks::original_get_entity_interaction_range;
jdouble PlayerEntityHooks::hkGetEntityInteractionRange(JNIEnv *env, jobject thiz) {
    if(auto reach = FeatureManager::getInstance().findFeatureByClass<Reach>(); reach->isEnabled()) {
        if(auto chance = reach->chance.getValue(); chance == 100 || RandomUtil::generate(0, 100) < chance) {
            return static_cast<jdouble>(reach->value.getValue());
        }
    }

    return env->CallNonvirtualDoubleMethod(thiz, PlayerEntity::self(), original_get_entity_interaction_range);
}