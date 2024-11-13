// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_ENTITY_AI_GOAL_MELEEATTACKGOAL_HPP
#define NET_MINECRAFT_ENTITY_AI_GOAL_MELEEATTACKGOAL_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.entity.ai.goal.MeleeAttackGoal
 * Remapped: caw
 */
namespace MeleeAttackGoal {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("caw", "net/minecraft/world/entity/ai/goal/MeleeAttackGoal", "net/minecraft/class_1366", "net/minecraft/entity/ai/goal/MeleeAttackGoal", "net/minecraft/src/C_703_"));
        }
        return cachedClass;
    };

    // getter for protected field net.minecraft.entity.ai.goal.MeleeAttackGoal#mob
    static jobject get_field_mob(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "mob", "field_6503", "mob", "f_25540_"), "Lbtw;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static protected field net.minecraft.entity.ai.goal.MeleeAttackGoal#mob
    static void set_field_mob(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "mob", "field_6503", "mob", "f_25540_"), "Lbtw;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.entity.ai.goal.MeleeAttackGoal#speed
    static jdouble get_field_speed(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "speedModifier", "field_6500", "speed", "f_25541_"), "D");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetDoubleField(obj, fieldID);
    };

    // setter for static private field net.minecraft.entity.ai.goal.MeleeAttackGoal#speed
    static void set_field_speed(const jobject &obj, const jdouble &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "speedModifier", "field_6500", "speed", "f_25541_"), "D");
        return MinecraftSDK::env->SetDoubleField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.entity.ai.goal.MeleeAttackGoal#pauseWhenMobIdle
    static jboolean get_field_pauseWhenMobIdle(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "followingTargetEvenIfNotSeen", "field_6502", "pauseWhenMobIdle", "f_25542_"), "Z");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetBooleanField(obj, fieldID);
    };

    // setter for static private field net.minecraft.entity.ai.goal.MeleeAttackGoal#pauseWhenMobIdle
    static void set_field_pauseWhenMobIdle(const jobject &obj, const jboolean &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "followingTargetEvenIfNotSeen", "field_6502", "pauseWhenMobIdle", "f_25542_"), "Z");
        return MinecraftSDK::env->SetBooleanField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.entity.ai.goal.MeleeAttackGoal#path
    static jobject get_field_path(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "path", "field_6509", "path", "f_25543_"), "Leps;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.entity.ai.goal.MeleeAttackGoal#path
    static void set_field_path(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "path", "field_6509", "path", "f_25543_"), "Leps;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.entity.ai.goal.MeleeAttackGoal#targetX
    static jdouble get_field_targetX(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "pathedTargetX", "field_6508", "targetX", "f_25544_"), "D");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetDoubleField(obj, fieldID);
    };

    // setter for static private field net.minecraft.entity.ai.goal.MeleeAttackGoal#targetX
    static void set_field_targetX(const jobject &obj, const jdouble &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "pathedTargetX", "field_6508", "targetX", "f_25544_"), "D");
        return MinecraftSDK::env->SetDoubleField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.entity.ai.goal.MeleeAttackGoal#targetY
    static jdouble get_field_targetY(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("f", "pathedTargetY", "field_6507", "targetY", "f_25545_"), "D");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetDoubleField(obj, fieldID);
    };

    // setter for static private field net.minecraft.entity.ai.goal.MeleeAttackGoal#targetY
    static void set_field_targetY(const jobject &obj, const jdouble &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("f", "pathedTargetY", "field_6507", "targetY", "f_25545_"), "D");
        return MinecraftSDK::env->SetDoubleField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.entity.ai.goal.MeleeAttackGoal#targetZ
    static jdouble get_field_targetZ(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("g", "pathedTargetZ", "field_6506", "targetZ", "f_25546_"), "D");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetDoubleField(obj, fieldID);
    };

    // setter for static private field net.minecraft.entity.ai.goal.MeleeAttackGoal#targetZ
    static void set_field_targetZ(const jobject &obj, const jdouble &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("g", "pathedTargetZ", "field_6506", "targetZ", "f_25546_"), "D");
        return MinecraftSDK::env->SetDoubleField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.entity.ai.goal.MeleeAttackGoal#updateCountdownTicks
    static jint get_field_updateCountdownTicks(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("h", "ticksUntilNextPathRecalculation", "field_6501", "updateCountdownTicks", "f_25547_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetIntField(obj, fieldID);
    };

    // setter for static private field net.minecraft.entity.ai.goal.MeleeAttackGoal#updateCountdownTicks
    static void set_field_updateCountdownTicks(const jobject &obj, const jint &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("h", "ticksUntilNextPathRecalculation", "field_6501", "updateCountdownTicks", "f_25547_"), "I");
        return MinecraftSDK::env->SetIntField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.entity.ai.goal.MeleeAttackGoal#cooldown
    static jint get_field_cooldown(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("i", "ticksUntilNextAttack", "field_24667", "cooldown", "f_25548_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetIntField(obj, fieldID);
    };

    // setter for static private field net.minecraft.entity.ai.goal.MeleeAttackGoal#cooldown
    static void set_field_cooldown(const jobject &obj, const jint &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("i", "ticksUntilNextAttack", "field_24667", "cooldown", "f_25548_"), "I");
        return MinecraftSDK::env->SetIntField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.entity.ai.goal.MeleeAttackGoal#attackIntervalTicks
    static jint get_field_attackIntervalTicks(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("j", "attackInterval", "field_6504", "attackIntervalTicks", "f_25549_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetIntField(obj, fieldID);
    };

    // setter for static private field net.minecraft.entity.ai.goal.MeleeAttackGoal#attackIntervalTicks
    static void set_field_attackIntervalTicks(const jobject &obj, const jint &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("j", "attackInterval", "field_6504", "attackIntervalTicks", "f_25549_"), "I");
        return MinecraftSDK::env->SetIntField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.entity.ai.goal.MeleeAttackGoal#lastUpdateTime
    static jlong get_field_lastUpdateTime(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("k", "lastCanUseCheck", "field_19200", "lastUpdateTime", "f_25550_"), "J");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetLongField(obj, fieldID);
    };

    // setter for static private field net.minecraft.entity.ai.goal.MeleeAttackGoal#lastUpdateTime
    static void set_field_lastUpdateTime(const jobject &obj, const jlong &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("k", "lastCanUseCheck", "field_19200", "lastUpdateTime", "f_25550_"), "J");
        return MinecraftSDK::env->SetLongField(obj, fieldID, value);
    };

    // getter for static private field net.minecraft.entity.ai.goal.MeleeAttackGoal#MAX_ATTACK_TIME
    [[maybe_unused]] static jlong get_field_MAX_ATTACK_TIME() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("l", "COOLDOWN_BETWEEN_CAN_USE_CHECKS", "field_30218", "MAX_ATTACK_TIME", "f_148125_"), "J");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticLongField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.entity.ai.goal.MeleeAttackGoal#MAX_ATTACK_TIME
    [[maybe_unused]] static void set_field_MAX_ATTACK_TIME(const jlong &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("l", "COOLDOWN_BETWEEN_CAN_USE_CHECKS", "field_30218", "MAX_ATTACK_TIME", "f_148125_"), "J");
        return MinecraftSDK::env->SetStaticLongField(clazz, fieldID, value);
    };

    static jmethodID methodID_canStart() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "canUse", "method_6264", "canStart", "m_8036_"), "()Z");
    }

    static jboolean canStart(const jobject& obj) {
                
       const auto methodID = methodID_canStart();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID);
    };
    
    static jmethodID methodID_shouldContinue() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "canContinueToUse", "method_6266", "shouldContinue", "m_8045_"), "()Z");
    }

    static jboolean shouldContinue(const jobject& obj) {
                
       const auto methodID = methodID_shouldContinue();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID);
    };
    
    static jmethodID methodID_start() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("d", "start", "method_6269", "start", "m_8056_"), "()V");
    }

    static void start(const jobject& obj) {
                
       const auto methodID = methodID_start();
       MinecraftSDK::env->CallVoidMethod(obj, methodID);
    };
    
    static jmethodID methodID_stop() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("e", "stop", "method_6270", "stop", "m_8041_"), "()V");
    }

    static void stop(const jobject& obj) {
                
       const auto methodID = methodID_stop();
       MinecraftSDK::env->CallVoidMethod(obj, methodID);
    };
    
    static jmethodID methodID_shouldRunEveryTick() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("V_", "requiresUpdateEveryTick", "method_38846", "shouldRunEveryTick", "m_183429_"), "()Z");
    }

    static jboolean shouldRunEveryTick(const jobject& obj) {
                
       const auto methodID = methodID_shouldRunEveryTick();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID);
    };
    
    static jmethodID methodID_tick() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "tick", "method_6268", "tick", "m_8037_"), "()V");
    }

    static void tick(const jobject& obj) {
                
       const auto methodID = methodID_tick();
       MinecraftSDK::env->CallVoidMethod(obj, methodID);
    };
    
    static jmethodID methodID_attack() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "checkAndPerformAttack", "method_6288", "attack", "m_6739_"), "(Lbtn;)V");
    }

    static void attack(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_attack();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_resetCooldown() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("h", "resetAttackCooldown", "method_28346", "resetCooldown", "m_25563_"), "()V");
    }

    static void resetCooldown(const jobject& obj) {
                
       const auto methodID = methodID_resetCooldown();
       MinecraftSDK::env->CallVoidMethod(obj, methodID);
    };
    
    static jmethodID methodID_isCooledDown() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("i", "isTimeToAttack", "method_28347", "isCooledDown", "m_25564_"), "()Z");
    }

    static jboolean isCooledDown(const jobject& obj) {
                
       const auto methodID = methodID_isCooledDown();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID);
    };
    
    static jmethodID methodID_canAttack() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "canPerformAttack", "method_53715", "canAttack", "m_295195_"), "(Lbtn;)Z");
    }

    static jboolean canAttack(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_canAttack();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_getCooldown() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("k", "getTicksUntilNextAttack", "method_28348", "getCooldown", "m_25565_"), "()I");
    }

    static jint getCooldown(const jobject& obj) {
                
       const auto methodID = methodID_getCooldown();
       return MinecraftSDK::env->CallIntMethod(obj, methodID);
    };
    
    static jmethodID methodID_getMaxCooldown() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("l", "getAttackInterval", "method_28349", "getMaxCooldown", "m_25566_"), "()I");
    }

    static jint getMaxCooldown(const jobject& obj) {
                
       const auto methodID = methodID_getMaxCooldown();
       return MinecraftSDK::env->CallIntMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_ENTITY_AI_GOAL_MELEEATTACKGOAL_HPP