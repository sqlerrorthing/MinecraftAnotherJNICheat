//
// Created by .1qxz on 11/13/2024.
//

#ifndef MINECRAFTANOTHERJNICHEAT_SETTINGS_H
#define MINECRAFTANOTHERJNICHEAT_SETTINGS_H

#include "Setting.h"

class Checkbox final : public Setting<bool> {
    explicit Checkbox(const std::string& name, bool defaultValue = false, const std::function<bool()> &visible = []() -> bool { return true; }) :
            Setting<bool>(name, &defaultValue, visible) {}
};

class Slider final : public Setting<double> {
public:

    Slider(const std::string& name, double defaultValue, double minValue, double maxValue, double increment, const std::function<bool()> &visible = []() -> bool { return true; }) :
            Setting<double>(name, &defaultValue, visible), minValue(minValue), maxValue(maxValue), increment(increment) {}

    [[nodiscard]] double getMinValue() const {
        return minValue;
    }

    [[nodiscard]] double getMaxValue() const {
        return maxValue;
    }

    [[nodiscard]] double getIncrement() const {
        return increment;
    }

private:
    double minValue;
    double maxValue;
    double increment;
};

class MultiCheckboxList final : public Setting<std::vector<bool>> {
public:
    explicit MultiCheckboxList(const std::string& name, const std::map<std::string, bool>& modes, const std::function<bool()> &visible = []() -> bool { return true; }) :
            Setting<std::vector<bool>>(name, nullptr, visible), modes(modes) {}

    [[nodiscard]] bool is(const std::string& name) const {
        return modes.at(name);
    }

    void set(const std::string& name, bool value) {
        modes.at(name) = value;
    }

private:
    [[nodiscard]] std::vector<bool> *getValue() const override {
        return Setting::getValue();
    }

    std::vector<bool> operator*() override {
        return Setting::operator*();
    }

    void setValue(std::vector<bool> *newValue) override {}

    std::map<std::string, bool> modes;
};

#endif //MINECRAFTANOTHERJNICHEAT_SETTINGS_H
