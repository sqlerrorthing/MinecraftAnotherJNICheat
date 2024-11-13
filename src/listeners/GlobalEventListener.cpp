//
// Created by .1qxz on 11/12/2024.
//

#include "GlobalEventListener.h"

void GlobalEventListener::onKey(EventOnKey &event) {
    auto const mc = MinecraftClient::get_field_instance();

    if(MinecraftClient::get_field_player(mc) == nullptr)
        return;

    if(MinecraftClient::get_field_currentScreen(mc) != nullptr)
        return;

    for (Feature* feature : FeatureManager::getInstance().getFeatures()) {
        KeyBinding keyBinding = feature->getKeyBinding();

        if (event.key != keyBinding.keyCode) {
            continue;
        }

        if ((event.action == GLFW_PRESS && keyBinding.action == KeyAction::PRESS) ||
            (event.action == GLFW_REPEAT && keyBinding.action == KeyAction::HOLD)) {

            bool modifiersMatch = true;
            for (int mod : keyBinding.modifiers) {
                if ((event.modifiers & mod) == 0) {
                    modifiersMatch = false;
                    break;
                }
            }

            if (modifiersMatch) {
                feature->toggle();
            }
        }
    }

}
