// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef COM_MOJANG_BLAZE3D_PLATFORM_GLSTATEMANAGER$SRCFACTOR_HPP
#define COM_MOJANG_BLAZE3D_PLATFORM_GLSTATEMANAGER$SRCFACTOR_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: com.mojang.blaze3d.platform.GlStateManager$SrcFactor
 * Remapped: com/mojang/blaze3d/platform/GlStateManager$SourceFactor
 */
namespace GlStateManager$SrcFactor {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("com/mojang/blaze3d/platform/GlStateManager$SourceFactor", "com/mojang/blaze3d/platform/GlStateManager$SourceFactor", "com/mojang/blaze3d/platform/GlStateManager$class_4535", "com/mojang/blaze3d/platform/GlStateManager$SrcFactor", "com/mojang/blaze3d/platform/GlStateManager$SourceFactor"));
        }
        return cachedClass;
    };

    // getter for static public field com.mojang.blaze3d.platform.GlStateManager$SrcFactor#CONSTANT_ALPHA
    [[maybe_unused]] static jobject get_field_CONSTANT_ALPHA() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("CONSTANT_ALPHA", "CONSTANT_ALPHA", "CONSTANT_ALPHA", "CONSTANT_ALPHA", "CONSTANT_ALPHA"), "Lcom/mojang/blaze3d/platform/GlStateManager$SourceFactor;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field com.mojang.blaze3d.platform.GlStateManager$SrcFactor#CONSTANT_ALPHA
    [[maybe_unused]] static void set_field_CONSTANT_ALPHA(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("CONSTANT_ALPHA", "CONSTANT_ALPHA", "CONSTANT_ALPHA", "CONSTANT_ALPHA", "CONSTANT_ALPHA"), "Lcom/mojang/blaze3d/platform/GlStateManager$SourceFactor;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field com.mojang.blaze3d.platform.GlStateManager$SrcFactor#CONSTANT_COLOR
    [[maybe_unused]] static jobject get_field_CONSTANT_COLOR() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("CONSTANT_COLOR", "CONSTANT_COLOR", "CONSTANT_COLOR", "CONSTANT_COLOR", "CONSTANT_COLOR"), "Lcom/mojang/blaze3d/platform/GlStateManager$SourceFactor;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field com.mojang.blaze3d.platform.GlStateManager$SrcFactor#CONSTANT_COLOR
    [[maybe_unused]] static void set_field_CONSTANT_COLOR(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("CONSTANT_COLOR", "CONSTANT_COLOR", "CONSTANT_COLOR", "CONSTANT_COLOR", "CONSTANT_COLOR"), "Lcom/mojang/blaze3d/platform/GlStateManager$SourceFactor;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field com.mojang.blaze3d.platform.GlStateManager$SrcFactor#DST_ALPHA
    [[maybe_unused]] static jobject get_field_DST_ALPHA() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("DST_ALPHA", "DST_ALPHA", "DST_ALPHA", "DST_ALPHA", "DST_ALPHA"), "Lcom/mojang/blaze3d/platform/GlStateManager$SourceFactor;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field com.mojang.blaze3d.platform.GlStateManager$SrcFactor#DST_ALPHA
    [[maybe_unused]] static void set_field_DST_ALPHA(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("DST_ALPHA", "DST_ALPHA", "DST_ALPHA", "DST_ALPHA", "DST_ALPHA"), "Lcom/mojang/blaze3d/platform/GlStateManager$SourceFactor;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field com.mojang.blaze3d.platform.GlStateManager$SrcFactor#DST_COLOR
    [[maybe_unused]] static jobject get_field_DST_COLOR() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("DST_COLOR", "DST_COLOR", "DST_COLOR", "DST_COLOR", "DST_COLOR"), "Lcom/mojang/blaze3d/platform/GlStateManager$SourceFactor;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field com.mojang.blaze3d.platform.GlStateManager$SrcFactor#DST_COLOR
    [[maybe_unused]] static void set_field_DST_COLOR(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("DST_COLOR", "DST_COLOR", "DST_COLOR", "DST_COLOR", "DST_COLOR"), "Lcom/mojang/blaze3d/platform/GlStateManager$SourceFactor;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field com.mojang.blaze3d.platform.GlStateManager$SrcFactor#ONE
    [[maybe_unused]] static jobject get_field_ONE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("ONE", "ONE", "ONE", "ONE", "ONE"), "Lcom/mojang/blaze3d/platform/GlStateManager$SourceFactor;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field com.mojang.blaze3d.platform.GlStateManager$SrcFactor#ONE
    [[maybe_unused]] static void set_field_ONE(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("ONE", "ONE", "ONE", "ONE", "ONE"), "Lcom/mojang/blaze3d/platform/GlStateManager$SourceFactor;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field com.mojang.blaze3d.platform.GlStateManager$SrcFactor#ONE_MINUS_CONSTANT_ALPHA
    [[maybe_unused]] static jobject get_field_ONE_MINUS_CONSTANT_ALPHA() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("ONE_MINUS_CONSTANT_ALPHA", "ONE_MINUS_CONSTANT_ALPHA", "ONE_MINUS_CONSTANT_ALPHA", "ONE_MINUS_CONSTANT_ALPHA", "ONE_MINUS_CONSTANT_ALPHA"), "Lcom/mojang/blaze3d/platform/GlStateManager$SourceFactor;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field com.mojang.blaze3d.platform.GlStateManager$SrcFactor#ONE_MINUS_CONSTANT_ALPHA
    [[maybe_unused]] static void set_field_ONE_MINUS_CONSTANT_ALPHA(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("ONE_MINUS_CONSTANT_ALPHA", "ONE_MINUS_CONSTANT_ALPHA", "ONE_MINUS_CONSTANT_ALPHA", "ONE_MINUS_CONSTANT_ALPHA", "ONE_MINUS_CONSTANT_ALPHA"), "Lcom/mojang/blaze3d/platform/GlStateManager$SourceFactor;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field com.mojang.blaze3d.platform.GlStateManager$SrcFactor#ONE_MINUS_CONSTANT_COLOR
    [[maybe_unused]] static jobject get_field_ONE_MINUS_CONSTANT_COLOR() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("ONE_MINUS_CONSTANT_COLOR", "ONE_MINUS_CONSTANT_COLOR", "ONE_MINUS_CONSTANT_COLOR", "ONE_MINUS_CONSTANT_COLOR", "ONE_MINUS_CONSTANT_COLOR"), "Lcom/mojang/blaze3d/platform/GlStateManager$SourceFactor;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field com.mojang.blaze3d.platform.GlStateManager$SrcFactor#ONE_MINUS_CONSTANT_COLOR
    [[maybe_unused]] static void set_field_ONE_MINUS_CONSTANT_COLOR(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("ONE_MINUS_CONSTANT_COLOR", "ONE_MINUS_CONSTANT_COLOR", "ONE_MINUS_CONSTANT_COLOR", "ONE_MINUS_CONSTANT_COLOR", "ONE_MINUS_CONSTANT_COLOR"), "Lcom/mojang/blaze3d/platform/GlStateManager$SourceFactor;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field com.mojang.blaze3d.platform.GlStateManager$SrcFactor#ONE_MINUS_DST_ALPHA
    [[maybe_unused]] static jobject get_field_ONE_MINUS_DST_ALPHA() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("ONE_MINUS_DST_ALPHA", "ONE_MINUS_DST_ALPHA", "ONE_MINUS_DST_ALPHA", "ONE_MINUS_DST_ALPHA", "ONE_MINUS_DST_ALPHA"), "Lcom/mojang/blaze3d/platform/GlStateManager$SourceFactor;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field com.mojang.blaze3d.platform.GlStateManager$SrcFactor#ONE_MINUS_DST_ALPHA
    [[maybe_unused]] static void set_field_ONE_MINUS_DST_ALPHA(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("ONE_MINUS_DST_ALPHA", "ONE_MINUS_DST_ALPHA", "ONE_MINUS_DST_ALPHA", "ONE_MINUS_DST_ALPHA", "ONE_MINUS_DST_ALPHA"), "Lcom/mojang/blaze3d/platform/GlStateManager$SourceFactor;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field com.mojang.blaze3d.platform.GlStateManager$SrcFactor#ONE_MINUS_DST_COLOR
    [[maybe_unused]] static jobject get_field_ONE_MINUS_DST_COLOR() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("ONE_MINUS_DST_COLOR", "ONE_MINUS_DST_COLOR", "ONE_MINUS_DST_COLOR", "ONE_MINUS_DST_COLOR", "ONE_MINUS_DST_COLOR"), "Lcom/mojang/blaze3d/platform/GlStateManager$SourceFactor;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field com.mojang.blaze3d.platform.GlStateManager$SrcFactor#ONE_MINUS_DST_COLOR
    [[maybe_unused]] static void set_field_ONE_MINUS_DST_COLOR(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("ONE_MINUS_DST_COLOR", "ONE_MINUS_DST_COLOR", "ONE_MINUS_DST_COLOR", "ONE_MINUS_DST_COLOR", "ONE_MINUS_DST_COLOR"), "Lcom/mojang/blaze3d/platform/GlStateManager$SourceFactor;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field com.mojang.blaze3d.platform.GlStateManager$SrcFactor#ONE_MINUS_SRC_ALPHA
    [[maybe_unused]] static jobject get_field_ONE_MINUS_SRC_ALPHA() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("ONE_MINUS_SRC_ALPHA", "ONE_MINUS_SRC_ALPHA", "ONE_MINUS_SRC_ALPHA", "ONE_MINUS_SRC_ALPHA", "ONE_MINUS_SRC_ALPHA"), "Lcom/mojang/blaze3d/platform/GlStateManager$SourceFactor;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field com.mojang.blaze3d.platform.GlStateManager$SrcFactor#ONE_MINUS_SRC_ALPHA
    [[maybe_unused]] static void set_field_ONE_MINUS_SRC_ALPHA(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("ONE_MINUS_SRC_ALPHA", "ONE_MINUS_SRC_ALPHA", "ONE_MINUS_SRC_ALPHA", "ONE_MINUS_SRC_ALPHA", "ONE_MINUS_SRC_ALPHA"), "Lcom/mojang/blaze3d/platform/GlStateManager$SourceFactor;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field com.mojang.blaze3d.platform.GlStateManager$SrcFactor#ONE_MINUS_SRC_COLOR
    [[maybe_unused]] static jobject get_field_ONE_MINUS_SRC_COLOR() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("ONE_MINUS_SRC_COLOR", "ONE_MINUS_SRC_COLOR", "ONE_MINUS_SRC_COLOR", "ONE_MINUS_SRC_COLOR", "ONE_MINUS_SRC_COLOR"), "Lcom/mojang/blaze3d/platform/GlStateManager$SourceFactor;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field com.mojang.blaze3d.platform.GlStateManager$SrcFactor#ONE_MINUS_SRC_COLOR
    [[maybe_unused]] static void set_field_ONE_MINUS_SRC_COLOR(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("ONE_MINUS_SRC_COLOR", "ONE_MINUS_SRC_COLOR", "ONE_MINUS_SRC_COLOR", "ONE_MINUS_SRC_COLOR", "ONE_MINUS_SRC_COLOR"), "Lcom/mojang/blaze3d/platform/GlStateManager$SourceFactor;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field com.mojang.blaze3d.platform.GlStateManager$SrcFactor#SRC_ALPHA
    [[maybe_unused]] static jobject get_field_SRC_ALPHA() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("SRC_ALPHA", "SRC_ALPHA", "SRC_ALPHA", "SRC_ALPHA", "SRC_ALPHA"), "Lcom/mojang/blaze3d/platform/GlStateManager$SourceFactor;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field com.mojang.blaze3d.platform.GlStateManager$SrcFactor#SRC_ALPHA
    [[maybe_unused]] static void set_field_SRC_ALPHA(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("SRC_ALPHA", "SRC_ALPHA", "SRC_ALPHA", "SRC_ALPHA", "SRC_ALPHA"), "Lcom/mojang/blaze3d/platform/GlStateManager$SourceFactor;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field com.mojang.blaze3d.platform.GlStateManager$SrcFactor#SRC_ALPHA_SATURATE
    [[maybe_unused]] static jobject get_field_SRC_ALPHA_SATURATE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("SRC_ALPHA_SATURATE", "SRC_ALPHA_SATURATE", "SRC_ALPHA_SATURATE", "SRC_ALPHA_SATURATE", "SRC_ALPHA_SATURATE"), "Lcom/mojang/blaze3d/platform/GlStateManager$SourceFactor;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field com.mojang.blaze3d.platform.GlStateManager$SrcFactor#SRC_ALPHA_SATURATE
    [[maybe_unused]] static void set_field_SRC_ALPHA_SATURATE(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("SRC_ALPHA_SATURATE", "SRC_ALPHA_SATURATE", "SRC_ALPHA_SATURATE", "SRC_ALPHA_SATURATE", "SRC_ALPHA_SATURATE"), "Lcom/mojang/blaze3d/platform/GlStateManager$SourceFactor;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field com.mojang.blaze3d.platform.GlStateManager$SrcFactor#SRC_COLOR
    [[maybe_unused]] static jobject get_field_SRC_COLOR() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("SRC_COLOR", "SRC_COLOR", "SRC_COLOR", "SRC_COLOR", "SRC_COLOR"), "Lcom/mojang/blaze3d/platform/GlStateManager$SourceFactor;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field com.mojang.blaze3d.platform.GlStateManager$SrcFactor#SRC_COLOR
    [[maybe_unused]] static void set_field_SRC_COLOR(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("SRC_COLOR", "SRC_COLOR", "SRC_COLOR", "SRC_COLOR", "SRC_COLOR"), "Lcom/mojang/blaze3d/platform/GlStateManager$SourceFactor;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field com.mojang.blaze3d.platform.GlStateManager$SrcFactor#ZERO
    [[maybe_unused]] static jobject get_field_ZERO() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("ZERO", "ZERO", "ZERO", "ZERO", "ZERO"), "Lcom/mojang/blaze3d/platform/GlStateManager$SourceFactor;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field com.mojang.blaze3d.platform.GlStateManager$SrcFactor#ZERO
    [[maybe_unused]] static void set_field_ZERO(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("ZERO", "ZERO", "ZERO", "ZERO", "ZERO"), "Lcom/mojang/blaze3d/platform/GlStateManager$SourceFactor;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for public field com.mojang.blaze3d.platform.GlStateManager$SrcFactor#value
    static jint get_field_value(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("value", "value", "", "", "value"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetIntField(obj, fieldID);
    };

    // setter for static public field com.mojang.blaze3d.platform.GlStateManager$SrcFactor#value
    static void set_field_value(const jobject &obj, const jint &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("value", "value", "", "", "value"), "I");
        return MinecraftSDK::env->SetIntField(obj, fieldID, value);
    };

    static jmethodID methodID_values() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("values", "values", "values", "values", "values"), "()[Lcom/mojang/blaze3d/platform/GlStateManager$SourceFactor;");
    }

    static jobject values() {
       const auto clazz = self();
       const auto methodID = methodID_values();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID);
    };
    
    static jmethodID methodID_valueOf() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("valueOf", "valueOf", "valueOf", "valueOf", "valueOf"), "(Ljava/lang/String;)Lcom/mojang/blaze3d/platform/GlStateManager$SourceFactor;");
    }

    static jobject valueOf(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_valueOf();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0);
    };
    
};

#endif // COM_MOJANG_BLAZE3D_PLATFORM_GLSTATEMANAGER$SRCFACTOR_HPP