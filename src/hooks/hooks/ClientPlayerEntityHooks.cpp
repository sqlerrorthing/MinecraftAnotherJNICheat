//
// Created by .1qxz on 11/13/2024.
//

#include "../Hooks.hpp"
#include "../../features/FeatureManager.h"
#include "../../features/impl/movement/NoPush.h"
#include "../../features/impl/player/PortalInventory.h"

jmethodID ClientPlayerEntityHooks::original_push_out_of_blocks_methodID;
void ClientPlayerEntityHooks::hkPushOutOfBlocks(JNIEnv *env, jobject obj, jdouble x, jdouble y) {
    if (auto noPush = FeatureManager::getInstance().findFeatureByClass<NoPush>();
        noPush->isEnabled() && noPush->remove.is("Blocks")
    ) {
        return;
    }

    env->CallNonvirtualVoidMethod(obj, ClientPlayerEntity::self(), original_push_out_of_blocks_methodID, x, y);
}

jmethodID ClientPlayerEntityHooks::original_tick_methodID;
void ClientPlayerEntityHooks::hkTick(JNIEnv *env, jobject obj) {
    EventLocalPlayerUpdate event;
    Listeners::getInstance().onLocalPlayerUpdate(event);

    if(event.cancelled)
        return;

    env->CallNonvirtualVoidMethod(obj, ClientPlayerEntity::self(), original_tick_methodID);
}

jmethodID ClientPlayerEntityHooks::original_tick_nausea;
void ClientPlayerEntityHooks::hkTickNausea(JNIEnv *env, jobject obj, jboolean fromPortalEffect) {
    if(fromPortalEffect && FeatureManager::getInstance().findFeatureByClass<PortalInventory>()->isEnabled())
        return;

    env->CallNonvirtualVoidMethod(obj, ClientPlayerEntity::self(), original_tick_nausea, fromPortalEffect);
}

jmethodID ClientPlayerEntityHooks::original_move;
void ClientPlayerEntityHooks::hkMove(JNIEnv *env, jobject obj, jobject movementType, jobject movement) {
    EventMove event(
            static_cast<EventMove::MovementType>(ENUM_ORDINAL(movementType)),
            Vec3d::get_field_x(movement),
            Vec3d::get_field_y(movement),
            Vec3d::get_field_z(movement)
    );

    Listeners::getInstance().onMove(event);

    if(event.cancelled) {
        return;
    }

    jmethodID constructor = env->GetMethodID(Vec3d::self(), "<init>", "(DDD)V");

    env->CallNonvirtualVoidMethod(obj, ClientPlayerEntity::self(), original_move, movementType,
                                  env->NewObject(Vec3d::self(), constructor, event.x, event.y, event.z));
}

jmethodID ClientPlayerEntityHooks::original_send_movement_packets;
void ClientPlayerEntityHooks::hkSendMovementPackets(JNIEnv *env, jobject thiz) {
    EventSync event(Entity::_getYaw(thiz), Entity::_getPitch(thiz));
    Listeners::getInstance().onSync(event);

    if(event.cancelled) {
        return;
    }

    env->CallNonvirtualVoidMethod(thiz, ClientPlayerEntity::self(), original_send_movement_packets);

}
