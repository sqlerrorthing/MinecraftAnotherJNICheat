// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_ENTITY_MOB_SPELLCASTINGILLAGERENTITY$SPELL_HPP
#define NET_MINECRAFT_ENTITY_MOB_SPELLCASTINGILLAGERENTITY$SPELL_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.entity.mob.SpellcastingIllagerEntity$Spell
 * Remapped: ckn$a
 */
namespace SpellcastingIllagerEntity$Spell {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("ckn$a", "net/minecraft/world/entity/monster/SpellcasterIllager$IllagerSpell", "net/minecraft/class_1617$class_1618", "net/minecraft/entity/mob/SpellcastingIllagerEntity$Spell", "net/minecraft/src/C_1067_$C_1068_"));
        }
        return cachedClass;
    };

    // getter for static public field net.minecraft.entity.mob.SpellcastingIllagerEntity$Spell#NONE
    [[maybe_unused]] static jobject get_field_NONE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "NONE", "field_7377", "NONE", "NONE"), "Lckn$a;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.entity.mob.SpellcastingIllagerEntity$Spell#NONE
    [[maybe_unused]] static void set_field_NONE(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "NONE", "field_7377", "NONE", "NONE"), "Lckn$a;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.entity.mob.SpellcastingIllagerEntity$Spell#SUMMON_VEX
    [[maybe_unused]] static jobject get_field_SUMMON_VEX() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "SUMMON_VEX", "field_7379", "SUMMON_VEX", "SUMMON_VEX"), "Lckn$a;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.entity.mob.SpellcastingIllagerEntity$Spell#SUMMON_VEX
    [[maybe_unused]] static void set_field_SUMMON_VEX(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "SUMMON_VEX", "field_7379", "SUMMON_VEX", "SUMMON_VEX"), "Lckn$a;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.entity.mob.SpellcastingIllagerEntity$Spell#FANGS
    [[maybe_unused]] static jobject get_field_FANGS() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "FANGS", "field_7380", "FANGS", "FANGS"), "Lckn$a;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.entity.mob.SpellcastingIllagerEntity$Spell#FANGS
    [[maybe_unused]] static void set_field_FANGS(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "FANGS", "field_7380", "FANGS", "FANGS"), "Lckn$a;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.entity.mob.SpellcastingIllagerEntity$Spell#WOLOLO
    [[maybe_unused]] static jobject get_field_WOLOLO() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("d", "WOLOLO", "field_7381", "WOLOLO", "WOLOLO"), "Lckn$a;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.entity.mob.SpellcastingIllagerEntity$Spell#WOLOLO
    [[maybe_unused]] static void set_field_WOLOLO(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("d", "WOLOLO", "field_7381", "WOLOLO", "WOLOLO"), "Lckn$a;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.entity.mob.SpellcastingIllagerEntity$Spell#DISAPPEAR
    [[maybe_unused]] static jobject get_field_DISAPPEAR() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("e", "DISAPPEAR", "field_7382", "DISAPPEAR", "DISAPPEAR"), "Lckn$a;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.entity.mob.SpellcastingIllagerEntity$Spell#DISAPPEAR
    [[maybe_unused]] static void set_field_DISAPPEAR(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("e", "DISAPPEAR", "field_7382", "DISAPPEAR", "DISAPPEAR"), "Lckn$a;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.entity.mob.SpellcastingIllagerEntity$Spell#BLINDNESS
    [[maybe_unused]] static jobject get_field_BLINDNESS() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("f", "BLINDNESS", "field_7378", "BLINDNESS", "BLINDNESS"), "Lckn$a;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.entity.mob.SpellcastingIllagerEntity$Spell#BLINDNESS
    [[maybe_unused]] static void set_field_BLINDNESS(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("f", "BLINDNESS", "field_7378", "BLINDNESS", "BLINDNESS"), "Lckn$a;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.entity.mob.SpellcastingIllagerEntity$Spell#BY_ID
    [[maybe_unused]] static jobject get_field_BY_ID() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("g", "BY_ID", "field_41674", "BY_ID", "f_262732_"), "Ljava/util/function/IntFunction;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.entity.mob.SpellcastingIllagerEntity$Spell#BY_ID
    [[maybe_unused]] static void set_field_BY_ID(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("g", "BY_ID", "field_41674", "BY_ID", "f_262732_"), "Ljava/util/function/IntFunction;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for default field net.minecraft.entity.mob.SpellcastingIllagerEntity$Spell#id
    static jint get_field_id(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("h", "id", "field_7375", "id", "f_33747_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetIntField(obj, fieldID);
    };

    // setter for static default field net.minecraft.entity.mob.SpellcastingIllagerEntity$Spell#id
    static void set_field_id(const jobject &obj, const jint &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("h", "id", "field_7375", "id", "f_33747_"), "I");
        return MinecraftSDK::env->SetIntField(obj, fieldID, value);
    };

    // getter for default field net.minecraft.entity.mob.SpellcastingIllagerEntity$Spell#particleVelocity
    static jdouble get_field_particleVelocity(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("i", "spellColor", "field_7374", "particleVelocity", "f_33748_"), "[D");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetDoubleField(obj, fieldID);
    };

    // setter for static default field net.minecraft.entity.mob.SpellcastingIllagerEntity$Spell#particleVelocity
    static void set_field_particleVelocity(const jobject &obj, const jdouble &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("i", "spellColor", "field_7374", "particleVelocity", "f_33748_"), "[D");
        return MinecraftSDK::env->SetDoubleField(obj, fieldID, value);
    };

    static jmethodID methodID_values() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("values", "values", "values", "values", "values"), "()[Lckn$a;");
    }

    static jobject values() {
       const auto clazz = self();
       const auto methodID = methodID_values();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID);
    };
    
    static jmethodID methodID_valueOf() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("valueOf", "valueOf", "valueOf", "valueOf", "valueOf"), "(Ljava/lang/String;)Lckn$a;");
    }

    static jobject valueOf(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_valueOf();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_byId() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "byId", "method_7144", "byId", "m_33758_"), "(I)Lckn$a;");
    }

    static jobject byId(const jint& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_byId();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0);
    };
    
};

#endif // NET_MINECRAFT_ENTITY_MOB_SPELLCASTINGILLAGERENTITY$SPELL_HPP