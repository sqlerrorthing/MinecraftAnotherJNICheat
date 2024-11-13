// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef COM_MOJANG_BLAZE3D_PLATFORM_GLSTATEMANAGER$VIEWPORT_HPP
#define COM_MOJANG_BLAZE3D_PLATFORM_GLSTATEMANAGER$VIEWPORT_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: com.mojang.blaze3d.platform.GlStateManager$Viewport
 * Remapped: com/mojang/blaze3d/platform/GlStateManager$m
 */
namespace GlStateManager$Viewport {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("com/mojang/blaze3d/platform/GlStateManager$m", "com/mojang/blaze3d/platform/GlStateManager$Viewport", "com/mojang/blaze3d/platform/GlStateManager$class_1040", "com/mojang/blaze3d/platform/GlStateManager$Viewport", "com/mojang/blaze3d/platform/GlStateManager$C_3138_"));
        }
        return cachedClass;
    };

    // getter for static public field com.mojang.blaze3d.platform.GlStateManager$Viewport#INSTANCE
    [[maybe_unused]] static jobject get_field_INSTANCE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "INSTANCE", "field_5169", "INSTANCE", "INSTANCE"), "Lcom/mojang/blaze3d/platform/GlStateManager$m;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field com.mojang.blaze3d.platform.GlStateManager$Viewport#INSTANCE
    [[maybe_unused]] static void set_field_INSTANCE(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "INSTANCE", "field_5169", "INSTANCE", "INSTANCE"), "Lcom/mojang/blaze3d/platform/GlStateManager$m;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for protected field com.mojang.blaze3d.platform.GlStateManager$Viewport#x
    static jint get_field_x(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "x", "field_5172", "x", "f_84806_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetIntField(obj, fieldID);
    };

    // setter for static protected field com.mojang.blaze3d.platform.GlStateManager$Viewport#x
    static void set_field_x(const jobject &obj, const jint &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "x", "field_5172", "x", "f_84806_"), "I");
        return MinecraftSDK::env->SetIntField(obj, fieldID, value);
    };

    // getter for protected field com.mojang.blaze3d.platform.GlStateManager$Viewport#y
    static jint get_field_y(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "y", "field_5171", "y", "f_84807_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetIntField(obj, fieldID);
    };

    // setter for static protected field com.mojang.blaze3d.platform.GlStateManager$Viewport#y
    static void set_field_y(const jobject &obj, const jint &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "y", "field_5171", "y", "f_84807_"), "I");
        return MinecraftSDK::env->SetIntField(obj, fieldID, value);
    };

    // getter for protected field com.mojang.blaze3d.platform.GlStateManager$Viewport#width
    static jint get_field_width(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "width", "field_5170", "width", "f_84808_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetIntField(obj, fieldID);
    };

    // setter for static protected field com.mojang.blaze3d.platform.GlStateManager$Viewport#width
    static void set_field_width(const jobject &obj, const jint &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "width", "field_5170", "width", "f_84808_"), "I");
        return MinecraftSDK::env->SetIntField(obj, fieldID, value);
    };

    // getter for protected field com.mojang.blaze3d.platform.GlStateManager$Viewport#height
    static jint get_field_height(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "height", "field_5168", "height", "f_84809_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetIntField(obj, fieldID);
    };

    // setter for static protected field com.mojang.blaze3d.platform.GlStateManager$Viewport#height
    static void set_field_height(const jobject &obj, const jint &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "height", "field_5168", "height", "f_84809_"), "I");
        return MinecraftSDK::env->SetIntField(obj, fieldID, value);
    };

    static jmethodID methodID_values() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("values", "values", "values", "values", "values"), "()[Lcom/mojang/blaze3d/platform/GlStateManager$m;");
    }

    static jobject values() {
       const auto clazz = self();
       const auto methodID = methodID_values();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID);
    };
    
    static jmethodID methodID_valueOf() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("valueOf", "valueOf", "valueOf", "valueOf", "valueOf"), "(Ljava/lang/String;)Lcom/mojang/blaze3d/platform/GlStateManager$m;");
    }

    static jobject valueOf(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_valueOf();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_getX() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "x", "method_35330", "getX", "m_157126_"), "()I");
    }

    static jint getX() {
       const auto clazz = self();
       const auto methodID = methodID_getX();
       return MinecraftSDK::env->CallStaticIntMethod(clazz, methodID);
    };
    
    static jmethodID methodID_getY() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("b", "y", "method_35331", "getY", "m_157127_"), "()I");
    }

    static jint getY() {
       const auto clazz = self();
       const auto methodID = methodID_getY();
       return MinecraftSDK::env->CallStaticIntMethod(clazz, methodID);
    };
    
    static jmethodID methodID_getWidth() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("c", "width", "method_35332", "getWidth", "m_157128_"), "()I");
    }

    static jint getWidth() {
       const auto clazz = self();
       const auto methodID = methodID_getWidth();
       return MinecraftSDK::env->CallStaticIntMethod(clazz, methodID);
    };
    
    static jmethodID methodID_getHeight() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("d", "height", "method_35333", "getHeight", "m_157129_"), "()I");
    }

    static jint getHeight() {
       const auto clazz = self();
       const auto methodID = methodID_getHeight();
       return MinecraftSDK::env->CallStaticIntMethod(clazz, methodID);
    };
    
};

#endif // COM_MOJANG_BLAZE3D_PLATFORM_GLSTATEMANAGER$VIEWPORT_HPP