// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_NETWORK_PACKETCALLBACKS$1_HPP
#define NET_MINECRAFT_NETWORK_PACKETCALLBACKS$1_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.network.PacketCallbacks$1
 * Remapped: wg$1
 */
namespace PacketCallbacks$1 {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("wg$1", "net/minecraft/network/PacketSendListener$1", "net/minecraft/class_7648$1", "net/minecraft/network/PacketCallbacks$1", "net/minecraft/src/C_242986_$C_242981_"));
        }
        return cachedClass;
    };

    static jmethodID methodID_onSuccess() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "onSuccess", "method_45083", "onSuccess", "m_243096_"), "()V");
    }

    static void onSuccess(const jobject& obj) {
                
       const auto methodID = methodID_onSuccess();
       MinecraftSDK::env->CallVoidMethod(obj, methodID);
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

#endif // NET_MINECRAFT_NETWORK_PACKETCALLBACKS$1_HPP