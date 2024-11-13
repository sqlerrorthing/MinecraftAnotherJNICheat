//
// Created by .1qxz on 11/13/2024.
//

#ifndef MINECRAFTANOTHERJNICHEAT_ENTITYCONTROL_H
#define MINECRAFTANOTHERJNICHEAT_ENTITYCONTROL_H

#include "../../Feature.h"

class EntityControl : public Feature {
public:
    EntityControl() : Feature("EntityControl", "Allows you control unsaddled entities.", Category::MOVEMENT) {}
};

#endif //MINECRAFTANOTHERJNICHEAT_ENTITYCONTROL_H
