// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_NETWORK_CODEC_PACKETCODEC$13_HPP
#define NET_MINECRAFT_NETWORK_CODEC_PACKETCODEC$13_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.network.codec.PacketCodec$13
 * Remapped: yx$13
 */
namespace PacketCodec$13 {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("yx$13", "net/minecraft/network/codec/StreamCodec$9", "net/minecraft/class_9139$13", "net/minecraft/network/codec/PacketCodec$13", "net/minecraft/src/C_313866_$C_313845_"));
        }
        return cachedClass;
    };

    static jmethodID methodID_decode() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("decode", "decode", "decode", "decode", "m_318688_"), "(Ljava/lang/Object;)Ljava/lang/Object;");
    }

    static jobject decode(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_decode();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_encode() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("encode", "encode", "encode", "encode", "m_318638_"), "(Ljava/lang/Object;Ljava/lang/Object;)V");
    }

    static void encode(const jobject& obj, const jobject& arg0, const jobject& arg1) {
                
       const auto methodID = methodID_encode();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1);
    };
    
};

#endif // NET_MINECRAFT_NETWORK_CODEC_PACKETCODEC$13_HPP