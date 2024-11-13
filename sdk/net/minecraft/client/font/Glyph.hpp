// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_CLIENT_FONT_GLYPH_HPP
#define NET_MINECRAFT_CLIENT_FONT_GLYPH_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.client.font.Glyph
 * Remapped: ezl
 */
namespace Glyph {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("ezl", "com/mojang/blaze3d/font/GlyphInfo", "net/minecraft/class_379", "net/minecraft/client/font/Glyph", "net/minecraft/src/C_3098_"));
        }
        return cachedClass;
    };

    static jmethodID methodID_getAdvance() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("getAdvance", "getAdvance", "", "", "m_7403_"), "()F");
    }

    static jfloat getAdvance(const jobject& obj) {
                
       const auto methodID = methodID_getAdvance();
       return MinecraftSDK::env->CallFloatMethod(obj, methodID);
    };
    
    static jmethodID methodID__getAdvance() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getAdvance", "method_16798", "getAdvance", "m_83827_"), "(Z)F");
    }

    static jfloat _getAdvance(const jobject& obj, const jboolean& arg0) {
                
       const auto methodID = methodID__getAdvance();
       return MinecraftSDK::env->CallFloatMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_getBoldOffset() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getBoldOffset", "method_16799", "getBoldOffset", "m_5619_"), "()F");
    }

    static jfloat getBoldOffset(const jobject& obj) {
                
       const auto methodID = methodID_getBoldOffset();
       return MinecraftSDK::env->CallFloatMethod(obj, methodID);
    };
    
    static jmethodID methodID_getShadowOffset() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "getShadowOffset", "method_16800", "getShadowOffset", "m_5645_"), "()F");
    }

    static jfloat getShadowOffset(const jobject& obj) {
                
       const auto methodID = methodID_getShadowOffset();
       return MinecraftSDK::env->CallFloatMethod(obj, methodID);
    };
    
    static jmethodID methodID_bake() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("bake", "bake", "bake", "bake", "m_213604_"), "(Ljava/util/function/Function;)Lflh;");
    }

    static jobject bake(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_bake();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
};

#endif // NET_MINECRAFT_CLIENT_FONT_GLYPH_HPP