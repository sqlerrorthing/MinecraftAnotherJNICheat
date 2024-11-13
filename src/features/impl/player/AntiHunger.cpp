//
// Created by .1qxz on 11/13/2024.
//

#include "AntiHunger.h"
#include "net/minecraft/network/packet/c2s/play/PlayerMoveC2SPacket.hpp"
#include "net/minecraft/network/packet/c2s/play/ClientCommandC2SPacket.hpp"


void AntiHunger::onPacketSend(EventPacketSend &event) {
    if(cancels.is("Ground")) {
        if(IS_INSTANCE(event.packet, PlayerMoveC2SPacket::self())) {
            PlayerMoveC2SPacket::set_field_onGround(event.packet, false);
        }
    }

    if(cancels.is("Sprint")) {
        if(IS_INSTANCE(event.packet, ClientCommandC2SPacket::self())) {
            enum Actions {
                PRESS_SHIFT_KEY,
                RELEASE_SHIFT_KEY,
                STOP_SLEEPING,
                START_SPRINTING,
                STOP_SPRINTING,
                START_RIDING_JUMP,
                STOP_RIDING_JUMP,
                OPEN_INVENTORY,
                START_FALL_FLYING
            };

            const auto mode = ClientCommandC2SPacket::get_field_mode(event.packet);
            jint ordinal = MinecraftSDK::getEnumOrdinal(mode);
            switch(static_cast<Actions>(ordinal)) {
                case START_SPRINTING: event.cancel();
                default: ;
            }
        }
    }
}
