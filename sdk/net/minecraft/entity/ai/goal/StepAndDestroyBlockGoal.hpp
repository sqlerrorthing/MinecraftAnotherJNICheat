// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_ENTITY_AI_GOAL_STEPANDDESTROYBLOCKGOAL_HPP
#define NET_MINECRAFT_ENTITY_AI_GOAL_STEPANDDESTROYBLOCKGOAL_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.entity.ai.goal.StepAndDestroyBlockGoal
 * Remapped: cbo
 */
namespace StepAndDestroyBlockGoal {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("cbo", "net/minecraft/world/entity/ai/goal/RemoveBlockGoal", "net/minecraft/class_1382", "net/minecraft/entity/ai/goal/StepAndDestroyBlockGoal", "net/minecraft/src/C_721_"));
        }
        return cachedClass;
    };

    // getter for private field net.minecraft.entity.ai.goal.StepAndDestroyBlockGoal#targetBlock
    static jobject get_field_targetBlock(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("g", "blockToRemove", "field_6587", "targetBlock", "f_25836_"), "Ldfy;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.entity.ai.goal.StepAndDestroyBlockGoal#targetBlock
    static void set_field_targetBlock(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("g", "blockToRemove", "field_6587", "targetBlock", "f_25836_"), "Ldfy;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.entity.ai.goal.StepAndDestroyBlockGoal#stepAndDestroyMob
    static jobject get_field_stepAndDestroyMob(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("h", "removerMob", "field_6589", "stepAndDestroyMob", "f_25837_"), "Lbtp;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.entity.ai.goal.StepAndDestroyBlockGoal#stepAndDestroyMob
    static void set_field_stepAndDestroyMob(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("h", "removerMob", "field_6589", "stepAndDestroyMob", "f_25837_"), "Lbtp;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.entity.ai.goal.StepAndDestroyBlockGoal#counter
    static jint get_field_counter(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("i", "ticksSinceReachedGoal", "field_6588", "counter", "f_25838_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetIntField(obj, fieldID);
    };

    // setter for static private field net.minecraft.entity.ai.goal.StepAndDestroyBlockGoal#counter
    static void set_field_counter(const jobject &obj, const jint &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("i", "ticksSinceReachedGoal", "field_6588", "counter", "f_25838_"), "I");
        return MinecraftSDK::env->SetIntField(obj, fieldID, value);
    };

    // getter for static private field net.minecraft.entity.ai.goal.StepAndDestroyBlockGoal#MAX_COOLDOWN
    [[maybe_unused]] static jint get_field_MAX_COOLDOWN() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("j", "WAIT_AFTER_BLOCK_FOUND", "field_30227", "MAX_COOLDOWN", "f_148135_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.entity.ai.goal.StepAndDestroyBlockGoal#MAX_COOLDOWN
    [[maybe_unused]] static void set_field_MAX_COOLDOWN(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("j", "WAIT_AFTER_BLOCK_FOUND", "field_30227", "MAX_COOLDOWN", "f_148135_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    static jmethodID methodID_canStart() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "canUse", "method_6264", "canStart", "m_8036_"), "()Z");
    }

    static jboolean canStart(const jobject& obj) {
                
       const auto methodID = methodID_canStart();
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
    
    static jmethodID methodID_start() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("d", "start", "method_6269", "start", "m_8056_"), "()V");
    }

    static void start(const jobject& obj) {
                
       const auto methodID = methodID_start();
       MinecraftSDK::env->CallVoidMethod(obj, methodID);
    };
    
    static jmethodID methodID_tickStepping() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "playDestroyProgressSound", "method_6307", "tickStepping", "m_7659_"), "(Ldcx;Ljd;)V");
    }

    static void tickStepping(const jobject& obj, const jobject& arg0, const jobject& arg1) {
                
       const auto methodID = methodID_tickStepping();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_onDestroyBlock() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "playBreakSound", "method_6309", "onDestroyBlock", "m_5777_"), "(Ldcw;Ljd;)V");
    }

    static void onDestroyBlock(const jobject& obj, const jobject& arg0, const jobject& arg1) {
                
       const auto methodID = methodID_onDestroyBlock();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_tick() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "tick", "method_6268", "tick", "m_8037_"), "()V");
    }

    static void tick(const jobject& obj) {
                
       const auto methodID = methodID_tick();
       MinecraftSDK::env->CallVoidMethod(obj, methodID);
    };
    
    static jmethodID methodID_tweakToProperPos() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getPosWithBlock", "method_6308", "tweakToProperPos", "m_25852_"), "(Ljd;Ldcc;)Ljd;");
    }

    static jobject tweakToProperPos(const jobject& obj, const jobject& arg0, const jobject& arg1) {
                
       const auto methodID = methodID_tweakToProperPos();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_isTargetPos() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "isValidTarget", "method_6296", "isTargetPos", "m_6465_"), "(Ldcz;Ljd;)Z");
    }

    static jboolean isTargetPos(const jobject& obj, const jobject& arg0, const jobject& arg1) {
                
       const auto methodID = methodID_isTargetPos();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0, arg1);
    };
    
};

#endif // NET_MINECRAFT_ENTITY_AI_GOAL_STEPANDDESTROYBLOCKGOAL_HPP