// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_ENTITY_AI_GOAL_POWDERSNOWJUMPGOAL_HPP
#define NET_MINECRAFT_ENTITY_AI_GOAL_POWDERSNOWJUMPGOAL_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.entity.ai.goal.PowderSnowJumpGoal
 * Remapped: cab
 */
namespace PowderSnowJumpGoal {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("cab", "net/minecraft/world/entity/ai/goal/ClimbOnTopOfPowderSnowGoal", "net/minecraft/class_6868", "net/minecraft/entity/ai/goal/PowderSnowJumpGoal", "net/minecraft/src/C_203215_"));
        }
        return cachedClass;
    };

    // getter for private field net.minecraft.entity.ai.goal.PowderSnowJumpGoal#entity
    static jobject get_field_entity(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "mob", "field_36399", "entity", "f_204052_"), "Lbtp;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.entity.ai.goal.PowderSnowJumpGoal#entity
    static void set_field_entity(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "mob", "field_36399", "entity", "f_204052_"), "Lbtp;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.entity.ai.goal.PowderSnowJumpGoal#world
    static jobject get_field_world(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "level", "field_36400", "world", "f_204053_"), "Ldcw;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.entity.ai.goal.PowderSnowJumpGoal#world
    static void set_field_world(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "level", "field_36400", "world", "f_204053_"), "Ldcw;");
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

#endif // NET_MINECRAFT_ENTITY_AI_GOAL_POWDERSNOWJUMPGOAL_HPP