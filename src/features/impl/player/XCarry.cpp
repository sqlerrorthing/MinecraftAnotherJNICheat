//
// Created by .1qxz on 11/13/2024.
//

#include "XCarry.h"
#include "net/minecraft/network/packet/c2s/play/CloseHandledScreenC2SPacket.hpp"

void XCarry::onPacketSend(EventPacketSend &event) {
    if(IS_INSTANCE(event.packet, CloseHandledScreenC2SPacket::self()))
        event.cancel();
}
