// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_ENTITY_AI_GOAL_FOLLOWMOBGOAL_HPP
#define NET_MINECRAFT_ENTITY_AI_GOAL_FOLLOWMOBGOAL_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.entity.ai.goal.FollowMobGoal
 * Remapped: caj
 */
namespace FollowMobGoal {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("caj", "net/minecraft/world/entity/ai/goal/FollowMobGoal", "net/minecraft/class_1348", "net/minecraft/entity/ai/goal/FollowMobGoal", "net/minecraft/src/C_685_"));
        }
        return cachedClass;
    };

    // getter for private field net.minecraft.entity.ai.goal.FollowMobGoal#mob
    static jobject get_field_mob(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "mob", "field_6432", "mob", "f_25261_"), "Lbtp;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.entity.ai.goal.FollowMobGoal#mob
    static void set_field_mob(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "mob", "field_6432", "mob", "f_25261_"), "Lbtp;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.entity.ai.goal.FollowMobGoal#targetPredicate
    static jobject get_field_targetPredicate(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "followPredicate", "field_6436", "targetPredicate", "f_25262_"), "Ljava/util/function/Predicate;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.entity.ai.goal.FollowMobGoal#targetPredicate
    static void set_field_targetPredicate(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "followPredicate", "field_6436", "targetPredicate", "f_25262_"), "Ljava/util/function/Predicate;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.entity.ai.goal.FollowMobGoal#target
    static jobject get_field_target(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "followingMob", "field_6433", "target", "f_25263_"), "Lbtp;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.entity.ai.goal.FollowMobGoal#target
    static void set_field_target(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "followingMob", "field_6433", "target", "f_25263_"), "Lbtp;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.entity.ai.goal.FollowMobGoal#speed
    static jdouble get_field_speed(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "speedModifier", "field_6430", "speed", "f_25264_"), "D");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetDoubleField(obj, fieldID);
    };

    // setter for static private field net.minecraft.entity.ai.goal.FollowMobGoal#speed
    static void set_field_speed(const jobject &obj, const jdouble &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "speedModifier", "field_6430", "speed", "f_25264_"), "D");
        return MinecraftSDK::env->SetDoubleField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.entity.ai.goal.FollowMobGoal#navigation
    static jobject get_field_navigation(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "navigation", "field_6434", "navigation", "f_25265_"), "Lcda;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.entity.ai.goal.FollowMobGoal#navigation
    static void set_field_navigation(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "navigation", "field_6434", "navigation", "f_25265_"), "Lcda;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.entity.ai.goal.FollowMobGoal#updateCountdownTicks
    static jint get_field_updateCountdownTicks(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("f", "timeToRecalcPath", "field_6431", "updateCountdownTicks", "f_25266_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetIntField(obj, fieldID);
    };

    // setter for static private field net.minecraft.entity.ai.goal.FollowMobGoal#updateCountdownTicks
    static void set_field_updateCountdownTicks(const jobject &obj, const jint &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("f", "timeToRecalcPath", "field_6431", "updateCountdownTicks", "f_25266_"), "I");
        return MinecraftSDK::env->SetIntField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.entity.ai.goal.FollowMobGoal#minDistance
    static jfloat get_field_minDistance(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("g", "stopDistance", "field_6438", "minDistance", "f_25267_"), "F");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetFloatField(obj, fieldID);
    };

    // setter for static private field net.minecraft.entity.ai.goal.FollowMobGoal#minDistance
    static void set_field_minDistance(const jobject &obj, const jfloat &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("g", "stopDistance", "field_6438", "minDistance", "f_25267_"), "F");
        return MinecraftSDK::env->SetFloatField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.entity.ai.goal.FollowMobGoal#oldWaterPathFindingPenalty
    static jfloat get_field_oldWaterPathFindingPenalty(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("h", "oldWaterCost", "field_6437", "oldWaterPathFindingPenalty", "f_25268_"), "F");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetFloatField(obj, fieldID);
    };

    // setter for static private field net.minecraft.entity.ai.goal.FollowMobGoal#oldWaterPathFindingPenalty
    static void set_field_oldWaterPathFindingPenalty(const jobject &obj, const jfloat &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("h", "oldWaterCost", "field_6437", "oldWaterPathFindingPenalty", "f_25268_"), "F");
        return MinecraftSDK::env->SetFloatField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.entity.ai.goal.FollowMobGoal#maxDistance
    static jfloat get_field_maxDistance(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("i", "areaSize", "field_6435", "maxDistance", "f_25269_"), "F");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetFloatField(obj, fieldID);
    };

    // setter for static private field net.minecraft.entity.ai.goal.FollowMobGoal#maxDistance
    static void set_field_maxDistance(const jobject &obj, const jfloat &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("i", "areaSize", "field_6435", "maxDistance", "f_25269_"), "F");
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

#endif // NET_MINECRAFT_ENTITY_AI_GOAL_FOLLOWMOBGOAL_HPP