// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_ENCHANTMENT_EFFECT_ENCHANTMENTEFFECTTARGET_HPP
#define NET_MINECRAFT_ENCHANTMENT_EFFECT_ENCHANTMENTEFFECTTARGET_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.enchantment.effect.EnchantmentEffectTarget
 * Remapped: dag
 */
namespace EnchantmentEffectTarget {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("dag", "net/minecraft/world/item/enchantment/EnchantmentTarget", "net/minecraft/class_9703", "net/minecraft/enchantment/effect/EnchantmentEffectTarget", "net/minecraft/src/C_336515_"));
        }
        return cachedClass;
    };

    // getter for static public field net.minecraft.enchantment.effect.EnchantmentEffectTarget#ATTACKER
    [[maybe_unused]] static jobject get_field_ATTACKER() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "ATTACKER", "field_51683", "ATTACKER", "ATTACKER"), "Ldag;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.enchantment.effect.EnchantmentEffectTarget#ATTACKER
    [[maybe_unused]] static void set_field_ATTACKER(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "ATTACKER", "field_51683", "ATTACKER", "ATTACKER"), "Ldag;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.enchantment.effect.EnchantmentEffectTarget#DAMAGING_ENTITY
    [[maybe_unused]] static jobject get_field_DAMAGING_ENTITY() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "DAMAGING_ENTITY", "field_51684", "DAMAGING_ENTITY", "DAMAGING_ENTITY"), "Ldag;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.enchantment.effect.EnchantmentEffectTarget#DAMAGING_ENTITY
    [[maybe_unused]] static void set_field_DAMAGING_ENTITY(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "DAMAGING_ENTITY", "field_51684", "DAMAGING_ENTITY", "DAMAGING_ENTITY"), "Ldag;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.enchantment.effect.EnchantmentEffectTarget#VICTIM
    [[maybe_unused]] static jobject get_field_VICTIM() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "VICTIM", "field_51685", "VICTIM", "VICTIM"), "Ldag;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.enchantment.effect.EnchantmentEffectTarget#VICTIM
    [[maybe_unused]] static void set_field_VICTIM(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "VICTIM", "field_51685", "VICTIM", "VICTIM"), "Ldag;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.enchantment.effect.EnchantmentEffectTarget#CODEC
    [[maybe_unused]] static jobject get_field_CODEC() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("d", "CODEC", "field_51686", "CODEC", "f_337107_"), "Lcom/mojang/serialization/Codec;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.enchantment.effect.EnchantmentEffectTarget#CODEC
    [[maybe_unused]] static void set_field_CODEC(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("d", "CODEC", "field_51686", "CODEC", "f_337107_"), "Lcom/mojang/serialization/Codec;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for private field net.minecraft.enchantment.effect.EnchantmentEffectTarget#id
    static jobject get_field_id(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "id", "field_51687", "id", "f_337075_"), "Ljava/lang/String;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.enchantment.effect.EnchantmentEffectTarget#id
    static void set_field_id(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "id", "field_51687", "id", "f_337075_"), "Ljava/lang/String;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID_values() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("values", "values", "values", "values", "values"), "()[Ldag;");
    }

    static jobject values() {
       const auto clazz = self();
       const auto methodID = methodID_values();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID);
    };
    
    static jmethodID methodID_valueOf() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("valueOf", "valueOf", "valueOf", "valueOf", "valueOf"), "(Ljava/lang/String;)Ldag;");
    }

    static jobject valueOf(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_valueOf();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_asString() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "getSerializedName", "method_15434", "asString", "m_7912_"), "()Ljava/lang/String;");
    }

    static jobject asString(const jobject& obj) {
                
       const auto methodID = methodID_asString();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_ENCHANTMENT_EFFECT_ENCHANTMENTEFFECTTARGET_HPP