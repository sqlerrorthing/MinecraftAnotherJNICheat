// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_NETWORK_HANDLER_NOOPINBOUNDHANDLER_HPP
#define NET_MINECRAFT_NETWORK_HANDLER_NOOPINBOUNDHANDLER_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.network.handler.NoopInboundHandler
 * Remapped: vz
 */
namespace NoopInboundHandler {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("vz", "net/minecraft/network/NoOpFrameDecoder", "net/minecraft/class_9681", "net/minecraft/network/handler/NoopInboundHandler", "net/minecraft/src/C_313312_"));
        }
        return cachedClass;
    };

};

#endif // NET_MINECRAFT_NETWORK_HANDLER_NOOPINBOUNDHANDLER_HPP