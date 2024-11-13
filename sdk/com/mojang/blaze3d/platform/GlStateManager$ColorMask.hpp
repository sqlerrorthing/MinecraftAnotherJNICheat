// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef COM_MOJANG_BLAZE3D_PLATFORM_GLSTATEMANAGER$COLORMASK_HPP
#define COM_MOJANG_BLAZE3D_PLATFORM_GLSTATEMANAGER$COLORMASK_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: com.mojang.blaze3d.platform.GlStateManager$ColorMask
 * Remapped: com/mojang/blaze3d/platform/GlStateManager$d
 */
namespace GlStateManager$ColorMask {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("com/mojang/blaze3d/platform/GlStateManager$d", "com/mojang/blaze3d/platform/GlStateManager$ColorMask", "com/mojang/blaze3d/platform/GlStateManager$class_1022", "com/mojang/blaze3d/platform/GlStateManager$ColorMask", "com/mojang/blaze3d/platform/GlStateManager$C_3119_"));
        }
        return cachedClass;
    };

    // getter for public field com.mojang.blaze3d.platform.GlStateManager$ColorMask#red
    static jboolean get_field_red(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "red", "field_5063", "red", "f_84608_"), "Z");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetBooleanField(obj, fieldID);
    };

    // setter for static public field com.mojang.blaze3d.platform.GlStateManager$ColorMask#red
    static void set_field_red(const jobject &obj, const jboolean &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "red", "field_5063", "red", "f_84608_"), "Z");
        return MinecraftSDK::env->SetBooleanField(obj, fieldID, value);
    };

    // getter for public field com.mojang.blaze3d.platform.GlStateManager$ColorMask#green
    static jboolean get_field_green(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "green", "field_5062", "green", "f_84609_"), "Z");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetBooleanField(obj, fieldID);
    };

    // setter for static public field com.mojang.blaze3d.platform.GlStateManager$ColorMask#green
    static void set_field_green(const jobject &obj, const jboolean &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "green", "field_5062", "green", "f_84609_"), "Z");
        return MinecraftSDK::env->SetBooleanField(obj, fieldID, value);
    };

    // getter for public field com.mojang.blaze3d.platform.GlStateManager$ColorMask#blue
    static jboolean get_field_blue(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "blue", "field_5061", "blue", "f_84610_"), "Z");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetBooleanField(obj, fieldID);
    };

    // setter for static public field com.mojang.blaze3d.platform.GlStateManager$ColorMask#blue
    static void set_field_blue(const jobject &obj, const jboolean &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "blue", "field_5061", "blue", "f_84610_"), "Z");
        return MinecraftSDK::env->SetBooleanField(obj, fieldID, value);
    };

    // getter for public field com.mojang.blaze3d.platform.GlStateManager$ColorMask#alpha
    static jboolean get_field_alpha(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "alpha", "field_5060", "alpha", "f_84611_"), "Z");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetBooleanField(obj, fieldID);
    };

    // setter for static public field com.mojang.blaze3d.platform.GlStateManager$ColorMask#alpha
    static void set_field_alpha(const jobject &obj, const jboolean &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "alpha", "field_5060", "alpha", "f_84611_"), "Z");
        return MinecraftSDK::env->SetBooleanField(obj, fieldID, value);
    };

};

#endif // COM_MOJANG_BLAZE3D_PLATFORM_GLSTATEMANAGER$COLORMASK_HPP