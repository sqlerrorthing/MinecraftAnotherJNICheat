// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_ENTITY_AI_BRAIN_TASK_FINDROARTARGETTASK_HPP
#define NET_MINECRAFT_ENTITY_AI_BRAIN_TASK_FINDROARTARGETTASK_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.entity.ai.brain.task.FindRoarTargetTask
 * Remapped: bze
 */
namespace FindRoarTargetTask {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("bze", "net/minecraft/world/entity/ai/behavior/warden/SetRoarTarget", "net/minecraft/class_7256", "net/minecraft/entity/ai/brain/task/FindRoarTargetTask", "net/minecraft/src/C_213022_"));
        }
        return cachedClass;
    };

    static jmethodID methodID_create() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "create", "method_47255", "create", "m_257595_"), "(Ljava/util/function/Function;)Lbvi;");
    }

    static jobject create(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_create();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0);
    };
    
};

#endif // NET_MINECRAFT_ENTITY_AI_BRAIN_TASK_FINDROARTARGETTASK_HPP