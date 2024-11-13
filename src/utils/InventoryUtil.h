//
// Created by .1qxz on 11/13/2024.
//

#ifndef MINECRAFTANOTHERJNICHEAT_INVENTORYUTIL_H
#define MINECRAFTANOTHERJNICHEAT_INVENTORYUTIL_H

#include "sdk.hpp"
#include "net/minecraft/client/MinecraftClient.hpp"
#include "net/minecraft/entity/player/PlayerEntity.hpp"
#include "net/minecraft/entity/player/PlayerInventory.hpp"
#include "net/minecraft/client/network/ClientPlayerEntity.hpp"
#include "net/minecraft/item/ItemStack.hpp"

namespace InventoryUtil {

    int findEmptySlot() {
        const auto inventory = PlayerEntity::get_field_inventory(
                MinecraftClient::get_field_player(MinecraftClient::get_field_instance())
        );

        for (int i = 0; i < 36; i++) {
            if (ItemStack::isEmpty(PlayerInventory::getStack(inventory, static_cast<jint>(i)))) {
                return i < 9 ? i + 36 : i;
            }
        }

        return -1;
    }

}

#endif //MINECRAFTANOTHERJNICHEAT_INVENTORYUTIL_H
