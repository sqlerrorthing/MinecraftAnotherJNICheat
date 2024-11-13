// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_UTIL_DYNAMIC_CODECS$CONTEXTRETRIEVALCODEC_HPP
#define NET_MINECRAFT_UTIL_DYNAMIC_CODECS$CONTEXTRETRIEVALCODEC_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.util.dynamic.Codecs$ContextRetrievalCodec
 * Remapped: axw$a
 */
namespace Codecs$ContextRetrievalCodec {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("axw$a", "net/minecraft/util/ExtraCodecs$1ContextRetrievalCodec", "net/minecraft/class_5699$class_6866", "net/minecraft/util/dynamic/Codecs$ContextRetrievalCodec", "net/minecraft/src/C_140989_$C_203213_"));
        }
        return cachedClass;
    };

    static jmethodID methodID_encode() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("encode", "encode", "encode", "encode", "encode"), "(Ljava/lang/Object;Lcom/mojang/serialization/DynamicOps;Lcom/mojang/serialization/RecordBuilder;)Lcom/mojang/serialization/RecordBuilder;");
    }

    static jobject encode(const jobject& obj, const jobject& arg0, const jobject& arg1, const jobject& arg2) {
                
       const auto methodID = methodID_encode();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1, arg2);
    };
    
    static jmethodID methodID_decode() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("decode", "decode", "decode", "decode", "decode"), "(Lcom/mojang/serialization/DynamicOps;Lcom/mojang/serialization/MapLike;)Lcom/mojang/serialization/DataResult;");
    }

    static jobject decode(const jobject& obj, const jobject& arg0, const jobject& arg1) {
                
       const auto methodID = methodID_decode();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_keys() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("keys", "keys", "keys", "keys", "keys"), "(Lcom/mojang/serialization/DynamicOps;)Ljava/util/stream/Stream;");
    }

    static jobject keys(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_keys();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
};

#endif // NET_MINECRAFT_UTIL_DYNAMIC_CODECS$CONTEXTRETRIEVALCODEC_HPP