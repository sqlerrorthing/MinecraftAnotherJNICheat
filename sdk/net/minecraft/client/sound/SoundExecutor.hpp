// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_CLIENT_SOUND_SOUNDEXECUTOR_HPP
#define NET_MINECRAFT_CLIENT_SOUND_SOUNDEXECUTOR_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.client.sound.SoundExecutor
 * Remapped: gvd
 */
namespace SoundExecutor {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("gvd", "net/minecraft/client/sounds/SoundEngineExecutor", "net/minecraft/class_4238", "net/minecraft/client/sound/SoundExecutor", "net/minecraft/src/C_4601_"));
        }
        return cachedClass;
    };

    // getter for private field net.minecraft.client.sound.SoundExecutor#thread
    static jobject get_field_thread(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "thread", "field_18953", "thread", "f_120329_"), "Ljava/lang/Thread;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.sound.SoundExecutor#thread
    static void set_field_thread(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "thread", "field_18953", "thread", "f_120329_"), "Ljava/lang/Thread;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.sound.SoundExecutor#stopped
    static jboolean get_field_stopped(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "shutdown", "field_18954", "stopped", "f_120330_"), "Z");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetBooleanField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.sound.SoundExecutor#stopped
    static void set_field_stopped(const jobject &obj, const jboolean &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "shutdown", "field_18954", "stopped", "f_120330_"), "Z");
        return MinecraftSDK::env->SetBooleanField(obj, fieldID, value);
    };

    static jmethodID methodID_createThread() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "createThread", "method_19764", "createThread", "m_120334_"), "()Ljava/lang/Thread;");
    }

    static jobject createThread(const jobject& obj) {
                
       const auto methodID = methodID_createThread();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
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
    
    static jmethodID methodID_getThread() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("az", "getRunningThread", "method_3777", "getThread", "m_6304_"), "()Ljava/lang/Thread;");
    }

    static jobject getThread(const jobject& obj) {
                
       const auto methodID = methodID_getThread();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_waitForStop() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "run", "method_19765", "waitForStop", "m_120336_"), "()V");
    }

    static void waitForStop(const jobject& obj) {
                
       const auto methodID = methodID_waitForStop();
       MinecraftSDK::env->CallVoidMethod(obj, methodID);
    };
    
    static jmethodID methodID_waitForTasks() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("A", "waitForTasks", "method_20813", "waitForTasks", "m_5667_"), "()V");
    }

    static void waitForTasks(const jobject& obj) {
                
       const auto methodID = methodID_waitForTasks();
       MinecraftSDK::env->CallVoidMethod(obj, methodID);
    };
    
    static jmethodID methodID_restart() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "flush", "method_19763", "restart", "m_120332_"), "()V");
    }

    static void restart(const jobject& obj) {
                
       const auto methodID = methodID_restart();
       MinecraftSDK::env->CallVoidMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_CLIENT_SOUND_SOUNDEXECUTOR_HPP