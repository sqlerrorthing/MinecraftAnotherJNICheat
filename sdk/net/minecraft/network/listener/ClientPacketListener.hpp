// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_NETWORK_LISTENER_CLIENTPACKETLISTENER_HPP
#define NET_MINECRAFT_NETWORK_LISTENER_CLIENTPACKETLISTENER_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.network.listener.ClientPacketListener
 * Remapped: vq
 */
namespace ClientPacketListener {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("vq", "net/minecraft/network/ClientboundPacketListener", "net/minecraft/class_8697", "net/minecraft/network/listener/ClientPacketListener", "net/minecraft/src/C_290051_"));
        }
        return cachedClass;
    };

    static jmethodID methodID_getSide() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "flow", "method_52895", "getSide", "m_292762_"), "()Lzh;");
    }

    static jobject getSide(const jobject& obj) {
                
       const auto methodID = methodID_getSide();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_NETWORK_LISTENER_CLIENTPACKETLISTENER_HPP