// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_COMPONENT_COMPONENTMAP$3_HPP
#define NET_MINECRAFT_COMPONENT_COMPONENTMAP$3_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.component.ComponentMap$3
 * Remapped: km$3
 */
namespace ComponentMap$3 {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("km$3", "net/minecraft/core/component/DataComponentMap$3", "net/minecraft/class_9323$3", "net/minecraft/component/ComponentMap$3", "net/minecraft/src/C_313470_$C_313628_"));
        }
        return cachedClass;
    };

    static jmethodID methodID_get() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "get", "method_57829", "get", "m_318834_"), "(Lkp;)Ljava/lang/Object;");
    }

    static jobject get(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_get();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_getTypes() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "keySet", "method_57831", "getTypes", "m_319675_"), "()Ljava/util/Set;");
    }

    static jobject getTypes(const jobject& obj) {
                
       const auto methodID = methodID_getTypes();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_COMPONENT_COMPONENTMAP$3_HPP