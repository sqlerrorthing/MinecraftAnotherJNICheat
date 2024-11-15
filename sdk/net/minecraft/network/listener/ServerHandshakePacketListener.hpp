// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_NETWORK_LISTENER_SERVERHANDSHAKEPACKETLISTENER_HPP
#define NET_MINECRAFT_NETWORK_LISTENER_SERVERHANDSHAKEPACKETLISTENER_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.network.listener.ServerHandshakePacketListener
 * Remapped: aim
 */
namespace ServerHandshakePacketListener {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("aim", "net/minecraft/network/protocol/handshake/ServerHandshakePacketListener", "net/minecraft/class_2890", "net/minecraft/network/listener/ServerHandshakePacketListener", "net/minecraft/src/C_5201_"));
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
    
    static jmethodID methodID_onHandshake() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "handleIntention", "method_12576", "onHandshake", "m_7322_"), "(Laij;)V");
    }

    static void onHandshake(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_onHandshake();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
};

#endif // NET_MINECRAFT_NETWORK_LISTENER_SERVERHANDSHAKEPACKETLISTENER_HPP