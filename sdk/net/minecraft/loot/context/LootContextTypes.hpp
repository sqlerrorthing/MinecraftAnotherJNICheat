// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_LOOT_CONTEXT_LOOTCONTEXTTYPES_HPP
#define NET_MINECRAFT_LOOT_CONTEXT_LOOTCONTEXTTYPES_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.loot.context.LootContextTypes
 * Remapped: eum
 */
namespace LootContextTypes {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("eum", "net/minecraft/world/level/storage/loot/parameters/LootContextParamSets", "net/minecraft/class_173", "net/minecraft/loot/context/LootContextTypes", "net/minecraft/src/C_2973_"));
        }
        return cachedClass;
    };

    // getter for static private field net.minecraft.loot.context.LootContextTypes#MAP
    [[maybe_unused]] static jobject get_field_MAP() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("y", "REGISTRY", "field_1178", "MAP", "f_81422_"), "Lcom/google/common/collect/BiMap;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.loot.context.LootContextTypes#MAP
    [[maybe_unused]] static void set_field_MAP(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("y", "REGISTRY", "field_1178", "MAP", "f_81422_"), "Lcom/google/common/collect/BiMap;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.loot.context.LootContextTypes#CODEC
    [[maybe_unused]] static jobject get_field_CODEC() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "CODEC", "field_45856", "CODEC", "f_290720_"), "Lcom/mojang/serialization/Codec;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.loot.context.LootContextTypes#CODEC
    [[maybe_unused]] static void set_field_CODEC(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "CODEC", "field_45856", "CODEC", "f_290720_"), "Lcom/mojang/serialization/Codec;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.loot.context.LootContextTypes#EMPTY
    [[maybe_unused]] static jobject get_field_EMPTY() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "EMPTY", "field_1175", "EMPTY", "f_81410_"), "Leul;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.loot.context.LootContextTypes#EMPTY
    [[maybe_unused]] static void set_field_EMPTY(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "EMPTY", "field_1175", "EMPTY", "f_81410_"), "Leul;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.loot.context.LootContextTypes#CHEST
    [[maybe_unused]] static jobject get_field_CHEST() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "CHEST", "field_1179", "CHEST", "f_81411_"), "Leul;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.loot.context.LootContextTypes#CHEST
    [[maybe_unused]] static void set_field_CHEST(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "CHEST", "field_1179", "CHEST", "f_81411_"), "Leul;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.loot.context.LootContextTypes#COMMAND
    [[maybe_unused]] static jobject get_field_COMMAND() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("d", "COMMAND", "field_20761", "COMMAND", "f_81412_"), "Leul;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.loot.context.LootContextTypes#COMMAND
    [[maybe_unused]] static void set_field_COMMAND(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("d", "COMMAND", "field_20761", "COMMAND", "f_81412_"), "Leul;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.loot.context.LootContextTypes#SELECTOR
    [[maybe_unused]] static jobject get_field_SELECTOR() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("e", "SELECTOR", "field_20762", "SELECTOR", "f_81413_"), "Leul;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.loot.context.LootContextTypes#SELECTOR
    [[maybe_unused]] static void set_field_SELECTOR(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("e", "SELECTOR", "field_20762", "SELECTOR", "f_81413_"), "Leul;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.loot.context.LootContextTypes#FISHING
    [[maybe_unused]] static jobject get_field_FISHING() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("f", "FISHING", "field_1176", "FISHING", "f_81414_"), "Leul;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.loot.context.LootContextTypes#FISHING
    [[maybe_unused]] static void set_field_FISHING(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("f", "FISHING", "field_1176", "FISHING", "f_81414_"), "Leul;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.loot.context.LootContextTypes#ENTITY
    [[maybe_unused]] static jobject get_field_ENTITY() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("g", "ENTITY", "field_1173", "ENTITY", "f_81415_"), "Leul;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.loot.context.LootContextTypes#ENTITY
    [[maybe_unused]] static void set_field_ENTITY(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("g", "ENTITY", "field_1173", "ENTITY", "f_81415_"), "Leul;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.loot.context.LootContextTypes#EQUIPMENT
    [[maybe_unused]] static jobject get_field_EQUIPMENT() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("h", "EQUIPMENT", "field_50217", "EQUIPMENT", "f_313897_"), "Leul;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.loot.context.LootContextTypes#EQUIPMENT
    [[maybe_unused]] static void set_field_EQUIPMENT(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("h", "EQUIPMENT", "field_50217", "EQUIPMENT", "f_313897_"), "Leul;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.loot.context.LootContextTypes#ARCHAEOLOGY
    [[maybe_unused]] static jobject get_field_ARCHAEOLOGY() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("i", "ARCHAEOLOGY", "field_42858", "ARCHAEOLOGY", "f_271368_"), "Leul;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.loot.context.LootContextTypes#ARCHAEOLOGY
    [[maybe_unused]] static void set_field_ARCHAEOLOGY(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("i", "ARCHAEOLOGY", "field_42858", "ARCHAEOLOGY", "f_271368_"), "Leul;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.loot.context.LootContextTypes#GIFT
    [[maybe_unused]] static jobject get_field_GIFT() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("j", "GIFT", "field_16235", "GIFT", "f_81416_"), "Leul;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.loot.context.LootContextTypes#GIFT
    [[maybe_unused]] static void set_field_GIFT(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("j", "GIFT", "field_16235", "GIFT", "f_81416_"), "Leul;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.loot.context.LootContextTypes#BARTER
    [[maybe_unused]] static jobject get_field_BARTER() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("k", "PIGLIN_BARTER", "field_22403", "BARTER", "f_81417_"), "Leul;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.loot.context.LootContextTypes#BARTER
    [[maybe_unused]] static void set_field_BARTER(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("k", "PIGLIN_BARTER", "field_22403", "BARTER", "f_81417_"), "Leul;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.loot.context.LootContextTypes#VAULT
    [[maybe_unused]] static jobject get_field_VAULT() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("l", "VAULT", "field_48928", "VAULT", "f_317143_"), "Leul;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.loot.context.LootContextTypes#VAULT
    [[maybe_unused]] static void set_field_VAULT(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("l", "VAULT", "field_48928", "VAULT", "f_317143_"), "Leul;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.loot.context.LootContextTypes#ADVANCEMENT_REWARD
    [[maybe_unused]] static jobject get_field_ADVANCEMENT_REWARD() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("m", "ADVANCEMENT_REWARD", "field_1174", "ADVANCEMENT_REWARD", "f_81418_"), "Leul;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.loot.context.LootContextTypes#ADVANCEMENT_REWARD
    [[maybe_unused]] static void set_field_ADVANCEMENT_REWARD(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("m", "ADVANCEMENT_REWARD", "field_1174", "ADVANCEMENT_REWARD", "f_81418_"), "Leul;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.loot.context.LootContextTypes#ADVANCEMENT_ENTITY
    [[maybe_unused]] static jobject get_field_ADVANCEMENT_ENTITY() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("n", "ADVANCEMENT_ENTITY", "field_24423", "ADVANCEMENT_ENTITY", "f_81419_"), "Leul;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.loot.context.LootContextTypes#ADVANCEMENT_ENTITY
    [[maybe_unused]] static void set_field_ADVANCEMENT_ENTITY(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("n", "ADVANCEMENT_ENTITY", "field_24423", "ADVANCEMENT_ENTITY", "f_81419_"), "Leul;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.loot.context.LootContextTypes#ADVANCEMENT_LOCATION
    [[maybe_unused]] static jobject get_field_ADVANCEMENT_LOCATION() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("o", "ADVANCEMENT_LOCATION", "field_44788", "ADVANCEMENT_LOCATION", "f_285637_"), "Leul;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.loot.context.LootContextTypes#ADVANCEMENT_LOCATION
    [[maybe_unused]] static void set_field_ADVANCEMENT_LOCATION(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("o", "ADVANCEMENT_LOCATION", "field_44788", "ADVANCEMENT_LOCATION", "f_285637_"), "Leul;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.loot.context.LootContextTypes#BLOCK_USE
    [[maybe_unused]] static jobject get_field_BLOCK_USE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("p", "BLOCK_USE", "field_48381", "BLOCK_USE", "f_314281_"), "Leul;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.loot.context.LootContextTypes#BLOCK_USE
    [[maybe_unused]] static void set_field_BLOCK_USE(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("p", "BLOCK_USE", "field_48381", "BLOCK_USE", "f_314281_"), "Leul;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.loot.context.LootContextTypes#GENERIC
    [[maybe_unused]] static jobject get_field_GENERIC() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("q", "ALL_PARAMS", "field_1177", "GENERIC", "f_81420_"), "Leul;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.loot.context.LootContextTypes#GENERIC
    [[maybe_unused]] static void set_field_GENERIC(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("q", "ALL_PARAMS", "field_1177", "GENERIC", "f_81420_"), "Leul;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.loot.context.LootContextTypes#BLOCK
    [[maybe_unused]] static jobject get_field_BLOCK() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("r", "BLOCK", "field_1172", "BLOCK", "f_81421_"), "Leul;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.loot.context.LootContextTypes#BLOCK
    [[maybe_unused]] static void set_field_BLOCK(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("r", "BLOCK", "field_1172", "BLOCK", "f_81421_"), "Leul;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.loot.context.LootContextTypes#SHEARING
    [[maybe_unused]] static jobject get_field_SHEARING() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("s", "SHEARING", "field_49446", "SHEARING", "f_316219_"), "Leul;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.loot.context.LootContextTypes#SHEARING
    [[maybe_unused]] static void set_field_SHEARING(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("s", "SHEARING", "field_49446", "SHEARING", "f_316219_"), "Leul;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.loot.context.LootContextTypes#ENCHANTED_DAMAGE
    [[maybe_unused]] static jobject get_field_ENCHANTED_DAMAGE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("t", "ENCHANTED_DAMAGE", "field_51801", "ENCHANTED_DAMAGE", "f_336863_"), "Leul;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.loot.context.LootContextTypes#ENCHANTED_DAMAGE
    [[maybe_unused]] static void set_field_ENCHANTED_DAMAGE(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("t", "ENCHANTED_DAMAGE", "field_51801", "ENCHANTED_DAMAGE", "f_336863_"), "Leul;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.loot.context.LootContextTypes#ENCHANTED_ITEM
    [[maybe_unused]] static jobject get_field_ENCHANTED_ITEM() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("u", "ENCHANTED_ITEM", "field_51802", "ENCHANTED_ITEM", "f_337455_"), "Leul;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.loot.context.LootContextTypes#ENCHANTED_ITEM
    [[maybe_unused]] static void set_field_ENCHANTED_ITEM(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("u", "ENCHANTED_ITEM", "field_51802", "ENCHANTED_ITEM", "f_337455_"), "Leul;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.loot.context.LootContextTypes#ENCHANTED_LOCATION
    [[maybe_unused]] static jobject get_field_ENCHANTED_LOCATION() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("v", "ENCHANTED_LOCATION", "field_51803", "ENCHANTED_LOCATION", "f_337139_"), "Leul;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.loot.context.LootContextTypes#ENCHANTED_LOCATION
    [[maybe_unused]] static void set_field_ENCHANTED_LOCATION(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("v", "ENCHANTED_LOCATION", "field_51803", "ENCHANTED_LOCATION", "f_337139_"), "Leul;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.loot.context.LootContextTypes#ENCHANTED_ENTITY
    [[maybe_unused]] static jobject get_field_ENCHANTED_ENTITY() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("w", "ENCHANTED_ENTITY", "field_51804", "ENCHANTED_ENTITY", "f_337285_"), "Leul;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.loot.context.LootContextTypes#ENCHANTED_ENTITY
    [[maybe_unused]] static void set_field_ENCHANTED_ENTITY(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("w", "ENCHANTED_ENTITY", "field_51804", "ENCHANTED_ENTITY", "f_337285_"), "Leul;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.loot.context.LootContextTypes#HIT_BLOCK
    [[maybe_unused]] static jobject get_field_HIT_BLOCK() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("x", "HIT_BLOCK", "field_52067", "HIT_BLOCK", "f_337548_"), "Leul;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.loot.context.LootContextTypes#HIT_BLOCK
    [[maybe_unused]] static void set_field_HIT_BLOCK(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("x", "HIT_BLOCK", "field_52067", "HIT_BLOCK", "f_337548_"), "Leul;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    static jmethodID methodID_register() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "register", "method_759", "register", "m_81428_"), "(Ljava/lang/String;Ljava/util/function/Consumer;)Leul;");
    }

    static jobject register(const jobject& arg0, const jobject& arg1) {
       const auto clazz = self();
       const auto methodID = methodID_register();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0, arg1);
    };
    
};

#endif // NET_MINECRAFT_LOOT_CONTEXT_LOOTCONTEXTTYPES_HPP