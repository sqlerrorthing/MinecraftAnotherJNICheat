//
// Created by .1qxz on 11/13/2024.
//

#ifndef MINECRAFTANOTHERJNICHEAT_NOJUMPDELAY_H
#define MINECRAFTANOTHERJNICHEAT_NOJUMPDELAY_H


#include "../../Feature.h"

class NoJumpDelay : public Feature {
public:
    NoJumpDelay() : Feature("NoJumpDelay", "Removes the delay of the jump", Category::PLAYER) {}

protected:
    void onLocalPlayerUpdate(EventLocalPlayerUpdate &event) override;
};


#endif //MINECRAFTANOTHERJNICHEAT_NOJUMPDELAY_H
