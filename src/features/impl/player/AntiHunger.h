//
// Created by .1qxz on 11/13/2024.
//

#ifndef MINECRAFTANOTHERJNICHEAT_ANTIHUNGER_H
#define MINECRAFTANOTHERJNICHEAT_ANTIHUNGER_H


#include "../../Feature.h"

class AntiHunger : public Feature {
public:
    MultiCheckboxList cancels = MultiCheckboxList("Cancels", {
            {"Ground", false},
            {"Sprint", true},
    });

    AntiHunger() : Feature("AntiHunger", "Reduces hunger", Category::PLAYER) {
        addSettings({&cancels});
    }

protected:
    void onPacketSend(EventPacketSend &event) override;
};


#endif //MINECRAFTANOTHERJNICHEAT_ANTIHUNGER_H
