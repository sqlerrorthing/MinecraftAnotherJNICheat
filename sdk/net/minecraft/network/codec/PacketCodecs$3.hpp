// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_NETWORK_CODEC_PACKETCODECS$3_HPP
#define NET_MINECRAFT_NETWORK_CODEC_PACKETCODECS$3_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.network.codec.PacketCodecs$3
 * Remapped: yv$3
 */
namespace PacketCodecs$3 {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("yv$3", "net/minecraft/network/codec/ByteBufCodecs$11", "net/minecraft/class_9135$3", "net/minecraft/network/codec/PacketCodecs$3", "net/minecraft/src/C_313613_$C_313605_"));
        }
        return cachedClass;
    };

    static jmethodID methodID_method_59799() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "decode", "method_59799", "method_59799", "m_318688_"), "(Lio/netty/buffer/ByteBuf;)[B");
    }

    static jbyte method_59799(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_method_59799();
       return MinecraftSDK::env->CallByteMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_method_59800() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "encode", "method_59800", "method_59800", "m_318638_"), "(Lio/netty/buffer/ByteBuf;[B)V");
    }

    static void method_59800(const jobject& obj, const jobject& arg0, const jarray& arg1, const jbyte& arg2) {
                
       const auto methodID = methodID_method_59800();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1, arg2);
    };
    
};

#endif // NET_MINECRAFT_NETWORK_CODEC_PACKETCODECS$3_HPP