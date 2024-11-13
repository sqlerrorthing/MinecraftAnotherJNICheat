//
// Created by .1qxz on 11/13/2024.
//

#ifndef MINECRAFTANOTHERJNICHEAT_PORTALINVENTORY_H
#define MINECRAFTANOTHERJNICHEAT_PORTALINVENTORY_H

#include "../../Feature.h"

class PortalInventory : public Feature {
public:
    PortalInventory() : Feature("PortalInventory", "Opens inventories in portals", Category::PLAYER) {}
};

#endif //MINECRAFTANOTHERJNICHEAT_PORTALINVENTORY_H
