// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_ENTITY_AI_BRAIN_TASK_WALKTOWARDSLOOKTARGETTASK_HPP
#define NET_MINECRAFT_ENTITY_AI_BRAIN_TASK_WALKTOWARDSLOOKTARGETTASK_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.entity.ai.brain.task.WalkTowardsLookTargetTask
 * Remapped: bxv
 */
namespace WalkTowardsLookTargetTask {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("bxv", "net/minecraft/world/entity/ai/behavior/StayCloseToTarget", "net/minecraft/class_7297", "net/minecraft/entity/ai/brain/task/WalkTowardsLookTargetTask", "net/minecraft/src/C_213015_"));
        }
        return cachedClass;
    };

    static jmethodID methodID_create() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "create", "method_47130", "create", "m_271742_"), "(Ljava/util/function/Function;Ljava/util/function/Predicate;IIF)Lbvi;");
    }

    static jobject create(const jobject& arg0, const jobject& arg1, const jint& arg2, const jint& arg3, const jfloat& arg4) {
       const auto clazz = self();
       const auto methodID = methodID_create();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0, arg1, arg2, arg3, arg4);
    };
    
};

#endif // NET_MINECRAFT_ENTITY_AI_BRAIN_TASK_WALKTOWARDSLOOKTARGETTASK_HPP