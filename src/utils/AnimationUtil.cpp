//
// Created by .1qxz on 11/14/2024.
//

#include "AnimationUtil.h"
#include "MathUtil.h"
#include "FrameRateCounterUtil.h"

float deltaTime() {
    auto fps = FrameRateCounterUtil::getInstance().getFps();
    return fps > 5 ? (1.0f / (float)fps) : 0.016f;
}

void AnimationUtil::fast(float &variable, float start, float multiple) {
    float clamped = MathUtil::clamp(deltaTime() * multiple, 0.0f, 1.0f);
    variable = (1.0f - clamped) * variable + clamped * start;
}
