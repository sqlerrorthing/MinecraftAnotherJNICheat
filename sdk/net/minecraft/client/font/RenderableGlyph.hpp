// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_CLIENT_FONT_RENDERABLEGLYPH_HPP
#define NET_MINECRAFT_CLIENT_FONT_RENDERABLEGLYPH_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.client.font.RenderableGlyph
 * Remapped: ezn
 */
namespace RenderableGlyph {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("ezn", "com/mojang/blaze3d/font/SheetGlyphInfo", "net/minecraft/class_383", "net/minecraft/client/font/RenderableGlyph", "net/minecraft/src/C_213324_"));
        }
        return cachedClass;
    };

    static jmethodID methodID_getWidth() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getPixelWidth", "method_2031", "getWidth", "m_213962_"), "()I");
    }

    static jint getWidth(const jobject& obj) {
                
       const auto methodID = methodID_getWidth();
       return MinecraftSDK::env->CallIntMethod(obj, methodID);
    };
    
    static jmethodID methodID_getHeight() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "getPixelHeight", "method_2032", "getHeight", "m_213961_"), "()I");
    }

    static jint getHeight(const jobject& obj) {
                
       const auto methodID = methodID_getHeight();
       return MinecraftSDK::env->CallIntMethod(obj, methodID);
    };
    
    static jmethodID methodID_upload() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "upload", "method_2030", "upload", "m_213958_"), "(II)V");
    }

    static void upload(const jobject& obj, const jint& arg0, const jint& arg1) {
                
       const auto methodID = methodID_upload();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_hasColor() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "isColored", "method_2033", "hasColor", "m_213965_"), "()Z");
    }

    static jboolean hasColor(const jobject& obj) {
                
       const auto methodID = methodID_hasColor();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID);
    };
    
    static jmethodID methodID_getOversample() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("d", "getOversample", "method_2035", "getOversample", "m_213963_"), "()F");
    }

    static jfloat getOversample(const jobject& obj) {
                
       const auto methodID = methodID_getOversample();
       return MinecraftSDK::env->CallFloatMethod(obj, methodID);
    };
    
    static jmethodID methodID_getXMin() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("e", "getLeft", "method_2034", "getXMin", "m_231094_"), "()F");
    }

    static jfloat getXMin(const jobject& obj) {
                
       const auto methodID = methodID_getXMin();
       return MinecraftSDK::env->CallFloatMethod(obj, methodID);
    };
    
    static jmethodID methodID_getXMax() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("f", "getRight", "method_2027", "getXMax", "m_231095_"), "()F");
    }

    static jfloat getXMax(const jobject& obj) {
                
       const auto methodID = methodID_getXMax();
       return MinecraftSDK::env->CallFloatMethod(obj, methodID);
    };
    
    static jmethodID methodID_getYMin() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("g", "getTop", "method_2028", "getYMin", "m_319386_"), "()F");
    }

    static jfloat getYMin(const jobject& obj) {
                
       const auto methodID = methodID_getYMin();
       return MinecraftSDK::env->CallFloatMethod(obj, methodID);
    };
    
    static jmethodID methodID_getYMax() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("h", "getBottom", "method_2029", "getYMax", "m_323712_"), "()F");
    }

    static jfloat getYMax(const jobject& obj) {
                
       const auto methodID = methodID_getYMax();
       return MinecraftSDK::env->CallFloatMethod(obj, methodID);
    };
    
    static jmethodID methodID_getBearingX() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("i", "getBearingLeft", "method_56129", "getBearingX", "m_213966_"), "()F");
    }

    static jfloat getBearingX(const jobject& obj) {
                
       const auto methodID = methodID_getBearingX();
       return MinecraftSDK::env->CallFloatMethod(obj, methodID);
    };
    
    static jmethodID methodID_getAscent() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("j", "getBearingTop", "method_56130", "getAscent", "m_213964_"), "()F");
    }

    static jfloat getAscent(const jobject& obj) {
                
       const auto methodID = methodID_getAscent();
       return MinecraftSDK::env->CallFloatMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_CLIENT_FONT_RENDERABLEGLYPH_HPP