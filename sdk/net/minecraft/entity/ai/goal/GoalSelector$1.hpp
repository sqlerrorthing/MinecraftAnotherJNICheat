// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_ENTITY_AI_GOAL_GOALSELECTOR$1_HPP
#define NET_MINECRAFT_ENTITY_AI_GOAL_GOALSELECTOR$1_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.entity.ai.goal.GoalSelector$1
 * Remapped: can$1
 */
namespace GoalSelector$1 {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("can$1", "net/minecraft/world/entity/ai/goal/GoalSelector$1", "net/minecraft/class_1355$1", "net/minecraft/entity/ai/goal/GoalSelector$1", "net/minecraft/src/C_690_$C_691_"));
        }
        return cachedClass;
    };

    static jmethodID methodID_canStart() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "canUse", "method_6264", "canStart", "m_8036_"), "()Z");
    }

    static jboolean canStart(const jobject& obj) {
                
       const auto methodID = methodID_canStart();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_ENTITY_AI_GOAL_GOALSELECTOR$1_HPP