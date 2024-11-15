// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_TEXT_TEXTCODECS$1_HPP
#define NET_MINECRAFT_TEXT_TEXTCODECS$1_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.text.TextCodecs$1
 * Remapped: xb$1
 */
namespace TextCodecs$1 {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("xb$1", "net/minecraft/network/chat/ComponentSerialization$1", "net/minecraft/class_8824$1", "net/minecraft/text/TextCodecs$1", "net/minecraft/src/C_302096_$C_313509_"));
        }
        return cachedClass;
    };

    static jmethodID methodID_decode() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("decode", "decode", "decode", "decode", "decode"), "(Lcom/mojang/serialization/DynamicOps;Ljava/lang/Object;)Lcom/mojang/serialization/DataResult;");
    }

    static jobject decode(const jobject& obj, const jobject& arg0, const jobject& arg1) {
                
       const auto methodID = methodID_decode();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_encode() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "encode", "method_57978", "encode", "encode"), "(Lwz;Lcom/mojang/serialization/DynamicOps;Ljava/lang/Object;)Lcom/mojang/serialization/DataResult;");
    }

    static jobject encode(const jobject& obj, const jobject& arg0, const jobject& arg1, const jobject& arg2) {
                
       const auto methodID = methodID_encode();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1, arg2);
    };
    
    static jmethodID methodID_toJsonOps() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "asJsonOps", "method_57976", "toJsonOps", "m_322966_"), "(Lcom/mojang/serialization/DynamicOps;)Lcom/mojang/serialization/DynamicOps;");
    }

    static jobject toJsonOps(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_toJsonOps();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0);
    };
    
};

#endif // NET_MINECRAFT_TEXT_TEXTCODECS$1_HPP