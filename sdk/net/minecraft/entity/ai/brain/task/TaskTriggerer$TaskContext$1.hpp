// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_ENTITY_AI_BRAIN_TASK_TASKTRIGGERER$TASKCONTEXT$1_HPP
#define NET_MINECRAFT_ENTITY_AI_BRAIN_TASK_TASKTRIGGERER$TASKCONTEXT$1_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.entity.ai.brain.task.TaskTriggerer$TaskContext$1
 * Remapped: byu$b$1
 */
namespace TaskTriggerer$TaskContext$1 {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("byu$b$1", "net/minecraft/world/entity/ai/behavior/declarative/BehaviorBuilder$Instance$1", "net/minecraft/class_7898$class_7900$1", "net/minecraft/entity/ai/brain/task/TaskTriggerer$TaskContext$1", "net/minecraft/src/C_256697_$C_256696_$C_256709_"));
        }
        return cachedClass;
    };

    static jmethodID methodID_run() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "tryTrigger", "method_47232", "run", "m_257510_"), "(Laqu;Lbtn;J)Ljava/lang/Object;");
    }

    static jobject run(const jobject& obj, const jobject& arg0, const jobject& arg1, const jlong& arg2) {
                
       const auto methodID = methodID_run();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1, arg2);
    };
    
    static jmethodID methodID_asString() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "debugString", "method_47231", "asString", "m_257477_"), "()Ljava/lang/String;");
    }

    static jobject asString(const jobject& obj) {
                
       const auto methodID = methodID_asString();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_ENTITY_AI_BRAIN_TASK_TASKTRIGGERER$TASKCONTEXT$1_HPP