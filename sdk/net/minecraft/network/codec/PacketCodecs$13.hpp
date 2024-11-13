// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_NETWORK_CODEC_PACKETCODECS$13_HPP
#define NET_MINECRAFT_NETWORK_CODEC_PACKETCODECS$13_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.network.codec.PacketCodecs$13
 * Remapped: yv$13
 */
namespace PacketCodecs$13 {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("yv$13", "net/minecraft/network/codec/ByteBufCodecs$20", "net/minecraft/class_9135$13", "net/minecraft/network/codec/PacketCodecs$13", "net/minecraft/src/C_313613_$C_313578_"));
        }
        return cachedClass;
    };

    static jmethodID methodID_encode() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "encode", "method_56418", "encode", "m_318638_"), "(Lio/netty/buffer/ByteBuf;Ljava/util/Map;)V");
    }

    static void encode(const jobject& obj, const jobject& arg0, const jobject& arg1) {
                
       const auto methodID = methodID_encode();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_decode() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "decode", "method_56417", "decode", "m_318688_"), "(Lio/netty/buffer/ByteBuf;)Ljava/util/Map;");
    }

    static jobject decode(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_decode();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
};

#endif // NET_MINECRAFT_NETWORK_CODEC_PACKETCODECS$13_HPP