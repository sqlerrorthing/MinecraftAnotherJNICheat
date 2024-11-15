//
// Created by .1qxz on 11/14/2024.
//

#ifndef MINECRAFTANOTHERJNICHEAT_NOCAMERACLIP_H
#define MINECRAFTANOTHERJNICHEAT_NOCAMERACLIP_H

#include "features/Feature.h"

class NoCameraClip : public Feature {
public:
    NoCameraClip() : Feature("NoCameraClip", "Removes the third-person camera clip.", Category::RENDER) {
#ifdef DEBUG
        keyBinding.keyCode = GLFW_KEY_R;
        keyBinding.modifiers = {GLFW_MOD_CONTROL};
#endif
    }
};

#endif //MINECRAFTANOTHERJNICHEAT_NOCAMERACLIP_H
