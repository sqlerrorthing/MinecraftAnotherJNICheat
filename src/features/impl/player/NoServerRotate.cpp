//
// Created by .1qxz on 11/13/2024.
//

#include "NoServerRotate.h"
#include "net/minecraft/network/packet/s2c/play/PlayerPositionLookS2CPacket.hpp"
#include "net/minecraft/entity/Entity.hpp"

void NoServerRotate::onPacketReceived(EventPacketReceived &event) {
    if(IS_INSTANCE(event.packet, PlayerPositionLookS2CPacket::self())) {
        jfloat yaw = Entity::get_field_yaw(_PLAYER);
        jfloat pitch = Entity::get_field_pitch(_PLAYER);

        PlayerPositionLookS2CPacket::set_field_yaw(event.packet, yaw);
        PlayerPositionLookS2CPacket::set_field_pitch(event.packet, pitch);
    }
}
