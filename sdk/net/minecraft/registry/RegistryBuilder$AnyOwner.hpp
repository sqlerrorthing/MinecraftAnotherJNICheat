// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_REGISTRY_REGISTRYBUILDER$ANYOWNER_HPP
#define NET_MINECRAFT_REGISTRY_REGISTRYBUILDER$ANYOWNER_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.registry.RegistryBuilder$AnyOwner
 * Remapped: kc$m
 */
namespace RegistryBuilder$AnyOwner {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("kc$m", "net/minecraft/core/RegistrySetBuilder$UniversalOwner", "net/minecraft/class_7877$class_7879", "net/minecraft/registry/RegistryBuilder$AnyOwner", "net/minecraft/src/C_254591_$C_313308_"));
        }
        return cachedClass;
    };

    static jmethodID methodID_downcast() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "cast", "method_55300", "downcast", "m_323396_"), "()Ljp;");
    }

    static jobject downcast(const jobject& obj) {
                
       const auto methodID = methodID_downcast();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_REGISTRY_REGISTRYBUILDER$ANYOWNER_HPP