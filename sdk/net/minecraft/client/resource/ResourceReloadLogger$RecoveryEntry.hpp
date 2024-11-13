// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_CLIENT_RESOURCE_RESOURCERELOADLOGGER$RECOVERYENTRY_HPP
#define NET_MINECRAFT_CLIENT_RESOURCE_RESOURCERELOADLOGGER$RECOVERYENTRY_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.client.resource.ResourceReloadLogger$RecoveryEntry
 * Remapped: fgx$a
 */
namespace ResourceReloadLogger$RecoveryEntry {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("fgx$a", "net/minecraft/client/ResourceLoadStateTracker$RecoveryInfo", "net/minecraft/class_6360$class_6361", "net/minecraft/client/resource/ResourceReloadLogger$RecoveryEntry", "net/minecraft/src/C_141582_$C_141583_"));
        }
        return cachedClass;
    };

    // getter for private field net.minecraft.client.resource.ResourceReloadLogger$RecoveryEntry#throwable
    static jobject get_field_throwable(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "error", "field_33701", "throwable", "f_168564_"), "Ljava/lang/Throwable;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.resource.ResourceReloadLogger$RecoveryEntry#throwable
    static void set_field_throwable(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "error", "field_33701", "throwable", "f_168564_"), "Ljava/lang/Throwable;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID_addRecoverySection() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "fillCrashInfo", "method_36567", "addRecoverySection", "m_168568_"), "(Lp;)V");
    }

    static void addRecoverySection(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_addRecoverySection();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
};

#endif // NET_MINECRAFT_CLIENT_RESOURCE_RESOURCERELOADLOGGER$RECOVERYENTRY_HPP