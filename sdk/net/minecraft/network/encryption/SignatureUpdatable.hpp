// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_NETWORK_ENCRYPTION_SIGNATUREUPDATABLE_HPP
#define NET_MINECRAFT_NETWORK_ENCRYPTION_SIGNATUREUPDATABLE_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.network.encryption.SignatureUpdatable
 * Remapped: aza
 */
namespace SignatureUpdatable {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("aza", "net/minecraft/util/SignatureUpdater", "net/minecraft/class_7498", "net/minecraft/network/encryption/SignatureUpdatable", "net/minecraft/src/C_212975_"));
        }
        return cachedClass;
    };

    static jmethodID methodID_update() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("update", "update", "update", "update", "m_216344_"), "(Laza$a;)V");
    }

    static void update(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_update();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
};

#endif // NET_MINECRAFT_NETWORK_ENCRYPTION_SIGNATUREUPDATABLE_HPP