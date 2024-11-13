//
// Created by .1qxz on 11/12/2024.
//

#include "FeatureManager.h"
#include "impl/movement/AutoSprint.h"

void FeatureManager::init() {
    // Initialize all features here
    features.push_back(new AutoSprint());
}

Feature *FeatureManager::findFeatureByName(const std::string &name) {
    for (Feature* feature : features) {
        if (feature->getName() == name) {
            return feature;
        }
    }

    return nullptr;
}