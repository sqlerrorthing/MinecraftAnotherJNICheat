//
// Created by .1qxz on 11/13/2024.
//

#ifndef MINECRAFTANOTHERJNICHEAT_REACH_H
#define MINECRAFTANOTHERJNICHEAT_REACH_H

#include "../../Feature.h"

class Reach : public Feature {
public:
    Slider value = Slider("Value", 3.2, 3, 6, 0.1);
    Slider chance = Slider("Chance", 80, 1, 100, 1);

    Reach() : Feature("Reach", "Increases your interaction range", Category::COMBAT) {
        addSettings({&value, &chance});
    }
};

#endif //MINECRAFTANOTHERJNICHEAT_REACH_H
