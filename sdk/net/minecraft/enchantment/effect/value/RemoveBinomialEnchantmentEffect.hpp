// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_ENCHANTMENT_EFFECT_VALUE_REMOVEBINOMIALENCHANTMENTEFFECT_HPP
#define NET_MINECRAFT_ENCHANTMENT_EFFECT_VALUE_REMOVEBINOMIALENCHANTMENTEFFECT_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.enchantment.effect.value.RemoveBinomialEnchantmentEffect
 * Remapped: daz
 */
namespace RemoveBinomialEnchantmentEffect {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("daz", "net/minecraft/world/item/enchantment/effects/RemoveBinomial", "net/minecraft/class_9728", "net/minecraft/enchantment/effect/value/RemoveBinomialEnchantmentEffect", "net/minecraft/src/C_336563_"));
        }
        return cachedClass;
    };

    // getter for private field net.minecraft.enchantment.effect.value.RemoveBinomialEnchantmentEffect#chance
    static jobject get_field_chance(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "chance", "comp_2738", "chance", "f_336745_"), "Ldaj;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.enchantment.effect.value.RemoveBinomialEnchantmentEffect#chance
    static void set_field_chance(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "chance", "comp_2738", "chance", "f_336745_"), "Ldaj;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for static public field net.minecraft.enchantment.effect.value.RemoveBinomialEnchantmentEffect#CODEC
    [[maybe_unused]] static jobject get_field_CODEC() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "CODEC", "field_51714", "CODEC", "f_337348_"), "Lcom/mojang/serialization/MapCodec;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.enchantment.effect.value.RemoveBinomialEnchantmentEffect#CODEC
    [[maybe_unused]] static void set_field_CODEC(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "CODEC", "field_51714", "CODEC", "f_337348_"), "Lcom/mojang/serialization/MapCodec;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    static jmethodID methodID_apply() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "process", "method_60213", "apply", "m_338465_"), "(ILayw;F)F");
    }

    static jfloat apply(const jobject& obj, const jint& arg0, const jobject& arg1, const jfloat& arg2) {
                
       const auto methodID = methodID_apply();
       return MinecraftSDK::env->CallFloatMethod(obj, methodID, arg0, arg1, arg2);
    };
    
    static jmethodID methodID_getCodec() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "codec", "method_60211", "getCodec", "m_338751_"), "()Lcom/mojang/serialization/MapCodec;");
    }

    static jobject getCodec(const jobject& obj) {
                
       const auto methodID = methodID_getCodec();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID__chance() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "chance", "comp_2738", "chance", "f_336745_"), "()Ldaj;");
    }

    static jobject _chance(const jobject& obj) {
                
       const auto methodID = methodID__chance();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_ENCHANTMENT_EFFECT_VALUE_REMOVEBINOMIALENCHANTMENTEFFECT_HPP