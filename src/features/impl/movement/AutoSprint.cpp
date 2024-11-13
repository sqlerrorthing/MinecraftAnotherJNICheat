//
// Created by .1qxz on 11/12/2024.
//

#include "AutoSprint.h"

void AutoSprint::onLocalPlayerUpdate(EventLocalPlayerUpdate &event) {
    auto player = _PLAYER;
    if(player == nullptr) return;

    auto flag = HungerManager::get_field_foodLevel(PlayerEntity::get_field_hungerManager(player)) > 6
                && !Entity::get_field_horizontalCollision(player)
                && Input::get_field_movementForward(ClientPlayerEntity::get_field_input(player)) > 0
                && !ClientPlayerEntity::isSneaking(player)
                && !ClientPlayerEntity::isUsingItem(player);

    LivingEntity::setSprinting(player,
       static_cast<jboolean>(flag)
    );

    std::cout << flag << std::endl;
}