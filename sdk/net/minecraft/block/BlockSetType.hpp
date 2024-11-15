// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_BLOCK_BLOCKSETTYPE_HPP
#define NET_MINECRAFT_BLOCK_BLOCKSETTYPE_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.block.BlockSetType
 * Remapped: dtr
 */
namespace BlockSetType {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("dtr", "net/minecraft/world/level/block/state/properties/BlockSetType", "net/minecraft/class_8177", "net/minecraft/block/BlockSetType", "net/minecraft/src/C_271051_"));
        }
        return cachedClass;
    };

    // getter for private field net.minecraft.block.BlockSetType#name
    static jobject get_field_name(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("r", "name", "comp_1289", "name", "f_271253_"), "Ljava/lang/String;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.block.BlockSetType#name
    static void set_field_name(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("r", "name", "comp_1289", "name", "f_271253_"), "Ljava/lang/String;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.block.BlockSetType#canOpenByHand
    static jboolean get_field_canOpenByHand(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("s", "canOpenByHand", "comp_1471", "canOpenByHand", "f_278463_"), "Z");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetBooleanField(obj, fieldID);
    };

    // setter for static private field net.minecraft.block.BlockSetType#canOpenByHand
    static void set_field_canOpenByHand(const jobject &obj, const jboolean &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("s", "canOpenByHand", "comp_1471", "canOpenByHand", "f_278463_"), "Z");
        return MinecraftSDK::env->SetBooleanField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.block.BlockSetType#canOpenByWindCharge
    static jboolean get_field_canOpenByWindCharge(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("t", "canOpenByWindCharge", "comp_2112", "canOpenByWindCharge", "f_303181_"), "Z");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetBooleanField(obj, fieldID);
    };

    // setter for static private field net.minecraft.block.BlockSetType#canOpenByWindCharge
    static void set_field_canOpenByWindCharge(const jobject &obj, const jboolean &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("t", "canOpenByWindCharge", "comp_2112", "canOpenByWindCharge", "f_303181_"), "Z");
        return MinecraftSDK::env->SetBooleanField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.block.BlockSetType#canButtonBeActivatedByArrows
    static jboolean get_field_canButtonBeActivatedByArrows(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("u", "canButtonBeActivatedByArrows", "comp_1972", "canButtonBeActivatedByArrows", "f_303105_"), "Z");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetBooleanField(obj, fieldID);
    };

    // setter for static private field net.minecraft.block.BlockSetType#canButtonBeActivatedByArrows
    static void set_field_canButtonBeActivatedByArrows(const jobject &obj, const jboolean &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("u", "canButtonBeActivatedByArrows", "comp_1972", "canButtonBeActivatedByArrows", "f_303105_"), "Z");
        return MinecraftSDK::env->SetBooleanField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.block.BlockSetType#pressurePlateSensitivity
    static jobject get_field_pressurePlateSensitivity(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("v", "pressurePlateSensitivity", "comp_1973", "pressurePlateSensitivity", "f_303604_"), "Ldtr$a;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.block.BlockSetType#pressurePlateSensitivity
    static void set_field_pressurePlateSensitivity(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("v", "pressurePlateSensitivity", "comp_1973", "pressurePlateSensitivity", "f_303604_"), "Ldtr$a;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.block.BlockSetType#soundType
    static jobject get_field_soundType(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("w", "soundType", "comp_1290", "soundType", "f_271136_"), "Ldnm;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.block.BlockSetType#soundType
    static void set_field_soundType(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("w", "soundType", "comp_1290", "soundType", "f_271136_"), "Ldnm;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.block.BlockSetType#doorClose
    static jobject get_field_doorClose(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("x", "doorClose", "comp_1291", "doorClose", "f_271502_"), "Lavo;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.block.BlockSetType#doorClose
    static void set_field_doorClose(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("x", "doorClose", "comp_1291", "doorClose", "f_271502_"), "Lavo;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.block.BlockSetType#doorOpen
    static jobject get_field_doorOpen(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("y", "doorOpen", "comp_1292", "doorOpen", "f_271141_"), "Lavo;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.block.BlockSetType#doorOpen
    static void set_field_doorOpen(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("y", "doorOpen", "comp_1292", "doorOpen", "f_271141_"), "Lavo;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.block.BlockSetType#trapdoorClose
    static jobject get_field_trapdoorClose(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("z", "trapdoorClose", "comp_1293", "trapdoorClose", "f_271425_"), "Lavo;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.block.BlockSetType#trapdoorClose
    static void set_field_trapdoorClose(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("z", "trapdoorClose", "comp_1293", "trapdoorClose", "f_271425_"), "Lavo;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.block.BlockSetType#trapdoorOpen
    static jobject get_field_trapdoorOpen(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("A", "trapdoorOpen", "comp_1294", "trapdoorOpen", "f_271258_"), "Lavo;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.block.BlockSetType#trapdoorOpen
    static void set_field_trapdoorOpen(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("A", "trapdoorOpen", "comp_1294", "trapdoorOpen", "f_271258_"), "Lavo;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.block.BlockSetType#pressurePlateClickOff
    static jobject get_field_pressurePlateClickOff(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("B", "pressurePlateClickOff", "comp_1295", "pressurePlateClickOff", "f_271234_"), "Lavo;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.block.BlockSetType#pressurePlateClickOff
    static void set_field_pressurePlateClickOff(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("B", "pressurePlateClickOff", "comp_1295", "pressurePlateClickOff", "f_271234_"), "Lavo;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.block.BlockSetType#pressurePlateClickOn
    static jobject get_field_pressurePlateClickOn(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("C", "pressurePlateClickOn", "comp_1296", "pressurePlateClickOn", "f_271481_"), "Lavo;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.block.BlockSetType#pressurePlateClickOn
    static void set_field_pressurePlateClickOn(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("C", "pressurePlateClickOn", "comp_1296", "pressurePlateClickOn", "f_271481_"), "Lavo;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.block.BlockSetType#buttonClickOff
    static jobject get_field_buttonClickOff(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("D", "buttonClickOff", "comp_1297", "buttonClickOff", "f_271194_"), "Lavo;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.block.BlockSetType#buttonClickOff
    static void set_field_buttonClickOff(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("D", "buttonClickOff", "comp_1297", "buttonClickOff", "f_271194_"), "Lavo;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.block.BlockSetType#buttonClickOn
    static jobject get_field_buttonClickOn(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("E", "buttonClickOn", "comp_1298", "buttonClickOn", "f_271394_"), "Lavo;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.block.BlockSetType#buttonClickOn
    static void set_field_buttonClickOn(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("E", "buttonClickOn", "comp_1298", "buttonClickOn", "f_271394_"), "Lavo;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for static private field net.minecraft.block.BlockSetType#VALUES
    [[maybe_unused]] static jobject get_field_VALUES() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("F", "TYPES", "field_46533", "VALUES", "f_302819_"), "Ljava/util/Map;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.block.BlockSetType#VALUES
    [[maybe_unused]] static void set_field_VALUES(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("F", "TYPES", "field_46533", "VALUES", "f_302819_"), "Ljava/util/Map;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.block.BlockSetType#CODEC
    [[maybe_unused]] static jobject get_field_CODEC() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "CODEC", "field_46534", "CODEC", "f_303023_"), "Lcom/mojang/serialization/Codec;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.block.BlockSetType#CODEC
    [[maybe_unused]] static void set_field_CODEC(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "CODEC", "field_46534", "CODEC", "f_303023_"), "Lcom/mojang/serialization/Codec;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.block.BlockSetType#IRON
    [[maybe_unused]] static jobject get_field_IRON() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "IRON", "field_42819", "IRON", "f_271132_"), "Ldtr;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.block.BlockSetType#IRON
    [[maybe_unused]] static void set_field_IRON(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "IRON", "field_42819", "IRON", "f_271132_"), "Ldtr;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.block.BlockSetType#COPPER
    [[maybe_unused]] static jobject get_field_COPPER() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "COPPER", "field_47100", "COPPER", "f_303086_"), "Ldtr;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.block.BlockSetType#COPPER
    [[maybe_unused]] static void set_field_COPPER(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "COPPER", "field_47100", "COPPER", "f_303086_"), "Ldtr;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.block.BlockSetType#GOLD
    [[maybe_unused]] static jobject get_field_GOLD() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("d", "GOLD", "field_42820", "GOLD", "f_271208_"), "Ldtr;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.block.BlockSetType#GOLD
    [[maybe_unused]] static void set_field_GOLD(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("d", "GOLD", "field_42820", "GOLD", "f_271208_"), "Ldtr;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.block.BlockSetType#STONE
    [[maybe_unused]] static jobject get_field_STONE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("e", "STONE", "field_42821", "STONE", "f_271479_"), "Ldtr;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.block.BlockSetType#STONE
    [[maybe_unused]] static void set_field_STONE(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("e", "STONE", "field_42821", "STONE", "f_271479_"), "Ldtr;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.block.BlockSetType#POLISHED_BLACKSTONE
    [[maybe_unused]] static jobject get_field_POLISHED_BLACKSTONE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("f", "POLISHED_BLACKSTONE", "field_42822", "POLISHED_BLACKSTONE", "f_271263_"), "Ldtr;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.block.BlockSetType#POLISHED_BLACKSTONE
    [[maybe_unused]] static void set_field_POLISHED_BLACKSTONE(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("f", "POLISHED_BLACKSTONE", "field_42822", "POLISHED_BLACKSTONE", "f_271263_"), "Ldtr;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.block.BlockSetType#OAK
    [[maybe_unused]] static jobject get_field_OAK() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("g", "OAK", "field_42823", "OAK", "f_271198_"), "Ldtr;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.block.BlockSetType#OAK
    [[maybe_unused]] static void set_field_OAK(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("g", "OAK", "field_42823", "OAK", "f_271198_"), "Ldtr;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.block.BlockSetType#SPRUCE
    [[maybe_unused]] static jobject get_field_SPRUCE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("h", "SPRUCE", "field_42824", "SPRUCE", "f_271100_"), "Ldtr;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.block.BlockSetType#SPRUCE
    [[maybe_unused]] static void set_field_SPRUCE(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("h", "SPRUCE", "field_42824", "SPRUCE", "f_271100_"), "Ldtr;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.block.BlockSetType#BIRCH
    [[maybe_unused]] static jobject get_field_BIRCH() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("i", "BIRCH", "field_42825", "BIRCH", "f_271387_"), "Ldtr;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.block.BlockSetType#BIRCH
    [[maybe_unused]] static void set_field_BIRCH(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("i", "BIRCH", "field_42825", "BIRCH", "f_271387_"), "Ldtr;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.block.BlockSetType#ACACIA
    [[maybe_unused]] static jobject get_field_ACACIA() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("j", "ACACIA", "field_42826", "ACACIA", "f_271512_"), "Ldtr;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.block.BlockSetType#ACACIA
    [[maybe_unused]] static void set_field_ACACIA(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("j", "ACACIA", "field_42826", "ACACIA", "f_271512_"), "Ldtr;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.block.BlockSetType#CHERRY
    [[maybe_unused]] static jobject get_field_CHERRY() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("k", "CHERRY", "field_42827", "CHERRY", "f_271401_"), "Ldtr;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.block.BlockSetType#CHERRY
    [[maybe_unused]] static void set_field_CHERRY(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("k", "CHERRY", "field_42827", "CHERRY", "f_271401_"), "Ldtr;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.block.BlockSetType#JUNGLE
    [[maybe_unused]] static jobject get_field_JUNGLE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("l", "JUNGLE", "field_42828", "JUNGLE", "f_271187_"), "Ldtr;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.block.BlockSetType#JUNGLE
    [[maybe_unused]] static void set_field_JUNGLE(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("l", "JUNGLE", "field_42828", "JUNGLE", "f_271187_"), "Ldtr;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.block.BlockSetType#DARK_OAK
    [[maybe_unused]] static jobject get_field_DARK_OAK() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("m", "DARK_OAK", "field_42829", "DARK_OAK", "f_271528_"), "Ldtr;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.block.BlockSetType#DARK_OAK
    [[maybe_unused]] static void set_field_DARK_OAK(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("m", "DARK_OAK", "field_42829", "DARK_OAK", "f_271528_"), "Ldtr;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.block.BlockSetType#CRIMSON
    [[maybe_unused]] static jobject get_field_CRIMSON() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("n", "CRIMSON", "field_42830", "CRIMSON", "f_271290_"), "Ldtr;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.block.BlockSetType#CRIMSON
    [[maybe_unused]] static void set_field_CRIMSON(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("n", "CRIMSON", "field_42830", "CRIMSON", "f_271290_"), "Ldtr;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.block.BlockSetType#WARPED
    [[maybe_unused]] static jobject get_field_WARPED() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("o", "WARPED", "field_42831", "WARPED", "f_271400_"), "Ldtr;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.block.BlockSetType#WARPED
    [[maybe_unused]] static void set_field_WARPED(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("o", "WARPED", "field_42831", "WARPED", "f_271400_"), "Ldtr;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.block.BlockSetType#MANGROVE
    [[maybe_unused]] static jobject get_field_MANGROVE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("p", "MANGROVE", "field_42832", "MANGROVE", "f_271383_"), "Ldtr;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.block.BlockSetType#MANGROVE
    [[maybe_unused]] static void set_field_MANGROVE(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("p", "MANGROVE", "field_42832", "MANGROVE", "f_271383_"), "Ldtr;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.block.BlockSetType#BAMBOO
    [[maybe_unused]] static jobject get_field_BAMBOO() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("q", "BAMBOO", "field_42833", "BAMBOO", "f_271088_"), "Ldtr;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.block.BlockSetType#BAMBOO
    [[maybe_unused]] static void set_field_BAMBOO(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("q", "BAMBOO", "field_42833", "BAMBOO", "f_271088_"), "Ldtr;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    static jmethodID methodID_register() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "register", "method_49233", "register", "m_272115_"), "(Ldtr;)Ldtr;");
    }

    static jobject register(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_register();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_stream() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "values", "method_49232", "stream", "m_271801_"), "()Ljava/util/stream/Stream;");
    }

    static jobject stream() {
       const auto clazz = self();
       const auto methodID = methodID_stream();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID);
    };
    
    static jmethodID methodID__name() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "name", "comp_1289", "name", "f_271253_"), "()Ljava/lang/String;");
    }

    static jobject _name(const jobject& obj) {
                
       const auto methodID = methodID__name();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID__canOpenByHand() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "canOpenByHand", "comp_1471", "canOpenByHand", "f_278463_"), "()Z");
    }

    static jboolean _canOpenByHand(const jobject& obj) {
                
       const auto methodID = methodID__canOpenByHand();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID);
    };
    
    static jmethodID methodID__canOpenByWindCharge() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("d", "canOpenByWindCharge", "comp_2112", "canOpenByWindCharge", "f_303181_"), "()Z");
    }

    static jboolean _canOpenByWindCharge(const jobject& obj) {
                
       const auto methodID = methodID__canOpenByWindCharge();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID);
    };
    
    static jmethodID methodID__canButtonBeActivatedByArrows() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("e", "canButtonBeActivatedByArrows", "comp_1972", "canButtonBeActivatedByArrows", "f_303105_"), "()Z");
    }

    static jboolean _canButtonBeActivatedByArrows(const jobject& obj) {
                
       const auto methodID = methodID__canButtonBeActivatedByArrows();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID);
    };
    
    static jmethodID methodID__pressurePlateSensitivity() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("f", "pressurePlateSensitivity", "comp_1973", "pressurePlateSensitivity", "f_303604_"), "()Ldtr$a;");
    }

    static jobject _pressurePlateSensitivity(const jobject& obj) {
                
       const auto methodID = methodID__pressurePlateSensitivity();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID__soundType() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("g", "soundType", "comp_1290", "soundType", "f_271136_"), "()Ldnm;");
    }

    static jobject _soundType(const jobject& obj) {
                
       const auto methodID = methodID__soundType();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID__doorClose() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("h", "doorClose", "comp_1291", "doorClose", "f_271502_"), "()Lavo;");
    }

    static jobject _doorClose(const jobject& obj) {
                
       const auto methodID = methodID__doorClose();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID__doorOpen() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("i", "doorOpen", "comp_1292", "doorOpen", "f_271141_"), "()Lavo;");
    }

    static jobject _doorOpen(const jobject& obj) {
                
       const auto methodID = methodID__doorOpen();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID__trapdoorClose() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("j", "trapdoorClose", "comp_1293", "trapdoorClose", "f_271425_"), "()Lavo;");
    }

    static jobject _trapdoorClose(const jobject& obj) {
                
       const auto methodID = methodID__trapdoorClose();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID__trapdoorOpen() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("k", "trapdoorOpen", "comp_1294", "trapdoorOpen", "f_271258_"), "()Lavo;");
    }

    static jobject _trapdoorOpen(const jobject& obj) {
                
       const auto methodID = methodID__trapdoorOpen();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID__pressurePlateClickOff() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("l", "pressurePlateClickOff", "comp_1295", "pressurePlateClickOff", "f_271234_"), "()Lavo;");
    }

    static jobject _pressurePlateClickOff(const jobject& obj) {
                
       const auto methodID = methodID__pressurePlateClickOff();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID__pressurePlateClickOn() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("m", "pressurePlateClickOn", "comp_1296", "pressurePlateClickOn", "f_271481_"), "()Lavo;");
    }

    static jobject _pressurePlateClickOn(const jobject& obj) {
                
       const auto methodID = methodID__pressurePlateClickOn();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID__buttonClickOff() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("n", "buttonClickOff", "comp_1297", "buttonClickOff", "f_271194_"), "()Lavo;");
    }

    static jobject _buttonClickOff(const jobject& obj) {
                
       const auto methodID = methodID__buttonClickOff();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID__buttonClickOn() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("o", "buttonClickOn", "comp_1298", "buttonClickOn", "f_271394_"), "()Lavo;");
    }

    static jobject _buttonClickOn(const jobject& obj) {
                
       const auto methodID = methodID__buttonClickOn();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_BLOCK_BLOCKSETTYPE_HPP