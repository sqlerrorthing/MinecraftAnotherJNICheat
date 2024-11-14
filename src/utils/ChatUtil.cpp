//
// Created by .1qxz on 11/13/2024.
//

#include "ChatUtil.h"

void ChatUtil::sendMessageToPlayer(const std::string &message) {
    std::string prefix(CLIENT_NAME);
    std::string formattedMessage = fmt::format("[{0}]: {1}", prefix, message);

    std::cout << formattedMessage << std::endl;

    jobject text = Text::of(JSTRING(formattedMessage));
    Entity::sendMessage(MinecraftClient::get_field_player(MinecraftClient::get_field_instance()), text);
}