//
// Created by .1qxz on 11/13/2024.
//

#ifndef MINECRAFTANOTHERJNICHEAT_SETTING_H
#define MINECRAFTANOTHERJNICHEAT_SETTING_H

#include "string"
#include "vector"
#include <map>
#include <functional>
#include <utility>

class Setting {
public:
    explicit Setting(std::string name, const std::function<bool()> &visible = []() -> bool { return true; }) : name(std::move(name)), visible(visible) {}

    [[nodiscard]] const std::function<bool()> &getVisible() const {
        return visible;
    }

    void setVisible(const std::function<bool()> &function) {
        visible = function;
    }

private:
    std::string name;
    std::function<bool()> visible;
};

#endif //MINECRAFTANOTHERJNICHEAT_SETTING_H
