//
// Created by .1qxz on 11/13/2024.
//

#ifndef MINECRAFTANOTHERJNICHEAT_XCARRY_H
#define MINECRAFTANOTHERJNICHEAT_XCARRY_H


#include "../../Feature.h"

class XCarry : public Feature {
public:
    XCarry() : Feature("XCarry", "Adds four slots in inventory (in craft)", Category::PLAYER) {
        this->keyBinding.keyCode = GLFW_KEY_I;
    }

protected:
    void onPacketSend(EventPacketSend &event) override;
};


#endif //MINECRAFTANOTHERJNICHEAT_XCARRY_H
