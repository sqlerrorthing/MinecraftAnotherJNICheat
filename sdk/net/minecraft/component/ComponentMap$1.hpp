// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_COMPONENT_COMPONENTMAP$1_HPP
#define NET_MINECRAFT_COMPONENT_COMPONENTMAP$1_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.component.ComponentMap$1
 * Remapped: km$1
 */
namespace ComponentMap$1 {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("km$1", "net/minecraft/core/component/DataComponentMap$1", "net/minecraft/class_9323$1", "net/minecraft/component/ComponentMap$1", "net/minecraft/src/C_313470_$C_313319_"));
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
    
    static jmethodID methodID_iterator() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("iterator", "iterator", "", "", "iterator"), "()Ljava/util/Iterator;");
    }

    static jobject iterator(const jobject& obj) {
                
       const auto methodID = methodID_iterator();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_COMPONENT_COMPONENTMAP$1_HPP