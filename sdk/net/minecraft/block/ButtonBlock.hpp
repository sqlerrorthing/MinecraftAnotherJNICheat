// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_BLOCK_BUTTONBLOCK_HPP
#define NET_MINECRAFT_BLOCK_BUTTONBLOCK_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.block.ButtonBlock
 * Remapped: dgi
 */
namespace ButtonBlock {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("dgi", "net/minecraft/world/level/block/ButtonBlock", "net/minecraft/class_2269", "net/minecraft/block/ButtonBlock", "net/minecraft/src/C_1716_"));
        }
        return cachedClass;
    };

    // getter for static public field net.minecraft.block.ButtonBlock#CODEC
    [[maybe_unused]] static jobject get_field_CODEC() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "CODEC", "field_46293", "CODEC", "f_302240_"), "Lcom/mojang/serialization/MapCodec;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.block.ButtonBlock#CODEC
    [[maybe_unused]] static void set_field_CODEC(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "CODEC", "field_46293", "CODEC", "f_302240_"), "Lcom/mojang/serialization/MapCodec;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.block.ButtonBlock#POWERED
    [[maybe_unused]] static jobject get_field_POWERED() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "POWERED", "field_10729", "POWERED", "f_51045_"), "Ldtt;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.block.ButtonBlock#POWERED
    [[maybe_unused]] static void set_field_POWERED(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "POWERED", "field_10729", "POWERED", "f_51045_"), "Ldtt;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.block.ButtonBlock#field_31040
    [[maybe_unused]] static jint get_field_field_31040() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("L", "PRESSED_DEPTH", "field_31040", "field_31040", "f_152736_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.block.ButtonBlock#field_31040
    [[maybe_unused]] static void set_field_field_31040(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("L", "PRESSED_DEPTH", "field_31040", "field_31040", "f_152736_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.block.ButtonBlock#field_31041
    [[maybe_unused]] static jint get_field_field_31041() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("M", "UNPRESSED_DEPTH", "field_31041", "field_31041", "f_152737_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.block.ButtonBlock#field_31041
    [[maybe_unused]] static void set_field_field_31041(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("M", "UNPRESSED_DEPTH", "field_31041", "field_31041", "f_152737_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for static protected field net.minecraft.block.ButtonBlock#field_31042
    [[maybe_unused]] static jint get_field_field_31042() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "HALF_AABB_HEIGHT", "field_31042", "field_31042", "f_152738_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static protected field net.minecraft.block.ButtonBlock#field_31042
    [[maybe_unused]] static void set_field_field_31042(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "HALF_AABB_HEIGHT", "field_31042", "field_31042", "f_152738_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for static protected field net.minecraft.block.ButtonBlock#field_31043
    [[maybe_unused]] static jint get_field_field_31043() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("d", "HALF_AABB_WIDTH", "field_31043", "field_31043", "f_152739_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static protected field net.minecraft.block.ButtonBlock#field_31043
    [[maybe_unused]] static void set_field_field_31043(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("d", "HALF_AABB_WIDTH", "field_31043", "field_31043", "f_152739_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for static protected field net.minecraft.block.ButtonBlock#CEILING_X_SHAPE
    [[maybe_unused]] static jobject get_field_CEILING_X_SHAPE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("e", "CEILING_AABB_X", "field_10721", "CEILING_X_SHAPE", "f_51046_"), "Lexv;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static protected field net.minecraft.block.ButtonBlock#CEILING_X_SHAPE
    [[maybe_unused]] static void set_field_CEILING_X_SHAPE(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("e", "CEILING_AABB_X", "field_10721", "CEILING_X_SHAPE", "f_51046_"), "Lexv;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static protected field net.minecraft.block.ButtonBlock#CEILING_Z_SHAPE
    [[maybe_unused]] static jobject get_field_CEILING_Z_SHAPE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("f", "CEILING_AABB_Z", "field_10727", "CEILING_Z_SHAPE", "f_51047_"), "Lexv;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static protected field net.minecraft.block.ButtonBlock#CEILING_Z_SHAPE
    [[maybe_unused]] static void set_field_CEILING_Z_SHAPE(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("f", "CEILING_AABB_Z", "field_10727", "CEILING_Z_SHAPE", "f_51047_"), "Lexv;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static protected field net.minecraft.block.ButtonBlock#FLOOR_X_SHAPE
    [[maybe_unused]] static jobject get_field_FLOOR_X_SHAPE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("g", "FLOOR_AABB_X", "field_10723", "FLOOR_X_SHAPE", "f_51048_"), "Lexv;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static protected field net.minecraft.block.ButtonBlock#FLOOR_X_SHAPE
    [[maybe_unused]] static void set_field_FLOOR_X_SHAPE(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("g", "FLOOR_AABB_X", "field_10723", "FLOOR_X_SHAPE", "f_51048_"), "Lexv;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static protected field net.minecraft.block.ButtonBlock#FLOOR_Z_SHAPE
    [[maybe_unused]] static jobject get_field_FLOOR_Z_SHAPE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("h", "FLOOR_AABB_Z", "field_10716", "FLOOR_Z_SHAPE", "f_51049_"), "Lexv;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static protected field net.minecraft.block.ButtonBlock#FLOOR_Z_SHAPE
    [[maybe_unused]] static void set_field_FLOOR_Z_SHAPE(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("h", "FLOOR_AABB_Z", "field_10716", "FLOOR_Z_SHAPE", "f_51049_"), "Lexv;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static protected field net.minecraft.block.ButtonBlock#NORTH_SHAPE
    [[maybe_unused]] static jobject get_field_NORTH_SHAPE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("i", "NORTH_AABB", "field_10728", "NORTH_SHAPE", "f_51050_"), "Lexv;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static protected field net.minecraft.block.ButtonBlock#NORTH_SHAPE
    [[maybe_unused]] static void set_field_NORTH_SHAPE(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("i", "NORTH_AABB", "field_10728", "NORTH_SHAPE", "f_51050_"), "Lexv;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static protected field net.minecraft.block.ButtonBlock#SOUTH_SHAPE
    [[maybe_unused]] static jobject get_field_SOUTH_SHAPE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("j", "SOUTH_AABB", "field_10715", "SOUTH_SHAPE", "f_51051_"), "Lexv;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static protected field net.minecraft.block.ButtonBlock#SOUTH_SHAPE
    [[maybe_unused]] static void set_field_SOUTH_SHAPE(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("j", "SOUTH_AABB", "field_10715", "SOUTH_SHAPE", "f_51051_"), "Lexv;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static protected field net.minecraft.block.ButtonBlock#WEST_SHAPE
    [[maybe_unused]] static jobject get_field_WEST_SHAPE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("k", "WEST_AABB", "field_10731", "WEST_SHAPE", "f_51052_"), "Lexv;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static protected field net.minecraft.block.ButtonBlock#WEST_SHAPE
    [[maybe_unused]] static void set_field_WEST_SHAPE(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("k", "WEST_AABB", "field_10731", "WEST_SHAPE", "f_51052_"), "Lexv;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static protected field net.minecraft.block.ButtonBlock#EAST_SHAPE
    [[maybe_unused]] static jobject get_field_EAST_SHAPE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("l", "EAST_AABB", "field_10720", "EAST_SHAPE", "f_51053_"), "Lexv;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static protected field net.minecraft.block.ButtonBlock#EAST_SHAPE
    [[maybe_unused]] static void set_field_EAST_SHAPE(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("l", "EAST_AABB", "field_10720", "EAST_SHAPE", "f_51053_"), "Lexv;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static protected field net.minecraft.block.ButtonBlock#CEILING_X_PRESSED_SHAPE
    [[maybe_unused]] static jobject get_field_CEILING_X_PRESSED_SHAPE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("m", "PRESSED_CEILING_AABB_X", "field_10717", "CEILING_X_PRESSED_SHAPE", "f_51054_"), "Lexv;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static protected field net.minecraft.block.ButtonBlock#CEILING_X_PRESSED_SHAPE
    [[maybe_unused]] static void set_field_CEILING_X_PRESSED_SHAPE(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("m", "PRESSED_CEILING_AABB_X", "field_10717", "CEILING_X_PRESSED_SHAPE", "f_51054_"), "Lexv;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static protected field net.minecraft.block.ButtonBlock#CEILING_Z_PRESSED_SHAPE
    [[maybe_unused]] static jobject get_field_CEILING_Z_PRESSED_SHAPE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("n", "PRESSED_CEILING_AABB_Z", "field_10726", "CEILING_Z_PRESSED_SHAPE", "f_51055_"), "Lexv;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static protected field net.minecraft.block.ButtonBlock#CEILING_Z_PRESSED_SHAPE
    [[maybe_unused]] static void set_field_CEILING_Z_PRESSED_SHAPE(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("n", "PRESSED_CEILING_AABB_Z", "field_10726", "CEILING_Z_PRESSED_SHAPE", "f_51055_"), "Lexv;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static protected field net.minecraft.block.ButtonBlock#FLOOR_X_PRESSED_SHAPE
    [[maybe_unused]] static jobject get_field_FLOOR_X_PRESSED_SHAPE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("o", "PRESSED_FLOOR_AABB_X", "field_10722", "FLOOR_X_PRESSED_SHAPE", "f_51056_"), "Lexv;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static protected field net.minecraft.block.ButtonBlock#FLOOR_X_PRESSED_SHAPE
    [[maybe_unused]] static void set_field_FLOOR_X_PRESSED_SHAPE(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("o", "PRESSED_FLOOR_AABB_X", "field_10722", "FLOOR_X_PRESSED_SHAPE", "f_51056_"), "Lexv;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static protected field net.minecraft.block.ButtonBlock#FLOOR_Z_PRESSED_SHAPE
    [[maybe_unused]] static jobject get_field_FLOOR_Z_PRESSED_SHAPE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("F", "PRESSED_FLOOR_AABB_Z", "field_10730", "FLOOR_Z_PRESSED_SHAPE", "f_51057_"), "Lexv;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static protected field net.minecraft.block.ButtonBlock#FLOOR_Z_PRESSED_SHAPE
    [[maybe_unused]] static void set_field_FLOOR_Z_PRESSED_SHAPE(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("F", "PRESSED_FLOOR_AABB_Z", "field_10730", "FLOOR_Z_PRESSED_SHAPE", "f_51057_"), "Lexv;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static protected field net.minecraft.block.ButtonBlock#NORTH_PRESSED_SHAPE
    [[maybe_unused]] static jobject get_field_NORTH_PRESSED_SHAPE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("G", "PRESSED_NORTH_AABB", "field_10719", "NORTH_PRESSED_SHAPE", "f_51058_"), "Lexv;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static protected field net.minecraft.block.ButtonBlock#NORTH_PRESSED_SHAPE
    [[maybe_unused]] static void set_field_NORTH_PRESSED_SHAPE(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("G", "PRESSED_NORTH_AABB", "field_10719", "NORTH_PRESSED_SHAPE", "f_51058_"), "Lexv;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static protected field net.minecraft.block.ButtonBlock#SOUTH_PRESSED_SHAPE
    [[maybe_unused]] static jobject get_field_SOUTH_PRESSED_SHAPE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("H", "PRESSED_SOUTH_AABB", "field_10724", "SOUTH_PRESSED_SHAPE", "f_51059_"), "Lexv;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static protected field net.minecraft.block.ButtonBlock#SOUTH_PRESSED_SHAPE
    [[maybe_unused]] static void set_field_SOUTH_PRESSED_SHAPE(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("H", "PRESSED_SOUTH_AABB", "field_10724", "SOUTH_PRESSED_SHAPE", "f_51059_"), "Lexv;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static protected field net.minecraft.block.ButtonBlock#WEST_PRESSED_SHAPE
    [[maybe_unused]] static jobject get_field_WEST_PRESSED_SHAPE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("I", "PRESSED_WEST_AABB", "field_10732", "WEST_PRESSED_SHAPE", "f_51060_"), "Lexv;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static protected field net.minecraft.block.ButtonBlock#WEST_PRESSED_SHAPE
    [[maybe_unused]] static void set_field_WEST_PRESSED_SHAPE(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("I", "PRESSED_WEST_AABB", "field_10732", "WEST_PRESSED_SHAPE", "f_51060_"), "Lexv;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static protected field net.minecraft.block.ButtonBlock#EAST_PRESSED_SHAPE
    [[maybe_unused]] static jobject get_field_EAST_PRESSED_SHAPE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("J", "PRESSED_EAST_AABB", "field_10718", "EAST_PRESSED_SHAPE", "f_51061_"), "Lexv;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static protected field net.minecraft.block.ButtonBlock#EAST_PRESSED_SHAPE
    [[maybe_unused]] static void set_field_EAST_PRESSED_SHAPE(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("J", "PRESSED_EAST_AABB", "field_10718", "EAST_PRESSED_SHAPE", "f_51061_"), "Lexv;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for private field net.minecraft.block.ButtonBlock#blockSetType
    static jobject get_field_blockSetType(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("N", "type", "field_42753", "blockSetType", "f_271519_"), "Ldtr;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.block.ButtonBlock#blockSetType
    static void set_field_blockSetType(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("N", "type", "field_42753", "blockSetType", "f_271519_"), "Ldtr;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.block.ButtonBlock#pressTicks
    static jint get_field_pressTicks(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("O", "ticksToStayPressed", "field_40298", "pressTicks", "f_244105_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetIntField(obj, fieldID);
    };

    // setter for static private field net.minecraft.block.ButtonBlock#pressTicks
    static void set_field_pressTicks(const jobject &obj, const jint &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("O", "ticksToStayPressed", "field_40298", "pressTicks", "f_244105_"), "I");
        return MinecraftSDK::env->SetIntField(obj, fieldID, value);
    };

    static jmethodID methodID_getCodec() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "codec", "method_53969", "getCodec", "m_304657_"), "()Lcom/mojang/serialization/MapCodec;");
    }

    static jobject getCodec(const jobject& obj) {
                
       const auto methodID = methodID_getCodec();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_getOutlineShape() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getShape", "method_9530", "getOutlineShape", "m_5940_"), "(Ldtc;Ldcc;Ljd;Lexh;)Lexv;");
    }

    static jobject getOutlineShape(const jobject& obj, const jobject& arg0, const jobject& arg1, const jobject& arg2, const jobject& arg3) {
                
       const auto methodID = methodID_getOutlineShape();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1, arg2, arg3);
    };
    
    static jmethodID methodID_onUse() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "useWithoutItem", "method_55766", "onUse", "m_6227_"), "(Ldtc;Ldcw;Ljd;Lcmx;Lewy;)Lbqr;");
    }

    static jobject onUse(const jobject& obj, const jobject& arg0, const jobject& arg1, const jobject& arg2, const jobject& arg3, const jobject& arg4) {
                
       const auto methodID = methodID_onUse();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1, arg2, arg3, arg4);
    };
    
    static jmethodID methodID_onExploded() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "onExplosionHit", "method_55124", "onExploded", "m_304760_"), "(Ldtc;Ldcw;Ljd;Ldco;Ljava/util/function/BiConsumer;)V");
    }

    static void onExploded(const jobject& obj, const jobject& arg0, const jobject& arg1, const jobject& arg2, const jobject& arg3, const jobject& arg4) {
                
       const auto methodID = methodID_onExploded();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1, arg2, arg3, arg4);
    };
    
    static jmethodID methodID_powerOn() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "press", "method_21845", "powerOn", "m_51116_"), "(Ldtc;Ldcw;Ljd;Lcmx;)V");
    }

    static void powerOn(const jobject& obj, const jobject& arg0, const jobject& arg1, const jobject& arg2, const jobject& arg3) {
                
       const auto methodID = methodID_powerOn();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1, arg2, arg3);
    };
    
    static jmethodID methodID_playClickSound() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "playSound", "method_9714", "playClickSound", "m_51067_"), "(Lcmx;Ldcx;Ljd;Z)V");
    }

    static void playClickSound(const jobject& obj, const jobject& arg0, const jobject& arg1, const jobject& arg2, const jboolean& arg3) {
                
       const auto methodID = methodID_playClickSound();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1, arg2, arg3);
    };
    
    static jmethodID methodID_getClickSound() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getSound", "method_9712", "getClickSound", "m_5722_"), "(Z)Lavo;");
    }

    static jobject getClickSound(const jobject& obj, const jboolean& arg0) {
                
       const auto methodID = methodID_getClickSound();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_onStateReplaced() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "onRemove", "method_9536", "onStateReplaced", "m_6810_"), "(Ldtc;Ldcw;Ljd;Ldtc;Z)V");
    }

    static void onStateReplaced(const jobject& obj, const jobject& arg0, const jobject& arg1, const jobject& arg2, const jobject& arg3, const jboolean& arg4) {
                
       const auto methodID = methodID_onStateReplaced();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1, arg2, arg3, arg4);
    };
    
    static jmethodID methodID_getWeakRedstonePower() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getSignal", "method_9524", "getWeakRedstonePower", "m_6378_"), "(Ldtc;Ldcc;Ljd;Lji;)I");
    }

    static jint getWeakRedstonePower(const jobject& obj, const jobject& arg0, const jobject& arg1, const jobject& arg2, const jobject& arg3) {
                
       const auto methodID = methodID_getWeakRedstonePower();
       return MinecraftSDK::env->CallIntMethod(obj, methodID, arg0, arg1, arg2, arg3);
    };
    
    static jmethodID methodID_getStrongRedstonePower() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "getDirectSignal", "method_9603", "getStrongRedstonePower", "m_6376_"), "(Ldtc;Ldcc;Ljd;Lji;)I");
    }

    static jint getStrongRedstonePower(const jobject& obj, const jobject& arg0, const jobject& arg1, const jobject& arg2, const jobject& arg3) {
                
       const auto methodID = methodID_getStrongRedstonePower();
       return MinecraftSDK::env->CallIntMethod(obj, methodID, arg0, arg1, arg2, arg3);
    };
    
    static jmethodID methodID_emitsRedstonePower() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("e_", "isSignalSource", "method_9506", "emitsRedstonePower", "m_7899_"), "(Ldtc;)Z");
    }

    static jboolean emitsRedstonePower(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_emitsRedstonePower();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_scheduledTick() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "tick", "method_9588", "scheduledTick", "m_213897_"), "(Ldtc;Laqu;Ljd;Layw;)V");
    }

    static void scheduledTick(const jobject& obj, const jobject& arg0, const jobject& arg1, const jobject& arg2, const jobject& arg3) {
                
       const auto methodID = methodID_scheduledTick();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1, arg2, arg3);
    };
    
    static jmethodID methodID_onEntityCollision() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "entityInside", "method_9548", "onEntityCollision", "m_7892_"), "(Ldtc;Ldcw;Ljd;Lbsr;)V");
    }

    static void onEntityCollision(const jobject& obj, const jobject& arg0, const jobject& arg1, const jobject& arg2, const jobject& arg3) {
                
       const auto methodID = methodID_onEntityCollision();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1, arg2, arg3);
    };
    
    static jmethodID methodID_tryPowerWithProjectiles() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("d", "checkPressed", "method_9715", "tryPowerWithProjectiles", "m_51120_"), "(Ldtc;Ldcw;Ljd;)V");
    }

    static void tryPowerWithProjectiles(const jobject& obj, const jobject& arg0, const jobject& arg1, const jobject& arg2) {
                
       const auto methodID = methodID_tryPowerWithProjectiles();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1, arg2);
    };
    
    static jmethodID methodID_updateNeighbors() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("e", "updateNeighbours", "method_9713", "updateNeighbors", "m_51124_"), "(Ldtc;Ldcw;Ljd;)V");
    }

    static void updateNeighbors(const jobject& obj, const jobject& arg0, const jobject& arg1, const jobject& arg2) {
                
       const auto methodID = methodID_updateNeighbors();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1, arg2);
    };
    
    static jmethodID methodID_appendProperties() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "createBlockStateDefinition", "method_9515", "appendProperties", "m_7926_"), "(Ldtd$a;)V");
    }

    static void appendProperties(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_appendProperties();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
};

#endif // NET_MINECRAFT_BLOCK_BUTTONBLOCK_HPP