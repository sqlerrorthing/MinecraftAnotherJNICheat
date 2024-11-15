// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_REGISTRY_DYNAMICREGISTRYMANAGER_HPP
#define NET_MINECRAFT_REGISTRY_DYNAMICREGISTRYMANAGER_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.registry.DynamicRegistryManager
 * Remapped: ka
 */
namespace DynamicRegistryManager {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("ka", "net/minecraft/core/RegistryAccess", "net/minecraft/class_5455", "net/minecraft/registry/DynamicRegistryManager", "net/minecraft/src/C_4706_"));
        }
        return cachedClass;
    };

    // getter for static public field net.minecraft.registry.DynamicRegistryManager#LOGGER
    [[maybe_unused]] static jobject get_field_LOGGER() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "LOGGER", "field_25918", "LOGGER", "f_123047_"), "Lorg/slf4j/Logger;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.registry.DynamicRegistryManager#LOGGER
    [[maybe_unused]] static void set_field_LOGGER(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "LOGGER", "field_25918", "LOGGER", "f_123047_"), "Lorg/slf4j/Logger;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.registry.DynamicRegistryManager#EMPTY
    [[maybe_unused]] static jobject get_field_EMPTY() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "EMPTY", "field_40585", "EMPTY", "f_243945_"), "Lka$b;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.registry.DynamicRegistryManager#EMPTY
    [[maybe_unused]] static void set_field_EMPTY(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "EMPTY", "field_40585", "EMPTY", "f_243945_"), "Lka$b;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    static jmethodID methodID_getOptional() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "registry", "method_33310", "getOptional", "m_6632_"), "(Lakq;)Ljava/util/Optional;");
    }

    static jobject getOptional(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_getOptional();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_getOptionalWrapper() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "lookup", "method_46759", "getOptionalWrapper", "m_254861_"), "(Lakq;)Ljava/util/Optional;");
    }

    static jobject getOptionalWrapper(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_getOptionalWrapper();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_get() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("d", "registryOrThrow", "method_30530", "get", "m_175515_"), "(Lakq;)Ljz;");
    }

    static jobject get(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_get();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_streamAllRegistries() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "registries", "method_40311", "streamAllRegistries", "m_206193_"), "()Ljava/util/stream/Stream;");
    }

    static jobject streamAllRegistries(const jobject& obj) {
                
       const auto methodID = methodID_streamAllRegistries();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_streamAllRegistryKeys() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "listRegistries", "method_55282", "streamAllRegistryKeys", "m_305097_"), "()Ljava/util/stream/Stream;");
    }

    static jobject streamAllRegistryKeys(const jobject& obj) {
                
       const auto methodID = methodID_streamAllRegistryKeys();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_of() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "fromRegistryOfRegistries", "method_40302", "of", "m_206165_"), "(Ljz;)Lka$b;");
    }

    static jobject of(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_of();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_toImmutable() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("d", "freeze", "method_40316", "toImmutable", "m_203557_"), "()Lka$b;");
    }

    static jobject toImmutable(const jobject& obj) {
                
       const auto methodID = methodID_toImmutable();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_getRegistryLifecycle() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("e", "allRegistriesLifecycle", "method_41201", "getRegistryLifecycle", "m_211816_"), "()Lcom/mojang/serialization/Lifecycle;");
    }

    static jobject getRegistryLifecycle(const jobject& obj) {
                
       const auto methodID = methodID_getRegistryLifecycle();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_REGISTRY_DYNAMICREGISTRYMANAGER_HPP