// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_ENTITY_PASSIVE_GOATBRAIN_HPP
#define NET_MINECRAFT_ENTITY_PASSIVE_GOATBRAIN_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.entity.passive.GoatBrain
 * Remapped: chf
 */
namespace GoatBrain {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("chf", "net/minecraft/world/entity/animal/goat/GoatAi", "net/minecraft/class_6054", "net/minecraft/entity/passive/GoatBrain", "net/minecraft/src/C_141132_"));
        }
        return cachedClass;
    };

    // getter for static public field net.minecraft.entity.passive.GoatBrain#PREPARE_RAM_DURATION
    [[maybe_unused]] static jint get_field_PREPARE_RAM_DURATION() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "RAM_PREPARE_TIME", "field_33490", "PREPARE_RAM_DURATION", "f_149420_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.entity.passive.GoatBrain#PREPARE_RAM_DURATION
    [[maybe_unused]] static void set_field_PREPARE_RAM_DURATION(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "RAM_PREPARE_TIME", "field_33490", "PREPARE_RAM_DURATION", "f_149420_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.entity.passive.GoatBrain#MAX_RAM_TARGET_DISTANCE
    [[maybe_unused]] static jint get_field_MAX_RAM_TARGET_DISTANCE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "RAM_MAX_DISTANCE", "field_33491", "MAX_RAM_TARGET_DISTANCE", "f_149421_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.entity.passive.GoatBrain#MAX_RAM_TARGET_DISTANCE
    [[maybe_unused]] static void set_field_MAX_RAM_TARGET_DISTANCE(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "RAM_MAX_DISTANCE", "field_33491", "MAX_RAM_TARGET_DISTANCE", "f_149421_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.entity.passive.GoatBrain#WALKING_SPEED
    [[maybe_unused]] static jobject get_field_WALKING_SPEED() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("i", "ADULT_FOLLOW_RANGE", "field_30407", "WALKING_SPEED", "f_149428_"), "Lbqc;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.entity.passive.GoatBrain#WALKING_SPEED
    [[maybe_unused]] static void set_field_WALKING_SPEED(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("i", "ADULT_FOLLOW_RANGE", "field_30407", "WALKING_SPEED", "f_149428_"), "Lbqc;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.entity.passive.GoatBrain#FOLLOWING_TARGET_WALK_SPEED
    [[maybe_unused]] static jfloat get_field_FOLLOWING_TARGET_WALK_SPEED() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("j", "SPEED_MULTIPLIER_WHEN_IDLING", "field_30406", "FOLLOWING_TARGET_WALK_SPEED", "f_149430_"), "F");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticFloatField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.entity.passive.GoatBrain#FOLLOWING_TARGET_WALK_SPEED
    [[maybe_unused]] static void set_field_FOLLOWING_TARGET_WALK_SPEED(const jfloat &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("j", "SPEED_MULTIPLIER_WHEN_IDLING", "field_30406", "FOLLOWING_TARGET_WALK_SPEED", "f_149430_"), "F");
        return MinecraftSDK::env->SetStaticFloatField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.entity.passive.GoatBrain#TEMPTED_WALK_SPEED
    [[maybe_unused]] static jfloat get_field_TEMPTED_WALK_SPEED() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("k", "SPEED_MULTIPLIER_WHEN_FOLLOWING_ADULT", "field_30408", "TEMPTED_WALK_SPEED", "f_149431_"), "F");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticFloatField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.entity.passive.GoatBrain#TEMPTED_WALK_SPEED
    [[maybe_unused]] static void set_field_TEMPTED_WALK_SPEED(const jfloat &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("k", "SPEED_MULTIPLIER_WHEN_FOLLOWING_ADULT", "field_30408", "TEMPTED_WALK_SPEED", "f_149431_"), "F");
        return MinecraftSDK::env->SetStaticFloatField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.entity.passive.GoatBrain#FOLLOW_ADULT_WALK_SPEED
    [[maybe_unused]] static jfloat get_field_FOLLOW_ADULT_WALK_SPEED() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("l", "SPEED_MULTIPLIER_WHEN_TEMPTED", "field_30409", "FOLLOW_ADULT_WALK_SPEED", "f_149432_"), "F");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticFloatField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.entity.passive.GoatBrain#FOLLOW_ADULT_WALK_SPEED
    [[maybe_unused]] static void set_field_FOLLOW_ADULT_WALK_SPEED(const jfloat &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("l", "SPEED_MULTIPLIER_WHEN_TEMPTED", "field_30409", "FOLLOW_ADULT_WALK_SPEED", "f_149432_"), "F");
        return MinecraftSDK::env->SetStaticFloatField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.entity.passive.GoatBrain#NORMAL_WALK_SPEED
    [[maybe_unused]] static jfloat get_field_NORMAL_WALK_SPEED() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("m", "SPEED_MULTIPLIER_WHEN_PANICKING", "field_30410", "NORMAL_WALK_SPEED", "f_149433_"), "F");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticFloatField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.entity.passive.GoatBrain#NORMAL_WALK_SPEED
    [[maybe_unused]] static void set_field_NORMAL_WALK_SPEED(const jfloat &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("m", "SPEED_MULTIPLIER_WHEN_PANICKING", "field_30410", "NORMAL_WALK_SPEED", "f_149433_"), "F");
        return MinecraftSDK::env->SetStaticFloatField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.entity.passive.GoatBrain#PREPARING_RAM_WALK_SPEED
    [[maybe_unused]] static jfloat get_field_PREPARING_RAM_WALK_SPEED() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("n", "SPEED_MULTIPLIER_WHEN_PREPARING_TO_RAM", "field_33498", "PREPARING_RAM_WALK_SPEED", "f_149434_"), "F");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticFloatField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.entity.passive.GoatBrain#PREPARING_RAM_WALK_SPEED
    [[maybe_unused]] static void set_field_PREPARING_RAM_WALK_SPEED(const jfloat &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("n", "SPEED_MULTIPLIER_WHEN_PREPARING_TO_RAM", "field_33498", "PREPARING_RAM_WALK_SPEED", "f_149434_"), "F");
        return MinecraftSDK::env->SetStaticFloatField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.entity.passive.GoatBrain#LONG_JUMP_COOLDOWN_RANGE
    [[maybe_unused]] static jobject get_field_LONG_JUMP_COOLDOWN_RANGE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("o", "TIME_BETWEEN_LONG_JUMPS", "field_30411", "LONG_JUMP_COOLDOWN_RANGE", "f_149435_"), "Lbqc;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.entity.passive.GoatBrain#LONG_JUMP_COOLDOWN_RANGE
    [[maybe_unused]] static void set_field_LONG_JUMP_COOLDOWN_RANGE(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("o", "TIME_BETWEEN_LONG_JUMPS", "field_30411", "LONG_JUMP_COOLDOWN_RANGE", "f_149435_"), "Lbqc;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.entity.passive.GoatBrain#LONG_JUMP_VERTICAL_RANGE
    [[maybe_unused]] static jint get_field_LONG_JUMP_VERTICAL_RANGE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "MAX_LONG_JUMP_HEIGHT", "field_33492", "LONG_JUMP_VERTICAL_RANGE", "f_149422_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.entity.passive.GoatBrain#LONG_JUMP_VERTICAL_RANGE
    [[maybe_unused]] static void set_field_LONG_JUMP_VERTICAL_RANGE(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "MAX_LONG_JUMP_HEIGHT", "field_33492", "LONG_JUMP_VERTICAL_RANGE", "f_149422_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.entity.passive.GoatBrain#LONG_JUMP_HORIZONTAL_RANGE
    [[maybe_unused]] static jint get_field_LONG_JUMP_HORIZONTAL_RANGE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("d", "MAX_LONG_JUMP_WIDTH", "field_33493", "LONG_JUMP_HORIZONTAL_RANGE", "f_149423_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.entity.passive.GoatBrain#LONG_JUMP_HORIZONTAL_RANGE
    [[maybe_unused]] static void set_field_LONG_JUMP_HORIZONTAL_RANGE(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("d", "MAX_LONG_JUMP_WIDTH", "field_33493", "LONG_JUMP_HORIZONTAL_RANGE", "f_149423_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.entity.passive.GoatBrain#field_49093
    [[maybe_unused]] static jfloat get_field_field_49093() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("e", "MAX_JUMP_VELOCITY_MULTIPLIER", "field_49093", "field_49093", "f_314685_"), "F");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticFloatField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.entity.passive.GoatBrain#field_49093
    [[maybe_unused]] static void set_field_field_49093(const jfloat &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("e", "MAX_JUMP_VELOCITY_MULTIPLIER", "field_49093", "field_49093", "f_314685_"), "F");
        return MinecraftSDK::env->SetStaticFloatField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.entity.passive.GoatBrain#RAM_COOLDOWN_RANGE
    [[maybe_unused]] static jobject get_field_RAM_COOLDOWN_RANGE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("p", "TIME_BETWEEN_RAMS", "field_33499", "RAM_COOLDOWN_RANGE", "f_149436_"), "Lbqc;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.entity.passive.GoatBrain#RAM_COOLDOWN_RANGE
    [[maybe_unused]] static void set_field_RAM_COOLDOWN_RANGE(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("p", "TIME_BETWEEN_RAMS", "field_33499", "RAM_COOLDOWN_RANGE", "f_149436_"), "Lbqc;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.entity.passive.GoatBrain#SCREAMING_RAM_COOLDOWN_RANGE
    [[maybe_unused]] static jobject get_field_SCREAMING_RAM_COOLDOWN_RANGE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("q", "TIME_BETWEEN_RAMS_SCREAMER", "field_33693", "SCREAMING_RAM_COOLDOWN_RANGE", "f_149437_"), "Lbqc;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.entity.passive.GoatBrain#SCREAMING_RAM_COOLDOWN_RANGE
    [[maybe_unused]] static void set_field_SCREAMING_RAM_COOLDOWN_RANGE(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("q", "TIME_BETWEEN_RAMS_SCREAMER", "field_33693", "SCREAMING_RAM_COOLDOWN_RANGE", "f_149437_"), "Lbqc;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.entity.passive.GoatBrain#RAM_TARGET_PREDICATE
    [[maybe_unused]] static jobject get_field_RAM_TARGET_PREDICATE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("r", "RAM_TARGET_CONDITIONS", "field_33500", "RAM_TARGET_PREDICATE", "f_149438_"), "Lcef;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.entity.passive.GoatBrain#RAM_TARGET_PREDICATE
    [[maybe_unused]] static void set_field_RAM_TARGET_PREDICATE(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("r", "RAM_TARGET_CONDITIONS", "field_33500", "RAM_TARGET_PREDICATE", "f_149438_"), "Lcef;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.entity.passive.GoatBrain#RAM_SPEED
    [[maybe_unused]] static jfloat get_field_RAM_SPEED() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("s", "SPEED_MULTIPLIER_WHEN_RAMMING", "field_33501", "RAM_SPEED", "f_149439_"), "F");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticFloatField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.entity.passive.GoatBrain#RAM_SPEED
    [[maybe_unused]] static void set_field_RAM_SPEED(const jfloat &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("s", "SPEED_MULTIPLIER_WHEN_RAMMING", "field_33501", "RAM_SPEED", "f_149439_"), "F");
        return MinecraftSDK::env->SetStaticFloatField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.entity.passive.GoatBrain#MIN_RAM_TARGET_DISTANCE
    [[maybe_unused]] static jint get_field_MIN_RAM_TARGET_DISTANCE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("f", "RAM_MIN_DISTANCE", "field_33495", "MIN_RAM_TARGET_DISTANCE", "f_149425_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.entity.passive.GoatBrain#MIN_RAM_TARGET_DISTANCE
    [[maybe_unused]] static void set_field_MIN_RAM_TARGET_DISTANCE(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("f", "RAM_MIN_DISTANCE", "field_33495", "MIN_RAM_TARGET_DISTANCE", "f_149425_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.entity.passive.GoatBrain#ADULT_RAM_STRENGTH_MULTIPLIER
    [[maybe_unused]] static jfloat get_field_ADULT_RAM_STRENGTH_MULTIPLIER() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("g", "ADULT_RAM_KNOCKBACK_FORCE", "field_33496", "ADULT_RAM_STRENGTH_MULTIPLIER", "f_149426_"), "F");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticFloatField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.entity.passive.GoatBrain#ADULT_RAM_STRENGTH_MULTIPLIER
    [[maybe_unused]] static void set_field_ADULT_RAM_STRENGTH_MULTIPLIER(const jfloat &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("g", "ADULT_RAM_KNOCKBACK_FORCE", "field_33496", "ADULT_RAM_STRENGTH_MULTIPLIER", "f_149426_"), "F");
        return MinecraftSDK::env->SetStaticFloatField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.entity.passive.GoatBrain#BABY_RAM_STRENGTH_MULTIPLIER
    [[maybe_unused]] static jfloat get_field_BABY_RAM_STRENGTH_MULTIPLIER() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("h", "BABY_RAM_KNOCKBACK_FORCE", "field_33497", "BABY_RAM_STRENGTH_MULTIPLIER", "f_149427_"), "F");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticFloatField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.entity.passive.GoatBrain#BABY_RAM_STRENGTH_MULTIPLIER
    [[maybe_unused]] static void set_field_BABY_RAM_STRENGTH_MULTIPLIER(const jfloat &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("h", "BABY_RAM_KNOCKBACK_FORCE", "field_33497", "BABY_RAM_STRENGTH_MULTIPLIER", "f_149427_"), "F");
        return MinecraftSDK::env->SetStaticFloatField(clazz, fieldID, value);
    };

    static jmethodID methodID_resetLongJumpCooldown() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "initMemories", "method_35184", "resetLongJumpCooldown", "m_218764_"), "(Lche;Layw;)V");
    }

    static void resetLongJumpCooldown(const jobject& arg0, const jobject& arg1) {
       const auto clazz = self();
       const auto methodID = methodID_resetLongJumpCooldown();
       MinecraftSDK::env->CallStaticVoidMethod(clazz, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_create() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "makeBrain", "method_35183", "create", "m_149447_"), "(Lbuq;)Lbuq;");
    }

    static jobject create(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_create();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_addCoreActivities() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("b", "initCoreActivity", "method_35185", "addCoreActivities", "m_149453_"), "(Lbuq;)V");
    }

    static void addCoreActivities(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_addCoreActivities();
       MinecraftSDK::env->CallStaticVoidMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_addIdleActivities() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("c", "initIdleActivity", "method_35187", "addIdleActivities", "m_149457_"), "(Lbuq;)V");
    }

    static void addIdleActivities(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_addIdleActivities();
       MinecraftSDK::env->CallStaticVoidMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_addLongJumpActivities() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("d", "initLongJumpActivity", "method_35188", "addLongJumpActivities", "m_149461_"), "(Lbuq;)V");
    }

    static void addLongJumpActivities(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_addLongJumpActivities();
       MinecraftSDK::env->CallStaticVoidMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_addRamActivities() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("e", "initRamActivity", "method_36288", "addRamActivities", "m_149465_"), "(Lbuq;)V");
    }

    static void addRamActivities(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_addRamActivities();
       MinecraftSDK::env->CallStaticVoidMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_updateActivities() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "updateActivity", "method_35186", "updateActivities", "m_149455_"), "(Lche;)V");
    }

    static void updateActivities(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_updateActivities();
       MinecraftSDK::env->CallStaticVoidMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_getTemptItemPredicate() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "getTemptations", "method_35181", "getTemptItemPredicate", "m_149444_"), "()Ljava/util/function/Predicate;");
    }

    static jobject getTemptItemPredicate() {
       const auto clazz = self();
       const auto methodID = methodID_getTemptItemPredicate();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID);
    };
    
};

#endif // NET_MINECRAFT_ENTITY_PASSIVE_GOATBRAIN_HPP