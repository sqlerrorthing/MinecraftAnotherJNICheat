// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_ENTITY_AI_BRAIN_TASK_LOOKATMOBTASK_HPP
#define NET_MINECRAFT_ENTITY_AI_BRAIN_TASK_LOOKATMOBTASK_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.entity.ai.brain.task.LookAtMobTask
 * Remapped: bxg
 */
namespace LookAtMobTask {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("bxg", "net/minecraft/world/entity/ai/behavior/SetEntityLookTarget", "net/minecraft/class_4119", "net/minecraft/entity/ai/brain/task/LookAtMobTask", "net/minecraft/src/C_622_"));
        }
        return cachedClass;
    };

    static jmethodID methodID_create() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "create", "method_47061", "create", "m_257381_"), "(Lbtq;F)Lbvi;");
    }

    static jobject create(const jobject& arg0, const jfloat& arg1) {
       const auto clazz = self();
       const auto methodID = methodID_create();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0, arg1);
    };
    
    static jmethodID methodID__create() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "create", "method_47057", "create", "m_258096_"), "(Lbsx;F)Lbws;");
    }

    static jobject _create(const jobject& arg0, const jfloat& arg1) {
       const auto clazz = self();
       const auto methodID = methodID__create();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0, arg1);
    };
    
    static jmethodID methodID___create() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "create", "method_47056", "create", "m_257660_"), "(F)Lbws;");
    }

    static jobject __create(const jfloat& arg0) {
       const auto clazz = self();
       const auto methodID = methodID___create();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID____create() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "create", "method_47065", "create", "m_257836_"), "(Ljava/util/function/Predicate;F)Lbws;");
    }

    static jobject ___create(const jobject& arg0, const jfloat& arg1) {
       const auto clazz = self();
       const auto methodID = methodID____create();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0, arg1);
    };
    
};

#endif // NET_MINECRAFT_ENTITY_AI_BRAIN_TASK_LOOKATMOBTASK_HPP