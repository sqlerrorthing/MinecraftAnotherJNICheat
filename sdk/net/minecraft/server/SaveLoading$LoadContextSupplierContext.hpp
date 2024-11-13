// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_SERVER_SAVELOADING$LOADCONTEXTSUPPLIERCONTEXT_HPP
#define NET_MINECRAFT_SERVER_SAVELOADING$LOADCONTEXTSUPPLIERCONTEXT_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.server.SaveLoading$LoadContextSupplierContext
 * Remapped: alo$a
 */
namespace SaveLoading$LoadContextSupplierContext {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("alo$a", "net/minecraft/server/WorldLoader$DataLoadContext", "net/minecraft/class_7237$class_7660", "net/minecraft/server/SaveLoading$LoadContextSupplierContext", "net/minecraft/src/C_212931_$C_243500_"));
        }
        return cachedClass;
    };

    // getter for private field net.minecraft.server.SaveLoading$LoadContextSupplierContext#resourceManager
    static jobject get_field_resourceManager(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "resources", "comp_987", "resourceManager", "f_244187_"), "Laue;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.server.SaveLoading$LoadContextSupplierContext#resourceManager
    static void set_field_resourceManager(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "resources", "comp_987", "resourceManager", "f_244187_"), "Laue;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.server.SaveLoading$LoadContextSupplierContext#dataConfiguration
    static jobject get_field_dataConfiguration(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "dataConfiguration", "comp_988", "dataConfiguration", "f_244127_"), "Lddr;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.server.SaveLoading$LoadContextSupplierContext#dataConfiguration
    static void set_field_dataConfiguration(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "dataConfiguration", "comp_988", "dataConfiguration", "f_244127_"), "Lddr;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.server.SaveLoading$LoadContextSupplierContext#worldGenRegistryManager
    static jobject get_field_worldGenRegistryManager(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "datapackWorldgen", "comp_989", "worldGenRegistryManager", "f_244104_"), "Lka$b;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.server.SaveLoading$LoadContextSupplierContext#worldGenRegistryManager
    static void set_field_worldGenRegistryManager(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "datapackWorldgen", "comp_989", "worldGenRegistryManager", "f_244104_"), "Lka$b;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.server.SaveLoading$LoadContextSupplierContext#dimensionsRegistryManager
    static jobject get_field_dimensionsRegistryManager(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "datapackDimensions", "comp_990", "dimensionsRegistryManager", "f_243759_"), "Lka$b;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.server.SaveLoading$LoadContextSupplierContext#dimensionsRegistryManager
    static void set_field_dimensionsRegistryManager(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "datapackDimensions", "comp_990", "dimensionsRegistryManager", "f_243759_"), "Lka$b;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID__resourceManager() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "resources", "comp_987", "resourceManager", "f_244187_"), "()Laue;");
    }

    static jobject _resourceManager(const jobject& obj) {
                
       const auto methodID = methodID__resourceManager();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID__dataConfiguration() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "dataConfiguration", "comp_988", "dataConfiguration", "f_244127_"), "()Lddr;");
    }

    static jobject _dataConfiguration(const jobject& obj) {
                
       const auto methodID = methodID__dataConfiguration();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID__worldGenRegistryManager() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "datapackWorldgen", "comp_989", "worldGenRegistryManager", "f_244104_"), "()Lka$b;");
    }

    static jobject _worldGenRegistryManager(const jobject& obj) {
                
       const auto methodID = methodID__worldGenRegistryManager();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID__dimensionsRegistryManager() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("d", "datapackDimensions", "comp_990", "dimensionsRegistryManager", "f_243759_"), "()Lka$b;");
    }

    static jobject _dimensionsRegistryManager(const jobject& obj) {
                
       const auto methodID = methodID__dimensionsRegistryManager();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_SERVER_SAVELOADING$LOADCONTEXTSUPPLIERCONTEXT_HPP