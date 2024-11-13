// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_SERVER_NETWORK_PLAYERASSOCIATEDNETWORKHANDLER_HPP
#define NET_MINECRAFT_SERVER_NETWORK_PLAYERASSOCIATEDNETWORKHANDLER_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.server.network.PlayerAssociatedNetworkHandler
 * Remapped: arx
 */
namespace PlayerAssociatedNetworkHandler {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("arx", "net/minecraft/server/network/ServerPlayerConnection", "net/minecraft/class_5629", "net/minecraft/server/network/PlayerAssociatedNetworkHandler", "net/minecraft/src/C_140962_"));
        }
        return cachedClass;
    };

    static jmethodID methodID_getPlayer() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("o", "getPlayer", "method_32311", "getPlayer", "m_142253_"), "()Laqv;");
    }

    static jobject getPlayer(const jobject& obj) {
                
       const auto methodID = methodID_getPlayer();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_sendPacket() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "send", "method_14364", "sendPacket", "m_141995_"), "(Lzg;)V");
    }

    static void sendPacket(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_sendPacket();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
};

#endif // NET_MINECRAFT_SERVER_NETWORK_PLAYERASSOCIATEDNETWORKHANDLER_HPP