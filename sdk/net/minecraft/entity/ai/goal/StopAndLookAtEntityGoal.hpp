// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_ENTITY_AI_GOAL_STOPANDLOOKATENTITYGOAL_HPP
#define NET_MINECRAFT_ENTITY_AI_GOAL_STOPANDLOOKATENTITYGOAL_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.entity.ai.goal.StopAndLookAtEntityGoal
 * Remapped: cap
 */
namespace StopAndLookAtEntityGoal {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("cap", "net/minecraft/world/entity/ai/goal/InteractGoal", "net/minecraft/class_1358", "net/minecraft/entity/ai/goal/StopAndLookAtEntityGoal", "net/minecraft/src/C_694_"));
        }
        return cachedClass;
    };

};

#endif // NET_MINECRAFT_ENTITY_AI_GOAL_STOPANDLOOKATENTITYGOAL_HPP