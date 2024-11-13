// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_CLIENT_RESOURCE_RESOURCERELOADLOGGER$RELOADSTATE_HPP
#define NET_MINECRAFT_CLIENT_RESOURCE_RESOURCERELOADLOGGER$RELOADSTATE_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.client.resource.ResourceReloadLogger$ReloadState
 * Remapped: fgx$c
 */
namespace ResourceReloadLogger$ReloadState {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("fgx$c", "net/minecraft/client/ResourceLoadStateTracker$ReloadState", "net/minecraft/class_6360$class_6363", "net/minecraft/client/resource/ResourceReloadLogger$ReloadState", "net/minecraft/src/C_141582_$C_141585_"));
        }
        return cachedClass;
    };

    // getter for private field net.minecraft.client.resource.ResourceReloadLogger$ReloadState#reason
    static jobject get_field_reason(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "reloadReason", "field_33707", "reason", "f_168584_"), "Lfgx$b;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.resource.ResourceReloadLogger$ReloadState#reason
    static void set_field_reason(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "reloadReason", "field_33707", "reason", "f_168584_"), "Lfgx$b;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.resource.ResourceReloadLogger$ReloadState#packs
    static jobject get_field_packs(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "packs", "field_33708", "packs", "f_168585_"), "Ljava/util/List;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.resource.ResourceReloadLogger$ReloadState#packs
    static void set_field_packs(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "packs", "field_33708", "packs", "f_168585_"), "Ljava/util/List;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for default field net.minecraft.client.resource.ResourceReloadLogger$ReloadState#recovery
    static jobject get_field_recovery(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "recoveryReloadInfo", "field_33709", "recovery", "f_168586_"), "Lfgx$a;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static default field net.minecraft.client.resource.ResourceReloadLogger$ReloadState#recovery
    static void set_field_recovery(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "recoveryReloadInfo", "field_33709", "recovery", "f_168586_"), "Lfgx$a;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for default field net.minecraft.client.resource.ResourceReloadLogger$ReloadState#finished
    static jboolean get_field_finished(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "finished", "field_33710", "finished", "f_168587_"), "Z");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetBooleanField(obj, fieldID);
    };

    // setter for static default field net.minecraft.client.resource.ResourceReloadLogger$ReloadState#finished
    static void set_field_finished(const jobject &obj, const jboolean &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "finished", "field_33710", "finished", "f_168587_"), "Z");
        return MinecraftSDK::env->SetBooleanField(obj, fieldID, value);
    };

    static jmethodID methodID_addReloadSection() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "fillCrashInfo", "method_36573", "addReloadSection", "m_168592_"), "(Lp;)V");
    }

    static void addReloadSection(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_addReloadSection();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
};

#endif // NET_MINECRAFT_CLIENT_RESOURCE_RESOURCERELOADLOGGER$RELOADSTATE_HPP