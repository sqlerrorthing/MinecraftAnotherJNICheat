// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_UTIL_THREAD_GROUPASSIGNINGTHREADFACTORY_HPP
#define NET_MINECRAFT_UTIL_THREAD_GROUPASSIGNINGTHREADFACTORY_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.util.thread.GroupAssigningThreadFactory
 * Remapped: bpi
 */
namespace GroupAssigningThreadFactory {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("bpi", "net/minecraft/util/thread/NamedThreadFactory", "net/minecraft/class_6014", "net/minecraft/util/thread/GroupAssigningThreadFactory", "net/minecraft/src/C_141043_"));
        }
        return cachedClass;
    };

    // getter for static private field net.minecraft.util.thread.GroupAssigningThreadFactory#LOGGER
    [[maybe_unused]] static jobject get_field_LOGGER() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "LOGGER", "field_29936", "LOGGER", "f_146340_"), "Lorg/slf4j/Logger;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.util.thread.GroupAssigningThreadFactory#LOGGER
    [[maybe_unused]] static void set_field_LOGGER(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "LOGGER", "field_29936", "LOGGER", "f_146340_"), "Lorg/slf4j/Logger;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for private field net.minecraft.util.thread.GroupAssigningThreadFactory#group
    static jobject get_field_group(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "group", "field_29937", "group", "f_146341_"), "Ljava/lang/ThreadGroup;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.util.thread.GroupAssigningThreadFactory#group
    static void set_field_group(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "group", "field_29937", "group", "f_146341_"), "Ljava/lang/ThreadGroup;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.util.thread.GroupAssigningThreadFactory#nextIndex
    static jobject get_field_nextIndex(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "threadNumber", "field_29938", "nextIndex", "f_146342_"), "Ljava/util/concurrent/atomic/AtomicInteger;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.util.thread.GroupAssigningThreadFactory#nextIndex
    static void set_field_nextIndex(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "threadNumber", "field_29938", "nextIndex", "f_146342_"), "Ljava/util/concurrent/atomic/AtomicInteger;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.util.thread.GroupAssigningThreadFactory#prefix
    static jobject get_field_prefix(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "namePrefix", "field_29939", "prefix", "f_146343_"), "Ljava/lang/String;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.util.thread.GroupAssigningThreadFactory#prefix
    static void set_field_prefix(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "namePrefix", "field_29939", "prefix", "f_146343_"), "Ljava/lang/String;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID_newThread() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("newThread", "newThread", "newThread", "newThread", "newThread"), "(Ljava/lang/Runnable;)Ljava/lang/Thread;");
    }

    static jobject newThread(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_newThread();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
};

#endif // NET_MINECRAFT_UTIL_THREAD_GROUPASSIGNINGTHREADFACTORY_HPP