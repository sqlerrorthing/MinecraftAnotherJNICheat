//
// Created by .1qxz on 11/14/2024.
//

#include "MovementUtil.h"
#include <cmath>

#define DEGREES_TO_RADIANS 0.017453292519943295

MovementUtil::MovementCalculationResult MovementUtil::forward(const double &d) {
    auto player = _PLAYER;
    auto input = ClientPlayerEntity::get_field_input(player);

    float f = Input::get_field_movementForward(input);
    float f2 = Input::get_field_movementSideways(input);
    float f3 = Entity::get_field_yaw(player);
    if (f != 0.0f) {
        if (f2 > 0.0f) {
            f3 += ((f > 0.0f) ? -45.0f : 45.0f);
        } else if (f2 < 0.0f) {
            f3 += ((f > 0.0f) ? 45.0f : -45.0f);
        }
        f2 = 0.0f;
        if (f > 0.0f) {
            f = 1.0f;
        } else if (f < 0.0f) {
            f = -1.0f;
        }
    }

    double d2 = std::sin((f3 + 90.0) * DEGREES_TO_RADIANS);
    double d3 = std::cos((f3 + 90.0) * DEGREES_TO_RADIANS);
    double d4 = f * d * d3 + f2 * d * d2;
    double d5 = f * d * d2 - f2 * d * d3;

    return MovementCalculationResult{d4, d5};
}
