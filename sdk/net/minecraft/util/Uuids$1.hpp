// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_UTIL_UUIDS$1_HPP
#define NET_MINECRAFT_UTIL_UUIDS$1_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.util.Uuids$1
 * Remapped: kg$1
 */
namespace Uuids$1 {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("kg$1", "net/minecraft/core/UUIDUtil$1", "net/minecraft/class_4844$1", "net/minecraft/util/Uuids$1", "net/minecraft/src/C_213468_$C_313871_"));
        }
        return cachedClass;
    };

    static jmethodID methodID_decode() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "decode", "method_56163", "decode", "m_318688_"), "(Lio/netty/buffer/ByteBuf;)Ljava/util/UUID;");
    }

    static jobject decode(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_decode();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_encode() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "encode", "method_56164", "encode", "m_318638_"), "(Lio/netty/buffer/ByteBuf;Ljava/util/UUID;)V");
    }

    static void encode(const jobject& obj, const jobject& arg0, const jobject& arg1) {
                
       const auto methodID = methodID_encode();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1);
    };
    
};

#endif // NET_MINECRAFT_UTIL_UUIDS$1_HPP