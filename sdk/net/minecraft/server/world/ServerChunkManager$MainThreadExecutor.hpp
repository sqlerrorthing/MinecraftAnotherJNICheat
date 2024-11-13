// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_SERVER_WORLD_SERVERCHUNKMANAGER$MAINTHREADEXECUTOR_HPP
#define NET_MINECRAFT_SERVER_WORLD_SERVERCHUNKMANAGER$MAINTHREADEXECUTOR_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.server.world.ServerChunkManager$MainThreadExecutor
 * Remapped: aqs$b
 */
namespace ServerChunkManager$MainThreadExecutor {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("aqs$b", "net/minecraft/server/level/ServerChunkCache$MainThreadExecutor", "net/minecraft/class_3215$class_4212", "net/minecraft/server/world/ServerChunkManager$MainThreadExecutor", "net/minecraft/src/C_8_$C_10_"));
        }
        return cachedClass;
    };

    static jmethodID methodID_runTasks() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "managedBlock", "method_18857", "runTasks", "m_18701_"), "(Ljava/util/function/BooleanSupplier;)V");
    }

    static void runTasks(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_runTasks();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_createTask() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("f", "wrapRunnable", "method_16211", "createTask", "m_6681_"), "(Ljava/lang/Runnable;)Ljava/lang/Runnable;");
    }

    static jobject createTask(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_createTask();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_canExecute() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("e", "shouldRun", "method_18856", "canExecute", "m_6362_"), "(Ljava/lang/Runnable;)Z");
    }

    static jboolean canExecute(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_canExecute();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_shouldExecuteAsync() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("ay", "scheduleExecutables", "method_5384", "shouldExecuteAsync", "m_5660_"), "()Z");
    }

    static jboolean shouldExecuteAsync(const jobject& obj) {
                
       const auto methodID = methodID_shouldExecuteAsync();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID);
    };
    
    static jmethodID methodID_getThread() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("az", "getRunningThread", "method_3777", "getThread", "m_6304_"), "()Ljava/lang/Thread;");
    }

    static jobject getThread(const jobject& obj) {
                
       const auto methodID = methodID_getThread();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_executeTask() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("d", "doRunTask", "method_18859", "executeTask", "m_6367_"), "(Ljava/lang/Runnable;)V");
    }

    static void executeTask(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_executeTask();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_runTask() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("B", "pollTask", "method_16075", "runTask", "m_7245_"), "()Z");
    }

    static jboolean runTask(const jobject& obj) {
                
       const auto methodID = methodID_runTask();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_SERVER_WORLD_SERVERCHUNKMANAGER$MAINTHREADEXECUTOR_HPP