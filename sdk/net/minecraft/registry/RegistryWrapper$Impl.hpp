// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_REGISTRY_REGISTRYWRAPPER$IMPL_HPP
#define NET_MINECRAFT_REGISTRY_REGISTRYWRAPPER$IMPL_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.registry.RegistryWrapper$Impl
 * Remapped: jo$b
 */
namespace RegistryWrapper$Impl {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("jo$b", "net/minecraft/core/HolderLookup$RegistryLookup", "net/minecraft/class_7225$class_7226", "net/minecraft/registry/RegistryWrapper$Impl", "net/minecraft/src/C_213466_$C_213467_"));
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
    
    static jmethodID methodID_withFeatureFilter() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "filterFeatures", "method_45919", "withFeatureFilter", "m_245140_"), "(Lcpl;)Ljo$b;");
    }

    static jobject withFeatureFilter(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_withFeatureFilter();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_withPredicateFilter() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "filterElements", "method_56882", "withPredicateFilter", "m_318796_"), "(Ljava/util/function/Predicate;)Ljo$b;");
    }

    static jobject withPredicateFilter(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_withPredicateFilter();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
};

#endif // NET_MINECRAFT_REGISTRY_REGISTRYWRAPPER$IMPL_HPP