// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_CLIENT_RENDER_BACKGROUNDRENDERER$STATUSEFFECTFOGMODIFIER_HPP
#define NET_MINECRAFT_CLIENT_RENDER_BACKGROUNDRENDERER$STATUSEFFECTFOGMODIFIER_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.client.render.BackgroundRenderer$StatusEffectFogModifier
 * Remapped: ger$e
 */
namespace BackgroundRenderer$StatusEffectFogModifier {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("ger$e", "net/minecraft/client/renderer/FogRenderer$MobEffectFogFunction", "net/minecraft/class_758$class_7286", "net/minecraft/client/render/BackgroundRenderer$StatusEffectFogModifier", "net/minecraft/src/C_4122_$C_213422_"));
        }
        return cachedClass;
    };

    static jmethodID methodID_getStatusEffect() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getMobEffect", "method_42590", "getStatusEffect", "m_213948_"), "()Ljm;");
    }

    static jobject getStatusEffect(const jobject& obj) {
                
       const auto methodID = methodID_getStatusEffect();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_applyStartEndModifier() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "setupFog", "method_42591", "applyStartEndModifier", "m_213725_"), "(Lger$c;Lbtn;Lbrz;FF)V");
    }

    static void applyStartEndModifier(const jobject& obj, const jobject& arg0, const jobject& arg1, const jobject& arg2, const jfloat& arg3, const jfloat& arg4) {
                
       const auto methodID = methodID_applyStartEndModifier();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1, arg2, arg3, arg4);
    };
    
    static jmethodID methodID_shouldApply() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "isEnabled", "method_42593", "shouldApply", "m_234205_"), "(Lbtn;F)Z");
    }

    static jboolean shouldApply(const jobject& obj, const jobject& arg0, const jfloat& arg1) {
                
       const auto methodID = methodID_shouldApply();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_applyColorModifier() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getModifiedVoidDarkness", "method_42592", "applyColorModifier", "m_213936_"), "(Lbtn;Lbrz;FF)F");
    }

    static jfloat applyColorModifier(const jobject& obj, const jobject& arg0, const jobject& arg1, const jfloat& arg2, const jfloat& arg3) {
                
       const auto methodID = methodID_applyColorModifier();
       return MinecraftSDK::env->CallFloatMethod(obj, methodID, arg0, arg1, arg2, arg3);
    };
    
};

#endif // NET_MINECRAFT_CLIENT_RENDER_BACKGROUNDRENDERER$STATUSEFFECTFOGMODIFIER_HPP