//
// Created by .1qxz on 11/13/2024.
//

#include "NoPush.h"
#include "net/minecraft/network/packet/s2c/play/EntityStatusS2CPacket.hpp"
#include "net/minecraft/entity/projectile/FishingBobberEntity.hpp"

void NoPush::onPacketReceived(EventPacketReceived &event) {
    if(!remove.is("FishingHook"))
        return;

    if(!IS_INSTANCE(event.packet, EntityStatusS2CPacket::self()))
        return;

    if(EntityStatusS2CPacket::get_field_status(event.packet) != 31)
        return;

    auto hook = EntityStatusS2CPacket::getEntity(event.packet, _WORLD);
    if(!IS_INSTANCE(hook, FishingBobberEntity::self()))
        return;

    if(!MinecraftSDK::isObjectsEqual(FishingBobberEntity::getHookedEntity(hook), _PLAYER))
        return;

    event.cancel();
}
