// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_SERVER_RCON_RCONBASE_HPP
#define NET_MINECRAFT_SERVER_RCON_RCONBASE_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.server.rcon.RconBase
 * Remapped: avh
 */
namespace RconBase {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("avh", "net/minecraft/server/rcon/thread/GenericThread", "net/minecraft/class_3359", "net/minecraft/server/rcon/RconBase", "net/minecraft/src/C_116_"));
        }
        return cachedClass;
    };

    // getter for static private field net.minecraft.server.rcon.RconBase#LOGGER
    [[maybe_unused]] static jobject get_field_LOGGER() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("d", "LOGGER", "field_14430", "LOGGER", "f_11518_"), "Lorg/slf4j/Logger;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.server.rcon.RconBase#LOGGER
    [[maybe_unused]] static void set_field_LOGGER(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("d", "LOGGER", "field_14430", "LOGGER", "f_11518_"), "Lorg/slf4j/Logger;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.server.rcon.RconBase#THREAD_COUNTER
    [[maybe_unused]] static jobject get_field_THREAD_COUNTER() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("e", "UNIQUE_THREAD_ID", "field_14428", "THREAD_COUNTER", "f_11519_"), "Ljava/util/concurrent/atomic/AtomicInteger;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.server.rcon.RconBase#THREAD_COUNTER
    [[maybe_unused]] static void set_field_THREAD_COUNTER(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("e", "UNIQUE_THREAD_ID", "field_14428", "THREAD_COUNTER", "f_11519_"), "Ljava/util/concurrent/atomic/AtomicInteger;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.server.rcon.RconBase#field_29794
    [[maybe_unused]] static jint get_field_field_29794() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("f", "MAX_STOP_WAIT", "field_29794", "field_29794", "f_144023_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.server.rcon.RconBase#field_29794
    [[maybe_unused]] static void set_field_field_29794(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("f", "MAX_STOP_WAIT", "field_29794", "field_29794", "f_144023_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for protected field net.minecraft.server.rcon.RconBase#running
    static jboolean get_field_running(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "running", "field_14431", "running", "f_11515_"), "Z");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetBooleanField(obj, fieldID);
    };

    // setter for static protected field net.minecraft.server.rcon.RconBase#running
    static void set_field_running(const jobject &obj, const jboolean &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "running", "field_14431", "running", "f_11515_"), "Z");
        return MinecraftSDK::env->SetBooleanField(obj, fieldID, value);
    };

    // getter for protected field net.minecraft.server.rcon.RconBase#description
    static jobject get_field_description(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "name", "field_14424", "description", "f_11516_"), "Ljava/lang/String;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static protected field net.minecraft.server.rcon.RconBase#description
    static void set_field_description(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "name", "field_14424", "description", "f_11516_"), "Ljava/lang/String;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for protected field net.minecraft.server.rcon.RconBase#thread
    static jobject get_field_thread(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "thread", "field_14423", "thread", "f_11517_"), "Ljava/lang/Thread;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static protected field net.minecraft.server.rcon.RconBase#thread
    static void set_field_thread(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "thread", "field_14423", "thread", "f_11517_"), "Ljava/lang/Thread;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID_start() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "start", "method_14728", "start", "m_7528_"), "()Z");
    }

    static jboolean start(const jobject& obj) {
                
       const auto methodID = methodID_start();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID);
    };
    
    static jmethodID methodID_stop() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "stop", "method_18050", "stop", "m_7530_"), "()V");
    }

    static void stop(const jobject& obj) {
                
       const auto methodID = methodID_stop();
       MinecraftSDK::env->CallVoidMethod(obj, methodID);
    };
    
    static jmethodID methodID_isRunning() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "isRunning", "method_14731", "isRunning", "m_11523_"), "()Z");
    }

    static jboolean isRunning(const jobject& obj) {
                
       const auto methodID = methodID_isRunning();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_SERVER_RCON_RCONBASE_HPP