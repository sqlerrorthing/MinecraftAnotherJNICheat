// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_NETWORK_LISTENER_SERVERCOMMONPACKETLISTENER_HPP
#define NET_MINECRAFT_NETWORK_LISTENER_SERVERCOMMONPACKETLISTENER_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.network.listener.ServerCommonPacketListener
 * Remapped: zz
 */
namespace ServerCommonPacketListener {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("zz", "net/minecraft/network/protocol/common/ServerCommonPacketListener", "net/minecraft/class_8706", "net/minecraft/network/listener/ServerCommonPacketListener", "net/minecraft/src/C_290268_"));
        }
        return cachedClass;
    };

    static jmethodID methodID_onKeepAlive() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "handleKeepAlive", "method_52393", "onKeepAlive", "m_295033_"), "(Laac;)V");
    }

    static void onKeepAlive(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_onKeepAlive();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_onPong() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "handlePong", "method_52394", "onPong", "m_293596_"), "(Laad;)V");
    }

    static void onPong(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_onPong();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_onCustomPayload() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "handleCustomPayload", "method_52392", "onCustomPayload", "m_293234_"), "(Laab;)V");
    }

    static void onCustomPayload(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_onCustomPayload();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_onResourcePackStatus() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "handleResourcePackResponse", "method_52395", "onResourcePackStatus", "m_293248_"), "(Laae;)V");
    }

    static void onResourcePackStatus(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_onResourcePackStatus();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_onClientOptions() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "handleClientInformation", "method_12069", "onClientOptions", "m_9844_"), "(Laaa;)V");
    }

    static void onClientOptions(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_onClientOptions();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
};

#endif // NET_MINECRAFT_NETWORK_LISTENER_SERVERCOMMONPACKETLISTENER_HPP