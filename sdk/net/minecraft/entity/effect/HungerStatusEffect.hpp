// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_ENTITY_EFFECT_HUNGERSTATUSEFFECT_HPP
#define NET_MINECRAFT_ENTITY_EFFECT_HUNGERSTATUSEFFECT_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.entity.effect.HungerStatusEffect
 * Remapped: bru
 */
namespace HungerStatusEffect {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("bru", "net/minecraft/world/effect/HungerMobEffect", "net/minecraft/class_8633", "net/minecraft/entity/effect/HungerStatusEffect", "net/minecraft/src/C_290094_"));
        }
        return cachedClass;
    };

    static jmethodID methodID_applyUpdateEffect() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "applyEffectTick", "method_5572", "applyUpdateEffect", "m_294194_"), "(Lbtn;I)Z");
    }

    static jboolean applyUpdateEffect(const jobject& obj, const jobject& arg0, const jint& arg1) {
                
       const auto methodID = methodID_applyUpdateEffect();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_canApplyUpdateEffect() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "shouldApplyEffectTickThisTick", "method_5552", "canApplyUpdateEffect", "m_19443_"), "(II)Z");
    }

    static jboolean canApplyUpdateEffect(const jobject& obj, const jint& arg0, const jint& arg1) {
                
       const auto methodID = methodID_canApplyUpdateEffect();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0, arg1);
    };
    
};

#endif // NET_MINECRAFT_ENTITY_EFFECT_HUNGERSTATUSEFFECT_HPP