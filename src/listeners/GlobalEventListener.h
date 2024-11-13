//
// Created by .1qxz on 11/12/2024.
//

#ifndef MINECRAFTANOTHERJNICHEAT_GLOBALEVENTLISTENER_H
#define MINECRAFTANOTHERJNICHEAT_GLOBALEVENTLISTENER_H

#include "Listener.h"
#include "../Includes.h"
#include "net/minecraft/client/MinecraftClient.hpp"
#include "../features/KeyBinding.h"
#include "../features/Feature.h"
#include "../features/FeatureManager.h"

class GlobalEventListener : public Listener {
protected:
    void onKey(EventOnKey &event) override;
};


#endif //MINECRAFTANOTHERJNICHEAT_GLOBALEVENTLISTENER_H
