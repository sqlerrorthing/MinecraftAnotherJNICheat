// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_ENTITY_AI_BRAIN_TASK_RANDOMTASK_HPP
#define NET_MINECRAFT_ENTITY_AI_BRAIN_TASK_RANDOMTASK_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.entity.ai.brain.task.RandomTask
 * Remapped: bxe
 */
namespace RandomTask {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("bxe", "net/minecraft/world/entity/ai/behavior/RunOne", "net/minecraft/class_4118", "net/minecraft/entity/ai/brain/task/RandomTask", "net/minecraft/src/C_619_"));
        }
        return cachedClass;
    };

};

#endif // NET_MINECRAFT_ENTITY_AI_BRAIN_TASK_RANDOMTASK_HPP