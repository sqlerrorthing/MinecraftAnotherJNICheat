// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_CLIENT_REALMS_TASK_LONGRUNNINGTASK_HPP
#define NET_MINECRAFT_CLIENT_REALMS_TASK_LONGRUNNINGTASK_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.client.realms.task.LongRunningTask
 * Remapped: ffn
 */
namespace LongRunningTask {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("ffn", "com/mojang/realmsclient/util/task/LongRunningTask", "net/minecraft/class_4358", "net/minecraft/client/realms/task/LongRunningTask", "net/minecraft/src/C_3363_"));
        }
        return cachedClass;
    };

    // getter for static protected field net.minecraft.client.realms.task.LongRunningTask#MAX_RETRIES
    [[maybe_unused]] static jint get_field_MAX_RETRIES() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "NUMBER_OF_RETRIES", "field_32132", "MAX_RETRIES", "f_167654_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static protected field net.minecraft.client.realms.task.LongRunningTask#MAX_RETRIES
    [[maybe_unused]] static void set_field_MAX_RETRIES(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "NUMBER_OF_RETRIES", "field_32132", "MAX_RETRIES", "f_167654_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.client.realms.task.LongRunningTask#LOGGER
    [[maybe_unused]] static jobject get_field_LOGGER() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "LOGGER", "field_22731", "LOGGER", "f_90394_"), "Lorg/slf4j/Logger;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.realms.task.LongRunningTask#LOGGER
    [[maybe_unused]] static void set_field_LOGGER(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "LOGGER", "field_22731", "LOGGER", "f_90394_"), "Lorg/slf4j/Logger;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for private field net.minecraft.client.realms.task.LongRunningTask#aborted
    static jboolean get_field_aborted(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "aborted", "field_46136", "aborted", "f_291442_"), "Z");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetBooleanField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.realms.task.LongRunningTask#aborted
    static void set_field_aborted(const jobject &obj, const jboolean &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "aborted", "field_46136", "aborted", "f_291442_"), "Z");
        return MinecraftSDK::env->SetBooleanField(obj, fieldID, value);
    };

    static jmethodID methodID_pause() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "pause", "method_25287", "pause", "m_167655_"), "(J)V");
    }

    static void pause(const jlong& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_pause();
       MinecraftSDK::env->CallStaticVoidMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_setScreen() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "setScreen", "method_25289", "setScreen", "m_90405_"), "(Lfod;)V");
    }

    static void setScreen(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_setScreen();
       MinecraftSDK::env->CallStaticVoidMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_error() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "error", "method_21067", "error", "m_90407_"), "(Lwz;)V");
    }

    static void error(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_error();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID__error() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "error", "method_53811", "error", "m_292896_"), "(Ljava/lang/Exception;)V");
    }

    static void _error(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID__error();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID___error() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "error", "method_53809", "error", "m_293957_"), "(Lfdj;)V");
    }

    static void __error(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID___error();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_getTitle() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getTitle", "method_53808", "getTitle", "m_293037_"), "()Lwz;");
    }

    static jobject getTitle(const jobject& obj) {
                
       const auto methodID = methodID_getTitle();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID__aborted() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("d", "aborted", "method_21065", "aborted", "m_90411_"), "()Z");
    }

    static jboolean _aborted(const jobject& obj) {
                
       const auto methodID = methodID__aborted();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID);
    };
    
    static jmethodID methodID_tick() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "tick", "method_21068", "tick", "m_5519_"), "()V");
    }

    static void tick(const jobject& obj) {
                
       const auto methodID = methodID_tick();
       MinecraftSDK::env->CallVoidMethod(obj, methodID);
    };
    
    static jmethodID methodID_init() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("e", "init", "method_21070", "init", "m_90412_"), "()V");
    }

    static void init(const jobject& obj) {
                
       const auto methodID = methodID_init();
       MinecraftSDK::env->CallVoidMethod(obj, methodID);
    };
    
    static jmethodID methodID_abortTask() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "abortTask", "method_21071", "abortTask", "m_5520_"), "()V");
    }

    static void abortTask(const jobject& obj) {
                
       const auto methodID = methodID_abortTask();
       MinecraftSDK::env->CallVoidMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_CLIENT_REALMS_TASK_LONGRUNNINGTASK_HPP