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


void FeatureManager::init() {
    // Initialize all features here
    initFeature(new AutoSprint());
    initFeature(new XCarry());
    initFeature(new NoJumpDelay());
    initFeature(new AntiHunger());
    initFeature(new NoPush());
    initFeature(new FullBright());
    initFeature(new PearlBlockThrow());
}

Feature *FeatureManager::findFeatureByName(const std::string &name) {
    for (Feature* feature : features) {
        if (feature->getName() == name) {
            return feature;
        }
    }

    return nullptr;
}