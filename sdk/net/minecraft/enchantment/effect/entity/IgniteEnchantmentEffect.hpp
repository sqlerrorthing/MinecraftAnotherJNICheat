// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_ENCHANTMENT_EFFECT_ENTITY_IGNITEENCHANTMENTEFFECT_HPP
#define NET_MINECRAFT_ENCHANTMENT_EFFECT_ENTITY_IGNITEENCHANTMENTEFFECT_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.enchantment.effect.entity.IgniteEnchantmentEffect
 * Remapped: daw
 */
namespace IgniteEnchantmentEffect {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("daw", "net/minecraft/world/item/enchantment/effects/Ignite", "net/minecraft/class_9725", "net/minecraft/enchantment/effect/entity/IgniteEnchantmentEffect", "net/minecraft/src/C_336470_"));
        }
        return cachedClass;
    };

    // getter for private field net.minecraft.enchantment.effect.entity.IgniteEnchantmentEffect#duration
    static jobject get_field_duration(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "duration", "comp_2733", "duration", "f_336733_"), "Ldaj;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.enchantment.effect.entity.IgniteEnchantmentEffect#duration
    static void set_field_duration(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "duration", "comp_2733", "duration", "f_336733_"), "Ldaj;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for static public field net.minecraft.enchantment.effect.entity.IgniteEnchantmentEffect#CODEC
    [[maybe_unused]] static jobject get_field_CODEC() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "CODEC", "field_51711", "CODEC", "f_337587_"), "Lcom/mojang/serialization/MapCodec;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.enchantment.effect.entity.IgniteEnchantmentEffect#CODEC
    [[maybe_unused]] static void set_field_CODEC(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "CODEC", "field_51711", "CODEC", "f_337587_"), "Lcom/mojang/serialization/MapCodec;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    static jmethodID methodID_apply() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "apply", "method_60220", "apply", "m_338607_"), "(Laqu;ILdab;Lbsr;Lexc;)V");
    }

    static void apply(const jobject& obj, const jobject& arg0, const jint& arg1, const jobject& arg2, const jobject& arg3, const jobject& arg4) {
                
       const auto methodID = methodID_apply();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1, arg2, arg3, arg4);
    };
    
    static jmethodID methodID_getCodec() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "codec", "method_60219", "getCodec", "m_338403_"), "()Lcom/mojang/serialization/MapCodec;");
    }

    static jobject getCodec(const jobject& obj) {
                
       const auto methodID = methodID_getCodec();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID__duration() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "duration", "comp_2733", "duration", "f_336733_"), "()Ldaj;");
    }

    static jobject _duration(const jobject& obj) {
                
       const auto methodID = methodID__duration();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_ENCHANTMENT_EFFECT_ENTITY_IGNITEENCHANTMENTEFFECT_HPP