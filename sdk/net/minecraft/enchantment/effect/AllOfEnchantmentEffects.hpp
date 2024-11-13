// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_ENCHANTMENT_EFFECT_ALLOFENCHANTMENTEFFECTS_HPP
#define NET_MINECRAFT_ENCHANTMENT_EFFECT_ALLOFENCHANTMENTEFFECTS_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.enchantment.effect.AllOfEnchantmentEffects
 * Remapped: dam
 */
namespace AllOfEnchantmentEffects {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("dam", "net/minecraft/world/item/enchantment/effects/AllOf", "net/minecraft/class_9712", "net/minecraft/enchantment/effect/AllOfEnchantmentEffects", "net/minecraft/src/C_336446_"));
        }
        return cachedClass;
    };

    static jmethodID methodID_buildCodec() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "codec", "method_60214", "buildCodec", "m_340061_"), "(Lcom/mojang/serialization/Codec;Ljava/util/function/Function;Ljava/util/function/Function;)Lcom/mojang/serialization/MapCodec;");
    }

    static jobject buildCodec(const jobject& arg0, const jobject& arg1, const jobject& arg2) {
       const auto clazz = self();
       const auto methodID = methodID_buildCodec();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0, arg1, arg2);
    };
    
    static jmethodID methodID_allOf() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "entityEffects", "method_60216", "allOf", "m_338565_"), "([Ldas;)Ldam$a;");
    }

    static jobject allOf(const jarray& arg0, const jobject& arg1) {
       const auto clazz = self();
       const auto methodID = methodID_allOf();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0, arg1);
    };
    
    static jmethodID methodID__allOf() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "locationBasedEffects", "method_60217", "allOf", "m_339547_"), "([Ldat;)Ldam$b;");
    }

    static jobject _allOf(const jarray& arg0, const jobject& arg1) {
       const auto clazz = self();
       const auto methodID = methodID__allOf();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0, arg1);
    };
    
    static jmethodID methodID___allOf() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "valueEffects", "method_60218", "allOf", "m_338854_"), "([Ldau;)Ldam$c;");
    }

    static jobject __allOf(const jarray& arg0, const jobject& arg1) {
       const auto clazz = self();
       const auto methodID = methodID___allOf();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0, arg1);
    };
    
};

#endif // NET_MINECRAFT_ENCHANTMENT_EFFECT_ALLOFENCHANTMENTEFFECTS_HPP