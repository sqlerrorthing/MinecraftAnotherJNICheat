// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_CLIENT_RENDER_DIMENSIONEFFECTS$END_HPP
#define NET_MINECRAFT_CLIENT_RENDER_DIMENSIONEFFECTS$END_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.client.render.DimensionEffects$End
 * Remapped: geo$a
 */
namespace DimensionEffects$End {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("geo$a", "net/minecraft/client/renderer/DimensionSpecialEffects$EndEffects", "net/minecraft/class_5294$class_5295", "net/minecraft/client/render/DimensionEffects$End", "net/minecraft/src/C_4112_$C_4113_"));
        }
        return cachedClass;
    };

    static jmethodID methodID_adjustFogColor() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getBrightnessDependentFogColor", "method_28112", "adjustFogColor", "m_5927_"), "(Lexc;F)Lexc;");
    }

    static jobject adjustFogColor(const jobject& obj, const jobject& arg0, const jfloat& arg1) {
                
       const auto methodID = methodID_adjustFogColor();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_useThickFog() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "isFoggyAt", "method_28110", "useThickFog", "m_5781_"), "(II)Z");
    }

    static jboolean useThickFog(const jobject& obj, const jint& arg0, const jint& arg1) {
                
       const auto methodID = methodID_useThickFog();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_getFogColorOverride() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getSunriseColor", "method_28109", "getFogColorOverride", "m_7518_"), "(FF)[F");
    }

    static jfloat getFogColorOverride(const jobject& obj, const jfloat& arg0, const jfloat& arg1) {
                
       const auto methodID = methodID_getFogColorOverride();
       return MinecraftSDK::env->CallFloatMethod(obj, methodID, arg0, arg1);
    };
    
};

#endif // NET_MINECRAFT_CLIENT_RENDER_DIMENSIONEFFECTS$END_HPP