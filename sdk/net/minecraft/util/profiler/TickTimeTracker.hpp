// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_UTIL_PROFILER_TICKTIMETRACKER_HPP
#define NET_MINECRAFT_UTIL_PROFILER_TICKTIMETRACKER_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.util.profiler.TickTimeTracker
 * Remapped: bmz
 */
namespace TickTimeTracker {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("bmz", "net/minecraft/util/profiling/ContinuousProfiler", "net/minecraft/class_4757", "net/minecraft/util/profiler/TickTimeTracker", "net/minecraft/src/C_434_"));
        }
        return cachedClass;
    };

    // getter for private field net.minecraft.util.profiler.TickTimeTracker#timeGetter
    static jobject get_field_timeGetter(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "realTime", "field_21962", "timeGetter", "f_18430_"), "Ljava/util/function/LongSupplier;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.util.profiler.TickTimeTracker#timeGetter
    static void set_field_timeGetter(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "realTime", "field_21962", "timeGetter", "f_18430_"), "Ljava/util/function/LongSupplier;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.util.profiler.TickTimeTracker#tickGetter
    static jobject get_field_tickGetter(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "tickCount", "field_21963", "tickGetter", "f_18431_"), "Ljava/util/function/IntSupplier;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.util.profiler.TickTimeTracker#tickGetter
    static void set_field_tickGetter(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "tickCount", "field_21963", "tickGetter", "f_18431_"), "Ljava/util/function/IntSupplier;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.util.profiler.TickTimeTracker#profiler
    static jobject get_field_profiler(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "profiler", "field_21964", "profiler", "f_18432_"), "Lbnd;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.util.profiler.TickTimeTracker#profiler
    static void set_field_profiler(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "profiler", "field_21964", "profiler", "f_18432_"), "Lbnd;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID_isActive() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "isEnabled", "method_24333", "isActive", "m_18436_"), "()Z");
    }

    static jboolean isActive(const jobject& obj) {
                
       const auto methodID = methodID_isActive();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID);
    };
    
    static jmethodID methodID_disable() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "disable", "method_24334", "disable", "m_18437_"), "()V");
    }

    static void disable(const jobject& obj) {
                
       const auto methodID = methodID_disable();
       MinecraftSDK::env->CallVoidMethod(obj, methodID);
    };
    
    static jmethodID methodID_enable() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "enable", "method_24335", "enable", "m_18438_"), "()V");
    }

    static void enable(const jobject& obj) {
                
       const auto methodID = methodID_enable();
       MinecraftSDK::env->CallVoidMethod(obj, methodID);
    };
    
    static jmethodID methodID_getProfiler() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("d", "getFiller", "method_24336", "getProfiler", "m_18439_"), "()Lbnf;");
    }

    static jobject getProfiler(const jobject& obj) {
                
       const auto methodID = methodID_getProfiler();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_getResult() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("e", "getResults", "method_24337", "getResult", "m_18440_"), "()Lbne;");
    }

    static jobject getResult(const jobject& obj) {
                
       const auto methodID = methodID_getResult();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_UTIL_PROFILER_TICKTIMETRACKER_HPP