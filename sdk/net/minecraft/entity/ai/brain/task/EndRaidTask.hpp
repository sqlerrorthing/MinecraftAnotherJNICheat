// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_ENTITY_AI_BRAIN_TASK_ENDRAIDTASK_HPP
#define NET_MINECRAFT_ENTITY_AI_BRAIN_TASK_ENDRAIDTASK_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.entity.ai.brain.task.EndRaidTask
 * Remapped: bxc
 */
namespace EndRaidTask {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("bxc", "net/minecraft/world/entity/ai/behavior/ResetRaidStatus", "net/minecraft/class_4250", "net/minecraft/entity/ai/brain/task/EndRaidTask", "net/minecraft/src/C_616_"));
        }
        return cachedClass;
    };

    static jmethodID methodID_create() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "create", "method_47041", "create", "m_257468_"), "()Lbvi;");
    }

    static jobject create() {
       const auto clazz = self();
       const auto methodID = methodID_create();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID);
    };
    
};

#endif // NET_MINECRAFT_ENTITY_AI_BRAIN_TASK_ENDRAIDTASK_HPP