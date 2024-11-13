// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_ENTITY_MOB_HOGLINBRAIN_HPP
#define NET_MINECRAFT_ENTITY_MOB_HOGLINBRAIN_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.entity.mob.HoglinBrain
 * Remapped: cli
 */
namespace HoglinBrain {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("cli", "net/minecraft/world/entity/monster/hoglin/HoglinAi", "net/minecraft/class_4835", "net/minecraft/entity/mob/HoglinBrain", "net/minecraft/src/C_1098_"));
        }
        return cachedClass;
    };

    // getter for static public field net.minecraft.entity.mob.HoglinBrain#field_30533
    [[maybe_unused]] static jint get_field_field_30533() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "REPELLENT_DETECTION_RANGE_HORIZONTAL", "field_30533", "field_30533", "f_149902_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.entity.mob.HoglinBrain#field_30533
    [[maybe_unused]] static void set_field_field_30533(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "REPELLENT_DETECTION_RANGE_HORIZONTAL", "field_30533", "field_30533", "f_149902_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.entity.mob.HoglinBrain#field_30534
    [[maybe_unused]] static jint get_field_field_30534() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "REPELLENT_DETECTION_RANGE_VERTICAL", "field_30534", "field_30534", "f_149903_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.entity.mob.HoglinBrain#field_30534
    [[maybe_unused]] static void set_field_field_30534(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "REPELLENT_DETECTION_RANGE_VERTICAL", "field_30534", "field_30534", "f_149903_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.entity.mob.HoglinBrain#AVOID_MEMORY_DURATION
    [[maybe_unused]] static jobject get_field_AVOID_MEMORY_DURATION() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "RETREAT_DURATION", "field_22369", "AVOID_MEMORY_DURATION", "f_34568_"), "Lbqc;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.entity.mob.HoglinBrain#AVOID_MEMORY_DURATION
    [[maybe_unused]] static void set_field_AVOID_MEMORY_DURATION(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "RETREAT_DURATION", "field_22369", "AVOID_MEMORY_DURATION", "f_34568_"), "Lbqc;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.entity.mob.HoglinBrain#field_30535
    [[maybe_unused]] static jint get_field_field_30535() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("d", "ATTACK_DURATION", "field_30535", "field_30535", "f_149904_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.entity.mob.HoglinBrain#field_30535
    [[maybe_unused]] static void set_field_field_30535(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("d", "ATTACK_DURATION", "field_30535", "field_30535", "f_149904_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.entity.mob.HoglinBrain#field_30536
    [[maybe_unused]] static jint get_field_field_30536() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("e", "DESIRED_DISTANCE_FROM_PIGLIN_WHEN_IDLING", "field_30536", "field_30536", "f_149905_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.entity.mob.HoglinBrain#field_30536
    [[maybe_unused]] static void set_field_field_30536(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("e", "DESIRED_DISTANCE_FROM_PIGLIN_WHEN_IDLING", "field_30536", "field_30536", "f_149905_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.entity.mob.HoglinBrain#field_30537
    [[maybe_unused]] static jint get_field_field_30537() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("f", "DESIRED_DISTANCE_FROM_PIGLIN_WHEN_RETREATING", "field_30537", "field_30537", "f_149906_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.entity.mob.HoglinBrain#field_30537
    [[maybe_unused]] static void set_field_field_30537(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("f", "DESIRED_DISTANCE_FROM_PIGLIN_WHEN_RETREATING", "field_30537", "field_30537", "f_149906_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.entity.mob.HoglinBrain#ADULT_MELEE_ATTACK_COOLDOWN
    [[maybe_unused]] static jint get_field_ADULT_MELEE_ATTACK_COOLDOWN() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("g", "ATTACK_INTERVAL", "field_30538", "ADULT_MELEE_ATTACK_COOLDOWN", "f_149907_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.entity.mob.HoglinBrain#ADULT_MELEE_ATTACK_COOLDOWN
    [[maybe_unused]] static void set_field_ADULT_MELEE_ATTACK_COOLDOWN(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("g", "ATTACK_INTERVAL", "field_30538", "ADULT_MELEE_ATTACK_COOLDOWN", "f_149907_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.entity.mob.HoglinBrain#BABY_MELEE_ATTACK_COOLDOWN
    [[maybe_unused]] static jint get_field_BABY_MELEE_ATTACK_COOLDOWN() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("h", "BABY_ATTACK_INTERVAL", "field_30539", "BABY_MELEE_ATTACK_COOLDOWN", "f_149908_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.entity.mob.HoglinBrain#BABY_MELEE_ATTACK_COOLDOWN
    [[maybe_unused]] static void set_field_BABY_MELEE_ATTACK_COOLDOWN(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("h", "BABY_ATTACK_INTERVAL", "field_30539", "BABY_MELEE_ATTACK_COOLDOWN", "f_149908_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.entity.mob.HoglinBrain#field_30540
    [[maybe_unused]] static jint get_field_field_30540() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("i", "REPELLENT_PACIFY_TIME", "field_30540", "field_30540", "f_149909_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.entity.mob.HoglinBrain#field_30540
    [[maybe_unused]] static void set_field_field_30540(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("i", "REPELLENT_PACIFY_TIME", "field_30540", "field_30540", "f_149909_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.entity.mob.HoglinBrain#WALK_TOWARD_CLOSEST_ADULT_RANGE
    [[maybe_unused]] static jobject get_field_WALK_TOWARD_CLOSEST_ADULT_RANGE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("j", "ADULT_FOLLOW_RANGE", "field_25383", "WALK_TOWARD_CLOSEST_ADULT_RANGE", "f_34569_"), "Lbqc;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.entity.mob.HoglinBrain#WALK_TOWARD_CLOSEST_ADULT_RANGE
    [[maybe_unused]] static void set_field_WALK_TOWARD_CLOSEST_ADULT_RANGE(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("j", "ADULT_FOLLOW_RANGE", "field_25383", "WALK_TOWARD_CLOSEST_ADULT_RANGE", "f_34569_"), "Lbqc;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.entity.mob.HoglinBrain#field_30541
    [[maybe_unused]] static jfloat get_field_field_30541() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("k", "SPEED_MULTIPLIER_WHEN_AVOIDING_REPELLENT", "field_30541", "field_30541", "f_149910_"), "F");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticFloatField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.entity.mob.HoglinBrain#field_30541
    [[maybe_unused]] static void set_field_field_30541(const jfloat &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("k", "SPEED_MULTIPLIER_WHEN_AVOIDING_REPELLENT", "field_30541", "field_30541", "f_149910_"), "F");
        return MinecraftSDK::env->SetStaticFloatField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.entity.mob.HoglinBrain#AVOID_TARGET_SPEED
    [[maybe_unused]] static jfloat get_field_AVOID_TARGET_SPEED() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("l", "SPEED_MULTIPLIER_WHEN_RETREATING", "field_30542", "AVOID_TARGET_SPEED", "f_149911_"), "F");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticFloatField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.entity.mob.HoglinBrain#AVOID_TARGET_SPEED
    [[maybe_unused]] static void set_field_AVOID_TARGET_SPEED(const jfloat &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("l", "SPEED_MULTIPLIER_WHEN_RETREATING", "field_30542", "AVOID_TARGET_SPEED", "f_149911_"), "F");
        return MinecraftSDK::env->SetStaticFloatField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.entity.mob.HoglinBrain#field_30543
    [[maybe_unused]] static jfloat get_field_field_30543() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("m", "SPEED_MULTIPLIER_WHEN_MAKING_LOVE", "field_30543", "field_30543", "f_149912_"), "F");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticFloatField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.entity.mob.HoglinBrain#field_30543
    [[maybe_unused]] static void set_field_field_30543(const jfloat &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("m", "SPEED_MULTIPLIER_WHEN_MAKING_LOVE", "field_30543", "field_30543", "f_149912_"), "F");
        return MinecraftSDK::env->SetStaticFloatField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.entity.mob.HoglinBrain#field_30544
    [[maybe_unused]] static jfloat get_field_field_30544() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("n", "SPEED_MULTIPLIER_WHEN_IDLING", "field_30544", "field_30544", "f_149913_"), "F");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticFloatField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.entity.mob.HoglinBrain#field_30544
    [[maybe_unused]] static void set_field_field_30544(const jfloat &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("n", "SPEED_MULTIPLIER_WHEN_IDLING", "field_30544", "field_30544", "f_149913_"), "F");
        return MinecraftSDK::env->SetStaticFloatField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.entity.mob.HoglinBrain#field_30545
    [[maybe_unused]] static jfloat get_field_field_30545() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("o", "SPEED_MULTIPLIER_WHEN_FOLLOWING_ADULT", "field_30545", "field_30545", "f_149914_"), "F");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticFloatField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.entity.mob.HoglinBrain#field_30545
    [[maybe_unused]] static void set_field_field_30545(const jfloat &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("o", "SPEED_MULTIPLIER_WHEN_FOLLOWING_ADULT", "field_30545", "field_30545", "f_149914_"), "F");
        return MinecraftSDK::env->SetStaticFloatField(clazz, fieldID, value);
    };

    static jmethodID methodID_create() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "makeBrain", "method_24668", "create", "m_34575_"), "(Lbuq;)Lbuq;");
    }

    static jobject create(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_create();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_addCoreTasks() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("b", "initCoreActivity", "method_24666", "addCoreTasks", "m_34591_"), "(Lbuq;)V");
    }

    static void addCoreTasks(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_addCoreTasks();
       MinecraftSDK::env->CallStaticVoidMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_addIdleTasks() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("c", "initIdleActivity", "method_24673", "addIdleTasks", "m_34601_"), "(Lbuq;)V");
    }

    static void addIdleTasks(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_addIdleTasks();
       MinecraftSDK::env->CallStaticVoidMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_addFightTasks() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("d", "initFightActivity", "method_24676", "addFightTasks", "m_34608_"), "(Lbuq;)V");
    }

    static void addFightTasks(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_addFightTasks();
       MinecraftSDK::env->CallStaticVoidMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_addAvoidTasks() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("e", "initRetreatActivity", "method_24679", "addAvoidTasks", "m_34615_"), "(Lbuq;)V");
    }

    static void addAvoidTasks(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_addAvoidTasks();
       MinecraftSDK::env->CallStaticVoidMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_makeRandomWalkTask() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "createIdleMovementBehaviors", "method_24662", "makeRandomWalkTask", "m_34571_"), "()Lbxe;");
    }

    static jobject makeRandomWalkTask() {
       const auto clazz = self();
       const auto methodID = methodID_makeRandomWalkTask();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID);
    };
    
    static jmethodID methodID_refreshActivities() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "updateActivity", "method_24664", "refreshActivities", "m_34577_"), "(Lclh;)V");
    }

    static void refreshActivities(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_refreshActivities();
       MinecraftSDK::env->CallStaticVoidMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_onAttacking() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "onHitTarget", "method_24665", "onAttacking", "m_34579_"), "(Lclh;Lbtn;)V");
    }

    static void onAttacking(const jobject& arg0, const jobject& arg1) {
       const auto clazz = self();
       const auto methodID = methodID_onAttacking();
       MinecraftSDK::env->CallStaticVoidMethod(clazz, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_askAdultsToAvoid() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("c", "broadcastRetreat", "method_24675", "askAdultsToAvoid", "m_34605_"), "(Lclh;Lbtn;)V");
    }

    static void askAdultsToAvoid(const jobject& arg0, const jobject& arg1) {
       const auto clazz = self();
       const auto methodID = methodID_askAdultsToAvoid();
       MinecraftSDK::env->CallStaticVoidMethod(clazz, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_avoidEnemy() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("d", "retreatFromNearestTarget", "method_24678", "avoidEnemy", "m_34612_"), "(Lclh;Lbtn;)V");
    }

    static void avoidEnemy(const jobject& arg0, const jobject& arg1) {
       const auto clazz = self();
       const auto methodID = methodID_avoidEnemy();
       MinecraftSDK::env->CallStaticVoidMethod(clazz, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_avoid() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("e", "setAvoidTarget", "method_24681", "avoid", "m_34619_"), "(Lclh;Lbtn;)V");
    }

    static void avoid(const jobject& arg0, const jobject& arg1) {
       const auto clazz = self();
       const auto methodID = methodID_avoid();
       MinecraftSDK::env->CallStaticVoidMethod(clazz, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_getNearestVisibleTargetablePlayer() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("d", "findNearestValidAttackTarget", "method_24684", "getNearestVisibleTargetablePlayer", "m_34610_"), "(Lclh;)Ljava/util/Optional;");
    }

    static jobject getNearestVisibleTargetablePlayer(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_getNearestVisibleTargetablePlayer();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_isWarpedFungusAround() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "isPosNearNearestRepellent", "method_24669", "isWarpedFungusAround", "m_34585_"), "(Lclh;Ljd;)Z");
    }

    static jboolean isWarpedFungusAround(const jobject& arg0, const jobject& arg1) {
       const auto clazz = self();
       const auto methodID = methodID_isWarpedFungusAround();
       return MinecraftSDK::env->CallStaticBooleanMethod(clazz, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_isLoneAdult() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("e", "wantsToStopFleeing", "method_25947", "isLoneAdult", "m_34617_"), "(Lclh;)Z");
    }

    static jboolean isLoneAdult(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_isLoneAdult();
       return MinecraftSDK::env->CallStaticBooleanMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_hasMoreHoglinsAround() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("f", "piglinsOutnumberHoglins", "method_24686", "hasMoreHoglinsAround", "m_34622_"), "(Lclh;)Z");
    }

    static jboolean hasMoreHoglinsAround(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_hasMoreHoglinsAround();
       return MinecraftSDK::env->CallStaticBooleanMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_onAttacked() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("b", "wasHurtBy", "method_24672", "onAttacked", "m_34595_"), "(Lclh;Lbtn;)V");
    }

    static void onAttacked(const jobject& arg0, const jobject& arg1) {
       const auto clazz = self();
       const auto methodID = methodID_onAttacked();
       MinecraftSDK::env->CallStaticVoidMethod(clazz, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_targetEnemy() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("f", "maybeRetaliate", "method_24683", "targetEnemy", "m_34624_"), "(Lclh;Lbtn;)V");
    }

    static void targetEnemy(const jobject& arg0, const jobject& arg1) {
       const auto clazz = self();
       const auto methodID = methodID_targetEnemy();
       MinecraftSDK::env->CallStaticVoidMethod(clazz, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_setAttackTarget() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("g", "setAttackTarget", "method_24685", "setAttackTarget", "m_34629_"), "(Lclh;Lbtn;)V");
    }

    static void setAttackTarget(const jobject& arg0, const jobject& arg1) {
       const auto clazz = self();
       const auto methodID = methodID_setAttackTarget();
       MinecraftSDK::env->CallStaticVoidMethod(clazz, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_askAdultsForHelp() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("h", "broadcastAttackTarget", "method_24687", "askAdultsForHelp", "m_34634_"), "(Lclh;Lbtn;)V");
    }

    static void askAdultsForHelp(const jobject& arg0, const jobject& arg1) {
       const auto clazz = self();
       const auto methodID = methodID_askAdultsForHelp();
       MinecraftSDK::env->CallStaticVoidMethod(clazz, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_setAttackTargetIfCloser() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("i", "setAttackTargetIfCloserThanCurrent", "method_24689", "setAttackTargetIfCloser", "m_34639_"), "(Lclh;Lbtn;)V");
    }

    static void setAttackTargetIfCloser(const jobject& arg0, const jobject& arg1) {
       const auto clazz = self();
       const auto methodID = methodID_setAttackTargetIfCloser();
       MinecraftSDK::env->CallStaticVoidMethod(clazz, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_getSoundEvent() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("b", "getSoundForCurrentActivity", "method_30083", "getSoundEvent", "m_34593_"), "(Lclh;)Ljava/util/Optional;");
    }

    static jobject getSoundEvent(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_getSoundEvent();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID__getSoundEvent() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "getSoundForActivity", "method_30082", "getSoundEvent", "m_34582_"), "(Lclh;Lcom;)Lavo;");
    }

    static jobject _getSoundEvent(const jobject& arg0, const jobject& arg1) {
       const auto clazz = self();
       const auto methodID = methodID__getSoundEvent();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_getAdultHoglinsAround() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("g", "getVisibleAdultHoglins", "method_24690", "getAdultHoglinsAround", "m_34627_"), "(Lclh;)Ljava/util/List;");
    }

    static jobject getAdultHoglinsAround(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_getAdultHoglinsAround();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_hasNearestRepellent() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("h", "isNearRepellent", "method_30085", "hasNearestRepellent", "m_34632_"), "(Lclh;)Z");
    }

    static jboolean hasNearestRepellent(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_hasNearestRepellent();
       return MinecraftSDK::env->CallStaticBooleanMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_hasBreedTarget() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("i", "isBreeding", "method_24691", "hasBreedTarget", "m_34637_"), "(Lclh;)Z");
    }

    static jboolean hasBreedTarget(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_hasBreedTarget();
       return MinecraftSDK::env->CallStaticBooleanMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_isNearPlayer() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("c", "isPacified", "method_24677", "isNearPlayer", "m_34603_"), "(Lclh;)Z");
    }

    static jboolean isNearPlayer(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_isNearPlayer();
       return MinecraftSDK::env->CallStaticBooleanMethod(clazz, methodID, arg0);
    };
    
};

#endif // NET_MINECRAFT_ENTITY_MOB_HOGLINBRAIN_HPP