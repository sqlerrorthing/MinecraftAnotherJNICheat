// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_NETWORK_CODEC_PACKETCODECS$14_HPP
#define NET_MINECRAFT_NETWORK_CODEC_PACKETCODECS$14_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.network.codec.PacketCodecs$14
 * Remapped: yv$14
 */
namespace PacketCodecs$14 {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("yv$14", "net/minecraft/network/codec/ByteBufCodecs$21", "net/minecraft/class_9135$14", "net/minecraft/network/codec/PacketCodecs$14", "net/minecraft/src/C_313613_$C_313504_"));
        }
        return cachedClass;
    };

    static jmethodID methodID_decode() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "decode", "method_58008", "decode", "m_318688_"), "(Lio/netty/buffer/ByteBuf;)Lcom/mojang/datafixers/util/Either;");
    }

    static jobject decode(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_decode();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_encode() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "encode", "method_58009", "encode", "m_318638_"), "(Lio/netty/buffer/ByteBuf;Lcom/mojang/datafixers/util/Either;)V");
    }

    static void encode(const jobject& obj, const jobject& arg0, const jobject& arg1) {
                
       const auto methodID = methodID_encode();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1);
    };
    
};

#endif // NET_MINECRAFT_NETWORK_CODEC_PACKETCODECS$14_HPP