// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_CLIENT_RESOURCE_VIDEOWARNINGMANAGER$WARNINGPATTERNLOADER_HPP
#define NET_MINECRAFT_CLIENT_RESOURCE_VIDEOWARNINGMANAGER$WARNINGPATTERNLOADER_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.client.resource.VideoWarningManager$WarningPatternLoader
 * Remapped: get$a
 */
namespace VideoWarningManager$WarningPatternLoader {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("get$a", "net/minecraft/client/renderer/GpuWarnlistManager$Preparations", "net/minecraft/class_5407$class_5408", "net/minecraft/client/resource/VideoWarningManager$WarningPatternLoader", "net/minecraft/src/C_4127_$C_4129_"));
        }
        return cachedClass;
    };

    // getter for private field net.minecraft.client.resource.VideoWarningManager$WarningPatternLoader#rendererPatterns
    static jobject get_field_rendererPatterns(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "rendererPatterns", "field_25691", "rendererPatterns", "f_109257_"), "Ljava/util/List;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.resource.VideoWarningManager$WarningPatternLoader#rendererPatterns
    static void set_field_rendererPatterns(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "rendererPatterns", "field_25691", "rendererPatterns", "f_109257_"), "Ljava/util/List;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.resource.VideoWarningManager$WarningPatternLoader#versionPatterns
    static jobject get_field_versionPatterns(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "versionPatterns", "field_25692", "versionPatterns", "f_109258_"), "Ljava/util/List;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.resource.VideoWarningManager$WarningPatternLoader#versionPatterns
    static void set_field_versionPatterns(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "versionPatterns", "field_25692", "versionPatterns", "f_109258_"), "Ljava/util/List;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.resource.VideoWarningManager$WarningPatternLoader#vendorPatterns
    static jobject get_field_vendorPatterns(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "vendorPatterns", "field_25693", "vendorPatterns", "f_109259_"), "Ljava/util/List;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.resource.VideoWarningManager$WarningPatternLoader#vendorPatterns
    static void set_field_vendorPatterns(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "vendorPatterns", "field_25693", "vendorPatterns", "f_109259_"), "Ljava/util/List;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID_buildWarning() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "matchAny", "method_30066", "buildWarning", "m_109272_"), "(Ljava/util/List;Ljava/lang/String;)Ljava/lang/String;");
    }

    static jobject buildWarning(const jobject& arg0, const jobject& arg1) {
       const auto clazz = self();
       const auto methodID = methodID_buildWarning();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_buildWarnings() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "apply", "method_30064", "buildWarnings", "m_109269_"), "()Lcom/google/common/collect/ImmutableMap;");
    }

    static jobject buildWarnings(const jobject& obj) {
                
       const auto methodID = methodID_buildWarnings();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_CLIENT_RESOURCE_VIDEOWARNINGMANAGER$WARNINGPATTERNLOADER_HPP