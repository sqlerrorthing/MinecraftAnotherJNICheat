// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_REGISTRY_TAG_DAMAGETYPETAGS_HPP
#define NET_MINECRAFT_REGISTRY_TAG_DAMAGETYPETAGS_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.registry.tag.DamageTypeTags
 * Remapped: awg
 */
namespace DamageTypeTags {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("awg", "net/minecraft/tags/DamageTypeTags", "net/minecraft/class_8103", "net/minecraft/registry/tag/DamageTypeTags", "net/minecraft/src/C_268400_"));
        }
        return cachedClass;
    };

    // getter for static public field net.minecraft.registry.tag.DamageTypeTags#DAMAGES_HELMET
    [[maybe_unused]] static jobject get_field_DAMAGES_HELMET() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "DAMAGES_HELMET", "field_42240", "DAMAGES_HELMET", "f_268627_"), "Lawu;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.registry.tag.DamageTypeTags#DAMAGES_HELMET
    [[maybe_unused]] static void set_field_DAMAGES_HELMET(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "DAMAGES_HELMET", "field_42240", "DAMAGES_HELMET", "f_268627_"), "Lawu;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.registry.tag.DamageTypeTags#BYPASSES_ARMOR
    [[maybe_unused]] static jobject get_field_BYPASSES_ARMOR() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "BYPASSES_ARMOR", "field_42241", "BYPASSES_ARMOR", "f_268490_"), "Lawu;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.registry.tag.DamageTypeTags#BYPASSES_ARMOR
    [[maybe_unused]] static void set_field_BYPASSES_ARMOR(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "BYPASSES_ARMOR", "field_42241", "BYPASSES_ARMOR", "f_268490_"), "Lawu;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.registry.tag.DamageTypeTags#BYPASSES_SHIELD
    [[maybe_unused]] static jobject get_field_BYPASSES_SHIELD() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "BYPASSES_SHIELD", "field_43116", "BYPASSES_SHIELD", "f_276146_"), "Lawu;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.registry.tag.DamageTypeTags#BYPASSES_SHIELD
    [[maybe_unused]] static void set_field_BYPASSES_SHIELD(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "BYPASSES_SHIELD", "field_43116", "BYPASSES_SHIELD", "f_276146_"), "Lawu;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.registry.tag.DamageTypeTags#BYPASSES_INVULNERABILITY
    [[maybe_unused]] static jobject get_field_BYPASSES_INVULNERABILITY() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("d", "BYPASSES_INVULNERABILITY", "field_42242", "BYPASSES_INVULNERABILITY", "f_268738_"), "Lawu;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.registry.tag.DamageTypeTags#BYPASSES_INVULNERABILITY
    [[maybe_unused]] static void set_field_BYPASSES_INVULNERABILITY(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("d", "BYPASSES_INVULNERABILITY", "field_42242", "BYPASSES_INVULNERABILITY", "f_268738_"), "Lawu;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.registry.tag.DamageTypeTags#BYPASSES_COOLDOWN
    [[maybe_unused]] static jobject get_field_BYPASSES_COOLDOWN() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("e", "BYPASSES_COOLDOWN", "field_42969", "BYPASSES_COOLDOWN", "f_273918_"), "Lawu;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.registry.tag.DamageTypeTags#BYPASSES_COOLDOWN
    [[maybe_unused]] static void set_field_BYPASSES_COOLDOWN(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("e", "BYPASSES_COOLDOWN", "field_42969", "BYPASSES_COOLDOWN", "f_273918_"), "Lawu;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.registry.tag.DamageTypeTags#BYPASSES_EFFECTS
    [[maybe_unused]] static jobject get_field_BYPASSES_EFFECTS() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("f", "BYPASSES_EFFECTS", "field_42243", "BYPASSES_EFFECTS", "f_268437_"), "Lawu;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.registry.tag.DamageTypeTags#BYPASSES_EFFECTS
    [[maybe_unused]] static void set_field_BYPASSES_EFFECTS(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("f", "BYPASSES_EFFECTS", "field_42243", "BYPASSES_EFFECTS", "f_268437_"), "Lawu;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.registry.tag.DamageTypeTags#BYPASSES_RESISTANCE
    [[maybe_unused]] static jobject get_field_BYPASSES_RESISTANCE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("g", "BYPASSES_RESISTANCE", "field_42244", "BYPASSES_RESISTANCE", "f_268630_"), "Lawu;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.registry.tag.DamageTypeTags#BYPASSES_RESISTANCE
    [[maybe_unused]] static void set_field_BYPASSES_RESISTANCE(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("g", "BYPASSES_RESISTANCE", "field_42244", "BYPASSES_RESISTANCE", "f_268630_"), "Lawu;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.registry.tag.DamageTypeTags#BYPASSES_ENCHANTMENTS
    [[maybe_unused]] static jobject get_field_BYPASSES_ENCHANTMENTS() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("h", "BYPASSES_ENCHANTMENTS", "field_42245", "BYPASSES_ENCHANTMENTS", "f_268413_"), "Lawu;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.registry.tag.DamageTypeTags#BYPASSES_ENCHANTMENTS
    [[maybe_unused]] static void set_field_BYPASSES_ENCHANTMENTS(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("h", "BYPASSES_ENCHANTMENTS", "field_42245", "BYPASSES_ENCHANTMENTS", "f_268413_"), "Lawu;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.registry.tag.DamageTypeTags#IS_FIRE
    [[maybe_unused]] static jobject get_field_IS_FIRE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("i", "IS_FIRE", "field_42246", "IS_FIRE", "f_268745_"), "Lawu;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.registry.tag.DamageTypeTags#IS_FIRE
    [[maybe_unused]] static void set_field_IS_FIRE(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("i", "IS_FIRE", "field_42246", "IS_FIRE", "f_268745_"), "Lawu;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.registry.tag.DamageTypeTags#IS_PROJECTILE
    [[maybe_unused]] static jobject get_field_IS_PROJECTILE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("j", "IS_PROJECTILE", "field_42247", "IS_PROJECTILE", "f_268524_"), "Lawu;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.registry.tag.DamageTypeTags#IS_PROJECTILE
    [[maybe_unused]] static void set_field_IS_PROJECTILE(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("j", "IS_PROJECTILE", "field_42247", "IS_PROJECTILE", "f_268524_"), "Lawu;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.registry.tag.DamageTypeTags#WITCH_RESISTANT_TO
    [[maybe_unused]] static jobject get_field_WITCH_RESISTANT_TO() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("k", "WITCH_RESISTANT_TO", "field_42248", "WITCH_RESISTANT_TO", "f_268731_"), "Lawu;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.registry.tag.DamageTypeTags#WITCH_RESISTANT_TO
    [[maybe_unused]] static void set_field_WITCH_RESISTANT_TO(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("k", "WITCH_RESISTANT_TO", "field_42248", "WITCH_RESISTANT_TO", "f_268731_"), "Lawu;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.registry.tag.DamageTypeTags#IS_EXPLOSION
    [[maybe_unused]] static jobject get_field_IS_EXPLOSION() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("l", "IS_EXPLOSION", "field_42249", "IS_EXPLOSION", "f_268415_"), "Lawu;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.registry.tag.DamageTypeTags#IS_EXPLOSION
    [[maybe_unused]] static void set_field_IS_EXPLOSION(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("l", "IS_EXPLOSION", "field_42249", "IS_EXPLOSION", "f_268415_"), "Lawu;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.registry.tag.DamageTypeTags#IS_FALL
    [[maybe_unused]] static jobject get_field_IS_FALL() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("m", "IS_FALL", "field_42250", "IS_FALL", "f_268549_"), "Lawu;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.registry.tag.DamageTypeTags#IS_FALL
    [[maybe_unused]] static void set_field_IS_FALL(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("m", "IS_FALL", "field_42250", "IS_FALL", "f_268549_"), "Lawu;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.registry.tag.DamageTypeTags#IS_DROWNING
    [[maybe_unused]] static jobject get_field_IS_DROWNING() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("n", "IS_DROWNING", "field_42251", "IS_DROWNING", "f_268581_"), "Lawu;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.registry.tag.DamageTypeTags#IS_DROWNING
    [[maybe_unused]] static void set_field_IS_DROWNING(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("n", "IS_DROWNING", "field_42251", "IS_DROWNING", "f_268581_"), "Lawu;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.registry.tag.DamageTypeTags#IS_FREEZING
    [[maybe_unused]] static jobject get_field_IS_FREEZING() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("o", "IS_FREEZING", "field_42252", "IS_FREEZING", "f_268419_"), "Lawu;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.registry.tag.DamageTypeTags#IS_FREEZING
    [[maybe_unused]] static void set_field_IS_FREEZING(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("o", "IS_FREEZING", "field_42252", "IS_FREEZING", "f_268419_"), "Lawu;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.registry.tag.DamageTypeTags#IS_LIGHTNING
    [[maybe_unused]] static jobject get_field_IS_LIGHTNING() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("p", "IS_LIGHTNING", "field_42253", "IS_LIGHTNING", "f_268725_"), "Lawu;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.registry.tag.DamageTypeTags#IS_LIGHTNING
    [[maybe_unused]] static void set_field_IS_LIGHTNING(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("p", "IS_LIGHTNING", "field_42253", "IS_LIGHTNING", "f_268725_"), "Lawu;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.registry.tag.DamageTypeTags#NO_ANGER
    [[maybe_unused]] static jobject get_field_NO_ANGER() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("q", "NO_ANGER", "field_42254", "NO_ANGER", "f_268718_"), "Lawu;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.registry.tag.DamageTypeTags#NO_ANGER
    [[maybe_unused]] static void set_field_NO_ANGER(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("q", "NO_ANGER", "field_42254", "NO_ANGER", "f_268718_"), "Lawu;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.registry.tag.DamageTypeTags#NO_IMPACT
    [[maybe_unused]] static jobject get_field_NO_IMPACT() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("r", "NO_IMPACT", "field_42255", "NO_IMPACT", "f_268467_"), "Lawu;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.registry.tag.DamageTypeTags#NO_IMPACT
    [[maybe_unused]] static void set_field_NO_IMPACT(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("r", "NO_IMPACT", "field_42255", "NO_IMPACT", "f_268467_"), "Lawu;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.registry.tag.DamageTypeTags#ALWAYS_MOST_SIGNIFICANT_FALL
    [[maybe_unused]] static jobject get_field_ALWAYS_MOST_SIGNIFICANT_FALL() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("s", "ALWAYS_MOST_SIGNIFICANT_FALL", "field_42256", "ALWAYS_MOST_SIGNIFICANT_FALL", "f_268518_"), "Lawu;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.registry.tag.DamageTypeTags#ALWAYS_MOST_SIGNIFICANT_FALL
    [[maybe_unused]] static void set_field_ALWAYS_MOST_SIGNIFICANT_FALL(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("s", "ALWAYS_MOST_SIGNIFICANT_FALL", "field_42256", "ALWAYS_MOST_SIGNIFICANT_FALL", "f_268518_"), "Lawu;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.registry.tag.DamageTypeTags#WITHER_IMMUNE_TO
    [[maybe_unused]] static jobject get_field_WITHER_IMMUNE_TO() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("t", "WITHER_IMMUNE_TO", "field_42257", "WITHER_IMMUNE_TO", "f_268484_"), "Lawu;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.registry.tag.DamageTypeTags#WITHER_IMMUNE_TO
    [[maybe_unused]] static void set_field_WITHER_IMMUNE_TO(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("t", "WITHER_IMMUNE_TO", "field_42257", "WITHER_IMMUNE_TO", "f_268484_"), "Lawu;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.registry.tag.DamageTypeTags#IGNITES_ARMOR_STANDS
    [[maybe_unused]] static jobject get_field_IGNITES_ARMOR_STANDS() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("u", "IGNITES_ARMOR_STANDS", "field_42258", "IGNITES_ARMOR_STANDS", "f_268727_"), "Lawu;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.registry.tag.DamageTypeTags#IGNITES_ARMOR_STANDS
    [[maybe_unused]] static void set_field_IGNITES_ARMOR_STANDS(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("u", "IGNITES_ARMOR_STANDS", "field_42258", "IGNITES_ARMOR_STANDS", "f_268727_"), "Lawu;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.registry.tag.DamageTypeTags#BURNS_ARMOR_STANDS
    [[maybe_unused]] static jobject get_field_BURNS_ARMOR_STANDS() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("v", "BURNS_ARMOR_STANDS", "field_42259", "BURNS_ARMOR_STANDS", "f_268711_"), "Lawu;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.registry.tag.DamageTypeTags#BURNS_ARMOR_STANDS
    [[maybe_unused]] static void set_field_BURNS_ARMOR_STANDS(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("v", "BURNS_ARMOR_STANDS", "field_42259", "BURNS_ARMOR_STANDS", "f_268711_"), "Lawu;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.registry.tag.DamageTypeTags#AVOIDS_GUARDIAN_THORNS
    [[maybe_unused]] static jobject get_field_AVOIDS_GUARDIAN_THORNS() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("w", "AVOIDS_GUARDIAN_THORNS", "field_42260", "AVOIDS_GUARDIAN_THORNS", "f_268640_"), "Lawu;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.registry.tag.DamageTypeTags#AVOIDS_GUARDIAN_THORNS
    [[maybe_unused]] static void set_field_AVOIDS_GUARDIAN_THORNS(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("w", "AVOIDS_GUARDIAN_THORNS", "field_42260", "AVOIDS_GUARDIAN_THORNS", "f_268640_"), "Lawu;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.registry.tag.DamageTypeTags#ALWAYS_TRIGGERS_SILVERFISH
    [[maybe_unused]] static jobject get_field_ALWAYS_TRIGGERS_SILVERFISH() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("x", "ALWAYS_TRIGGERS_SILVERFISH", "field_42261", "ALWAYS_TRIGGERS_SILVERFISH", "f_268750_"), "Lawu;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.registry.tag.DamageTypeTags#ALWAYS_TRIGGERS_SILVERFISH
    [[maybe_unused]] static void set_field_ALWAYS_TRIGGERS_SILVERFISH(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("x", "ALWAYS_TRIGGERS_SILVERFISH", "field_42261", "ALWAYS_TRIGGERS_SILVERFISH", "f_268750_"), "Lawu;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.registry.tag.DamageTypeTags#ALWAYS_HURTS_ENDER_DRAGONS
    [[maybe_unused]] static jobject get_field_ALWAYS_HURTS_ENDER_DRAGONS() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("y", "ALWAYS_HURTS_ENDER_DRAGONS", "field_42970", "ALWAYS_HURTS_ENDER_DRAGONS", "f_273821_"), "Lawu;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.registry.tag.DamageTypeTags#ALWAYS_HURTS_ENDER_DRAGONS
    [[maybe_unused]] static void set_field_ALWAYS_HURTS_ENDER_DRAGONS(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("y", "ALWAYS_HURTS_ENDER_DRAGONS", "field_42970", "ALWAYS_HURTS_ENDER_DRAGONS", "f_273821_"), "Lawu;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.registry.tag.DamageTypeTags#NO_KNOCKBACK
    [[maybe_unused]] static jobject get_field_NO_KNOCKBACK() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("z", "NO_KNOCKBACK", "field_45065", "NO_KNOCKBACK", "f_291118_"), "Lawu;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.registry.tag.DamageTypeTags#NO_KNOCKBACK
    [[maybe_unused]] static void set_field_NO_KNOCKBACK(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("z", "NO_KNOCKBACK", "field_45065", "NO_KNOCKBACK", "f_291118_"), "Lawu;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.registry.tag.DamageTypeTags#ALWAYS_KILLS_ARMOR_STANDS
    [[maybe_unused]] static jobject get_field_ALWAYS_KILLS_ARMOR_STANDS() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("A", "ALWAYS_KILLS_ARMOR_STANDS", "field_46211", "ALWAYS_KILLS_ARMOR_STANDS", "f_301787_"), "Lawu;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.registry.tag.DamageTypeTags#ALWAYS_KILLS_ARMOR_STANDS
    [[maybe_unused]] static void set_field_ALWAYS_KILLS_ARMOR_STANDS(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("A", "ALWAYS_KILLS_ARMOR_STANDS", "field_46211", "ALWAYS_KILLS_ARMOR_STANDS", "f_301787_"), "Lawu;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.registry.tag.DamageTypeTags#CAN_BREAK_ARMOR_STAND
    [[maybe_unused]] static jobject get_field_CAN_BREAK_ARMOR_STAND() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("B", "CAN_BREAK_ARMOR_STAND", "field_46230", "CAN_BREAK_ARMOR_STAND", "f_303155_"), "Lawu;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.registry.tag.DamageTypeTags#CAN_BREAK_ARMOR_STAND
    [[maybe_unused]] static void set_field_CAN_BREAK_ARMOR_STAND(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("B", "CAN_BREAK_ARMOR_STAND", "field_46230", "CAN_BREAK_ARMOR_STAND", "f_303155_"), "Lawu;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.registry.tag.DamageTypeTags#BYPASSES_WOLF_ARMOR
    [[maybe_unused]] static jobject get_field_BYPASSES_WOLF_ARMOR() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("C", "BYPASSES_WOLF_ARMOR", "field_49182", "BYPASSES_WOLF_ARMOR", "f_316562_"), "Lawu;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.registry.tag.DamageTypeTags#BYPASSES_WOLF_ARMOR
    [[maybe_unused]] static void set_field_BYPASSES_WOLF_ARMOR(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("C", "BYPASSES_WOLF_ARMOR", "field_49182", "BYPASSES_WOLF_ARMOR", "f_316562_"), "Lawu;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.registry.tag.DamageTypeTags#IS_PLAYER_ATTACK
    [[maybe_unused]] static jobject get_field_IS_PLAYER_ATTACK() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("D", "IS_PLAYER_ATTACK", "field_50104", "IS_PLAYER_ATTACK", "f_314599_"), "Lawu;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.registry.tag.DamageTypeTags#IS_PLAYER_ATTACK
    [[maybe_unused]] static void set_field_IS_PLAYER_ATTACK(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("D", "IS_PLAYER_ATTACK", "field_50104", "IS_PLAYER_ATTACK", "f_314599_"), "Lawu;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.registry.tag.DamageTypeTags#BURN_FROM_STEPPING
    [[maybe_unused]] static jobject get_field_BURN_FROM_STEPPING() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("E", "BURN_FROM_STEPPING", "field_51527", "BURN_FROM_STEPPING", "f_337133_"), "Lawu;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.registry.tag.DamageTypeTags#BURN_FROM_STEPPING
    [[maybe_unused]] static void set_field_BURN_FROM_STEPPING(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("E", "BURN_FROM_STEPPING", "field_51527", "BURN_FROM_STEPPING", "f_337133_"), "Lawu;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.registry.tag.DamageTypeTags#PANIC_CAUSES
    [[maybe_unused]] static jobject get_field_PANIC_CAUSES() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("F", "PANIC_CAUSES", "field_51990", "PANIC_CAUSES", "f_336858_"), "Lawu;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.registry.tag.DamageTypeTags#PANIC_CAUSES
    [[maybe_unused]] static void set_field_PANIC_CAUSES(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("F", "PANIC_CAUSES", "field_51990", "PANIC_CAUSES", "f_336858_"), "Lawu;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.registry.tag.DamageTypeTags#PANIC_ENVIRONMENTAL_CAUSES
    [[maybe_unused]] static jobject get_field_PANIC_ENVIRONMENTAL_CAUSES() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("G", "PANIC_ENVIRONMENTAL_CAUSES", "field_51991", "PANIC_ENVIRONMENTAL_CAUSES", "f_336832_"), "Lawu;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.registry.tag.DamageTypeTags#PANIC_ENVIRONMENTAL_CAUSES
    [[maybe_unused]] static void set_field_PANIC_ENVIRONMENTAL_CAUSES(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("G", "PANIC_ENVIRONMENTAL_CAUSES", "field_51991", "PANIC_ENVIRONMENTAL_CAUSES", "f_336832_"), "Lawu;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    static jmethodID methodID_of() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "create", "method_48762", "of", "m_269529_"), "(Ljava/lang/String;)Lawu;");
    }

    static jobject of(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_of();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0);
    };
    
};

#endif // NET_MINECRAFT_REGISTRY_TAG_DAMAGETYPETAGS_HPP