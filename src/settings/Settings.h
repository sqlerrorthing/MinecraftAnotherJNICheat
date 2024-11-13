//
// Created by .1qxz on 11/13/2024.
//

#ifndef MINECRAFTANOTHERJNICHEAT_SETTINGS_H
#define MINECRAFTANOTHERJNICHEAT_SETTINGS_H

#include "Setting.h"

class Checkbox final : public Setting {
public:
    Checkbox(const std::string& name, bool defaultValue = false, const std::function<bool()> &visible = []() -> bool { return true; }) :
            Setting(name, visible), value(defaultValue) {}

    [[nodiscard]] bool is() const {
        return value;
    }

    void set(bool newValue) {
        Checkbox::value = newValue;
    }

private:
    bool value;
};

class Slider final : public Setting {
public:

    Slider(const std::string& name, double defaultValue, double minValue, double maxValue, double increment = 1, const std::function<bool()> &visible = []() -> bool { return true; }) :
            Setting(name, visible), value(defaultValue), minValue(minValue), maxValue(maxValue), increment(increment) {}

    [[nodiscard]] double getMinValue() const {
        return minValue;
    }

    [[nodiscard]] double getMaxValue() const {
        return maxValue;
    }

    [[nodiscard]] double getIncrement() const {
        return increment;
    }

    [[nodiscard]] double getValue() const {
        return value;
    }

    void setValue(double newValue) {
        Slider::value = newValue;
    }

private:
    double value;
    double minValue;
    double maxValue;
    double increment;
};

class MultiCheckboxList final : public Setting {
public:

    MultiCheckboxList(const std::string &name, const std::map<std::string, bool> &modes, const std::function<bool()> &visible = []() -> bool { return true; })
            : Setting(name, visible), modes(modes) {}

    [[nodiscard]] bool is(const std::string& name) {
        auto it = modes.find(name);
        if (it != modes.end()) {
            return it->second;
        }
        return false;
    }

    [[nodiscard]] bool is(size_t index) const {
        if (index >= modes.size()) {
            return false;
        }

        auto it = modes.begin();
        std::advance(it, index);
        return it->second;
    }

    void set(const std::string& name, bool value) {
        modes.at(name) = value;
    }

private:
    std::map<std::string, bool> modes;
};

#endif //MINECRAFTANOTHERJNICHEAT_SETTINGS_H
