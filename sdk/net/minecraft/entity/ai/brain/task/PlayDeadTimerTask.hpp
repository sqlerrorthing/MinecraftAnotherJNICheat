// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_ENTITY_AI_BRAIN_TASK_PLAYDEADTIMERTASK_HPP
#define NET_MINECRAFT_ENTITY_AI_BRAIN_TASK_PLAYDEADTIMERTASK_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.entity.ai.brain.task.PlayDeadTimerTask
 * Remapped: cgt
 */
namespace PlayDeadTimerTask {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("cgt", "net/minecraft/world/entity/animal/axolotl/ValidatePlayDead", "net/minecraft/class_5770", "net/minecraft/entity/ai/brain/task/PlayDeadTimerTask", "net/minecraft/src/C_141127_"));
        }
        return cachedClass;
    };

    static jmethodID methodID_create() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "create", "method_47268", "create", "m_257726_"), "()Lbvi;");
    }

    static jobject create() {
       const auto clazz = self();
       const auto methodID = methodID_create();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID);
    };
    
};

#endif // NET_MINECRAFT_ENTITY_AI_BRAIN_TASK_PLAYDEADTIMERTASK_HPP