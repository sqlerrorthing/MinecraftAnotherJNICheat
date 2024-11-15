// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_UTIL_PROFILER_DEVIATION_HPP
#define NET_MINECRAFT_UTIL_PROFILER_DEVIATION_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.util.profiler.Deviation
 * Remapped: boy
 */
namespace Deviation {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("boy", "net/minecraft/util/profiling/metrics/storage/RecordedDeviation", "net/minecraft/class_5964", "net/minecraft/util/profiler/Deviation", "net/minecraft/src/C_141031_"));
        }
        return cachedClass;
    };

    // getter for public field net.minecraft.util.profiler.Deviation#instant
    static jobject get_field_instant(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "timestamp", "field_29595", "instant", "f_146254_"), "Ljava/time/Instant;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static public field net.minecraft.util.profiler.Deviation#instant
    static void set_field_instant(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "timestamp", "field_29595", "instant", "f_146254_"), "Ljava/time/Instant;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for public field net.minecraft.util.profiler.Deviation#ticks
    static jint get_field_ticks(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "tick", "field_29596", "ticks", "f_146255_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetIntField(obj, fieldID);
    };

    // setter for static public field net.minecraft.util.profiler.Deviation#ticks
    static void set_field_ticks(const jobject &obj, const jint &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "tick", "field_29596", "ticks", "f_146255_"), "I");
        return MinecraftSDK::env->SetIntField(obj, fieldID, value);
    };

    // getter for public field net.minecraft.util.profiler.Deviation#result
    static jobject get_field_result(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "profilerResultAtTick", "field_29597", "result", "f_146256_"), "Lbne;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static public field net.minecraft.util.profiler.Deviation#result
    static void set_field_result(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "profilerResultAtTick", "field_29597", "result", "f_146256_"), "Lbne;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

};

#endif // NET_MINECRAFT_UTIL_PROFILER_DEVIATION_HPP