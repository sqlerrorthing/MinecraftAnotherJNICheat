//
// Created by .1qxz on 11/12/2024.
//

#include "FeatureManager.h"
#include "impl/movement/AutoSprint.h"
#include "impl/player/XCarry.h"
#include "impl/player/AntiHunger.h"
#include "impl/player/NoJumpDelay.h"
#include "impl/player/PearlBlockThrow.h"
#include "impl/movement/NoPush.h"
#include "impl/render/FullBright.h"
#include "impl/player/PortalInventory.h"
#include "impl/player/NoServerRotate.h"
#include "impl/movement/EntityControl.h"


void FeatureManager::init() {
    // Initialize all features here
    initFeature(new AutoSprint());
    initFeature(new XCarry());
    initFeature(new NoJumpDelay());
    initFeature(new AntiHunger());
    initFeature(new NoPush());
    initFeature(new PortalInventory());
    initFeature(new NoServerRotate());
    initFeature(new FullBright());
    initFeature(new PearlBlockThrow());
    initFeature(new EntityControl());
}

Feature *FeatureManager::findFeatureByName(const std::string &name) {
    for (Feature* feature : features) {
        if (feature->getName() == name) {
            return feature;
        }
    }

    return nullptr;
}