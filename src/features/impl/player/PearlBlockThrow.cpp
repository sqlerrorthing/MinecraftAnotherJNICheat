//
// Created by .1qxz on 11/13/2024.
//

#include "PearlBlockThrow.h"


void PearlBlockThrow::onPacketSend(EventPacketSend &event) {
    if(IS_INSTANCE(event.packet, PlayerInteractBlockC2SPacket::self())) {
        static auto enderPearl = Items::get_field_ENDER_PEARL();
        auto currentItem = ItemStack::getItem(LivingEntity::getMainHandStack(_PLAYER));

        if(MinecraftSDK::isObjectsEqual(currentItem, enderPearl)) {
            PlayerInteractBlockC2SPacket::set_field_hand(event.packet, Hand::get_field_OFF_HAND());
        }
    }
}
