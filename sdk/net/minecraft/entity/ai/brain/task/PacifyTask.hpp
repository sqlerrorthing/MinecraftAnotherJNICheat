// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_ENTITY_AI_BRAIN_TASK_PACIFYTASK_HPP
#define NET_MINECRAFT_ENTITY_AI_BRAIN_TASK_PACIFYTASK_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.entity.ai.brain.task.PacifyTask
 * Remapped: bvg
 */
namespace PacifyTask {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("bvg", "net/minecraft/world/entity/ai/behavior/BecomePassiveIfMemoryPresent", "net/minecraft/class_4808", "net/minecraft/entity/ai/brain/task/PacifyTask", "net/minecraft/src/C_568_"));
        }
        return cachedClass;
    };

    static jmethodID methodID_create() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "create", "method_46908", "create", "m_257393_"), "(Lccs;I)Lbvi;");
    }

    static jobject create(const jobject& arg0, const jint& arg1) {
       const auto clazz = self();
       const auto methodID = methodID_create();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0, arg1);
    };
    
};

#endif // NET_MINECRAFT_ENTITY_AI_BRAIN_TASK_PACIFYTASK_HPP