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

template<typename T>
class Setting {
public:

    Setting(std::string name, T *value, const std::function<bool()> &visible) : name(std::move(name)), visible(visible),
                                                                                       value(value) {}

    Setting(std::string name, T *value) : name(std::move(name)), value(value) {}

    [[nodiscard]] const std::function<bool()> &getVisible() const {
        return visible;
    }

    void setVisible(const std::function<bool()> &function) {
        Setting::visible = function;
    }

    virtual T *getValue() const {
        return value;
    }

    virtual T operator*() {
        return *value;
    }

    virtual void setValue(T *newValue) {
        value = newValue;
    }

private:
    std::string name;
    std::function<bool()> visible = []() -> bool { return true; };
    T* value;
};

#endif //MINECRAFTANOTHERJNICHEAT_SETTING_H
