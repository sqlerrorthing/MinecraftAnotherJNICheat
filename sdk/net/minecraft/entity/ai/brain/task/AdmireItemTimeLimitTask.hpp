// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_ENTITY_AI_BRAIN_TASK_ADMIREITEMTIMELIMITTASK_HPP
#define NET_MINECRAFT_ENTITY_AI_BRAIN_TASK_ADMIREITEMTIMELIMITTASK_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.entity.ai.brain.task.AdmireItemTimeLimitTask
 * Remapped: clw
 */
namespace AdmireItemTimeLimitTask {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("clw", "net/minecraft/world/entity/monster/piglin/StopAdmiringIfTiredOfTryingToReachItem", "net/minecraft/class_5430", "net/minecraft/entity/ai/brain/task/AdmireItemTimeLimitTask", "net/minecraft/src/C_1112_"));
        }
        return cachedClass;
    };

    static jmethodID methodID_create() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "create", "method_47294", "create", "m_257715_"), "(II)Lbvi;");
    }

    static jobject create(const jint& arg0, const jint& arg1) {
       const auto clazz = self();
       const auto methodID = methodID_create();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0, arg1);
    };
    
};

#endif // NET_MINECRAFT_ENTITY_AI_BRAIN_TASK_ADMIREITEMTIMELIMITTASK_HPP