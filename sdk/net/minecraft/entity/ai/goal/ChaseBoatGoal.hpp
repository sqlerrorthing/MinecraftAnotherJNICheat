// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_ENTITY_AI_GOAL_CHASEBOATGOAL_HPP
#define NET_MINECRAFT_ENTITY_AI_GOAL_CHASEBOATGOAL_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.entity.ai.goal.ChaseBoatGoal
 * Remapped: cah
 */
namespace ChaseBoatGoal {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("cah", "net/minecraft/world/entity/ai/goal/FollowBoatGoal", "net/minecraft/class_1346", "net/minecraft/entity/ai/goal/ChaseBoatGoal", "net/minecraft/src/C_683_"));
        }
        return cachedClass;
    };

    // getter for private field net.minecraft.entity.ai.goal.ChaseBoatGoal#updateCountdownTicks
    static jint get_field_updateCountdownTicks(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "timeToRecalcPath", "field_6428", "updateCountdownTicks", "f_25233_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetIntField(obj, fieldID);
    };

    // setter for static private field net.minecraft.entity.ai.goal.ChaseBoatGoal#updateCountdownTicks
    static void set_field_updateCountdownTicks(const jobject &obj, const jint &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "timeToRecalcPath", "field_6428", "updateCountdownTicks", "f_25233_"), "I");
        return MinecraftSDK::env->SetIntField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.entity.ai.goal.ChaseBoatGoal#mob
    static jobject get_field_mob(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "mob", "field_6426", "mob", "f_25234_"), "Lbtw;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.entity.ai.goal.ChaseBoatGoal#mob
    static void set_field_mob(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "mob", "field_6426", "mob", "f_25234_"), "Lbtw;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.entity.ai.goal.ChaseBoatGoal#passenger
    static jobject get_field_passenger(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "following", "field_6427", "passenger", "f_25235_"), "Lcmx;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.entity.ai.goal.ChaseBoatGoal#passenger
    static void set_field_passenger(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "following", "field_6427", "passenger", "f_25235_"), "Lcmx;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.entity.ai.goal.ChaseBoatGoal#state
    static jobject get_field_state(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "currentGoal", "field_6425", "state", "f_25236_"), "Lbzv;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.entity.ai.goal.ChaseBoatGoal#state
    static void set_field_state(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "currentGoal", "field_6425", "state", "f_25236_"), "Lbzv;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID_canStart() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "canUse", "method_6264", "canStart", "m_8036_"), "()Z");
    }

    static jboolean canStart(const jobject& obj) {
                
       const auto methodID = methodID_canStart();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID);
    };
    
    static jmethodID methodID_canStop() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("U_", "isInterruptable", "method_6267", "canStop", "m_6767_"), "()Z");
    }

    static jboolean canStop(const jobject& obj) {
                
       const auto methodID = methodID_canStop();
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
    
    static jmethodID methodID_tick() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "tick", "method_6268", "tick", "m_8037_"), "()V");
    }

    static void tick(const jobject& obj) {
                
       const auto methodID = methodID_tick();
       MinecraftSDK::env->CallVoidMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_ENTITY_AI_GOAL_CHASEBOATGOAL_HPP