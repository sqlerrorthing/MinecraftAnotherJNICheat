// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_REGISTRY_REGISTRYBUILDER$REGISTRIES$1_HPP
#define NET_MINECRAFT_REGISTRY_REGISTRYBUILDER$REGISTRIES$1_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.registry.RegistryBuilder$Registries$1
 * Remapped: kc$b$1
 */
namespace RegistryBuilder$Registries$1 {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("kc$b$1", "net/minecraft/core/RegistrySetBuilder$BuildState$1", "net/minecraft/class_7877$class_7878$1", "net/minecraft/registry/RegistryBuilder$Registries$1", "net/minecraft/src/C_254591_$C_254598_$C_254594_"));
        }
        return cachedClass;
    };

    static jmethodID methodID_register() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "register", "method_46800", "register", "m_255042_"), "(Lakq;Ljava/lang/Object;Lcom/mojang/serialization/Lifecycle;)Ljm$c;");
    }

    static jobject register(const jobject& obj, const jobject& arg0, const jobject& arg1, const jobject& arg2) {
                
       const auto methodID = methodID_register();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1, arg2);
    };
    
    static jmethodID methodID_getRegistryLookup() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "lookup", "method_46799", "getRegistryLookup", "m_255434_"), "(Lakq;)Ljn;");
    }

    static jobject getRegistryLookup(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_getRegistryLookup();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
};

#endif // NET_MINECRAFT_REGISTRY_REGISTRYBUILDER$REGISTRIES$1_HPP