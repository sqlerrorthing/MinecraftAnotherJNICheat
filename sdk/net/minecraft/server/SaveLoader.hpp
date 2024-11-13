// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_SERVER_SAVELOADER_HPP
#define NET_MINECRAFT_SERVER_SAVELOADER_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.server.SaveLoader
 * Remapped: alp
 */
namespace SaveLoader {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("alp", "net/minecraft/server/WorldStem", "net/minecraft/class_6904", "net/minecraft/server/SaveLoader", "net/minecraft/src/C_203257_"));
        }
        return cachedClass;
    };

    // getter for private field net.minecraft.server.SaveLoader#resourceManager
    static jobject get_field_resourceManager(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "resourceManager", "comp_356", "resourceManager", "f_206892_"), "Latu;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.server.SaveLoader#resourceManager
    static void set_field_resourceManager(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "resourceManager", "comp_356", "resourceManager", "f_206892_"), "Latu;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.server.SaveLoader#dataPackContents
    static jobject get_field_dataPackContents(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "dataPackResources", "comp_357", "dataPackContents", "f_206893_"), "Lalc;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.server.SaveLoader#dataPackContents
    static void set_field_dataPackContents(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "dataPackResources", "comp_357", "dataPackContents", "f_206893_"), "Lalc;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.server.SaveLoader#combinedDynamicRegistries
    static jobject get_field_combinedDynamicRegistries(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "registries", "comp_358", "combinedDynamicRegistries", "f_244542_"), "Ljt;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.server.SaveLoader#combinedDynamicRegistries
    static void set_field_combinedDynamicRegistries(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "registries", "comp_358", "combinedDynamicRegistries", "f_244542_"), "Ljt;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.server.SaveLoader#saveProperties
    static jobject get_field_saveProperties(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "worldData", "comp_359", "saveProperties", "f_206895_"), "Lerl;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.server.SaveLoader#saveProperties
    static void set_field_saveProperties(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "worldData", "comp_359", "saveProperties", "f_206895_"), "Lerl;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID_close() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("close", "close", "", "", "close"), "()V");
    }

    static void close(const jobject& obj) {
                
       const auto methodID = methodID_close();
       MinecraftSDK::env->CallVoidMethod(obj, methodID);
    };
    
    static jmethodID methodID__resourceManager() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "resourceManager", "comp_356", "resourceManager", "f_206892_"), "()Latu;");
    }

    static jobject _resourceManager(const jobject& obj) {
                
       const auto methodID = methodID__resourceManager();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID__dataPackContents() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "dataPackResources", "comp_357", "dataPackContents", "f_206893_"), "()Lalc;");
    }

    static jobject _dataPackContents(const jobject& obj) {
                
       const auto methodID = methodID__dataPackContents();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID__combinedDynamicRegistries() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "registries", "comp_358", "combinedDynamicRegistries", "f_244542_"), "()Ljt;");
    }

    static jobject _combinedDynamicRegistries(const jobject& obj) {
                
       const auto methodID = methodID__combinedDynamicRegistries();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID__saveProperties() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("d", "worldData", "comp_359", "saveProperties", "f_206895_"), "()Lerl;");
    }

    static jobject _saveProperties(const jobject& obj) {
                
       const auto methodID = methodID__saveProperties();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_SERVER_SAVELOADER_HPP