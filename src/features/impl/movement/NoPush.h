//
// Created by .1qxz on 11/13/2024.
//

#ifndef MINECRAFTANOTHERJNICHEAT_NOPUSH_H
#define MINECRAFTANOTHERJNICHEAT_NOPUSH_H


#include "../../Feature.h"

class NoPush : public Feature {
public:
    MultiCheckboxList remove = MultiCheckboxList("Remove", {
            {"Blocks", true},
            {"Players", true},
            {"Liquids", true},
            {"FishingHook", true}
    });

    NoPush() : Feature("NoPush", "Removes pushback from blocks/entities.", Category::MOVEMENT) {
        addSettings({&remove});
    }

protected:
    void onPacketReceived(EventPacketReceived &event) override;
};


#endif //MINECRAFTANOTHERJNICHEAT_NOPUSH_H
