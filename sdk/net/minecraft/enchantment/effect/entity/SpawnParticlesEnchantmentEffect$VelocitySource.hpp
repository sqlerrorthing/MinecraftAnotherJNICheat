// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_ENCHANTMENT_EFFECT_ENTITY_SPAWNPARTICLESENCHANTMENTEFFECT$VELOCITYSOURCE_HPP
#define NET_MINECRAFT_ENCHANTMENT_EFFECT_ENTITY_SPAWNPARTICLESENCHANTMENTEFFECT$VELOCITYSOURCE_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.enchantment.effect.entity.SpawnParticlesEnchantmentEffect$VelocitySource
 * Remapped: dbf$c
 */
namespace SpawnParticlesEnchantmentEffect$VelocitySource {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("dbf$c", "net/minecraft/world/item/enchantment/effects/SpawnParticlesEffect$VelocitySource", "net/minecraft/class_9734$class_9738", "net/minecraft/enchantment/effect/entity/SpawnParticlesEnchantmentEffect$VelocitySource", "net/minecraft/src/C_336478_$C_336482_"));
        }
        return cachedClass;
    };

    // getter for private field net.minecraft.enchantment.effect.entity.SpawnParticlesEnchantmentEffect$VelocitySource#movementScale
    static jfloat get_field_movementScale(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "movementScale", "comp_2760", "movementScale", "f_337643_"), "F");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetFloatField(obj, fieldID);
    };

    // setter for static private field net.minecraft.enchantment.effect.entity.SpawnParticlesEnchantmentEffect$VelocitySource#movementScale
    static void set_field_movementScale(const jobject &obj, const jfloat &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "movementScale", "comp_2760", "movementScale", "f_337643_"), "F");
        return MinecraftSDK::env->SetFloatField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.enchantment.effect.entity.SpawnParticlesEnchantmentEffect$VelocitySource#base
    static jobject get_field_base(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "base", "comp_2761", "base", "f_337061_"), "Lbpu;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.enchantment.effect.entity.SpawnParticlesEnchantmentEffect$VelocitySource#base
    static void set_field_base(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "base", "comp_2761", "base", "f_337061_"), "Lbpu;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for static public field net.minecraft.enchantment.effect.entity.SpawnParticlesEnchantmentEffect$VelocitySource#CODEC
    [[maybe_unused]] static jobject get_field_CODEC() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "CODEC", "field_51729", "CODEC", "f_337160_"), "Lcom/mojang/serialization/MapCodec;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.enchantment.effect.entity.SpawnParticlesEnchantmentEffect$VelocitySource#CODEC
    [[maybe_unused]] static void set_field_CODEC(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "CODEC", "field_51729", "CODEC", "f_337160_"), "Lcom/mojang/serialization/MapCodec;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    static jmethodID methodID_getVelocity() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getVelocity", "method_60262", "getVelocity", "m_338406_"), "(DLayw;)D");
    }

    static jdouble getVelocity(const jobject& obj, const jdouble& arg0, const jobject& arg1) {
                
       const auto methodID = methodID_getVelocity();
       return MinecraftSDK::env->CallDoubleMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID__movementScale() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "movementScale", "comp_2760", "movementScale", "f_337643_"), "()F");
    }

    static jfloat _movementScale(const jobject& obj) {
                
       const auto methodID = methodID__movementScale();
       return MinecraftSDK::env->CallFloatMethod(obj, methodID);
    };
    
    static jmethodID methodID__base() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "base", "comp_2761", "base", "f_337061_"), "()Lbpu;");
    }

    static jobject _base(const jobject& obj) {
                
       const auto methodID = methodID__base();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_ENCHANTMENT_EFFECT_ENTITY_SPAWNPARTICLESENCHANTMENTEFFECT$VELOCITYSOURCE_HPP