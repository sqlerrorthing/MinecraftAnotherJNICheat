// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_ENTITY_AI_BRAIN_TASK_MEMORYTRANSFERTASK_HPP
#define NET_MINECRAFT_ENTITY_AI_BRAIN_TASK_MEMORYTRANSFERTASK_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.entity.ai.brain.task.MemoryTransferTask
 * Remapped: bvm
 */
namespace MemoryTransferTask {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("bvm", "net/minecraft/world/entity/ai/behavior/CopyMemoryWithExpiry", "net/minecraft/class_4809", "net/minecraft/entity/ai/brain/task/MemoryTransferTask", "net/minecraft/src/C_574_"));
        }
        return cachedClass;
    };

    static jmethodID methodID_create() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "create", "method_46914", "create", "m_257819_"), "(Ljava/util/function/Predicate;Lccs;Lccs;Lbqc;)Lbvi;");
    }

    static jobject create(const jobject& arg0, const jobject& arg1, const jobject& arg2, const jobject& arg3) {
       const auto clazz = self();
       const auto methodID = methodID_create();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0, arg1, arg2, arg3);
    };
    
};

#endif // NET_MINECRAFT_ENTITY_AI_BRAIN_TASK_MEMORYTRANSFERTASK_HPP