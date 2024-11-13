// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_WORLD_GEN_FEATURE_ORECONFIGUREDFEATURES_HPP
#define NET_MINECRAFT_WORLD_GEN_FEATURE_ORECONFIGUREDFEATURES_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.world.gen.feature.OreConfiguredFeatures
 * Remapped: ru
 */
namespace OreConfiguredFeatures {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("ru", "net/minecraft/data/worldgen/features/OreFeatures", "net/minecraft/class_6806", "net/minecraft/world/gen/feature/OreConfiguredFeatures", "net/minecraft/src/C_183091_"));
        }
        return cachedClass;
    };

    // getter for static public field net.minecraft.world.gen.feature.OreConfiguredFeatures#ORE_MAGMA
    [[maybe_unused]] static jobject get_field_ORE_MAGMA() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "ORE_MAGMA", "field_35868", "ORE_MAGMA", "f_195082_"), "Lakq;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.world.gen.feature.OreConfiguredFeatures#ORE_MAGMA
    [[maybe_unused]] static void set_field_ORE_MAGMA(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "ORE_MAGMA", "field_35868", "ORE_MAGMA", "f_195082_"), "Lakq;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.world.gen.feature.OreConfiguredFeatures#ORE_SOUL_SAND
    [[maybe_unused]] static jobject get_field_ORE_SOUL_SAND() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "ORE_SOUL_SAND", "field_35869", "ORE_SOUL_SAND", "f_195083_"), "Lakq;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.world.gen.feature.OreConfiguredFeatures#ORE_SOUL_SAND
    [[maybe_unused]] static void set_field_ORE_SOUL_SAND(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "ORE_SOUL_SAND", "field_35869", "ORE_SOUL_SAND", "f_195083_"), "Lakq;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.world.gen.feature.OreConfiguredFeatures#ORE_NETHER_GOLD
    [[maybe_unused]] static jobject get_field_ORE_NETHER_GOLD() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "ORE_NETHER_GOLD", "field_35870", "ORE_NETHER_GOLD", "f_195084_"), "Lakq;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.world.gen.feature.OreConfiguredFeatures#ORE_NETHER_GOLD
    [[maybe_unused]] static void set_field_ORE_NETHER_GOLD(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "ORE_NETHER_GOLD", "field_35870", "ORE_NETHER_GOLD", "f_195084_"), "Lakq;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.world.gen.feature.OreConfiguredFeatures#ORE_QUARTZ
    [[maybe_unused]] static jobject get_field_ORE_QUARTZ() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("d", "ORE_QUARTZ", "field_35871", "ORE_QUARTZ", "f_195085_"), "Lakq;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.world.gen.feature.OreConfiguredFeatures#ORE_QUARTZ
    [[maybe_unused]] static void set_field_ORE_QUARTZ(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("d", "ORE_QUARTZ", "field_35871", "ORE_QUARTZ", "f_195085_"), "Lakq;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.world.gen.feature.OreConfiguredFeatures#ORE_GRAVEL_NETHER
    [[maybe_unused]] static jobject get_field_ORE_GRAVEL_NETHER() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("e", "ORE_GRAVEL_NETHER", "field_35872", "ORE_GRAVEL_NETHER", "f_195086_"), "Lakq;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.world.gen.feature.OreConfiguredFeatures#ORE_GRAVEL_NETHER
    [[maybe_unused]] static void set_field_ORE_GRAVEL_NETHER(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("e", "ORE_GRAVEL_NETHER", "field_35872", "ORE_GRAVEL_NETHER", "f_195086_"), "Lakq;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.world.gen.feature.OreConfiguredFeatures#ORE_BLACKSTONE
    [[maybe_unused]] static jobject get_field_ORE_BLACKSTONE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("f", "ORE_BLACKSTONE", "field_35873", "ORE_BLACKSTONE", "f_195087_"), "Lakq;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.world.gen.feature.OreConfiguredFeatures#ORE_BLACKSTONE
    [[maybe_unused]] static void set_field_ORE_BLACKSTONE(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("f", "ORE_BLACKSTONE", "field_35873", "ORE_BLACKSTONE", "f_195087_"), "Lakq;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.world.gen.feature.OreConfiguredFeatures#ORE_DIRT
    [[maybe_unused]] static jobject get_field_ORE_DIRT() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("g", "ORE_DIRT", "field_35874", "ORE_DIRT", "f_195088_"), "Lakq;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.world.gen.feature.OreConfiguredFeatures#ORE_DIRT
    [[maybe_unused]] static void set_field_ORE_DIRT(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("g", "ORE_DIRT", "field_35874", "ORE_DIRT", "f_195088_"), "Lakq;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.world.gen.feature.OreConfiguredFeatures#ORE_GRAVEL
    [[maybe_unused]] static jobject get_field_ORE_GRAVEL() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("h", "ORE_GRAVEL", "field_35875", "ORE_GRAVEL", "f_195089_"), "Lakq;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.world.gen.feature.OreConfiguredFeatures#ORE_GRAVEL
    [[maybe_unused]] static void set_field_ORE_GRAVEL(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("h", "ORE_GRAVEL", "field_35875", "ORE_GRAVEL", "f_195089_"), "Lakq;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.world.gen.feature.OreConfiguredFeatures#ORE_GRANITE
    [[maybe_unused]] static jobject get_field_ORE_GRANITE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("i", "ORE_GRANITE", "field_35876", "ORE_GRANITE", "f_195090_"), "Lakq;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.world.gen.feature.OreConfiguredFeatures#ORE_GRANITE
    [[maybe_unused]] static void set_field_ORE_GRANITE(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("i", "ORE_GRANITE", "field_35876", "ORE_GRANITE", "f_195090_"), "Lakq;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.world.gen.feature.OreConfiguredFeatures#ORE_DIORITE
    [[maybe_unused]] static jobject get_field_ORE_DIORITE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("j", "ORE_DIORITE", "field_35877", "ORE_DIORITE", "f_195091_"), "Lakq;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.world.gen.feature.OreConfiguredFeatures#ORE_DIORITE
    [[maybe_unused]] static void set_field_ORE_DIORITE(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("j", "ORE_DIORITE", "field_35877", "ORE_DIORITE", "f_195091_"), "Lakq;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.world.gen.feature.OreConfiguredFeatures#ORE_ANDESITE
    [[maybe_unused]] static jobject get_field_ORE_ANDESITE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("k", "ORE_ANDESITE", "field_35878", "ORE_ANDESITE", "f_195092_"), "Lakq;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.world.gen.feature.OreConfiguredFeatures#ORE_ANDESITE
    [[maybe_unused]] static void set_field_ORE_ANDESITE(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("k", "ORE_ANDESITE", "field_35878", "ORE_ANDESITE", "f_195092_"), "Lakq;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.world.gen.feature.OreConfiguredFeatures#ORE_TUFF
    [[maybe_unused]] static jobject get_field_ORE_TUFF() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("l", "ORE_TUFF", "field_35879", "ORE_TUFF", "f_195093_"), "Lakq;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.world.gen.feature.OreConfiguredFeatures#ORE_TUFF
    [[maybe_unused]] static void set_field_ORE_TUFF(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("l", "ORE_TUFF", "field_35879", "ORE_TUFF", "f_195093_"), "Lakq;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.world.gen.feature.OreConfiguredFeatures#ORE_COAL
    [[maybe_unused]] static jobject get_field_ORE_COAL() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("m", "ORE_COAL", "field_35880", "ORE_COAL", "f_195094_"), "Lakq;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.world.gen.feature.OreConfiguredFeatures#ORE_COAL
    [[maybe_unused]] static void set_field_ORE_COAL(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("m", "ORE_COAL", "field_35880", "ORE_COAL", "f_195094_"), "Lakq;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.world.gen.feature.OreConfiguredFeatures#ORE_COAL_BURIED
    [[maybe_unused]] static jobject get_field_ORE_COAL_BURIED() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("n", "ORE_COAL_BURIED", "field_35881", "ORE_COAL_BURIED", "f_195095_"), "Lakq;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.world.gen.feature.OreConfiguredFeatures#ORE_COAL_BURIED
    [[maybe_unused]] static void set_field_ORE_COAL_BURIED(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("n", "ORE_COAL_BURIED", "field_35881", "ORE_COAL_BURIED", "f_195095_"), "Lakq;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.world.gen.feature.OreConfiguredFeatures#ORE_IRON
    [[maybe_unused]] static jobject get_field_ORE_IRON() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("o", "ORE_IRON", "field_35882", "ORE_IRON", "f_195096_"), "Lakq;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.world.gen.feature.OreConfiguredFeatures#ORE_IRON
    [[maybe_unused]] static void set_field_ORE_IRON(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("o", "ORE_IRON", "field_35882", "ORE_IRON", "f_195096_"), "Lakq;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.world.gen.feature.OreConfiguredFeatures#ORE_IRON_SMALL
    [[maybe_unused]] static jobject get_field_ORE_IRON_SMALL() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("p", "ORE_IRON_SMALL", "field_35841", "ORE_IRON_SMALL", "f_195055_"), "Lakq;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.world.gen.feature.OreConfiguredFeatures#ORE_IRON_SMALL
    [[maybe_unused]] static void set_field_ORE_IRON_SMALL(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("p", "ORE_IRON_SMALL", "field_35841", "ORE_IRON_SMALL", "f_195055_"), "Lakq;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.world.gen.feature.OreConfiguredFeatures#ORE_GOLD
    [[maybe_unused]] static jobject get_field_ORE_GOLD() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("q", "ORE_GOLD", "field_35842", "ORE_GOLD", "f_195056_"), "Lakq;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.world.gen.feature.OreConfiguredFeatures#ORE_GOLD
    [[maybe_unused]] static void set_field_ORE_GOLD(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("q", "ORE_GOLD", "field_35842", "ORE_GOLD", "f_195056_"), "Lakq;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.world.gen.feature.OreConfiguredFeatures#ORE_GOLD_BURIED
    [[maybe_unused]] static jobject get_field_ORE_GOLD_BURIED() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("r", "ORE_GOLD_BURIED", "field_35843", "ORE_GOLD_BURIED", "f_195057_"), "Lakq;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.world.gen.feature.OreConfiguredFeatures#ORE_GOLD_BURIED
    [[maybe_unused]] static void set_field_ORE_GOLD_BURIED(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("r", "ORE_GOLD_BURIED", "field_35843", "ORE_GOLD_BURIED", "f_195057_"), "Lakq;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.world.gen.feature.OreConfiguredFeatures#ORE_REDSTONE
    [[maybe_unused]] static jobject get_field_ORE_REDSTONE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("s", "ORE_REDSTONE", "field_35844", "ORE_REDSTONE", "f_195058_"), "Lakq;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.world.gen.feature.OreConfiguredFeatures#ORE_REDSTONE
    [[maybe_unused]] static void set_field_ORE_REDSTONE(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("s", "ORE_REDSTONE", "field_35844", "ORE_REDSTONE", "f_195058_"), "Lakq;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.world.gen.feature.OreConfiguredFeatures#ORE_DIAMOND_SMALL
    [[maybe_unused]] static jobject get_field_ORE_DIAMOND_SMALL() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("t", "ORE_DIAMOND_SMALL", "field_35845", "ORE_DIAMOND_SMALL", "f_195059_"), "Lakq;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.world.gen.feature.OreConfiguredFeatures#ORE_DIAMOND_SMALL
    [[maybe_unused]] static void set_field_ORE_DIAMOND_SMALL(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("t", "ORE_DIAMOND_SMALL", "field_35845", "ORE_DIAMOND_SMALL", "f_195059_"), "Lakq;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.world.gen.feature.OreConfiguredFeatures#ORE_DIAMOND_MEDIUM
    [[maybe_unused]] static jobject get_field_ORE_DIAMOND_MEDIUM() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("u", "ORE_DIAMOND_MEDIUM", "field_45663", "ORE_DIAMOND_MEDIUM", "f_291025_"), "Lakq;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.world.gen.feature.OreConfiguredFeatures#ORE_DIAMOND_MEDIUM
    [[maybe_unused]] static void set_field_ORE_DIAMOND_MEDIUM(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("u", "ORE_DIAMOND_MEDIUM", "field_45663", "ORE_DIAMOND_MEDIUM", "f_291025_"), "Lakq;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.world.gen.feature.OreConfiguredFeatures#ORE_DIAMOND_LARGE
    [[maybe_unused]] static jobject get_field_ORE_DIAMOND_LARGE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("v", "ORE_DIAMOND_LARGE", "field_35846", "ORE_DIAMOND_LARGE", "f_195060_"), "Lakq;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.world.gen.feature.OreConfiguredFeatures#ORE_DIAMOND_LARGE
    [[maybe_unused]] static void set_field_ORE_DIAMOND_LARGE(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("v", "ORE_DIAMOND_LARGE", "field_35846", "ORE_DIAMOND_LARGE", "f_195060_"), "Lakq;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.world.gen.feature.OreConfiguredFeatures#ORE_DIAMOND_BURIED
    [[maybe_unused]] static jobject get_field_ORE_DIAMOND_BURIED() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("w", "ORE_DIAMOND_BURIED", "field_35847", "ORE_DIAMOND_BURIED", "f_195061_"), "Lakq;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.world.gen.feature.OreConfiguredFeatures#ORE_DIAMOND_BURIED
    [[maybe_unused]] static void set_field_ORE_DIAMOND_BURIED(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("w", "ORE_DIAMOND_BURIED", "field_35847", "ORE_DIAMOND_BURIED", "f_195061_"), "Lakq;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.world.gen.feature.OreConfiguredFeatures#ORE_LAPIS
    [[maybe_unused]] static jobject get_field_ORE_LAPIS() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("x", "ORE_LAPIS", "field_35848", "ORE_LAPIS", "f_195062_"), "Lakq;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.world.gen.feature.OreConfiguredFeatures#ORE_LAPIS
    [[maybe_unused]] static void set_field_ORE_LAPIS(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("x", "ORE_LAPIS", "field_35848", "ORE_LAPIS", "f_195062_"), "Lakq;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.world.gen.feature.OreConfiguredFeatures#ORE_LAPIS_BURIED
    [[maybe_unused]] static jobject get_field_ORE_LAPIS_BURIED() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("y", "ORE_LAPIS_BURIED", "field_35849", "ORE_LAPIS_BURIED", "f_195063_"), "Lakq;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.world.gen.feature.OreConfiguredFeatures#ORE_LAPIS_BURIED
    [[maybe_unused]] static void set_field_ORE_LAPIS_BURIED(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("y", "ORE_LAPIS_BURIED", "field_35849", "ORE_LAPIS_BURIED", "f_195063_"), "Lakq;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.world.gen.feature.OreConfiguredFeatures#ORE_INFESTED
    [[maybe_unused]] static jobject get_field_ORE_INFESTED() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("z", "ORE_INFESTED", "field_35850", "ORE_INFESTED", "f_195064_"), "Lakq;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.world.gen.feature.OreConfiguredFeatures#ORE_INFESTED
    [[maybe_unused]] static void set_field_ORE_INFESTED(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("z", "ORE_INFESTED", "field_35850", "ORE_INFESTED", "f_195064_"), "Lakq;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.world.gen.feature.OreConfiguredFeatures#ORE_EMERALD
    [[maybe_unused]] static jobject get_field_ORE_EMERALD() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("A", "ORE_EMERALD", "field_35851", "ORE_EMERALD", "f_195065_"), "Lakq;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.world.gen.feature.OreConfiguredFeatures#ORE_EMERALD
    [[maybe_unused]] static void set_field_ORE_EMERALD(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("A", "ORE_EMERALD", "field_35851", "ORE_EMERALD", "f_195065_"), "Lakq;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.world.gen.feature.OreConfiguredFeatures#ORE_ANCIENT_DEBRIS_LARGE
    [[maybe_unused]] static jobject get_field_ORE_ANCIENT_DEBRIS_LARGE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("B", "ORE_ANCIENT_DEBRIS_LARGE", "field_35852", "ORE_ANCIENT_DEBRIS_LARGE", "f_195066_"), "Lakq;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.world.gen.feature.OreConfiguredFeatures#ORE_ANCIENT_DEBRIS_LARGE
    [[maybe_unused]] static void set_field_ORE_ANCIENT_DEBRIS_LARGE(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("B", "ORE_ANCIENT_DEBRIS_LARGE", "field_35852", "ORE_ANCIENT_DEBRIS_LARGE", "f_195066_"), "Lakq;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.world.gen.feature.OreConfiguredFeatures#ORE_ANCIENT_DEBRIS_SMALL
    [[maybe_unused]] static jobject get_field_ORE_ANCIENT_DEBRIS_SMALL() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("C", "ORE_ANCIENT_DEBRIS_SMALL", "field_35853", "ORE_ANCIENT_DEBRIS_SMALL", "f_195067_"), "Lakq;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.world.gen.feature.OreConfiguredFeatures#ORE_ANCIENT_DEBRIS_SMALL
    [[maybe_unused]] static void set_field_ORE_ANCIENT_DEBRIS_SMALL(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("C", "ORE_ANCIENT_DEBRIS_SMALL", "field_35853", "ORE_ANCIENT_DEBRIS_SMALL", "f_195067_"), "Lakq;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.world.gen.feature.OreConfiguredFeatures#ORE_COPPER_SMALL
    [[maybe_unused]] static jobject get_field_ORE_COPPER_SMALL() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("D", "ORE_COPPPER_SMALL", "field_35854", "ORE_COPPER_SMALL", "f_195068_"), "Lakq;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.world.gen.feature.OreConfiguredFeatures#ORE_COPPER_SMALL
    [[maybe_unused]] static void set_field_ORE_COPPER_SMALL(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("D", "ORE_COPPPER_SMALL", "field_35854", "ORE_COPPER_SMALL", "f_195068_"), "Lakq;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.world.gen.feature.OreConfiguredFeatures#ORE_COPPER_LARGE
    [[maybe_unused]] static jobject get_field_ORE_COPPER_LARGE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("E", "ORE_COPPER_LARGE", "field_35855", "ORE_COPPER_LARGE", "f_195069_"), "Lakq;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.world.gen.feature.OreConfiguredFeatures#ORE_COPPER_LARGE
    [[maybe_unused]] static void set_field_ORE_COPPER_LARGE(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("E", "ORE_COPPER_LARGE", "field_35855", "ORE_COPPER_LARGE", "f_195069_"), "Lakq;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.world.gen.feature.OreConfiguredFeatures#ORE_CLAY
    [[maybe_unused]] static jobject get_field_ORE_CLAY() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("F", "ORE_CLAY", "field_35856", "ORE_CLAY", "f_195070_"), "Lakq;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.world.gen.feature.OreConfiguredFeatures#ORE_CLAY
    [[maybe_unused]] static void set_field_ORE_CLAY(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("F", "ORE_CLAY", "field_35856", "ORE_CLAY", "f_195070_"), "Lakq;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    static jmethodID methodID_bootstrap() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "bootstrap", "method_46855", "bootstrap", "m_255127_"), "(Lqq;)V");
    }

    static void bootstrap(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_bootstrap();
       MinecraftSDK::env->CallStaticVoidMethod(clazz, methodID, arg0);
    };
    
};

#endif // NET_MINECRAFT_WORLD_GEN_FEATURE_ORECONFIGUREDFEATURES_HPP