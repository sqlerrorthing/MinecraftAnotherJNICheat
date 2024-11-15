// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_REGISTRY_REGISTRYBUILDER$2_HPP
#define NET_MINECRAFT_REGISTRY_REGISTRYBUILDER$2_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.registry.RegistryBuilder$2
 * Remapped: kc$2
 */
namespace RegistryBuilder$2 {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("kc$2", "net/minecraft/core/RegistrySetBuilder$2", "net/minecraft/class_7877$2", "net/minecraft/registry/RegistryBuilder$2", "net/minecraft/src/C_254591_$C_301967_"));
        }
        return cachedClass;
    };

    static jmethodID methodID_getRegistryKey() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("f", "key", "method_46765", "getRegistryKey", "m_254879_"), "()Lakq;");
    }

    static jobject getRegistryKey(const jobject& obj) {
                
       const auto methodID = methodID_getRegistryKey();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_getLifecycle() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("g", "registryLifecycle", "method_46766", "getLifecycle", "m_255098_"), "()Lcom/mojang/serialization/Lifecycle;");
    }

    static jobject getLifecycle(const jobject& obj) {
                
       const auto methodID = methodID_getLifecycle();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_getOptional() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "get", "method_46746", "getOptional", "m_254926_"), "(Lakq;)Ljava/util/Optional;");
    }

    static jobject getOptional(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_getOptional();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_streamEntries() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "listElements", "method_42017", "streamEntries", "m_214062_"), "()Ljava/util/stream/Stream;");
    }

    static jobject streamEntries(const jobject& obj) {
                
       const auto methodID = methodID_streamEntries();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_REGISTRY_REGISTRYBUILDER$2_HPP