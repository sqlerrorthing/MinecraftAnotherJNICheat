// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef COM_MOJANG_BLAZE3D_PLATFORM_GLSTATEMANAGER$POLYGONOFFSETSTATE_HPP
#define COM_MOJANG_BLAZE3D_PLATFORM_GLSTATEMANAGER$POLYGONOFFSETSTATE_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: com.mojang.blaze3d.platform.GlStateManager$PolygonOffsetState
 * Remapped: com/mojang/blaze3d/platform/GlStateManager$h
 */
namespace GlStateManager$PolygonOffsetState {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("com/mojang/blaze3d/platform/GlStateManager$h", "com/mojang/blaze3d/platform/GlStateManager$PolygonOffsetState", "com/mojang/blaze3d/platform/GlStateManager$class_1031", "com/mojang/blaze3d/platform/GlStateManager$PolygonOffsetState", "com/mojang/blaze3d/platform/GlStateManager$C_3129_"));
        }
        return cachedClass;
    };

    // getter for public field com.mojang.blaze3d.platform.GlStateManager$PolygonOffsetState#capFill
    static jobject get_field_capFill(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "fill", "field_5123", "capFill", "f_84725_"), "Lcom/mojang/blaze3d/platform/GlStateManager$b;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static public field com.mojang.blaze3d.platform.GlStateManager$PolygonOffsetState#capFill
    static void set_field_capFill(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "fill", "field_5123", "capFill", "f_84725_"), "Lcom/mojang/blaze3d/platform/GlStateManager$b;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for public field com.mojang.blaze3d.platform.GlStateManager$PolygonOffsetState#capLine
    static jobject get_field_capLine(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "line", "field_5121", "capLine", "f_84726_"), "Lcom/mojang/blaze3d/platform/GlStateManager$b;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static public field com.mojang.blaze3d.platform.GlStateManager$PolygonOffsetState#capLine
    static void set_field_capLine(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "line", "field_5121", "capLine", "f_84726_"), "Lcom/mojang/blaze3d/platform/GlStateManager$b;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for public field com.mojang.blaze3d.platform.GlStateManager$PolygonOffsetState#factor
    static jfloat get_field_factor(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "factor", "field_5124", "factor", "f_84727_"), "F");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetFloatField(obj, fieldID);
    };

    // setter for static public field com.mojang.blaze3d.platform.GlStateManager$PolygonOffsetState#factor
    static void set_field_factor(const jobject &obj, const jfloat &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "factor", "field_5124", "factor", "f_84727_"), "F");
        return MinecraftSDK::env->SetFloatField(obj, fieldID, value);
    };

    // getter for public field com.mojang.blaze3d.platform.GlStateManager$PolygonOffsetState#units
    static jfloat get_field_units(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "units", "field_5122", "units", "f_84728_"), "F");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetFloatField(obj, fieldID);
    };

    // setter for static public field com.mojang.blaze3d.platform.GlStateManager$PolygonOffsetState#units
    static void set_field_units(const jobject &obj, const jfloat &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "units", "field_5122", "units", "f_84728_"), "F");
        return MinecraftSDK::env->SetFloatField(obj, fieldID, value);
    };

};

#endif // COM_MOJANG_BLAZE3D_PLATFORM_GLSTATEMANAGER$POLYGONOFFSETSTATE_HPP