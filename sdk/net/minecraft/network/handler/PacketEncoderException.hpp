// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_NETWORK_HANDLER_PACKETENCODEREXCEPTION_HPP
#define NET_MINECRAFT_NETWORK_HANDLER_PACKETENCODEREXCEPTION_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.network.handler.PacketEncoderException
 * Remapped: wm
 */
namespace PacketEncoderException {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("wm", "net/minecraft/network/SkipPacketException", "net/minecraft/class_2548", "net/minecraft/network/handler/PacketEncoderException", "net/minecraft/src/C_4988_"));
        }
        return cachedClass;
    };

};

#endif // NET_MINECRAFT_NETWORK_HANDLER_PACKETENCODEREXCEPTION_HPP