//
// Created by .1qxz on 11/13/2024.
//

#ifndef MINECRAFTANOTHERJNICHEAT_CHATUTIL_H
#define MINECRAFTANOTHERJNICHEAT_CHATUTIL_H

#include "net/minecraft/text/Text.hpp"
#include "net/minecraft/entity/Entity.hpp"
#include "../Includes.h"
#include "fmt/format.h"
#include "net/minecraft/client/MinecraftClient.hpp"

namespace ChatUtil {

    void sendMessageToPlayer(const std::string &message) {
        std::string prefix(CLIENT_NAME);
        std::string formattedMessage = fmt::format("[{0}]: {1}", prefix, message);

        std::cout << formattedMessage << std::endl;

        jobject text = Text::of(JSTRING(formattedMessage));
        Entity::sendMessage(MinecraftClient::get_field_player(MinecraftClient::get_field_instance()), text);
    }

}

#endif //MINECRAFTANOTHERJNICHEAT_CHATUTIL_H
