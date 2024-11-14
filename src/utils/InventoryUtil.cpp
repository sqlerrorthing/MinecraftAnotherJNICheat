//
// Created by .1qxz on 11/13/2024.
//

#include "InventoryUtil.h"

int InventoryUtil::findEmptySlot() {
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

int InventoryUtil::findNearestCurrentItem() {
    const auto inventory = PlayerEntity::get_field_inventory(
            MinecraftClient::get_field_player(MinecraftClient::get_field_instance())
    );

    int slot = PlayerInventory::get_field_selectedSlot(inventory);

    if(slot == 8) return 7;
    if(slot == 0) return 1;
    return slot - 1;
}