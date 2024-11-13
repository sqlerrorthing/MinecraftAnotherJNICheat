// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_CLIENT_RESOURCE_RESOURCERELOADLOGGER_HPP
#define NET_MINECRAFT_CLIENT_RESOURCE_RESOURCERELOADLOGGER_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.client.resource.ResourceReloadLogger
 * Remapped: fgx
 */
namespace ResourceReloadLogger {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("fgx", "net/minecraft/client/ResourceLoadStateTracker", "net/minecraft/class_6360", "net/minecraft/client/resource/ResourceReloadLogger", "net/minecraft/src/C_141582_"));
        }
        return cachedClass;
    };

    // getter for static private field net.minecraft.client.resource.ResourceReloadLogger#LOGGER
    [[maybe_unused]] static jobject get_field_LOGGER() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "LOGGER", "field_33698", "LOGGER", "f_168551_"), "Lorg/slf4j/Logger;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.resource.ResourceReloadLogger#LOGGER
    [[maybe_unused]] static void set_field_LOGGER(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "LOGGER", "field_33698", "LOGGER", "f_168551_"), "Lorg/slf4j/Logger;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for private field net.minecraft.client.resource.ResourceReloadLogger#reloadState
    static jobject get_field_reloadState(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "reloadState", "field_33699", "reloadState", "f_168552_"), "Lfgx$c;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.resource.ResourceReloadLogger#reloadState
    static void set_field_reloadState(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "reloadState", "field_33699", "reloadState", "f_168552_"), "Lfgx$c;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.resource.ResourceReloadLogger#reloadCount
    static jint get_field_reloadCount(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "reloadCount", "field_33700", "reloadCount", "f_168553_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetIntField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.resource.ResourceReloadLogger#reloadCount
    static void set_field_reloadCount(const jobject &obj, const jint &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "reloadCount", "field_33700", "reloadCount", "f_168553_"), "I");
        return MinecraftSDK::env->SetIntField(obj, fieldID, value);
    };

    static jmethodID methodID_reload() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "startReload", "method_36563", "reload", "m_168557_"), "(Lfgx$b;Ljava/util/List;)V");
    }

    static void reload(const jobject& obj, const jobject& arg0, const jobject& arg1) {
                
       const auto methodID = methodID_reload();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_recover() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "startRecovery", "method_36564", "recover", "m_168560_"), "(Ljava/lang/Throwable;)V");
    }

    static void recover(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_recover();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_finish() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "finishReload", "method_36562", "finish", "m_168556_"), "()V");
    }

    static void finish(const jobject& obj) {
                
       const auto methodID = methodID_finish();
       MinecraftSDK::env->CallVoidMethod(obj, methodID);
    };
    
    static jmethodID methodID_addReloadSection() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "fillCrashReport", "method_36565", "addReloadSection", "m_168562_"), "(Lo;)V");
    }

    static void addReloadSection(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_addReloadSection();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
};

#endif // NET_MINECRAFT_CLIENT_RESOURCE_RESOURCERELOADLOGGER_HPP