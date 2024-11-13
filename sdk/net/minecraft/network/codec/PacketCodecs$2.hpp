// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_NETWORK_CODEC_PACKETCODECS$2_HPP
#define NET_MINECRAFT_NETWORK_CODEC_PACKETCODECS$2_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.network.codec.PacketCodecs$2
 * Remapped: yv$2
 */
namespace PacketCodecs$2 {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("yv$2", "net/minecraft/network/codec/ByteBufCodecs$10", "net/minecraft/class_9135$2", "net/minecraft/network/codec/PacketCodecs$2", "net/minecraft/src/C_313613_$C_313464_"));
        }
        return cachedClass;
    };

    static jmethodID methodID_decode() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "decode", "method_56403", "decode", "m_318688_"), "(Lio/netty/buffer/ByteBuf;)[B");
    }

    static jbyte decode(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_decode();
       return MinecraftSDK::env->CallByteMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_encode() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "encode", "method_56404", "encode", "m_318638_"), "(Lio/netty/buffer/ByteBuf;[B)V");
    }

    static void encode(const jobject& obj, const jobject& arg0, const jarray& arg1, const jbyte& arg2) {
                
       const auto methodID = methodID_encode();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1, arg2);
    };
    
};

#endif // NET_MINECRAFT_NETWORK_CODEC_PACKETCODECS$2_HPP