// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_ENTITY_AI_BRAIN_TASK_SEEKWATERTASK_HPP
#define NET_MINECRAFT_ENTITY_AI_BRAIN_TASK_SEEKWATERTASK_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.entity.ai.brain.task.SeekWaterTask
 * Remapped: byg
 */
namespace SeekWaterTask {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("byg", "net/minecraft/world/entity/ai/behavior/TryFindWater", "net/minecraft/class_5756", "net/minecraft/entity/ai/brain/task/SeekWaterTask", "net/minecraft/src/C_141091_"));
        }
        return cachedClass;
    };

    static jmethodID methodID_create() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "create", "method_47176", "create", "m_257908_"), "(IF)Lbvi;");
    }

    static jobject create(const jint& arg0, const jfloat& arg1) {
       const auto clazz = self();
       const auto methodID = methodID_create();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0, arg1);
    };
    
};

#endif // NET_MINECRAFT_ENTITY_AI_BRAIN_TASK_SEEKWATERTASK_HPP