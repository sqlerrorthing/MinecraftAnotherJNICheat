// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_UTIL_COLORS_HPP
#define NET_MINECRAFT_UTIL_COLORS_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.util.Colors
 * Remapped: axi
 */
namespace Colors {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("axi", "net/minecraft/util/CommonColors", "net/minecraft/class_8012", "net/minecraft/util/Colors", "net/minecraft/src/C_263610_"));
        }
        return cachedClass;
    };

    // getter for static public field net.minecraft.util.Colors#WHITE
    [[maybe_unused]] static jint get_field_WHITE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "WHITE", "field_42973", "WHITE", "f_273869_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.util.Colors#WHITE
    [[maybe_unused]] static void set_field_WHITE(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "WHITE", "field_42973", "WHITE", "f_273869_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.util.Colors#BLACK
    [[maybe_unused]] static jint get_field_BLACK() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "BLACK", "field_42974", "BLACK", "f_273839_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.util.Colors#BLACK
    [[maybe_unused]] static void set_field_BLACK(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "BLACK", "field_42974", "BLACK", "f_273839_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.util.Colors#GRAY
    [[maybe_unused]] static jint get_field_GRAY() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "GRAY", "field_44941", "GRAY", "f_289577_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.util.Colors#GRAY
    [[maybe_unused]] static void set_field_GRAY(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "GRAY", "field_44941", "GRAY", "f_289577_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.util.Colors#LIGHT_GRAY
    [[maybe_unused]] static jint get_field_LIGHT_GRAY() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("d", "LIGHT_GRAY", "field_45073", "LIGHT_GRAY", "f_290906_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.util.Colors#LIGHT_GRAY
    [[maybe_unused]] static void set_field_LIGHT_GRAY(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("d", "LIGHT_GRAY", "field_45073", "LIGHT_GRAY", "f_290906_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.util.Colors#ALTERNATE_WHITE
    [[maybe_unused]] static jint get_field_ALTERNATE_WHITE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("e", "LIGHTER_GRAY", "field_49788", "ALTERNATE_WHITE", "f_314235_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.util.Colors#ALTERNATE_WHITE
    [[maybe_unused]] static void set_field_ALTERNATE_WHITE(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("e", "LIGHTER_GRAY", "field_49788", "ALTERNATE_WHITE", "f_314235_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.util.Colors#RED
    [[maybe_unused]] static jint get_field_RED() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("f", "RED", "field_41758", "RED", "f_263745_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.util.Colors#RED
    [[maybe_unused]] static void set_field_RED(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("f", "RED", "field_41758", "RED", "f_263745_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.util.Colors#GREEN
    [[maybe_unused]] static jint get_field_GREEN() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("g", "GREEN", "field_52312", "GREEN", "f_337343_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.util.Colors#GREEN
    [[maybe_unused]] static void set_field_GREEN(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("g", "GREEN", "field_52312", "GREEN", "f_337343_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.util.Colors#BLUE
    [[maybe_unused]] static jint get_field_BLUE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("h", "BLUE", "field_52313", "BLUE", "f_337388_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.util.Colors#BLUE
    [[maybe_unused]] static void set_field_BLUE(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("h", "BLUE", "field_52313", "BLUE", "f_337388_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.util.Colors#LIGHT_RED
    [[maybe_unused]] static jint get_field_LIGHT_RED() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("i", "SOFT_RED", "field_46652", "LIGHT_RED", "f_302377_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.util.Colors#LIGHT_RED
    [[maybe_unused]] static void set_field_LIGHT_RED(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("i", "SOFT_RED", "field_46652", "LIGHT_RED", "f_302377_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.util.Colors#YELLOW
    [[maybe_unused]] static jint get_field_YELLOW() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("j", "YELLOW", "field_46767", "YELLOW", "f_303658_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.util.Colors#YELLOW
    [[maybe_unused]] static void set_field_YELLOW(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("j", "YELLOW", "field_46767", "YELLOW", "f_303658_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.util.Colors#LIGHT_YELLOW
    [[maybe_unused]] static jint get_field_LIGHT_YELLOW() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("k", "SOFT_YELLOW", "field_46768", "LIGHT_YELLOW", "f_302655_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.util.Colors#LIGHT_YELLOW
    [[maybe_unused]] static void set_field_LIGHT_YELLOW(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("k", "SOFT_YELLOW", "field_46768", "LIGHT_YELLOW", "f_302655_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

};

#endif // NET_MINECRAFT_UTIL_COLORS_HPP