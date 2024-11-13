//
// Created by .1qxz on 11/12/2024.
//

#ifndef MINECRAFTANOTHERJNICHEAT_FEATUREMANAGER_H
#define MINECRAFTANOTHERJNICHEAT_FEATUREMANAGER_H

#include "iostream"
#include "Feature.h"
#include <vector>

class FeatureManager {
public:
    static FeatureManager& getInstance() {
        static FeatureManager instance;
        return instance;
    }

    void init();

    template <typename T>
    T* findFeatureByClass() {
        for (Feature* feature : features) {
            if (T* castedFeature = dynamic_cast<T*>(feature)) {
                return castedFeature;
            }
        }
        return nullptr;
    }

    Feature* findFeatureByName(const std::string &name);

    [[nodiscard]] const std::vector<Feature *> &getFeatures() const {
        return features;
    }

private:
    FeatureManager() = default;
    ~FeatureManager() = default;

    std::vector<Feature*> features{};
};


#endif //MINECRAFTANOTHERJNICHEAT_FEATUREMANAGER_H
