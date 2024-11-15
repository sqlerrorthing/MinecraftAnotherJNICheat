// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_NETWORK_LISTENER_SERVERCONFIGURATIONPACKETLISTENER_HPP
#define NET_MINECRAFT_NETWORK_LISTENER_SERVERCONFIGURATIONPACKETLISTENER_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.network.listener.ServerConfigurationPacketListener
 * Remapped: abk
 */
namespace ServerConfigurationPacketListener {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("abk", "net/minecraft/network/protocol/configuration/ServerConfigurationPacketListener", "net/minecraft/class_8735", "net/minecraft/network/listener/ServerConfigurationPacketListener", "net/minecraft/src/C_290188_"));
        }
        return cachedClass;
    };

    static jmethodID methodID_getPhase() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "protocol", "method_52280", "getPhase", "m_292716_"), "()Lvu;");
    }

    static jobject getPhase(const jobject& obj) {
                
       const auto methodID = methodID_getPhase();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_onReady() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "handleConfigurationFinished", "method_52408", "onReady", "m_293007_"), "(Labl;)V");
    }

    static void onReady(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_onReady();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_onSelectKnownPacks() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "handleSelectKnownPacks", "method_56909", "onSelectKnownPacks", "m_322556_"), "(Labm;)V");
    }

    static void onSelectKnownPacks(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_onSelectKnownPacks();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
};

#endif // NET_MINECRAFT_NETWORK_LISTENER_SERVERCONFIGURATIONPACKETLISTENER_HPP