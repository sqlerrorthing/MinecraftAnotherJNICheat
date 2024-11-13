// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_ENTITY_EFFECT_INSTANTHEALTHORDAMAGESTATUSEFFECT_HPP
#define NET_MINECRAFT_ENTITY_EFFECT_INSTANTHEALTHORDAMAGESTATUSEFFECT_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.entity.effect.InstantHealthOrDamageStatusEffect
 * Remapped: brt
 */
namespace InstantHealthOrDamageStatusEffect {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("brt", "net/minecraft/world/effect/HealOrHarmMobEffect", "net/minecraft/class_8632", "net/minecraft/entity/effect/InstantHealthOrDamageStatusEffect", "net/minecraft/src/C_290149_"));
        }
        return cachedClass;
    };

    // getter for private field net.minecraft.entity.effect.InstantHealthOrDamageStatusEffect#damage
    static jboolean get_field_damage(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "isHarm", "field_45103", "damage", "f_291810_"), "Z");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetBooleanField(obj, fieldID);
    };

    // setter for static private field net.minecraft.entity.effect.InstantHealthOrDamageStatusEffect#damage
    static void set_field_damage(const jobject &obj, const jboolean &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "isHarm", "field_45103", "damage", "f_291810_"), "Z");
        return MinecraftSDK::env->SetBooleanField(obj, fieldID, value);
    };

    static jmethodID methodID_applyUpdateEffect() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "applyEffectTick", "method_5572", "applyUpdateEffect", "m_294194_"), "(Lbtn;I)Z");
    }

    static jboolean applyUpdateEffect(const jobject& obj, const jobject& arg0, const jint& arg1) {
                
       const auto methodID = methodID_applyUpdateEffect();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_applyInstantEffect() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "applyInstantenousEffect", "method_5564", "applyInstantEffect", "m_19461_"), "(Lbsr;Lbsr;Lbtn;ID)V");
    }

    static void applyInstantEffect(const jobject& obj, const jobject& arg0, const jobject& arg1, const jobject& arg2, const jint& arg3, const jdouble& arg4) {
                
       const auto methodID = methodID_applyInstantEffect();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1, arg2, arg3, arg4);
    };
    
};

#endif // NET_MINECRAFT_ENTITY_EFFECT_INSTANTHEALTHORDAMAGESTATUSEFFECT_HPP