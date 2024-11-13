// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_ENCHANTMENT_EFFECT_ENTITY_SPAWNPARTICLESENCHANTMENTEFFECT$POSITIONSOURCETYPE_HPP
#define NET_MINECRAFT_ENCHANTMENT_EFFECT_ENTITY_SPAWNPARTICLESENCHANTMENTEFFECT$POSITIONSOURCETYPE_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.enchantment.effect.entity.SpawnParticlesEnchantmentEffect$PositionSourceType
 * Remapped: dbf$b
 */
namespace SpawnParticlesEnchantmentEffect$PositionSourceType {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("dbf$b", "net/minecraft/world/item/enchantment/effects/SpawnParticlesEffect$PositionSourceType", "net/minecraft/class_9734$class_9736", "net/minecraft/enchantment/effect/entity/SpawnParticlesEnchantmentEffect$PositionSourceType", "net/minecraft/src/C_336478_$C_336596_"));
        }
        return cachedClass;
    };

    // getter for static public field net.minecraft.enchantment.effect.entity.SpawnParticlesEnchantmentEffect$PositionSourceType#ENTITY_POSITION
    [[maybe_unused]] static jobject get_field_ENTITY_POSITION() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "ENTITY_POSITION", "field_51723", "ENTITY_POSITION", "ENTITY_POSITION"), "Ldbf$b;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.enchantment.effect.entity.SpawnParticlesEnchantmentEffect$PositionSourceType#ENTITY_POSITION
    [[maybe_unused]] static void set_field_ENTITY_POSITION(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "ENTITY_POSITION", "field_51723", "ENTITY_POSITION", "ENTITY_POSITION"), "Ldbf$b;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.enchantment.effect.entity.SpawnParticlesEnchantmentEffect$PositionSourceType#BOUNDING_BOX
    [[maybe_unused]] static jobject get_field_BOUNDING_BOX() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "BOUNDING_BOX", "field_51724", "BOUNDING_BOX", "BOUNDING_BOX"), "Ldbf$b;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.enchantment.effect.entity.SpawnParticlesEnchantmentEffect$PositionSourceType#BOUNDING_BOX
    [[maybe_unused]] static void set_field_BOUNDING_BOX(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "BOUNDING_BOX", "field_51724", "BOUNDING_BOX", "BOUNDING_BOX"), "Ldbf$b;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.enchantment.effect.entity.SpawnParticlesEnchantmentEffect$PositionSourceType#CODEC
    [[maybe_unused]] static jobject get_field_CODEC() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "CODEC", "field_51725", "CODEC", "f_336797_"), "Lcom/mojang/serialization/Codec;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.enchantment.effect.entity.SpawnParticlesEnchantmentEffect$PositionSourceType#CODEC
    [[maybe_unused]] static void set_field_CODEC(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "CODEC", "field_51725", "CODEC", "f_336797_"), "Lcom/mojang/serialization/Codec;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for private field net.minecraft.enchantment.effect.entity.SpawnParticlesEnchantmentEffect$PositionSourceType#id
    static jobject get_field_id(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "id", "field_51726", "id", "f_337164_"), "Ljava/lang/String;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.enchantment.effect.entity.SpawnParticlesEnchantmentEffect$PositionSourceType#id
    static void set_field_id(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "id", "field_51726", "id", "f_337164_"), "Ljava/lang/String;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.enchantment.effect.entity.SpawnParticlesEnchantmentEffect$PositionSourceType#coordinateSource
    static jobject get_field_coordinateSource(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "source", "field_51727", "coordinateSource", "f_336984_"), "Ldbf$b$a;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.enchantment.effect.entity.SpawnParticlesEnchantmentEffect$PositionSourceType#coordinateSource
    static void set_field_coordinateSource(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "source", "field_51727", "coordinateSource", "f_336984_"), "Ldbf$b$a;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID_values() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("values", "values", "values", "values", "values"), "()[Ldbf$b;");
    }

    static jobject values() {
       const auto clazz = self();
       const auto methodID = methodID_values();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID);
    };
    
    static jmethodID methodID_valueOf() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("valueOf", "valueOf", "valueOf", "valueOf", "valueOf"), "(Ljava/lang/String;)Ldbf$b;");
    }

    static jobject valueOf(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_valueOf();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_getCoordinate() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getCoordinate", "method_60259", "getCoordinate", "m_339622_"), "(DDFLayw;)D");
    }

    static jdouble getCoordinate(const jobject& obj, const jdouble& arg0, const jdouble& arg1, const jfloat& arg2, const jobject& arg3) {
                
       const auto methodID = methodID_getCoordinate();
       return MinecraftSDK::env->CallDoubleMethod(obj, methodID, arg0, arg1, arg2, arg3);
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

#endif // NET_MINECRAFT_ENCHANTMENT_EFFECT_ENTITY_SPAWNPARTICLESENCHANTMENTEFFECT$POSITIONSOURCETYPE_HPP