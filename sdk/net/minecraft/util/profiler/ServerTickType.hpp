// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_UTIL_PROFILER_SERVERTICKTYPE_HPP
#define NET_MINECRAFT_UTIL_PROFILER_SERVERTICKTYPE_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.util.profiler.ServerTickType
 * Remapped: blw
 */
namespace ServerTickType {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("blw", "net/minecraft/util/debugchart/TpsDebugDimensions", "net/minecraft/class_9160", "net/minecraft/util/profiler/ServerTickType", "net/minecraft/src/C_313522_"));
        }
        return cachedClass;
    };

    // getter for static public field net.minecraft.util.profiler.ServerTickType#FULL_TICK
    [[maybe_unused]] static jobject get_field_FULL_TICK() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "FULL_TICK", "field_48718", "FULL_TICK", "FULL_TICK"), "Lblw;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.util.profiler.ServerTickType#FULL_TICK
    [[maybe_unused]] static void set_field_FULL_TICK(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "FULL_TICK", "field_48718", "FULL_TICK", "FULL_TICK"), "Lblw;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.util.profiler.ServerTickType#TICK_SERVER_METHOD
    [[maybe_unused]] static jobject get_field_TICK_SERVER_METHOD() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "TICK_SERVER_METHOD", "field_48719", "TICK_SERVER_METHOD", "TICK_SERVER_METHOD"), "Lblw;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.util.profiler.ServerTickType#TICK_SERVER_METHOD
    [[maybe_unused]] static void set_field_TICK_SERVER_METHOD(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "TICK_SERVER_METHOD", "field_48719", "TICK_SERVER_METHOD", "TICK_SERVER_METHOD"), "Lblw;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.util.profiler.ServerTickType#SCHEDULED_TASKS
    [[maybe_unused]] static jobject get_field_SCHEDULED_TASKS() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "SCHEDULED_TASKS", "field_48720", "SCHEDULED_TASKS", "SCHEDULED_TASKS"), "Lblw;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.util.profiler.ServerTickType#SCHEDULED_TASKS
    [[maybe_unused]] static void set_field_SCHEDULED_TASKS(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "SCHEDULED_TASKS", "field_48720", "SCHEDULED_TASKS", "SCHEDULED_TASKS"), "Lblw;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.util.profiler.ServerTickType#IDLE
    [[maybe_unused]] static jobject get_field_IDLE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("d", "IDLE", "field_48721", "IDLE", "IDLE"), "Lblw;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.util.profiler.ServerTickType#IDLE
    [[maybe_unused]] static void set_field_IDLE(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("d", "IDLE", "field_48721", "IDLE", "IDLE"), "Lblw;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    static jmethodID methodID_values() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("values", "values", "values", "values", "values"), "()[Lblw;");
    }

    static jobject values() {
       const auto clazz = self();
       const auto methodID = methodID_values();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID);
    };
    
    static jmethodID methodID_valueOf() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("valueOf", "valueOf", "valueOf", "valueOf", "valueOf"), "(Ljava/lang/String;)Lblw;");
    }

    static jobject valueOf(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_valueOf();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0);
    };
    
};

#endif // NET_MINECRAFT_UTIL_PROFILER_SERVERTICKTYPE_HPP