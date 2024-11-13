//
// Created by .1qxz on 11/13/2024.
//

#include "NoJumpDelay.h"

void NoJumpDelay::onLocalPlayerUpdate(EventLocalPlayerUpdate &event) {
    LivingEntity::set_field_jumpingCooldown(_PLAYER, 0);
}
