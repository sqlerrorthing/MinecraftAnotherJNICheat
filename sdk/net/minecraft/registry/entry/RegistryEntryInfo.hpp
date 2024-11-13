// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_REGISTRY_ENTRY_REGISTRYENTRYINFO_HPP
#define NET_MINECRAFT_REGISTRY_ENTRY_REGISTRYENTRYINFO_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.registry.entry.RegistryEntryInfo
 * Remapped: jy
 */
namespace RegistryEntryInfo {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("jy", "net/minecraft/core/RegistrationInfo", "net/minecraft/class_9248", "net/minecraft/registry/entry/RegistryEntryInfo", "net/minecraft/src/C_313696_"));
        }
        return cachedClass;
    };

    // getter for private field net.minecraft.registry.entry.RegistryEntryInfo#knownPackInfo
    static jobject get_field_knownPackInfo(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "knownPackInfo", "comp_2354", "knownPackInfo", "f_315839_"), "Ljava/util/Optional;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.registry.entry.RegistryEntryInfo#knownPackInfo
    static void set_field_knownPackInfo(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "knownPackInfo", "comp_2354", "knownPackInfo", "f_315839_"), "Ljava/util/Optional;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.registry.entry.RegistryEntryInfo#lifecycle
    static jobject get_field_lifecycle(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "lifecycle", "comp_2355", "lifecycle", "f_313951_"), "Lcom/mojang/serialization/Lifecycle;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.registry.entry.RegistryEntryInfo#lifecycle
    static void set_field_lifecycle(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "lifecycle", "comp_2355", "lifecycle", "f_313951_"), "Lcom/mojang/serialization/Lifecycle;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for static public field net.minecraft.registry.entry.RegistryEntryInfo#DEFAULT
    [[maybe_unused]] static jobject get_field_DEFAULT() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "BUILT_IN", "field_49136", "DEFAULT", "f_316022_"), "Ljy;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.registry.entry.RegistryEntryInfo#DEFAULT
    [[maybe_unused]] static void set_field_DEFAULT(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "BUILT_IN", "field_49136", "DEFAULT", "f_316022_"), "Ljy;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    static jmethodID methodID__knownPackInfo() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "knownPackInfo", "comp_2354", "knownPackInfo", "f_315839_"), "()Ljava/util/Optional;");
    }

    static jobject _knownPackInfo(const jobject& obj) {
                
       const auto methodID = methodID__knownPackInfo();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID__lifecycle() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "lifecycle", "comp_2355", "lifecycle", "f_313951_"), "()Lcom/mojang/serialization/Lifecycle;");
    }

    static jobject _lifecycle(const jobject& obj) {
                
       const auto methodID = methodID__lifecycle();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_REGISTRY_ENTRY_REGISTRYENTRYINFO_HPP