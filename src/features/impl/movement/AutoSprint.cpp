//
// Created by .1qxz on 11/12/2024.
//

#include "AutoSprint.h"

void AutoSprint::onLocalPlayerUpdate(EventLocalPlayerUpdate &event) {
    if(LivingEntity::get_field_forwardSpeed(PLAYER) > 0)
        LivingEntity::setSprinting(PLAYER, JNI_TRUE);
}