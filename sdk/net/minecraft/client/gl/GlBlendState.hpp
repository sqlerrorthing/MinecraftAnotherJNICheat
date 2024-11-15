// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_CLIENT_GL_GLBLENDSTATE_HPP
#define NET_MINECRAFT_CLIENT_GL_GLBLENDSTATE_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.client.gl.GlBlendState
 * Remapped: fas
 */
namespace GlBlendState {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("fas", "com/mojang/blaze3d/shaders/BlendMode", "net/minecraft/class_277", "net/minecraft/client/gl/GlBlendState", "net/minecraft/src/C_3167_"));
        }
        return cachedClass;
    };

    // getter for static private field net.minecraft.client.gl.GlBlendState#activeBlendState
    [[maybe_unused]] static jobject get_field_activeBlendState() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "lastApplied", "field_1484", "activeBlendState", "f_85499_"), "Lfas;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.gl.GlBlendState#activeBlendState
    [[maybe_unused]] static void set_field_activeBlendState(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "lastApplied", "field_1484", "activeBlendState", "f_85499_"), "Lfas;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for private field net.minecraft.client.gl.GlBlendState#srcRgb
    static jint get_field_srcRgb(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "srcColorFactor", "field_1491", "srcRgb", "f_85500_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetIntField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.gl.GlBlendState#srcRgb
    static void set_field_srcRgb(const jobject &obj, const jint &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "srcColorFactor", "field_1491", "srcRgb", "f_85500_"), "I");
        return MinecraftSDK::env->SetIntField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.gl.GlBlendState#srcAlpha
    static jint get_field_srcAlpha(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "srcAlphaFactor", "field_1490", "srcAlpha", "f_85501_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetIntField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.gl.GlBlendState#srcAlpha
    static void set_field_srcAlpha(const jobject &obj, const jint &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "srcAlphaFactor", "field_1490", "srcAlpha", "f_85501_"), "I");
        return MinecraftSDK::env->SetIntField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.gl.GlBlendState#dstRgb
    static jint get_field_dstRgb(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "dstColorFactor", "field_1489", "dstRgb", "f_85502_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetIntField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.gl.GlBlendState#dstRgb
    static void set_field_dstRgb(const jobject &obj, const jint &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "dstColorFactor", "field_1489", "dstRgb", "f_85502_"), "I");
        return MinecraftSDK::env->SetIntField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.gl.GlBlendState#dstAlpha
    static jint get_field_dstAlpha(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "dstAlphaFactor", "field_1488", "dstAlpha", "f_85503_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetIntField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.gl.GlBlendState#dstAlpha
    static void set_field_dstAlpha(const jobject &obj, const jint &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "dstAlphaFactor", "field_1488", "dstAlpha", "f_85503_"), "I");
        return MinecraftSDK::env->SetIntField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.gl.GlBlendState#mode
    static jint get_field_mode(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("f", "blendFunc", "field_1486", "mode", "f_85504_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetIntField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.gl.GlBlendState#mode
    static void set_field_mode(const jobject &obj, const jint &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("f", "blendFunc", "field_1486", "mode", "f_85504_"), "I");
        return MinecraftSDK::env->SetIntField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.gl.GlBlendState#separateBlend
    static jboolean get_field_separateBlend(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("g", "separateBlend", "field_1487", "separateBlend", "f_85505_"), "Z");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetBooleanField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.gl.GlBlendState#separateBlend
    static void set_field_separateBlend(const jobject &obj, const jboolean &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("g", "separateBlend", "field_1487", "separateBlend", "f_85505_"), "Z");
        return MinecraftSDK::env->SetBooleanField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.gl.GlBlendState#blendDisabled
    static jboolean get_field_blendDisabled(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("h", "opaque", "field_1485", "blendDisabled", "f_85506_"), "Z");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetBooleanField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.gl.GlBlendState#blendDisabled
    static void set_field_blendDisabled(const jobject &obj, const jboolean &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("h", "opaque", "field_1485", "blendDisabled", "f_85506_"), "Z");
        return MinecraftSDK::env->SetBooleanField(obj, fieldID, value);
    };

    static jmethodID methodID_enable() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "apply", "method_1244", "enable", "m_85526_"), "()V");
    }

    static void enable(const jobject& obj) {
                
       const auto methodID = methodID_enable();
       MinecraftSDK::env->CallVoidMethod(obj, methodID);
    };
    
    static jmethodID methodID_isBlendDisabled() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "isOpaque", "method_1245", "isBlendDisabled", "m_85529_"), "()Z");
    }

    static jboolean isBlendDisabled(const jobject& obj) {
                
       const auto methodID = methodID_isBlendDisabled();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID);
    };
    
    static jmethodID methodID_getModeFromString() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "stringToBlendFunc", "method_1247", "getModeFromString", "m_85527_"), "(Ljava/lang/String;)I");
    }

    static jint getModeFromString(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_getModeFromString();
       return MinecraftSDK::env->CallStaticIntMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_getFactorFromString() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("b", "stringToBlendFactor", "method_1243", "getFactorFromString", "m_85530_"), "(Ljava/lang/String;)I");
    }

    static jint getFactorFromString(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_getFactorFromString();
       return MinecraftSDK::env->CallStaticIntMethod(clazz, methodID, arg0);
    };
    
};

#endif // NET_MINECRAFT_CLIENT_GL_GLBLENDSTATE_HPP