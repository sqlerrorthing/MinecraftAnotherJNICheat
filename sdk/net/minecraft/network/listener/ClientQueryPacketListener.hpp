// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_NETWORK_LISTENER_CLIENTQUERYPACKETLISTENER_HPP
#define NET_MINECRAFT_NETWORK_LISTENER_CLIENTQUERYPACKETLISTENER_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.network.listener.ClientQueryPacketListener
 * Remapped: ajo
 */
namespace ClientQueryPacketListener {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("ajo", "net/minecraft/network/protocol/status/ClientStatusPacketListener", "net/minecraft/class_2921", "net/minecraft/network/listener/ClientQueryPacketListener", "net/minecraft/src/C_5213_"));
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
    
    static jmethodID methodID_onResponse() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "handleStatusResponse", "method_12667", "onResponse", "m_6440_"), "(Lajp;)V");
    }

    static void onResponse(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_onResponse();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
};

#endif // NET_MINECRAFT_NETWORK_LISTENER_CLIENTQUERYPACKETLISTENER_HPP