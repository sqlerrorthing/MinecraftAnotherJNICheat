// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_ENTITY_AI_BRAIN_TASK_HIDEWHENBELLRINGSTASK_HPP
#define NET_MINECRAFT_ENTITY_AI_BRAIN_TASK_HIDEWHENBELLRINGSTASK_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.entity.ai.brain.task.HideWhenBellRingsTask
 * Remapped: bxa
 */
namespace HideWhenBellRingsTask {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("bxa", "net/minecraft/world/entity/ai/behavior/ReactToBell", "net/minecraft/class_4249", "net/minecraft/entity/ai/brain/task/HideWhenBellRingsTask", "net/minecraft/src/C_614_"));
        }
        return cachedClass;
    };

    static jmethodID methodID_create() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "create", "method_47033", "create", "m_258068_"), "()Lbvi;");
    }

    static jobject create() {
       const auto clazz = self();
       const auto methodID = methodID_create();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID);
    };
    
};

#endif // NET_MINECRAFT_ENTITY_AI_BRAIN_TASK_HIDEWHENBELLRINGSTASK_HPP