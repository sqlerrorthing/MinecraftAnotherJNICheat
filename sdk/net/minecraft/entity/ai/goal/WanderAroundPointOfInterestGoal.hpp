// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_ENTITY_AI_GOAL_WANDERAROUNDPOINTOFINTERESTGOAL_HPP
#define NET_MINECRAFT_ENTITY_AI_GOAL_WANDERAROUNDPOINTOFINTERESTGOAL_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.entity.ai.goal.WanderAroundPointOfInterestGoal
 * Remapped: cax
 */
namespace WanderAroundPointOfInterestGoal {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("cax", "net/minecraft/world/entity/ai/goal/MoveBackToVillageGoal", "net/minecraft/class_4291", "net/minecraft/entity/ai/goal/WanderAroundPointOfInterestGoal", "net/minecraft/src/C_704_"));
        }
        return cachedClass;
    };

    // getter for static private field net.minecraft.entity.ai.goal.WanderAroundPointOfInterestGoal#HORIZONTAL_RANGE
    [[maybe_unused]] static jint get_field_HORIZONTAL_RANGE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("i", "MAX_XZ_DIST", "field_30219", "HORIZONTAL_RANGE", "f_148126_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.entity.ai.goal.WanderAroundPointOfInterestGoal#HORIZONTAL_RANGE
    [[maybe_unused]] static void set_field_HORIZONTAL_RANGE(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("i", "MAX_XZ_DIST", "field_30219", "HORIZONTAL_RANGE", "f_148126_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.entity.ai.goal.WanderAroundPointOfInterestGoal#VERTICAL_RANGE
    [[maybe_unused]] static jint get_field_VERTICAL_RANGE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("j", "MAX_Y_DIST", "field_30220", "VERTICAL_RANGE", "f_148127_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.entity.ai.goal.WanderAroundPointOfInterestGoal#VERTICAL_RANGE
    [[maybe_unused]] static void set_field_VERTICAL_RANGE(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("j", "MAX_Y_DIST", "field_30220", "VERTICAL_RANGE", "f_148127_"), "I");
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
    
    static jmethodID methodID_getWanderTarget() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("h", "getPosition", "method_6302", "getWanderTarget", "m_7037_"), "()Lexc;");
    }

    static jobject getWanderTarget(const jobject& obj) {
                
       const auto methodID = methodID_getWanderTarget();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_ENTITY_AI_GOAL_WANDERAROUNDPOINTOFINTERESTGOAL_HPP