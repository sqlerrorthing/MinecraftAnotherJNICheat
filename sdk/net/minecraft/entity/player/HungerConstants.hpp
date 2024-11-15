// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_ENTITY_PLAYER_HUNGERCONSTANTS_HPP
#define NET_MINECRAFT_ENTITY_PLAYER_HUNGERCONSTANTS_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.entity.player.HungerConstants
 * Remapped: cpp
 */
namespace HungerConstants {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("cpp", "net/minecraft/world/food/FoodConstants", "net/minecraft/class_6075", "net/minecraft/entity/player/HungerConstants", "net/minecraft/src/C_141160_"));
        }
        return cachedClass;
    };

    // getter for static public field net.minecraft.entity.player.HungerConstants#FULL_FOOD_LEVEL
    [[maybe_unused]] static jint get_field_FULL_FOOD_LEVEL() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "MAX_FOOD", "field_30704", "FULL_FOOD_LEVEL", "f_150350_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.entity.player.HungerConstants#FULL_FOOD_LEVEL
    [[maybe_unused]] static void set_field_FULL_FOOD_LEVEL(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "MAX_FOOD", "field_30704", "FULL_FOOD_LEVEL", "f_150350_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.entity.player.HungerConstants#field_30705
    [[maybe_unused]] static jfloat get_field_field_30705() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "MAX_SATURATION", "field_30705", "field_30705", "f_150351_"), "F");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticFloatField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.entity.player.HungerConstants#field_30705
    [[maybe_unused]] static void set_field_field_30705(const jfloat &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "MAX_SATURATION", "field_30705", "field_30705", "f_150351_"), "F");
        return MinecraftSDK::env->SetStaticFloatField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.entity.player.HungerConstants#INITIAL_SATURATION_LEVEL
    [[maybe_unused]] static jfloat get_field_INITIAL_SATURATION_LEVEL() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "START_SATURATION", "field_30706", "INITIAL_SATURATION_LEVEL", "f_150352_"), "F");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticFloatField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.entity.player.HungerConstants#INITIAL_SATURATION_LEVEL
    [[maybe_unused]] static void set_field_INITIAL_SATURATION_LEVEL(const jfloat &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "START_SATURATION", "field_30706", "INITIAL_SATURATION_LEVEL", "f_150352_"), "F");
        return MinecraftSDK::env->SetStaticFloatField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.entity.player.HungerConstants#field_30707
    [[maybe_unused]] static jfloat get_field_field_30707() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("d", "SATURATION_FLOOR", "field_30707", "field_30707", "f_150353_"), "F");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticFloatField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.entity.player.HungerConstants#field_30707
    [[maybe_unused]] static void set_field_field_30707(const jfloat &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("d", "SATURATION_FLOOR", "field_30707", "field_30707", "f_150353_"), "F");
        return MinecraftSDK::env->SetStaticFloatField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.entity.player.HungerConstants#EXHAUSTION_UNIT
    [[maybe_unused]] static jfloat get_field_EXHAUSTION_UNIT() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("e", "EXHAUSTION_DROP", "field_30708", "EXHAUSTION_UNIT", "f_150354_"), "F");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticFloatField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.entity.player.HungerConstants#EXHAUSTION_UNIT
    [[maybe_unused]] static void set_field_EXHAUSTION_UNIT(const jfloat &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("e", "EXHAUSTION_DROP", "field_30708", "EXHAUSTION_UNIT", "f_150354_"), "F");
        return MinecraftSDK::env->SetStaticFloatField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.entity.player.HungerConstants#SLOW_HEALING_STARVING_INTERVAL
    [[maybe_unused]] static jint get_field_SLOW_HEALING_STARVING_INTERVAL() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("f", "HEALTH_TICK_COUNT", "field_30709", "SLOW_HEALING_STARVING_INTERVAL", "f_150355_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.entity.player.HungerConstants#SLOW_HEALING_STARVING_INTERVAL
    [[maybe_unused]] static void set_field_SLOW_HEALING_STARVING_INTERVAL(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("f", "HEALTH_TICK_COUNT", "field_30709", "SLOW_HEALING_STARVING_INTERVAL", "f_150355_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.entity.player.HungerConstants#FAST_HEALING_INTERVAL
    [[maybe_unused]] static jint get_field_FAST_HEALING_INTERVAL() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("g", "HEALTH_TICK_COUNT_SATURATED", "field_30710", "FAST_HEALING_INTERVAL", "f_150356_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.entity.player.HungerConstants#FAST_HEALING_INTERVAL
    [[maybe_unused]] static void set_field_FAST_HEALING_INTERVAL(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("g", "HEALTH_TICK_COUNT_SATURATED", "field_30710", "FAST_HEALING_INTERVAL", "f_150356_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.entity.player.HungerConstants#SLOW_HEALING_FOOD_LEVEL
    [[maybe_unused]] static jint get_field_SLOW_HEALING_FOOD_LEVEL() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("h", "HEAL_LEVEL", "field_30711", "SLOW_HEALING_FOOD_LEVEL", "f_150357_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.entity.player.HungerConstants#SLOW_HEALING_FOOD_LEVEL
    [[maybe_unused]] static void set_field_SLOW_HEALING_FOOD_LEVEL(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("h", "HEAL_LEVEL", "field_30711", "SLOW_HEALING_FOOD_LEVEL", "f_150357_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.entity.player.HungerConstants#EXHAUSTION_PER_HITPOINT
    [[maybe_unused]] static jint get_field_EXHAUSTION_PER_HITPOINT() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("i", "SPRINT_LEVEL", "field_30712", "EXHAUSTION_PER_HITPOINT", "f_150358_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.entity.player.HungerConstants#EXHAUSTION_PER_HITPOINT
    [[maybe_unused]] static void set_field_EXHAUSTION_PER_HITPOINT(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("i", "SPRINT_LEVEL", "field_30712", "EXHAUSTION_PER_HITPOINT", "f_150358_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.entity.player.HungerConstants#STARVING_FOOD_LEVEL
    [[maybe_unused]] static jint get_field_STARVING_FOOD_LEVEL() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("j", "STARVE_LEVEL", "field_30713", "STARVING_FOOD_LEVEL", "f_150359_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.entity.player.HungerConstants#STARVING_FOOD_LEVEL
    [[maybe_unused]] static void set_field_STARVING_FOOD_LEVEL(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("j", "STARVE_LEVEL", "field_30713", "STARVING_FOOD_LEVEL", "f_150359_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.entity.player.HungerConstants#field_30714
    [[maybe_unused]] static jfloat get_field_field_30714() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("k", "FOOD_SATURATION_POOR", "field_30714", "field_30714", "f_150360_"), "F");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticFloatField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.entity.player.HungerConstants#field_30714
    [[maybe_unused]] static void set_field_field_30714(const jfloat &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("k", "FOOD_SATURATION_POOR", "field_30714", "field_30714", "f_150360_"), "F");
        return MinecraftSDK::env->SetStaticFloatField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.entity.player.HungerConstants#field_30715
    [[maybe_unused]] static jfloat get_field_field_30715() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("l", "FOOD_SATURATION_LOW", "field_30715", "field_30715", "f_150361_"), "F");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticFloatField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.entity.player.HungerConstants#field_30715
    [[maybe_unused]] static void set_field_field_30715(const jfloat &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("l", "FOOD_SATURATION_LOW", "field_30715", "field_30715", "f_150361_"), "F");
        return MinecraftSDK::env->SetStaticFloatField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.entity.player.HungerConstants#field_30716
    [[maybe_unused]] static jfloat get_field_field_30716() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("m", "FOOD_SATURATION_NORMAL", "field_30716", "field_30716", "f_150362_"), "F");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticFloatField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.entity.player.HungerConstants#field_30716
    [[maybe_unused]] static void set_field_field_30716(const jfloat &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("m", "FOOD_SATURATION_NORMAL", "field_30716", "field_30716", "f_150362_"), "F");
        return MinecraftSDK::env->SetStaticFloatField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.entity.player.HungerConstants#field_30717
    [[maybe_unused]] static jfloat get_field_field_30717() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("n", "FOOD_SATURATION_GOOD", "field_30717", "field_30717", "f_150363_"), "F");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticFloatField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.entity.player.HungerConstants#field_30717
    [[maybe_unused]] static void set_field_field_30717(const jfloat &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("n", "FOOD_SATURATION_GOOD", "field_30717", "field_30717", "f_150363_"), "F");
        return MinecraftSDK::env->SetStaticFloatField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.entity.player.HungerConstants#field_30718
    [[maybe_unused]] static jfloat get_field_field_30718() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("o", "FOOD_SATURATION_MAX", "field_30718", "field_30718", "f_150364_"), "F");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticFloatField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.entity.player.HungerConstants#field_30718
    [[maybe_unused]] static void set_field_field_30718(const jfloat &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("o", "FOOD_SATURATION_MAX", "field_30718", "field_30718", "f_150364_"), "F");
        return MinecraftSDK::env->SetStaticFloatField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.entity.player.HungerConstants#field_30719
    [[maybe_unused]] static jfloat get_field_field_30719() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("p", "FOOD_SATURATION_SUPERNATURAL", "field_30719", "field_30719", "f_150365_"), "F");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticFloatField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.entity.player.HungerConstants#field_30719
    [[maybe_unused]] static void set_field_field_30719(const jfloat &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("p", "FOOD_SATURATION_SUPERNATURAL", "field_30719", "field_30719", "f_150365_"), "F");
        return MinecraftSDK::env->SetStaticFloatField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.entity.player.HungerConstants#field_30720
    [[maybe_unused]] static jfloat get_field_field_30720() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("q", "EXHAUSTION_HEAL", "field_30720", "field_30720", "f_150366_"), "F");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticFloatField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.entity.player.HungerConstants#field_30720
    [[maybe_unused]] static void set_field_field_30720(const jfloat &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("q", "EXHAUSTION_HEAL", "field_30720", "field_30720", "f_150366_"), "F");
        return MinecraftSDK::env->SetStaticFloatField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.entity.player.HungerConstants#field_30721
    [[maybe_unused]] static jfloat get_field_field_30721() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("r", "EXHAUSTION_JUMP", "field_30721", "field_30721", "f_150367_"), "F");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticFloatField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.entity.player.HungerConstants#field_30721
    [[maybe_unused]] static void set_field_field_30721(const jfloat &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("r", "EXHAUSTION_JUMP", "field_30721", "field_30721", "f_150367_"), "F");
        return MinecraftSDK::env->SetStaticFloatField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.entity.player.HungerConstants#field_30722
    [[maybe_unused]] static jfloat get_field_field_30722() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("s", "EXHAUSTION_SPRINT_JUMP", "field_30722", "field_30722", "f_150368_"), "F");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticFloatField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.entity.player.HungerConstants#field_30722
    [[maybe_unused]] static void set_field_field_30722(const jfloat &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("s", "EXHAUSTION_SPRINT_JUMP", "field_30722", "field_30722", "f_150368_"), "F");
        return MinecraftSDK::env->SetStaticFloatField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.entity.player.HungerConstants#field_30723
    [[maybe_unused]] static jfloat get_field_field_30723() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("t", "EXHAUSTION_MINE", "field_30723", "field_30723", "f_150369_"), "F");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticFloatField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.entity.player.HungerConstants#field_30723
    [[maybe_unused]] static void set_field_field_30723(const jfloat &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("t", "EXHAUSTION_MINE", "field_30723", "field_30723", "f_150369_"), "F");
        return MinecraftSDK::env->SetStaticFloatField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.entity.player.HungerConstants#field_30724
    [[maybe_unused]] static jfloat get_field_field_30724() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("u", "EXHAUSTION_ATTACK", "field_30724", "field_30724", "f_150370_"), "F");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticFloatField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.entity.player.HungerConstants#field_30724
    [[maybe_unused]] static void set_field_field_30724(const jfloat &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("u", "EXHAUSTION_ATTACK", "field_30724", "field_30724", "f_150370_"), "F");
        return MinecraftSDK::env->SetStaticFloatField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.entity.player.HungerConstants#field_30726
    [[maybe_unused]] static jfloat get_field_field_30726() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("v", "EXHAUSTION_WALK", "field_30726", "field_30726", "f_150372_"), "F");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticFloatField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.entity.player.HungerConstants#field_30726
    [[maybe_unused]] static void set_field_field_30726(const jfloat &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("v", "EXHAUSTION_WALK", "field_30726", "field_30726", "f_150372_"), "F");
        return MinecraftSDK::env->SetStaticFloatField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.entity.player.HungerConstants#field_30727
    [[maybe_unused]] static jfloat get_field_field_30727() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("w", "EXHAUSTION_CROUCH", "field_30727", "field_30727", "f_150373_"), "F");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticFloatField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.entity.player.HungerConstants#field_30727
    [[maybe_unused]] static void set_field_field_30727(const jfloat &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("w", "EXHAUSTION_CROUCH", "field_30727", "field_30727", "f_150373_"), "F");
        return MinecraftSDK::env->SetStaticFloatField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.entity.player.HungerConstants#field_30728
    [[maybe_unused]] static jfloat get_field_field_30728() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("x", "EXHAUSTION_SPRINT", "field_30728", "field_30728", "f_150374_"), "F");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticFloatField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.entity.player.HungerConstants#field_30728
    [[maybe_unused]] static void set_field_field_30728(const jfloat &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("x", "EXHAUSTION_SPRINT", "field_30728", "field_30728", "f_150374_"), "F");
        return MinecraftSDK::env->SetStaticFloatField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.entity.player.HungerConstants#field_30729
    [[maybe_unused]] static jfloat get_field_field_30729() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("y", "EXHAUSTION_SWIM", "field_30729", "field_30729", "f_150375_"), "F");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticFloatField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.entity.player.HungerConstants#field_30729
    [[maybe_unused]] static void set_field_field_30729(const jfloat &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("y", "EXHAUSTION_SWIM", "field_30729", "field_30729", "f_150375_"), "F");
        return MinecraftSDK::env->SetStaticFloatField(clazz, fieldID, value);
    };

    static jmethodID methodID_calculateSaturation() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "saturationByModifier", "method_59683", "calculateSaturation", "m_324902_"), "(IF)F");
    }

    static jfloat calculateSaturation(const jint& arg0, const jfloat& arg1) {
       const auto clazz = self();
       const auto methodID = methodID_calculateSaturation();
       return MinecraftSDK::env->CallStaticFloatMethod(clazz, methodID, arg0, arg1);
    };
    
};

#endif // NET_MINECRAFT_ENTITY_PLAYER_HUNGERCONSTANTS_HPP