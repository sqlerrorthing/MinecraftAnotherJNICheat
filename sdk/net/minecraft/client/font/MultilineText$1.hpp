// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_CLIENT_FONT_MULTILINETEXT$1_HPP
#define NET_MINECRAFT_CLIENT_FONT_MULTILINETEXT$1_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.client.font.MultilineText$1
 * Remapped: fjf$1
 */
namespace MultilineText$1 {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("fjf$1", "net/minecraft/client/gui/components/MultiLineLabel$1", "net/minecraft/class_5489$1", "net/minecraft/client/font/MultilineText$1", "net/minecraft/src/C_3470_$C_3471_"));
        }
        return cachedClass;
    };

    static jmethodID methodID_drawCenterWithShadow() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "renderCentered", "method_30888", "drawCenterWithShadow", "m_6276_"), "(Lfhz;II)V");
    }

    static void drawCenterWithShadow(const jobject& obj, const jobject& arg0, const jint& arg1, const jint& arg2) {
                
       const auto methodID = methodID_drawCenterWithShadow();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1, arg2);
    };
    
    static jmethodID methodID__drawCenterWithShadow() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "renderCentered", "method_30889", "drawCenterWithShadow", "m_6514_"), "(Lfhz;IIII)V");
    }

    static void _drawCenterWithShadow(const jobject& obj, const jobject& arg0, const jint& arg1, const jint& arg2, const jint& arg3, const jint& arg4) {
                
       const auto methodID = methodID__drawCenterWithShadow();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1, arg2, arg3, arg4);
    };
    
    static jmethodID methodID_drawWithShadow() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "renderLeftAligned", "method_30893", "drawWithShadow", "m_6508_"), "(Lfhz;IIII)V");
    }

    static void drawWithShadow(const jobject& obj, const jobject& arg0, const jint& arg1, const jint& arg2, const jint& arg3, const jint& arg4) {
                
       const auto methodID = methodID_drawWithShadow();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1, arg2, arg3, arg4);
    };
    
    static jmethodID methodID_draw() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "renderLeftAlignedNoShadow", "method_30896", "draw", "m_6516_"), "(Lfhz;IIII)I");
    }

    static jint draw(const jobject& obj, const jobject& arg0, const jint& arg1, const jint& arg2, const jint& arg3, const jint& arg4) {
                
       const auto methodID = methodID_draw();
       return MinecraftSDK::env->CallIntMethod(obj, methodID, arg0, arg1, arg2, arg3, arg4);
    };
    
    static jmethodID methodID_count() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getLineCount", "method_30887", "count", "m_5770_"), "()I");
    }

    static jint count(const jobject& obj) {
                
       const auto methodID = methodID_count();
       return MinecraftSDK::env->CallIntMethod(obj, methodID);
    };
    
    static jmethodID methodID_getMaxWidth() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "getWidth", "method_44048", "getMaxWidth", "m_214161_"), "()I");
    }

    static jint getMaxWidth(const jobject& obj) {
                
       const auto methodID = methodID_getMaxWidth();
       return MinecraftSDK::env->CallIntMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_CLIENT_FONT_MULTILINETEXT$1_HPP