// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_ENCHANTMENT_EFFECT_VALUE_ADDENCHANTMENTEFFECT_HPP
#define NET_MINECRAFT_ENCHANTMENT_EFFECT_VALUE_ADDENCHANTMENTEFFECT_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.enchantment.effect.value.AddEnchantmentEffect
 * Remapped: dal
 */
namespace AddEnchantmentEffect {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("dal", "net/minecraft/world/item/enchantment/effects/AddValue", "net/minecraft/class_9711", "net/minecraft/enchantment/effect/value/AddEnchantmentEffect", "net/minecraft/src/C_336483_"));
        }
        return cachedClass;
    };

    // getter for private field net.minecraft.enchantment.effect.value.AddEnchantmentEffect#value
    static jobject get_field_value(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "value", "comp_2704", "value", "f_337036_"), "Ldaj;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.enchantment.effect.value.AddEnchantmentEffect#value
    static void set_field_value(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "value", "comp_2704", "value", "f_337036_"), "Ldaj;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for static public field net.minecraft.enchantment.effect.value.AddEnchantmentEffect#CODEC
    [[maybe_unused]] static jobject get_field_CODEC() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "CODEC", "field_51697", "CODEC", "f_337569_"), "Lcom/mojang/serialization/MapCodec;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.enchantment.effect.value.AddEnchantmentEffect#CODEC
    [[maybe_unused]] static void set_field_CODEC(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "CODEC", "field_51697", "CODEC", "f_337569_"), "Lcom/mojang/serialization/MapCodec;");
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
    
    static jmethodID methodID__value() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "value", "comp_2704", "value", "f_337036_"), "()Ldaj;");
    }

    static jobject _value(const jobject& obj) {
                
       const auto methodID = methodID__value();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_ENCHANTMENT_EFFECT_VALUE_ADDENCHANTMENTEFFECT_HPP