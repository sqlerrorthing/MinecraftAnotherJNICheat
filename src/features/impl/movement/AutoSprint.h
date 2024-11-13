//
// Created by .1qxz on 11/12/2024.
//

#ifndef MINECRAFTANOTHERJNICHEAT_AUTOSPRINT_H
#define MINECRAFTANOTHERJNICHEAT_AUTOSPRINT_H

#include "../../Feature.h"
#include "net/minecraft/entity/LivingEntity.hpp"

class AutoSprint : public Feature {
public:
    AutoSprint() : Feature("AutoSprint", "Makes you sprint always", Category::MOVEMENT) {}

protected:
    void onLocalPlayerUpdate(EventLocalPlayerUpdate &event) override;
};


#endif //MINECRAFTANOTHERJNICHEAT_AUTOSPRINT_H
