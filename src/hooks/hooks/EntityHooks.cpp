//
// Created by .1qxz on 11/13/2024.
//

#include "../Hooks.hpp"
#include "net/minecraft/util/math/MathHelper.hpp"
#include "../../features/FeatureManager.h"
#include "../../features/impl/movement/NoPush.h"

void EntityHooks::hkPushAwayFrom(JNIEnv *env, jobject thiz, jobject entity) {
    std::cout << "OVERRIDED!" << std::endl;
    if(Entity::isConnectedThroughVehicle(thiz, entity)) {
        return;
    }

    if(Entity::get_field_noClip(entity) || Entity::get_field_noClip(thiz)) {
        return;
    }

    double d = Entity::getX(entity) - Entity::getX(thiz);
    double e = Entity::getZ(entity) - Entity::getZ(thiz);

    double f = MathHelper::absMax(d, e);
    if (f >= 0.01) {
        f = sqrt(f);
        d /= f;
        e /= f;

        double g = 1.0 / f;
        if (g > 1.0) {
            g = 1.0;
        }

        d *= g;
        e *= g;
        d *= (double) 0.05;
        e *= (double) 0.05;

        auto noPush = FeatureManager::getInstance().findFeatureByClass<NoPush>();
        auto flag = MinecraftSDK::isObjectsEqual(thiz, MinecraftClient::get_field_player(MinecraftClient::get_field_instance())) && noPush->isEnabled() && noPush->remove.is("Players");

        if (!Entity::hasPassengers(thiz) && Entity::isPushable(thiz)) {
            if(flag) {
                Entity::_addVelocity(thiz, 0, 0.0, 0);
            } else {
                Entity::_addVelocity(thiz, -d, 0.0, -e);
            }
        }
        if (!Entity::hasPassengers(entity) && Entity::isPushable(entity)) {
            if(flag) {
                Entity::_addVelocity(entity, 0, 0.0, 0);
            } else {
                Entity::_addVelocity(entity, d, 0.0, e);
            }
        }
    }
}