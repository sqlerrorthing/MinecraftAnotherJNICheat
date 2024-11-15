//
// Created by .1qxz on 11/14/2024.
//

#ifndef MINECRAFTANOTHERJNICHEAT_MOVEMENTUTIL_H
#define MINECRAFTANOTHERJNICHEAT_MOVEMENTUTIL_H

#include "Includes.h"
#include "MinecraftIncludes.h"

namespace MovementUtil {

    struct MovementCalculationResult {
        double motionX;
        double motionZ;
    };

    MovementCalculationResult forward(const double &speed);

};


#endif //MINECRAFTANOTHERJNICHEAT_MOVEMENTUTIL_H
