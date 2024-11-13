//
// Created by .1qxz on 11/12/2024.
//

#ifndef MINECRAFTANOTHERJNICHEAT_FEATURE_H
#define MINECRAFTANOTHERJNICHEAT_FEATURE_H

#include <utility>
#include <vector>

#include "KeyBinding.h"
#include "Category.h"
#include "../settings/Settings.h"

#include "../Includes.h"
#include "../listeners/Listener.h"
#include "../listeners/Listeners.h"

#include <sdk.hpp>
#include <net/minecraft/client/MinecraftClient.hpp>
#include <net/minecraft/client/network/ClientPlayerEntity.hpp>

#define _MC MinecraftClient::get_field_instance()
#define _PLAYER MinecraftClient::get_field_player(_MC)
#define _WORLD MinecraftClient::get_field_world(_MC)

class Feature : public Listener {
public:

    Feature(std::string name, std::string description, const Category category,
            KeyBinding keyBinding) : name(std::move(name)), description(std::move(description)), category(category),
                                            keyBinding(std::move(keyBinding)) {}

    Feature(std::string name, const Category category) : name(std::move(name)), description(), category(category),
                                            keyBinding(KeyBinding()) {}

    Feature(std::string name, std::string description, const Category category) : name(std::move(name)),
                                            description(std::move(description)), category(category),keyBinding(KeyBinding()) {}

    bool setToggled(bool _toggled) {
        if(toggled == _toggled)
            return toggled;

        toggled = _toggled;

#ifdef DEBUG
        std::cout << "[DEBUG] << Feature '" << name << "' toggled to: " << (toggled? "ON" : "OFF") << std::endl;
#endif

        if(toggled)
            onEnable();
        else
            onDisable();

        return toggled;
    }

    bool toggle() {
        return setToggled(!toggled);
    }

    [[nodiscard]] const std::string &getName() const {
        return name;
    }

    [[nodiscard]] const std::string &getDescription() const {
        return description;
    }

    [[nodiscard]] Category getCategory() const {
        return category;
    }

    [[nodiscard]] const KeyBinding &getKeyBinding() const {
        return keyBinding;
    }

    [[nodiscard]] bool isEnabled() const {
        return toggled;
    }

protected:

    void addSettings(std::initializer_list<Setting*> newSettings)
    {
        settings.insert(settings.end(), newSettings.begin(), newSettings.end());
    }

    virtual void onEnable() {
        Listeners::getInstance().registerListener(this);
    };
    virtual void onDisable() {
        Listeners::getInstance().unregisterListener(this);
    };

    KeyBinding keyBinding;


private:
    const std::string name;
    const std::string description;
    const Category category;
    bool toggled = false;

    std::vector<Setting*> settings;
};

#endif //MINECRAFTANOTHERJNICHEAT_FEATURE_H
