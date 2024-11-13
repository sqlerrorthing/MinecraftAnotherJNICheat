// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_ENTITY_AI_BRAIN_TASK_HUNTHOGLINTASK_HPP
#define NET_MINECRAFT_ENTITY_AI_BRAIN_TASK_HUNTHOGLINTASK_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.entity.ai.brain.task.HuntHoglinTask
 * Remapped: clu
 */
namespace HuntHoglinTask {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("clu", "net/minecraft/world/entity/monster/piglin/StartHuntingHoglin", "net/minecraft/class_4826", "net/minecraft/entity/ai/brain/task/HuntHoglinTask", "net/minecraft/src/C_1108_"));
        }
        return cachedClass;
    };

    static jmethodID methodID_create() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "create", "method_47283", "create", "m_257706_"), "()Lbws;");
    }

    static jobject create() {
       const auto clazz = self();
       const auto methodID = methodID_create();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID);
    };
    
    static jmethodID methodID_hasHuntedRecently() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "hasHuntedRecently", "method_47287", "hasHuntedRecently", "m_257899_"), "(Lclm;)Z");
    }

    static jboolean hasHuntedRecently(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_hasHuntedRecently();
       return MinecraftSDK::env->CallStaticBooleanMethod(clazz, methodID, arg0);
    };
    
};

#endif // NET_MINECRAFT_ENTITY_AI_BRAIN_TASK_HUNTHOGLINTASK_HPP