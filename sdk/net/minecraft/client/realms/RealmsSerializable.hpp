// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_CLIENT_REALMS_REALMSSERIALIZABLE_HPP
#define NET_MINECRAFT_CLIENT_REALMS_REALMSSERIALIZABLE_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.client.realms.RealmsSerializable
 * Remapped: fcw
 */
namespace RealmsSerializable {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("fcw", "com/mojang/realmsclient/dto/ReflectionBasedSerialization", "net/minecraft/class_4885", "net/minecraft/client/realms/RealmsSerializable", "net/minecraft/src/C_3255_"));
        }
        return cachedClass;
    };

};

#endif // NET_MINECRAFT_CLIENT_REALMS_REALMSSERIALIZABLE_HPP