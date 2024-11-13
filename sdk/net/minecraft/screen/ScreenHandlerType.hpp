// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_SCREEN_SCREENHANDLERTYPE_HPP
#define NET_MINECRAFT_SCREEN_SCREENHANDLERTYPE_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.screen.ScreenHandlerType
 * Remapped: crc
 */
namespace ScreenHandlerType {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("crc", "net/minecraft/world/inventory/MenuType", "net/minecraft/class_3917", "net/minecraft/screen/ScreenHandlerType", "net/minecraft/src/C_1291_"));
        }
        return cachedClass;
    };

    // getter for static public field net.minecraft.screen.ScreenHandlerType#GENERIC_9X1
    [[maybe_unused]] static jobject get_field_GENERIC_9X1() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "GENERIC_9x1", "field_18664", "GENERIC_9X1", "f_39957_"), "Lcrc;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.screen.ScreenHandlerType#GENERIC_9X1
    [[maybe_unused]] static void set_field_GENERIC_9X1(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "GENERIC_9x1", "field_18664", "GENERIC_9X1", "f_39957_"), "Lcrc;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.screen.ScreenHandlerType#GENERIC_9X2
    [[maybe_unused]] static jobject get_field_GENERIC_9X2() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "GENERIC_9x2", "field_18665", "GENERIC_9X2", "f_39958_"), "Lcrc;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.screen.ScreenHandlerType#GENERIC_9X2
    [[maybe_unused]] static void set_field_GENERIC_9X2(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "GENERIC_9x2", "field_18665", "GENERIC_9X2", "f_39958_"), "Lcrc;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.screen.ScreenHandlerType#GENERIC_9X3
    [[maybe_unused]] static jobject get_field_GENERIC_9X3() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "GENERIC_9x3", "field_17326", "GENERIC_9X3", "f_39959_"), "Lcrc;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.screen.ScreenHandlerType#GENERIC_9X3
    [[maybe_unused]] static void set_field_GENERIC_9X3(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "GENERIC_9x3", "field_17326", "GENERIC_9X3", "f_39959_"), "Lcrc;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.screen.ScreenHandlerType#GENERIC_9X4
    [[maybe_unused]] static jobject get_field_GENERIC_9X4() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("d", "GENERIC_9x4", "field_18666", "GENERIC_9X4", "f_39960_"), "Lcrc;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.screen.ScreenHandlerType#GENERIC_9X4
    [[maybe_unused]] static void set_field_GENERIC_9X4(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("d", "GENERIC_9x4", "field_18666", "GENERIC_9X4", "f_39960_"), "Lcrc;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.screen.ScreenHandlerType#GENERIC_9X5
    [[maybe_unused]] static jobject get_field_GENERIC_9X5() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("e", "GENERIC_9x5", "field_18667", "GENERIC_9X5", "f_39961_"), "Lcrc;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.screen.ScreenHandlerType#GENERIC_9X5
    [[maybe_unused]] static void set_field_GENERIC_9X5(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("e", "GENERIC_9x5", "field_18667", "GENERIC_9X5", "f_39961_"), "Lcrc;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.screen.ScreenHandlerType#GENERIC_9X6
    [[maybe_unused]] static jobject get_field_GENERIC_9X6() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("f", "GENERIC_9x6", "field_17327", "GENERIC_9X6", "f_39962_"), "Lcrc;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.screen.ScreenHandlerType#GENERIC_9X6
    [[maybe_unused]] static void set_field_GENERIC_9X6(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("f", "GENERIC_9x6", "field_17327", "GENERIC_9X6", "f_39962_"), "Lcrc;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.screen.ScreenHandlerType#GENERIC_3X3
    [[maybe_unused]] static jobject get_field_GENERIC_3X3() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("g", "GENERIC_3x3", "field_17328", "GENERIC_3X3", "f_39963_"), "Lcrc;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.screen.ScreenHandlerType#GENERIC_3X3
    [[maybe_unused]] static void set_field_GENERIC_3X3(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("g", "GENERIC_3x3", "field_17328", "GENERIC_3X3", "f_39963_"), "Lcrc;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.screen.ScreenHandlerType#CRAFTER_3X3
    [[maybe_unused]] static jobject get_field_CRAFTER_3X3() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("h", "CRAFTER_3x3", "field_46790", "CRAFTER_3X3", "f_303509_"), "Lcrc;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.screen.ScreenHandlerType#CRAFTER_3X3
    [[maybe_unused]] static void set_field_CRAFTER_3X3(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("h", "CRAFTER_3x3", "field_46790", "CRAFTER_3X3", "f_303509_"), "Lcrc;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.screen.ScreenHandlerType#ANVIL
    [[maybe_unused]] static jobject get_field_ANVIL() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("i", "ANVIL", "field_17329", "ANVIL", "f_39964_"), "Lcrc;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.screen.ScreenHandlerType#ANVIL
    [[maybe_unused]] static void set_field_ANVIL(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("i", "ANVIL", "field_17329", "ANVIL", "f_39964_"), "Lcrc;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.screen.ScreenHandlerType#BEACON
    [[maybe_unused]] static jobject get_field_BEACON() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("j", "BEACON", "field_17330", "BEACON", "f_39965_"), "Lcrc;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.screen.ScreenHandlerType#BEACON
    [[maybe_unused]] static void set_field_BEACON(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("j", "BEACON", "field_17330", "BEACON", "f_39965_"), "Lcrc;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.screen.ScreenHandlerType#BLAST_FURNACE
    [[maybe_unused]] static jobject get_field_BLAST_FURNACE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("k", "BLAST_FURNACE", "field_17331", "BLAST_FURNACE", "f_39966_"), "Lcrc;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.screen.ScreenHandlerType#BLAST_FURNACE
    [[maybe_unused]] static void set_field_BLAST_FURNACE(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("k", "BLAST_FURNACE", "field_17331", "BLAST_FURNACE", "f_39966_"), "Lcrc;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.screen.ScreenHandlerType#BREWING_STAND
    [[maybe_unused]] static jobject get_field_BREWING_STAND() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("l", "BREWING_STAND", "field_17332", "BREWING_STAND", "f_39967_"), "Lcrc;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.screen.ScreenHandlerType#BREWING_STAND
    [[maybe_unused]] static void set_field_BREWING_STAND(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("l", "BREWING_STAND", "field_17332", "BREWING_STAND", "f_39967_"), "Lcrc;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.screen.ScreenHandlerType#CRAFTING
    [[maybe_unused]] static jobject get_field_CRAFTING() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("m", "CRAFTING", "field_17333", "CRAFTING", "f_39968_"), "Lcrc;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.screen.ScreenHandlerType#CRAFTING
    [[maybe_unused]] static void set_field_CRAFTING(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("m", "CRAFTING", "field_17333", "CRAFTING", "f_39968_"), "Lcrc;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.screen.ScreenHandlerType#ENCHANTMENT
    [[maybe_unused]] static jobject get_field_ENCHANTMENT() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("n", "ENCHANTMENT", "field_17334", "ENCHANTMENT", "f_39969_"), "Lcrc;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.screen.ScreenHandlerType#ENCHANTMENT
    [[maybe_unused]] static void set_field_ENCHANTMENT(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("n", "ENCHANTMENT", "field_17334", "ENCHANTMENT", "f_39969_"), "Lcrc;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.screen.ScreenHandlerType#FURNACE
    [[maybe_unused]] static jobject get_field_FURNACE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("o", "FURNACE", "field_17335", "FURNACE", "f_39970_"), "Lcrc;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.screen.ScreenHandlerType#FURNACE
    [[maybe_unused]] static void set_field_FURNACE(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("o", "FURNACE", "field_17335", "FURNACE", "f_39970_"), "Lcrc;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.screen.ScreenHandlerType#GRINDSTONE
    [[maybe_unused]] static jobject get_field_GRINDSTONE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("p", "GRINDSTONE", "field_17336", "GRINDSTONE", "f_39971_"), "Lcrc;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.screen.ScreenHandlerType#GRINDSTONE
    [[maybe_unused]] static void set_field_GRINDSTONE(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("p", "GRINDSTONE", "field_17336", "GRINDSTONE", "f_39971_"), "Lcrc;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.screen.ScreenHandlerType#HOPPER
    [[maybe_unused]] static jobject get_field_HOPPER() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("q", "HOPPER", "field_17337", "HOPPER", "f_39972_"), "Lcrc;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.screen.ScreenHandlerType#HOPPER
    [[maybe_unused]] static void set_field_HOPPER(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("q", "HOPPER", "field_17337", "HOPPER", "f_39972_"), "Lcrc;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.screen.ScreenHandlerType#LECTERN
    [[maybe_unused]] static jobject get_field_LECTERN() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("r", "LECTERN", "field_17338", "LECTERN", "f_39973_"), "Lcrc;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.screen.ScreenHandlerType#LECTERN
    [[maybe_unused]] static void set_field_LECTERN(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("r", "LECTERN", "field_17338", "LECTERN", "f_39973_"), "Lcrc;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.screen.ScreenHandlerType#LOOM
    [[maybe_unused]] static jobject get_field_LOOM() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("s", "LOOM", "field_17339", "LOOM", "f_39974_"), "Lcrc;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.screen.ScreenHandlerType#LOOM
    [[maybe_unused]] static void set_field_LOOM(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("s", "LOOM", "field_17339", "LOOM", "f_39974_"), "Lcrc;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.screen.ScreenHandlerType#MERCHANT
    [[maybe_unused]] static jobject get_field_MERCHANT() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("t", "MERCHANT", "field_17340", "MERCHANT", "f_39975_"), "Lcrc;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.screen.ScreenHandlerType#MERCHANT
    [[maybe_unused]] static void set_field_MERCHANT(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("t", "MERCHANT", "field_17340", "MERCHANT", "f_39975_"), "Lcrc;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.screen.ScreenHandlerType#SHULKER_BOX
    [[maybe_unused]] static jobject get_field_SHULKER_BOX() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("u", "SHULKER_BOX", "field_17341", "SHULKER_BOX", "f_39976_"), "Lcrc;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.screen.ScreenHandlerType#SHULKER_BOX
    [[maybe_unused]] static void set_field_SHULKER_BOX(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("u", "SHULKER_BOX", "field_17341", "SHULKER_BOX", "f_39976_"), "Lcrc;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.screen.ScreenHandlerType#SMITHING
    [[maybe_unused]] static jobject get_field_SMITHING() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("v", "SMITHING", "field_22484", "SMITHING", "f_39977_"), "Lcrc;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.screen.ScreenHandlerType#SMITHING
    [[maybe_unused]] static void set_field_SMITHING(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("v", "SMITHING", "field_22484", "SMITHING", "f_39977_"), "Lcrc;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.screen.ScreenHandlerType#SMOKER
    [[maybe_unused]] static jobject get_field_SMOKER() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("w", "SMOKER", "field_17342", "SMOKER", "f_39978_"), "Lcrc;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.screen.ScreenHandlerType#SMOKER
    [[maybe_unused]] static void set_field_SMOKER(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("w", "SMOKER", "field_17342", "SMOKER", "f_39978_"), "Lcrc;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.screen.ScreenHandlerType#CARTOGRAPHY_TABLE
    [[maybe_unused]] static jobject get_field_CARTOGRAPHY_TABLE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("x", "CARTOGRAPHY_TABLE", "field_17343", "CARTOGRAPHY_TABLE", "f_39979_"), "Lcrc;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.screen.ScreenHandlerType#CARTOGRAPHY_TABLE
    [[maybe_unused]] static void set_field_CARTOGRAPHY_TABLE(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("x", "CARTOGRAPHY_TABLE", "field_17343", "CARTOGRAPHY_TABLE", "f_39979_"), "Lcrc;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.screen.ScreenHandlerType#STONECUTTER
    [[maybe_unused]] static jobject get_field_STONECUTTER() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("y", "STONECUTTER", "field_17625", "STONECUTTER", "f_39980_"), "Lcrc;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.screen.ScreenHandlerType#STONECUTTER
    [[maybe_unused]] static void set_field_STONECUTTER(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("y", "STONECUTTER", "field_17625", "STONECUTTER", "f_39980_"), "Lcrc;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for private field net.minecraft.screen.ScreenHandlerType#requiredFeatures
    static jobject get_field_requiredFeatures(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("z", "requiredFeatures", "field_41923", "requiredFeatures", "f_265869_"), "Lcpl;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.screen.ScreenHandlerType#requiredFeatures
    static void set_field_requiredFeatures(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("z", "requiredFeatures", "field_41923", "requiredFeatures", "f_265869_"), "Lcpl;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.screen.ScreenHandlerType#factory
    static jobject get_field_factory(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("A", "constructor", "field_17344", "factory", "f_39981_"), "Lcrc$a;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.screen.ScreenHandlerType#factory
    static void set_field_factory(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("A", "constructor", "field_17344", "factory", "f_39981_"), "Lcrc$a;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID_register() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "register", "method_17435", "register", "m_39988_"), "(Ljava/lang/String;Lcrc$a;)Lcrc;");
    }

    static jobject register(const jobject& arg0, const jobject& arg1) {
       const auto clazz = self();
       const auto methodID = methodID_register();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0, arg1);
    };
    
    static jmethodID methodID__register() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "register", "method_48387", "register", "m_266268_"), "(Ljava/lang/String;Lcrc$a;[Lcpj;)Lcrc;");
    }

    static jobject _register(const jobject& arg0, const jobject& arg1, const jarray& arg2, const jobject& arg3) {
       const auto clazz = self();
       const auto methodID = methodID__register();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0, arg1, arg2, arg3);
    };
    
    static jmethodID methodID_create() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "create", "method_17434", "create", "m_39985_"), "(ILcmw;)Lcpu;");
    }

    static jobject create(const jobject& obj, const jint& arg0, const jobject& arg1) {
                
       const auto methodID = methodID_create();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_getRequiredFeatures() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("i", "requiredFeatures", "method_45322", "getRequiredFeatures", "m_245183_"), "()Lcpl;");
    }

    static jobject getRequiredFeatures(const jobject& obj) {
                
       const auto methodID = methodID_getRequiredFeatures();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_SCREEN_SCREENHANDLERTYPE_HPP