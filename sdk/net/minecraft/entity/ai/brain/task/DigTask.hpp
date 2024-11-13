// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_ENTITY_AI_BRAIN_TASK_DIGTASK_HPP
#define NET_MINECRAFT_ENTITY_AI_BRAIN_TASK_DIGTASK_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.entity.ai.brain.task.DigTask
 * Remapped: bza
 */
namespace DigTask {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("bza", "net/minecraft/world/entity/ai/behavior/warden/Digging", "net/minecraft/class_7249", "net/minecraft/entity/ai/brain/task/DigTask", "net/minecraft/src/C_213019_"));
        }
        return cachedClass;
    };

    static jmethodID methodID_shouldKeepRunning() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "canStillUse", "method_42152", "shouldKeepRunning", "m_6737_"), "(Laqu;Lcmb;J)Z");
    }

    static jboolean shouldKeepRunning(const jobject& obj, const jobject& arg0, const jobject& arg1, const jlong& arg2) {
                
       const auto methodID = methodID_shouldKeepRunning();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0, arg1, arg2);
    };
    
    static jmethodID methodID_shouldRun() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "checkExtraStartConditions", "method_42151", "shouldRun", "m_6114_"), "(Laqu;Lcmb;)Z");
    }

    static jboolean shouldRun(const jobject& obj, const jobject& arg0, const jobject& arg1) {
                
       const auto methodID = methodID_shouldRun();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_run() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "start", "method_42153", "run", "m_6735_"), "(Laqu;Lcmb;J)V");
    }

    static void run(const jobject& obj, const jobject& arg0, const jobject& arg1, const jlong& arg2) {
                
       const auto methodID = methodID_run();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1, arg2);
    };
    
    static jmethodID methodID_finishRunning() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "stop", "method_42154", "finishRunning", "m_6732_"), "(Laqu;Lcmb;J)V");
    }

    static void finishRunning(const jobject& obj, const jobject& arg0, const jobject& arg1, const jlong& arg2) {
                
       const auto methodID = methodID_finishRunning();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1, arg2);
    };
    
};

#endif // NET_MINECRAFT_ENTITY_AI_BRAIN_TASK_DIGTASK_HPP