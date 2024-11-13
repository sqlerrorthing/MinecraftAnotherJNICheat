// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_NETWORK_CODEC_PACKETDECODER_HPP
#define NET_MINECRAFT_NETWORK_CODEC_PACKETDECODER_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.network.codec.PacketDecoder
 * Remapped: yy
 */
namespace PacketDecoder {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("yy", "net/minecraft/network/codec/StreamDecoder", "net/minecraft/class_9141", "net/minecraft/network/codec/PacketDecoder", "net/minecraft/src/C_313681_"));
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
    
};

#endif // NET_MINECRAFT_NETWORK_CODEC_PACKETDECODER_HPP