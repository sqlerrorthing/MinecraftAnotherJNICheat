// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_REGISTRY_TAG_ENTITYTYPETAGS_HPP
#define NET_MINECRAFT_REGISTRY_TAG_ENTITYTYPETAGS_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.registry.tag.EntityTypeTags
 * Remapped: awi
 */
namespace EntityTypeTags {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("awi", "net/minecraft/tags/EntityTypeTags", "net/minecraft/class_3483", "net/minecraft/registry/tag/EntityTypeTags", "net/minecraft/src/C_138_"));
        }
        return cachedClass;
    };

    // getter for static public field net.minecraft.registry.tag.EntityTypeTags#SKELETONS
    [[maybe_unused]] static jobject get_field_SKELETONS() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "SKELETONS", "field_15507", "SKELETONS", "f_13120_"), "Lawu;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.registry.tag.EntityTypeTags#SKELETONS
    [[maybe_unused]] static void set_field_SKELETONS(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "SKELETONS", "field_15507", "SKELETONS", "f_13120_"), "Lawu;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.registry.tag.EntityTypeTags#ZOMBIES
    [[maybe_unused]] static jobject get_field_ZOMBIES() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "ZOMBIES", "field_46231", "ZOMBIES", "f_303793_"), "Lawu;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.registry.tag.EntityTypeTags#ZOMBIES
    [[maybe_unused]] static void set_field_ZOMBIES(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "ZOMBIES", "field_46231", "ZOMBIES", "f_303793_"), "Lawu;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.registry.tag.EntityTypeTags#RAIDERS
    [[maybe_unused]] static jobject get_field_RAIDERS() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "RAIDERS", "field_19168", "RAIDERS", "f_13121_"), "Lawu;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.registry.tag.EntityTypeTags#RAIDERS
    [[maybe_unused]] static void set_field_RAIDERS(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "RAIDERS", "field_19168", "RAIDERS", "f_13121_"), "Lawu;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.registry.tag.EntityTypeTags#UNDEAD
    [[maybe_unused]] static jobject get_field_UNDEAD() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("d", "UNDEAD", "field_46232", "UNDEAD", "f_303412_"), "Lawu;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.registry.tag.EntityTypeTags#UNDEAD
    [[maybe_unused]] static void set_field_UNDEAD(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("d", "UNDEAD", "field_46232", "UNDEAD", "f_303412_"), "Lawu;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.registry.tag.EntityTypeTags#BEEHIVE_INHABITORS
    [[maybe_unused]] static jobject get_field_BEEHIVE_INHABITORS() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("e", "BEEHIVE_INHABITORS", "field_20631", "BEEHIVE_INHABITORS", "f_13122_"), "Lawu;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.registry.tag.EntityTypeTags#BEEHIVE_INHABITORS
    [[maybe_unused]] static void set_field_BEEHIVE_INHABITORS(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("e", "BEEHIVE_INHABITORS", "field_20631", "BEEHIVE_INHABITORS", "f_13122_"), "Lawu;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.registry.tag.EntityTypeTags#ARROWS
    [[maybe_unused]] static jobject get_field_ARROWS() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("f", "ARROWS", "field_21508", "ARROWS", "f_13123_"), "Lawu;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.registry.tag.EntityTypeTags#ARROWS
    [[maybe_unused]] static void set_field_ARROWS(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("f", "ARROWS", "field_21508", "ARROWS", "f_13123_"), "Lawu;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.registry.tag.EntityTypeTags#IMPACT_PROJECTILES
    [[maybe_unused]] static jobject get_field_IMPACT_PROJECTILES() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("g", "IMPACT_PROJECTILES", "field_22415", "IMPACT_PROJECTILES", "f_13124_"), "Lawu;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.registry.tag.EntityTypeTags#IMPACT_PROJECTILES
    [[maybe_unused]] static void set_field_IMPACT_PROJECTILES(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("g", "IMPACT_PROJECTILES", "field_22415", "IMPACT_PROJECTILES", "f_13124_"), "Lawu;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.registry.tag.EntityTypeTags#POWDER_SNOW_WALKABLE_MOBS
    [[maybe_unused]] static jobject get_field_POWDER_SNOW_WALKABLE_MOBS() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("h", "POWDER_SNOW_WALKABLE_MOBS", "field_27855", "POWDER_SNOW_WALKABLE_MOBS", "f_144291_"), "Lawu;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.registry.tag.EntityTypeTags#POWDER_SNOW_WALKABLE_MOBS
    [[maybe_unused]] static void set_field_POWDER_SNOW_WALKABLE_MOBS(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("h", "POWDER_SNOW_WALKABLE_MOBS", "field_27855", "POWDER_SNOW_WALKABLE_MOBS", "f_144291_"), "Lawu;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.registry.tag.EntityTypeTags#AXOLOTL_ALWAYS_HOSTILES
    [[maybe_unused]] static jobject get_field_AXOLOTL_ALWAYS_HOSTILES() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("i", "AXOLOTL_ALWAYS_HOSTILES", "field_28296", "AXOLOTL_ALWAYS_HOSTILES", "f_144292_"), "Lawu;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.registry.tag.EntityTypeTags#AXOLOTL_ALWAYS_HOSTILES
    [[maybe_unused]] static void set_field_AXOLOTL_ALWAYS_HOSTILES(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("i", "AXOLOTL_ALWAYS_HOSTILES", "field_28296", "AXOLOTL_ALWAYS_HOSTILES", "f_144292_"), "Lawu;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.registry.tag.EntityTypeTags#AXOLOTL_HUNT_TARGETS
    [[maybe_unused]] static jobject get_field_AXOLOTL_HUNT_TARGETS() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("j", "AXOLOTL_HUNT_TARGETS", "field_29824", "AXOLOTL_HUNT_TARGETS", "f_144293_"), "Lawu;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.registry.tag.EntityTypeTags#AXOLOTL_HUNT_TARGETS
    [[maybe_unused]] static void set_field_AXOLOTL_HUNT_TARGETS(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("j", "AXOLOTL_HUNT_TARGETS", "field_29824", "AXOLOTL_HUNT_TARGETS", "f_144293_"), "Lawu;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.registry.tag.EntityTypeTags#FREEZE_IMMUNE_ENTITY_TYPES
    [[maybe_unused]] static jobject get_field_FREEZE_IMMUNE_ENTITY_TYPES() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("k", "FREEZE_IMMUNE_ENTITY_TYPES", "field_29825", "FREEZE_IMMUNE_ENTITY_TYPES", "f_144294_"), "Lawu;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.registry.tag.EntityTypeTags#FREEZE_IMMUNE_ENTITY_TYPES
    [[maybe_unused]] static void set_field_FREEZE_IMMUNE_ENTITY_TYPES(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("k", "FREEZE_IMMUNE_ENTITY_TYPES", "field_29825", "FREEZE_IMMUNE_ENTITY_TYPES", "f_144294_"), "Lawu;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.registry.tag.EntityTypeTags#FREEZE_HURTS_EXTRA_TYPES
    [[maybe_unused]] static jobject get_field_FREEZE_HURTS_EXTRA_TYPES() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("l", "FREEZE_HURTS_EXTRA_TYPES", "field_29826", "FREEZE_HURTS_EXTRA_TYPES", "f_144295_"), "Lawu;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.registry.tag.EntityTypeTags#FREEZE_HURTS_EXTRA_TYPES
    [[maybe_unused]] static void set_field_FREEZE_HURTS_EXTRA_TYPES(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("l", "FREEZE_HURTS_EXTRA_TYPES", "field_29826", "FREEZE_HURTS_EXTRA_TYPES", "f_144295_"), "Lawu;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.registry.tag.EntityTypeTags#CAN_BREATHE_UNDER_WATER
    [[maybe_unused]] static jobject get_field_CAN_BREATHE_UNDER_WATER() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("m", "CAN_BREATHE_UNDER_WATER", "field_46233", "CAN_BREATHE_UNDER_WATER", "f_303534_"), "Lawu;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.registry.tag.EntityTypeTags#CAN_BREATHE_UNDER_WATER
    [[maybe_unused]] static void set_field_CAN_BREATHE_UNDER_WATER(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("m", "CAN_BREATHE_UNDER_WATER", "field_46233", "CAN_BREATHE_UNDER_WATER", "f_303534_"), "Lawu;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.registry.tag.EntityTypeTags#FROG_FOOD
    [[maybe_unused]] static jobject get_field_FROG_FOOD() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("n", "FROG_FOOD", "field_38697", "FROG_FOOD", "f_215847_"), "Lawu;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.registry.tag.EntityTypeTags#FROG_FOOD
    [[maybe_unused]] static void set_field_FROG_FOOD(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("n", "FROG_FOOD", "field_38697", "FROG_FOOD", "f_215847_"), "Lawu;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.registry.tag.EntityTypeTags#FALL_DAMAGE_IMMUNE
    [[maybe_unused]] static jobject get_field_FALL_DAMAGE_IMMUNE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("o", "FALL_DAMAGE_IMMUNE", "field_42971", "FALL_DAMAGE_IMMUNE", "f_273841_"), "Lawu;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.registry.tag.EntityTypeTags#FALL_DAMAGE_IMMUNE
    [[maybe_unused]] static void set_field_FALL_DAMAGE_IMMUNE(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("o", "FALL_DAMAGE_IMMUNE", "field_42971", "FALL_DAMAGE_IMMUNE", "f_273841_"), "Lawu;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.registry.tag.EntityTypeTags#DISMOUNTS_UNDERWATER
    [[maybe_unused]] static jobject get_field_DISMOUNTS_UNDERWATER() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("p", "DISMOUNTS_UNDERWATER", "field_43096", "DISMOUNTS_UNDERWATER", "f_275751_"), "Lawu;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.registry.tag.EntityTypeTags#DISMOUNTS_UNDERWATER
    [[maybe_unused]] static void set_field_DISMOUNTS_UNDERWATER(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("p", "DISMOUNTS_UNDERWATER", "field_43096", "DISMOUNTS_UNDERWATER", "f_275751_"), "Lawu;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.registry.tag.EntityTypeTags#NON_CONTROLLING_RIDER
    [[maybe_unused]] static jobject get_field_NON_CONTROLLING_RIDER() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("q", "NON_CONTROLLING_RIDER", "field_45066", "NON_CONTROLLING_RIDER", "f_291187_"), "Lawu;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.registry.tag.EntityTypeTags#NON_CONTROLLING_RIDER
    [[maybe_unused]] static void set_field_NON_CONTROLLING_RIDER(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("q", "NON_CONTROLLING_RIDER", "field_45066", "NON_CONTROLLING_RIDER", "f_291187_"), "Lawu;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.registry.tag.EntityTypeTags#DEFLECTS_PROJECTILES
    [[maybe_unused]] static jobject get_field_DEFLECTS_PROJECTILES() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("r", "DEFLECTS_PROJECTILES", "field_48286", "DEFLECTS_PROJECTILES", "f_316998_"), "Lawu;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.registry.tag.EntityTypeTags#DEFLECTS_PROJECTILES
    [[maybe_unused]] static void set_field_DEFLECTS_PROJECTILES(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("r", "DEFLECTS_PROJECTILES", "field_48286", "DEFLECTS_PROJECTILES", "f_316998_"), "Lawu;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.registry.tag.EntityTypeTags#CAN_TURN_IN_BOATS
    [[maybe_unused]] static jobject get_field_CAN_TURN_IN_BOATS() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("s", "CAN_TURN_IN_BOATS", "field_47578", "CAN_TURN_IN_BOATS", "f_302423_"), "Lawu;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.registry.tag.EntityTypeTags#CAN_TURN_IN_BOATS
    [[maybe_unused]] static void set_field_CAN_TURN_IN_BOATS(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("s", "CAN_TURN_IN_BOATS", "field_47578", "CAN_TURN_IN_BOATS", "f_302423_"), "Lawu;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.registry.tag.EntityTypeTags#ILLAGER
    [[maybe_unused]] static jobject get_field_ILLAGER() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("t", "ILLAGER", "field_48287", "ILLAGER", "f_314047_"), "Lawu;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.registry.tag.EntityTypeTags#ILLAGER
    [[maybe_unused]] static void set_field_ILLAGER(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("t", "ILLAGER", "field_48287", "ILLAGER", "f_314047_"), "Lawu;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.registry.tag.EntityTypeTags#AQUATIC
    [[maybe_unused]] static jobject get_field_AQUATIC() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("u", "AQUATIC", "field_48288", "AQUATIC", "f_316007_"), "Lawu;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.registry.tag.EntityTypeTags#AQUATIC
    [[maybe_unused]] static void set_field_AQUATIC(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("u", "AQUATIC", "field_48288", "AQUATIC", "f_316007_"), "Lawu;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.registry.tag.EntityTypeTags#ARTHROPOD
    [[maybe_unused]] static jobject get_field_ARTHROPOD() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("v", "ARTHROPOD", "field_48289", "ARTHROPOD", "f_315418_"), "Lawu;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.registry.tag.EntityTypeTags#ARTHROPOD
    [[maybe_unused]] static void set_field_ARTHROPOD(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("v", "ARTHROPOD", "field_48289", "ARTHROPOD", "f_315418_"), "Lawu;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.registry.tag.EntityTypeTags#IGNORES_POISON_AND_REGEN
    [[maybe_unused]] static jobject get_field_IGNORES_POISON_AND_REGEN() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("w", "IGNORES_POISON_AND_REGEN", "field_48290", "IGNORES_POISON_AND_REGEN", "f_314231_"), "Lawu;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.registry.tag.EntityTypeTags#IGNORES_POISON_AND_REGEN
    [[maybe_unused]] static void set_field_IGNORES_POISON_AND_REGEN(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("w", "IGNORES_POISON_AND_REGEN", "field_48290", "IGNORES_POISON_AND_REGEN", "f_314231_"), "Lawu;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.registry.tag.EntityTypeTags#INVERTED_HEALING_AND_HARM
    [[maybe_unused]] static jobject get_field_INVERTED_HEALING_AND_HARM() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("x", "INVERTED_HEALING_AND_HARM", "field_48291", "INVERTED_HEALING_AND_HARM", "f_316912_"), "Lawu;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.registry.tag.EntityTypeTags#INVERTED_HEALING_AND_HARM
    [[maybe_unused]] static void set_field_INVERTED_HEALING_AND_HARM(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("x", "INVERTED_HEALING_AND_HARM", "field_48291", "INVERTED_HEALING_AND_HARM", "f_316912_"), "Lawu;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.registry.tag.EntityTypeTags#WITHER_FRIENDS
    [[maybe_unused]] static jobject get_field_WITHER_FRIENDS() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("y", "WITHER_FRIENDS", "field_48292", "WITHER_FRIENDS", "f_314802_"), "Lawu;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.registry.tag.EntityTypeTags#WITHER_FRIENDS
    [[maybe_unused]] static void set_field_WITHER_FRIENDS(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("y", "WITHER_FRIENDS", "field_48292", "WITHER_FRIENDS", "f_314802_"), "Lawu;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.registry.tag.EntityTypeTags#ILLAGER_FRIENDS
    [[maybe_unused]] static jobject get_field_ILLAGER_FRIENDS() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("z", "ILLAGER_FRIENDS", "field_48293", "ILLAGER_FRIENDS", "f_314612_"), "Lawu;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.registry.tag.EntityTypeTags#ILLAGER_FRIENDS
    [[maybe_unused]] static void set_field_ILLAGER_FRIENDS(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("z", "ILLAGER_FRIENDS", "field_48293", "ILLAGER_FRIENDS", "f_314612_"), "Lawu;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.registry.tag.EntityTypeTags#NOT_SCARY_FOR_PUFFERFISH
    [[maybe_unused]] static jobject get_field_NOT_SCARY_FOR_PUFFERFISH() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("A", "NOT_SCARY_FOR_PUFFERFISH", "field_48283", "NOT_SCARY_FOR_PUFFERFISH", "f_314707_"), "Lawu;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.registry.tag.EntityTypeTags#NOT_SCARY_FOR_PUFFERFISH
    [[maybe_unused]] static void set_field_NOT_SCARY_FOR_PUFFERFISH(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("A", "NOT_SCARY_FOR_PUFFERFISH", "field_48283", "NOT_SCARY_FOR_PUFFERFISH", "f_314707_"), "Lawu;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.registry.tag.EntityTypeTags#SENSITIVE_TO_IMPALING
    [[maybe_unused]] static jobject get_field_SENSITIVE_TO_IMPALING() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("B", "SENSITIVE_TO_IMPALING", "field_48284", "SENSITIVE_TO_IMPALING", "f_316359_"), "Lawu;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.registry.tag.EntityTypeTags#SENSITIVE_TO_IMPALING
    [[maybe_unused]] static void set_field_SENSITIVE_TO_IMPALING(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("B", "SENSITIVE_TO_IMPALING", "field_48284", "SENSITIVE_TO_IMPALING", "f_316359_"), "Lawu;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.registry.tag.EntityTypeTags#SENSITIVE_TO_BANE_OF_ARTHROPODS
    [[maybe_unused]] static jobject get_field_SENSITIVE_TO_BANE_OF_ARTHROPODS() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("C", "SENSITIVE_TO_BANE_OF_ARTHROPODS", "field_48285", "SENSITIVE_TO_BANE_OF_ARTHROPODS", "f_314167_"), "Lawu;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.registry.tag.EntityTypeTags#SENSITIVE_TO_BANE_OF_ARTHROPODS
    [[maybe_unused]] static void set_field_SENSITIVE_TO_BANE_OF_ARTHROPODS(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("C", "SENSITIVE_TO_BANE_OF_ARTHROPODS", "field_48285", "SENSITIVE_TO_BANE_OF_ARTHROPODS", "f_314167_"), "Lawu;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.registry.tag.EntityTypeTags#SENSITIVE_TO_SMITE
    [[maybe_unused]] static jobject get_field_SENSITIVE_TO_SMITE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("D", "SENSITIVE_TO_SMITE", "field_49931", "SENSITIVE_TO_SMITE", "f_314378_"), "Lawu;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.registry.tag.EntityTypeTags#SENSITIVE_TO_SMITE
    [[maybe_unused]] static void set_field_SENSITIVE_TO_SMITE(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("D", "SENSITIVE_TO_SMITE", "field_49931", "SENSITIVE_TO_SMITE", "f_314378_"), "Lawu;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.registry.tag.EntityTypeTags#NO_ANGER_FROM_WIND_CHARGE
    [[maybe_unused]] static jobject get_field_NO_ANGER_FROM_WIND_CHARGE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("E", "NO_ANGER_FROM_WIND_CHARGE", "field_48713", "NO_ANGER_FROM_WIND_CHARGE", "f_315192_"), "Lawu;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.registry.tag.EntityTypeTags#NO_ANGER_FROM_WIND_CHARGE
    [[maybe_unused]] static void set_field_NO_ANGER_FROM_WIND_CHARGE(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("E", "NO_ANGER_FROM_WIND_CHARGE", "field_48713", "NO_ANGER_FROM_WIND_CHARGE", "f_315192_"), "Lawu;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.registry.tag.EntityTypeTags#IMMUNE_TO_OOZING
    [[maybe_unused]] static jobject get_field_IMMUNE_TO_OOZING() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("F", "IMMUNE_TO_OOZING", "field_50105", "IMMUNE_TO_OOZING", "f_315487_"), "Lawu;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.registry.tag.EntityTypeTags#IMMUNE_TO_OOZING
    [[maybe_unused]] static void set_field_IMMUNE_TO_OOZING(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("F", "IMMUNE_TO_OOZING", "field_50105", "IMMUNE_TO_OOZING", "f_315487_"), "Lawu;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.registry.tag.EntityTypeTags#IMMUNE_TO_INFESTED
    [[maybe_unused]] static jobject get_field_IMMUNE_TO_INFESTED() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("G", "IMMUNE_TO_INFESTED", "field_50106", "IMMUNE_TO_INFESTED", "f_314026_"), "Lawu;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.registry.tag.EntityTypeTags#IMMUNE_TO_INFESTED
    [[maybe_unused]] static void set_field_IMMUNE_TO_INFESTED(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("G", "IMMUNE_TO_INFESTED", "field_50106", "IMMUNE_TO_INFESTED", "f_314026_"), "Lawu;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.registry.tag.EntityTypeTags#REDIRECTABLE_PROJECTILE
    [[maybe_unused]] static jobject get_field_REDIRECTABLE_PROJECTILE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("H", "REDIRECTABLE_PROJECTILE", "field_51503", "REDIRECTABLE_PROJECTILE", "f_314896_"), "Lawu;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.registry.tag.EntityTypeTags#REDIRECTABLE_PROJECTILE
    [[maybe_unused]] static void set_field_REDIRECTABLE_PROJECTILE(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("H", "REDIRECTABLE_PROJECTILE", "field_51503", "REDIRECTABLE_PROJECTILE", "f_314896_"), "Lawu;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    static jmethodID methodID_of() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "create", "method_15077", "of", "m_203848_"), "(Ljava/lang/String;)Lawu;");
    }

    static jobject of(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_of();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0);
    };
    
};

#endif // NET_MINECRAFT_REGISTRY_TAG_ENTITYTYPETAGS_HPP