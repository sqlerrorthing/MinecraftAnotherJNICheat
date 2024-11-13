// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_ENTITY_AI_GOAL_PROJECTILEATTACKGOAL_HPP
#define NET_MINECRAFT_ENTITY_AI_GOAL_PROJECTILEATTACKGOAL_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.entity.ai.goal.ProjectileAttackGoal
 * Remapped: cbl
 */
namespace ProjectileAttackGoal {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("cbl", "net/minecraft/world/entity/ai/goal/RangedAttackGoal", "net/minecraft/class_1381", "net/minecraft/entity/ai/goal/ProjectileAttackGoal", "net/minecraft/src/C_717_"));
        }
        return cachedClass;
    };

    // getter for private field net.minecraft.entity.ai.goal.ProjectileAttackGoal#mob
    static jobject get_field_mob(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "mob", "field_6583", "mob", "f_25757_"), "Lbtp;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.entity.ai.goal.ProjectileAttackGoal#mob
    static void set_field_mob(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "mob", "field_6583", "mob", "f_25757_"), "Lbtp;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.entity.ai.goal.ProjectileAttackGoal#owner
    static jobject get_field_owner(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "rangedAttackMob", "field_6582", "owner", "f_25758_"), "Lckh;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.entity.ai.goal.ProjectileAttackGoal#owner
    static void set_field_owner(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "rangedAttackMob", "field_6582", "owner", "f_25758_"), "Lckh;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.entity.ai.goal.ProjectileAttackGoal#target
    static jobject get_field_target(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "target", "field_6580", "target", "f_25759_"), "Lbtn;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.entity.ai.goal.ProjectileAttackGoal#target
    static void set_field_target(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "target", "field_6580", "target", "f_25759_"), "Lbtn;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.entity.ai.goal.ProjectileAttackGoal#updateCountdownTicks
    static jint get_field_updateCountdownTicks(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "attackTime", "field_6581", "updateCountdownTicks", "f_25760_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetIntField(obj, fieldID);
    };

    // setter for static private field net.minecraft.entity.ai.goal.ProjectileAttackGoal#updateCountdownTicks
    static void set_field_updateCountdownTicks(const jobject &obj, const jint &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "attackTime", "field_6581", "updateCountdownTicks", "f_25760_"), "I");
        return MinecraftSDK::env->SetIntField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.entity.ai.goal.ProjectileAttackGoal#mobSpeed
    static jdouble get_field_mobSpeed(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "speedModifier", "field_6586", "mobSpeed", "f_25761_"), "D");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetDoubleField(obj, fieldID);
    };

    // setter for static private field net.minecraft.entity.ai.goal.ProjectileAttackGoal#mobSpeed
    static void set_field_mobSpeed(const jobject &obj, const jdouble &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "speedModifier", "field_6586", "mobSpeed", "f_25761_"), "D");
        return MinecraftSDK::env->SetDoubleField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.entity.ai.goal.ProjectileAttackGoal#seenTargetTicks
    static jint get_field_seenTargetTicks(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("f", "seeTime", "field_6579", "seenTargetTicks", "f_25762_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetIntField(obj, fieldID);
    };

    // setter for static private field net.minecraft.entity.ai.goal.ProjectileAttackGoal#seenTargetTicks
    static void set_field_seenTargetTicks(const jobject &obj, const jint &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("f", "seeTime", "field_6579", "seenTargetTicks", "f_25762_"), "I");
        return MinecraftSDK::env->SetIntField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.entity.ai.goal.ProjectileAttackGoal#minIntervalTicks
    static jint get_field_minIntervalTicks(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("g", "attackIntervalMin", "field_6578", "minIntervalTicks", "f_25763_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetIntField(obj, fieldID);
    };

    // setter for static private field net.minecraft.entity.ai.goal.ProjectileAttackGoal#minIntervalTicks
    static void set_field_minIntervalTicks(const jobject &obj, const jint &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("g", "attackIntervalMin", "field_6578", "minIntervalTicks", "f_25763_"), "I");
        return MinecraftSDK::env->SetIntField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.entity.ai.goal.ProjectileAttackGoal#maxIntervalTicks
    static jint get_field_maxIntervalTicks(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("h", "attackIntervalMax", "field_6577", "maxIntervalTicks", "f_25764_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetIntField(obj, fieldID);
    };

    // setter for static private field net.minecraft.entity.ai.goal.ProjectileAttackGoal#maxIntervalTicks
    static void set_field_maxIntervalTicks(const jobject &obj, const jint &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("h", "attackIntervalMax", "field_6577", "maxIntervalTicks", "f_25764_"), "I");
        return MinecraftSDK::env->SetIntField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.entity.ai.goal.ProjectileAttackGoal#maxShootRange
    static jfloat get_field_maxShootRange(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("i", "attackRadius", "field_6585", "maxShootRange", "f_25765_"), "F");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetFloatField(obj, fieldID);
    };

    // setter for static private field net.minecraft.entity.ai.goal.ProjectileAttackGoal#maxShootRange
    static void set_field_maxShootRange(const jobject &obj, const jfloat &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("i", "attackRadius", "field_6585", "maxShootRange", "f_25765_"), "F");
        return MinecraftSDK::env->SetFloatField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.entity.ai.goal.ProjectileAttackGoal#squaredMaxShootRange
    static jfloat get_field_squaredMaxShootRange(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("j", "attackRadiusSqr", "field_6584", "squaredMaxShootRange", "f_25766_"), "F");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetFloatField(obj, fieldID);
    };

    // setter for static private field net.minecraft.entity.ai.goal.ProjectileAttackGoal#squaredMaxShootRange
    static void set_field_squaredMaxShootRange(const jobject &obj, const jfloat &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("j", "attackRadiusSqr", "field_6584", "squaredMaxShootRange", "f_25766_"), "F");
        return MinecraftSDK::env->SetFloatField(obj, fieldID, value);
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
    
};

#endif // NET_MINECRAFT_ENTITY_AI_GOAL_PROJECTILEATTACKGOAL_HPP