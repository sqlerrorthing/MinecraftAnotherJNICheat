// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_ENTITY_AI_BRAIN_TASK_WAKEUPTASK_HPP
#define NET_MINECRAFT_ENTITY_AI_BRAIN_TASK_WAKEUPTASK_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.entity.ai.brain.task.WakeUpTask
 * Remapped: byq
 */
namespace WakeUpTask {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("byq", "net/minecraft/world/entity/ai/behavior/WakeUp", "net/minecraft/class_4214", "net/minecraft/entity/ai/brain/task/WakeUpTask", "net/minecraft/src/C_653_"));
        }
        return cachedClass;
    };

    static jmethodID methodID_create() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "create", "method_47204", "create", "m_257779_"), "()Lbvi;");
    }

    static jobject create() {
       const auto clazz = self();
       const auto methodID = methodID_create();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID);
    };
    
};

#endif // NET_MINECRAFT_ENTITY_AI_BRAIN_TASK_WAKEUPTASK_HPP