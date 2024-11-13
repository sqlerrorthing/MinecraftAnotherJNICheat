//
// Created by .1qxz on 11/12/2024.
//

#ifndef MINECRAFTANOTHERJNICHEAT_KEYBINDING_H
#define MINECRAFTANOTHERJNICHEAT_KEYBINDING_H

#include <unordered_set>
#include <sstream>
#include <string>
#include <unordered_map>
#include <GLFW/glfw3.h>

const std::unordered_map<int, std::string> modifierMap = {
        {GLFW_MOD_CONTROL, "CTRL"},
        {GLFW_MOD_ALT, "ALT"},
        {GLFW_MOD_SHIFT, "SHIFT"},
        {GLFW_MOD_SUPER, "SUPER"}
};

const std::unordered_map<int, std::string> keyMap = {
        // Буквы
        {GLFW_KEY_A, "A"}, {GLFW_KEY_B, "B"}, {GLFW_KEY_C, "C"},
        {GLFW_KEY_D, "D"}, {GLFW_KEY_E, "E"}, {GLFW_KEY_F, "F"},
        {GLFW_KEY_G, "G"}, {GLFW_KEY_H, "H"}, {GLFW_KEY_I, "I"},
        {GLFW_KEY_J, "J"}, {GLFW_KEY_K, "K"}, {GLFW_KEY_L, "L"},
        {GLFW_KEY_M, "M"}, {GLFW_KEY_N, "N"}, {GLFW_KEY_O, "O"},
        {GLFW_KEY_P, "P"}, {GLFW_KEY_Q, "Q"}, {GLFW_KEY_R, "R"},
        {GLFW_KEY_S, "S"}, {GLFW_KEY_T, "T"}, {GLFW_KEY_U, "U"},
        {GLFW_KEY_V, "V"}, {GLFW_KEY_W, "W"}, {GLFW_KEY_X, "X"},
        {GLFW_KEY_Y, "Y"}, {GLFW_KEY_Z, "Z"},

        // Цифры
        {GLFW_KEY_1, "1"}, {GLFW_KEY_2, "2"}, {GLFW_KEY_3, "3"},
        {GLFW_KEY_4, "4"}, {GLFW_KEY_5, "5"}, {GLFW_KEY_6, "6"},
        {GLFW_KEY_7, "7"}, {GLFW_KEY_8, "8"}, {GLFW_KEY_9, "9"},
        {GLFW_KEY_0, "0"},

        // Функциональные клавиши
        {GLFW_KEY_F1, "F1"}, {GLFW_KEY_F2, "F2"}, {GLFW_KEY_F3, "F3"},
        {GLFW_KEY_F4, "F4"}, {GLFW_KEY_F5, "F5"}, {GLFW_KEY_F6, "F6"},
        {GLFW_KEY_F7, "F7"}, {GLFW_KEY_F8, "F8"}, {GLFW_KEY_F9, "F9"},
        {GLFW_KEY_F10, "F10"}, {GLFW_KEY_F11, "F11"}, {GLFW_KEY_F12, "F12"},

        // Символы
        {GLFW_KEY_GRAVE_ACCENT, "`"}, {GLFW_KEY_MINUS, "-"},
        {GLFW_KEY_EQUAL, "="}, {GLFW_KEY_LEFT_BRACKET, "["},
        {GLFW_KEY_RIGHT_BRACKET, "]"}, {GLFW_KEY_BACKSLASH, "\\"},
        {GLFW_KEY_SEMICOLON, ";"}, {GLFW_KEY_APOSTROPHE, "'"},
        {GLFW_KEY_COMMA, ","}, {GLFW_KEY_PERIOD, "."},
        {GLFW_KEY_SLASH, "/"}, {GLFW_KEY_SPACE, "SPACE"},
        {GLFW_KEY_ENTER, "ENTER"}, {GLFW_KEY_TAB, "TAB"},
        {GLFW_KEY_BACKSPACE, "BACKSPACE"},

        // Специальные клавиши
        {GLFW_KEY_ESCAPE, "ESCAPE"}, {GLFW_KEY_INSERT, "INSERT"},
        {GLFW_KEY_DELETE, "DELETE"}, {GLFW_KEY_HOME, "HOME"},
        {GLFW_KEY_END, "END"}, {GLFW_KEY_PAGE_UP, "PU"},
        {GLFW_KEY_PAGE_DOWN, "PD"}, {GLFW_KEY_LEFT, "LEFT"},
        {GLFW_KEY_RIGHT, "RIGHT"}, {GLFW_KEY_UP, "UP"},
        {GLFW_KEY_DOWN, "DOWN"},

        // Модификаторы
        {GLFW_KEY_CAPS_LOCK, "CAPS"}, {GLFW_KEY_SCROLL_LOCK, "SL"},
        {GLFW_KEY_NUM_LOCK, "NUM"}, {GLFW_KEY_PRINT_SCREEN, "PS"},
        {GLFW_KEY_PAUSE, "PAUSE"},

        // Мышь
        {GLFW_KEY_LEFT_SHIFT, "L_SHIFT"}, {GLFW_KEY_RIGHT_SHIFT, "R_SHIFT"},
        {GLFW_KEY_LEFT_CONTROL, "L_CTRL"}, {GLFW_KEY_RIGHT_CONTROL, "R_CTRL"},
        {GLFW_KEY_LEFT_ALT, "L_ALT"}, {GLFW_KEY_RIGHT_ALT, "R_ALT"}
};

enum class KeyAction {
    PRESS,
    HOLD
};

struct KeyBinding {
    int keyCode;
    KeyAction action;
    std::unordered_set<int> modifiers;

    KeyBinding() : keyCode(0), action(KeyAction::PRESS) {}

    KeyBinding(int key, KeyAction actionType, std::initializer_list<int> mods = {})
            : keyCode(key), action(actionType), modifiers(mods) {}

    [[nodiscard]] std::string toReadableString() const {
        std::stringstream ss;
        for (const auto& mod : modifierMap) {
            if (modifiers.count(mod.first)) {
                ss << mod.second << " + ";
            }
        }

        auto keyIt = keyMap.find(keyCode);
        if (keyIt != keyMap.end()) {
            ss << keyIt->second;
        } else {
            ss << "UNKNOWN";
        }

        return ss.str();
    }
};

#endif //MINECRAFTANOTHERJNICHEAT_KEYBINDING_H
