//
// Created by .1qxz on 11/12/2024.
//

#include "FeatureManager.h"
#include "impl/movement/AutoSprint.h"
#include "impl/player/XCarry.h"
#include "impl/player/AntiHunger.h"
#include "impl/player/NoJumpDelay.h"


void FeatureManager::init() {
    // Initialize all features here
    initFeature(new AutoSprint());
    initFeature(new XCarry());
    initFeature(new NoJumpDelay());
    initFeature(new AntiHunger());
}

Feature *FeatureManager::findFeatureByName(const std::string &name) {
    for (Feature* feature : features) {
        if (feature->getName() == name) {
            return feature;
        }
    }

    return nullptr;
}