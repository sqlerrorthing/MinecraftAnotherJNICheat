// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_NETWORK_PACKETCALLBACKS$2_HPP
#define NET_MINECRAFT_NETWORK_PACKETCALLBACKS$2_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.network.PacketCallbacks$2
 * Remapped: wg$2
 */
namespace PacketCallbacks$2 {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("wg$2", "net/minecraft/network/PacketSendListener$2", "net/minecraft/class_7648$2", "net/minecraft/network/PacketCallbacks$2", "net/minecraft/src/C_242986_$C_242979_"));
        }
        return cachedClass;
    };

    static jmethodID methodID_getFailurePacket() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "onFailure", "method_45086", "getFailurePacket", "m_243103_"), "()Lzg;");
    }

    static jobject getFailurePacket(const jobject& obj) {
                
       const auto methodID = methodID_getFailurePacket();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_NETWORK_PACKETCALLBACKS$2_HPP