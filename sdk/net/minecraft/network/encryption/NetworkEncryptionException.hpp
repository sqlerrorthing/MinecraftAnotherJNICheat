// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_NETWORK_ENCRYPTION_NETWORKENCRYPTIONEXCEPTION_HPP
#define NET_MINECRAFT_NETWORK_ENCRYPTION_NETWORKENCRYPTIONEXCEPTION_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.network.encryption.NetworkEncryptionException
 * Remapped: axm
 */
namespace NetworkEncryptionException {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("axm", "net/minecraft/util/CryptException", "net/minecraft/class_5525", "net/minecraft/network/encryption/NetworkEncryptionException", "net/minecraft/src/C_167_"));
        }
        return cachedClass;
    };

};

#endif // NET_MINECRAFT_NETWORK_ENCRYPTION_NETWORKENCRYPTIONEXCEPTION_HPP