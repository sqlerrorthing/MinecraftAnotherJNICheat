// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_REGISTRY_RELOADABLEREGISTRIES_HPP
#define NET_MINECRAFT_REGISTRY_RELOADABLEREGISTRIES_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.registry.ReloadableRegistries
 * Remapped: alb
 */
namespace ReloadableRegistries {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("alb", "net/minecraft/server/ReloadableServerRegistries", "net/minecraft/class_9383", "net/minecraft/registry/ReloadableRegistries", "net/minecraft/src/C_313572_"));
        }
        return cachedClass;
    };

    // getter for static private field net.minecraft.registry.ReloadableRegistries#LOGGER
    [[maybe_unused]] static jobject get_field_LOGGER() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "LOGGER", "field_49916", "LOGGER", "f_314195_"), "Lorg/slf4j/Logger;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.registry.ReloadableRegistries#LOGGER
    [[maybe_unused]] static void set_field_LOGGER(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "LOGGER", "field_49916", "LOGGER", "f_314195_"), "Lorg/slf4j/Logger;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.registry.ReloadableRegistries#GSON
    [[maybe_unused]] static jobject get_field_GSON() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "GSON", "field_49917", "GSON", "f_316160_"), "Lcom/google/gson/Gson;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.registry.ReloadableRegistries#GSON
    [[maybe_unused]] static void set_field_GSON(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "GSON", "field_49917", "GSON", "f_316160_"), "Lcom/google/gson/Gson;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.registry.ReloadableRegistries#DEFAULT_REGISTRY_ENTRY_INFO
    [[maybe_unused]] static jobject get_field_DEFAULT_REGISTRY_ENTRY_INFO() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "DEFAULT_REGISTRATION_INFO", "field_49918", "DEFAULT_REGISTRY_ENTRY_INFO", "f_315973_"), "Ljy;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.registry.ReloadableRegistries#DEFAULT_REGISTRY_ENTRY_INFO
    [[maybe_unused]] static void set_field_DEFAULT_REGISTRY_ENTRY_INFO(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "DEFAULT_REGISTRATION_INFO", "field_49918", "DEFAULT_REGISTRY_ENTRY_INFO", "f_315973_"), "Ljy;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    static jmethodID methodID_reload() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "reload", "method_58284", "reload", "m_319076_"), "(Ljt;Laue;Ljava/util/concurrent/Executor;)Ljava/util/concurrent/CompletableFuture;");
    }

    static jobject reload(const jobject& arg0, const jobject& arg1, const jobject& arg2) {
       const auto clazz = self();
       const auto methodID = methodID_reload();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0, arg1, arg2);
    };
    
    static jmethodID methodID_prepare() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "scheduleElementParse", "method_58277", "prepare", "m_321479_"), "(Lert;Lakp;Laue;Ljava/util/concurrent/Executor;)Ljava/util/concurrent/CompletableFuture;");
    }

    static jobject prepare(const jobject& arg0, const jobject& arg1, const jobject& arg2, const jobject& arg3) {
       const auto clazz = self();
       const auto methodID = methodID_prepare();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0, arg1, arg2, arg3);
    };
    
    static jmethodID methodID_apply() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "apply", "method_58285", "apply", "m_320195_"), "(Ljt;Ljava/util/List;)Ljt;");
    }

    static jobject apply(const jobject& arg0, const jobject& arg1) {
       const auto clazz = self();
       const auto methodID = methodID_apply();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_with() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("b", "createUpdatedRegistries", "method_58287", "with", "m_322655_"), "(Ljt;Ljava/util/List;)Ljt;");
    }

    static jobject with(const jobject& arg0, const jobject& arg1) {
       const auto clazz = self();
       const auto methodID = methodID_with();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_validateLootData() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "validateRegistry", "method_58281", "validateLootData", "m_318646_"), "(Lerx;Lert;Lka;)V");
    }

    static void validateLootData(const jobject& arg0, const jobject& arg1, const jobject& arg2) {
       const auto clazz = self();
       const auto methodID = methodID_validateLootData();
       MinecraftSDK::env->CallStaticVoidMethod(clazz, methodID, arg0, arg1, arg2);
    };
    
};

#endif // NET_MINECRAFT_REGISTRY_RELOADABLEREGISTRIES_HPP