// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_CLIENT_NETWORK_BLOCKLISTCHECKER_HPP
#define NET_MINECRAFT_CLIENT_NETWORK_BLOCKLISTCHECKER_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.client.network.BlockListChecker
 * Remapped: gav
 */
namespace BlockListChecker {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("gav", "net/minecraft/client/multiplayer/resolver/AddressCheck", "net/minecraft/class_6394", "net/minecraft/client/network/BlockListChecker", "net/minecraft/src/C_141674_"));
        }
        return cachedClass;
    };

    static jmethodID methodID_isAllowed() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "isAllowed", "method_37098", "isAllowed", "m_142649_"), "(Lgaw;)Z");
    }

    static jboolean isAllowed(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_isAllowed();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID__isAllowed() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "isAllowed", "method_37099", "isAllowed", "m_142408_"), "(Lgax;)Z");
    }

    static jboolean _isAllowed(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID__isAllowed();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_create() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "createFromService", "method_37097", "create", "m_171828_"), "()Lgav;");
    }

    static jobject create() {
       const auto clazz = self();
       const auto methodID = methodID_create();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID);
    };
    
};

#endif // NET_MINECRAFT_CLIENT_NETWORK_BLOCKLISTCHECKER_HPP