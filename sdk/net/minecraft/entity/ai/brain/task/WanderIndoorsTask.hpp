// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_ENTITY_AI_BRAIN_TASK_WANDERINDOORSTASK_HPP
#define NET_MINECRAFT_ENTITY_AI_BRAIN_TASK_WANDERINDOORSTASK_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.entity.ai.brain.task.WanderIndoorsTask
 * Remapped: bwd
 */
namespace WanderIndoorsTask {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("bwd", "net/minecraft/world/entity/ai/behavior/InsideBrownianWalk", "net/minecraft/class_4289", "net/minecraft/entity/ai/brain/task/WanderIndoorsTask", "net/minecraft/src/C_596_"));
        }
        return cachedClass;
    };

    static jmethodID methodID_create() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "create", "method_46949", "create", "m_258053_"), "(F)Lbvi;");
    }

    static jobject create(const jfloat& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_create();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0);
    };
    
};

#endif // NET_MINECRAFT_ENTITY_AI_BRAIN_TASK_WANDERINDOORSTASK_HPP