// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_NETWORK_CODEC_PACKETCODEC$RESULTFUNCTION_HPP
#define NET_MINECRAFT_NETWORK_CODEC_PACKETCODEC$RESULTFUNCTION_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.network.codec.PacketCodec$ResultFunction
 * Remapped: yx$a
 */
namespace PacketCodec$ResultFunction {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("yx$a", "net/minecraft/network/codec/StreamCodec$CodecOperation", "net/minecraft/class_9139$class_9140", "net/minecraft/network/codec/PacketCodec$ResultFunction", "net/minecraft/src/C_313866_$C_313393_"));
        }
        return cachedClass;
    };

    static jmethodID methodID_apply() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("apply", "apply", "apply", "apply", "m_325085_"), "(Lyx;)Lyx;");
    }

    static jobject apply(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_apply();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
};

#endif // NET_MINECRAFT_NETWORK_CODEC_PACKETCODEC$RESULTFUNCTION_HPP