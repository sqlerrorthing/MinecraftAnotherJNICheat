//
// Created by .1qxz on 11/13/2024.
//

#ifndef MINECRAFTANOTHERJNICHEAT_NOSERVERROTATE_H
#define MINECRAFTANOTHERJNICHEAT_NOSERVERROTATE_H


#include "../../Feature.h"

class NoServerRotate : public Feature {
public:
    NoServerRotate() : Feature("NoServerRotate", "Disables server rotation", Category::PLAYER) {}

protected:
    void onPacketReceived(EventPacketReceived &event) override;
};


#endif //MINECRAFTANOTHERJNICHEAT_NOSERVERROTATE_H
