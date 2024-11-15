// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_NETWORK_NETWORKSTATE_HPP
#define NET_MINECRAFT_NETWORK_NETWORKSTATE_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.network.NetworkState
 * Remapped: wh
 */
namespace NetworkState {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("wh", "net/minecraft/network/ProtocolInfo", "net/minecraft/class_9127", "net/minecraft/network/NetworkState", "net/minecraft/src/C_313600_"));
        }
        return cachedClass;
    };

    static jmethodID methodID_id() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "id", "comp_2234", "id", "m_320326_"), "()Lvu;");
    }

    static jobject id(const jobject& obj) {
                
       const auto methodID = methodID_id();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_side() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "flow", "comp_2235", "side", "m_319133_"), "()Lzh;");
    }

    static jobject side(const jobject& obj) {
                
       const auto methodID = methodID_side();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_codec() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "codec", "comp_2236", "codec", "m_319098_"), "()Lyx;");
    }

    static jobject codec(const jobject& obj) {
                
       const auto methodID = methodID_codec();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_bundleHandler() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("d", "bundlerInfo", "comp_2237", "bundleHandler", "m_320896_"), "()Lzf;");
    }

    static jobject bundleHandler(const jobject& obj) {
                
       const auto methodID = methodID_bundleHandler();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_NETWORK_NETWORKSTATE_HPP