//
// Created by .1qxz on 11/13/2024.
//

#ifndef MINECRAFTANOTHERJNICHEAT_PEARLBLOCKTHROW_H
#define MINECRAFTANOTHERJNICHEAT_PEARLBLOCKTHROW_H


#include "../../Feature.h"

class PearlBlockThrow : public Feature {
public:
    PearlBlockThrow() : Feature("PearlBlockThrow", "Allows you to throw pearl into blocks.", Category::PLAYER) {}

protected:
    void onPacketSend(EventPacketSend &event) override;
};


#endif //MINECRAFTANOTHERJNICHEAT_PEARLBLOCKTHROW_H
