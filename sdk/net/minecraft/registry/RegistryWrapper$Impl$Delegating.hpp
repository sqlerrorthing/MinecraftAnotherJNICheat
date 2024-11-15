// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_REGISTRY_REGISTRYWRAPPER$IMPL$DELEGATING_HPP
#define NET_MINECRAFT_REGISTRY_REGISTRYWRAPPER$IMPL$DELEGATING_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.registry.RegistryWrapper$Impl$Delegating
 * Remapped: jo$b$a
 */
namespace RegistryWrapper$Impl$Delegating {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("jo$b$a", "net/minecraft/core/HolderLookup$RegistryLookup$Delegate", "net/minecraft/class_7225$class_7226$class_7875", "net/minecraft/registry/RegistryWrapper$Impl$Delegating", "net/minecraft/src/C_213466_$C_213467_$C_254586_"));
        }
        return cachedClass;
    };

    static jmethodID methodID_getBase() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "parent", "method_46725", "getBase", "m_254893_"), "()Ljo$b;");
    }

    static jobject getBase(const jobject& obj) {
                
       const auto methodID = methodID_getBase();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
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
    
    static jmethodID methodID__getOptional() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "get", "method_46733", "getOptional", "m_255050_"), "(Lawu;)Ljava/util/Optional;");
    }

    static jobject _getOptional(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID__getOptional();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_streamTags() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("d", "listTags", "method_42020", "streamTags", "m_214063_"), "()Ljava/util/stream/Stream;");
    }

    static jobject streamTags(const jobject& obj) {
                
       const auto methodID = methodID_streamTags();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_REGISTRY_REGISTRYWRAPPER$IMPL$DELEGATING_HPP