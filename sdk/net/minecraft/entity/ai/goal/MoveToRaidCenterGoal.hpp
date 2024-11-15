// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_ENTITY_AI_GOAL_MOVETORAIDCENTERGOAL_HPP
#define NET_MINECRAFT_ENTITY_AI_GOAL_MOVETORAIDCENTERGOAL_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.entity.ai.goal.MoveToRaidCenterGoal
 * Remapped: cbg
 */
namespace MoveToRaidCenterGoal {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("cbg", "net/minecraft/world/entity/ai/goal/PathfindToRaidGoal", "net/minecraft/class_3759", "net/minecraft/entity/ai/goal/MoveToRaidCenterGoal", "net/minecraft/src/C_713_"));
        }
        return cachedClass;
    };

    // getter for static private field net.minecraft.entity.ai.goal.MoveToRaidCenterGoal#FREE_RAIDER_CHECK_INTERVAL
    [[maybe_unused]] static jint get_field_FREE_RAIDER_CHECK_INTERVAL() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "RECRUITMENT_SEARCH_TICK_DELAY", "field_36302", "FREE_RAIDER_CHECK_INTERVAL", "f_199887_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.entity.ai.goal.MoveToRaidCenterGoal#FREE_RAIDER_CHECK_INTERVAL
    [[maybe_unused]] static void set_field_FREE_RAIDER_CHECK_INTERVAL(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "RECRUITMENT_SEARCH_TICK_DELAY", "field_36302", "FREE_RAIDER_CHECK_INTERVAL", "f_199887_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.entity.ai.goal.MoveToRaidCenterGoal#WALK_SPEED
    [[maybe_unused]] static jfloat get_field_WALK_SPEED() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "SPEED_MODIFIER", "field_30225", "WALK_SPEED", "f_148132_"), "F");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticFloatField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.entity.ai.goal.MoveToRaidCenterGoal#WALK_SPEED
    [[maybe_unused]] static void set_field_WALK_SPEED(const jfloat &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "SPEED_MODIFIER", "field_30225", "WALK_SPEED", "f_148132_"), "F");
        return MinecraftSDK::env->SetStaticFloatField(clazz, fieldID, value);
    };

    // getter for private field net.minecraft.entity.ai.goal.MoveToRaidCenterGoal#actor
    static jobject get_field_actor(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "mob", "field_16597", "actor", "f_25704_"), "Lcoj;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.entity.ai.goal.MoveToRaidCenterGoal#actor
    static void set_field_actor(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "mob", "field_16597", "actor", "f_25704_"), "Lcoj;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.entity.ai.goal.MoveToRaidCenterGoal#nextFreeRaiderCheckAge
    static jint get_field_nextFreeRaiderCheckAge(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "recruitmentTick", "field_36303", "nextFreeRaiderCheckAge", "f_199888_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetIntField(obj, fieldID);
    };

    // setter for static private field net.minecraft.entity.ai.goal.MoveToRaidCenterGoal#nextFreeRaiderCheckAge
    static void set_field_nextFreeRaiderCheckAge(const jobject &obj, const jint &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "recruitmentTick", "field_36303", "nextFreeRaiderCheckAge", "f_199888_"), "I");
        return MinecraftSDK::env->SetIntField(obj, fieldID, value);
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
    
    static jmethodID methodID_tick() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "tick", "method_6268", "tick", "m_8037_"), "()V");
    }

    static void tick(const jobject& obj) {
                
       const auto methodID = methodID_tick();
       MinecraftSDK::env->CallVoidMethod(obj, methodID);
    };
    
    static jmethodID methodID_includeFreeRaiders() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "recruitNearby", "method_16465", "includeFreeRaiders", "m_25708_"), "(Lcoi;)V");
    }

    static void includeFreeRaiders(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_includeFreeRaiders();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
};

#endif // NET_MINECRAFT_ENTITY_AI_GOAL_MOVETORAIDCENTERGOAL_HPP