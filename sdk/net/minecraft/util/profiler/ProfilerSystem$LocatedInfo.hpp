// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_UTIL_PROFILER_PROFILERSYSTEM$LOCATEDINFO_HPP
#define NET_MINECRAFT_UTIL_PROFILER_PROFILERSYSTEM$LOCATEDINFO_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.util.profiler.ProfilerSystem$LocatedInfo
 * Remapped: bmy$a
 */
namespace ProfilerSystem$LocatedInfo {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("bmy$a", "net/minecraft/util/profiling/ActiveProfiler$PathEntry", "net/minecraft/class_3533$class_4746", "net/minecraft/util/profiler/ProfilerSystem$LocatedInfo", "net/minecraft/src/C_431_$C_433_"));
        }
        return cachedClass;
    };

    // getter for default field net.minecraft.util.profiler.ProfilerSystem$LocatedInfo#maxTime
    static jlong get_field_maxTime(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "maxDuration", "field_33874", "maxTime", "f_145932_"), "J");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetLongField(obj, fieldID);
    };

    // setter for static default field net.minecraft.util.profiler.ProfilerSystem$LocatedInfo#maxTime
    static void set_field_maxTime(const jobject &obj, const jlong &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "maxDuration", "field_33874", "maxTime", "f_145932_"), "J");
        return MinecraftSDK::env->SetLongField(obj, fieldID, value);
    };

    // getter for default field net.minecraft.util.profiler.ProfilerSystem$LocatedInfo#minTime
    static jlong get_field_minTime(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "minDuration", "field_33875", "minTime", "f_145933_"), "J");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetLongField(obj, fieldID);
    };

    // setter for static default field net.minecraft.util.profiler.ProfilerSystem$LocatedInfo#minTime
    static void set_field_minTime(const jobject &obj, const jlong &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "minDuration", "field_33875", "minTime", "f_145933_"), "J");
        return MinecraftSDK::env->SetLongField(obj, fieldID, value);
    };

    // getter for default field net.minecraft.util.profiler.ProfilerSystem$LocatedInfo#totalTime
    static jlong get_field_totalTime(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "accumulatedDuration", "field_21820", "totalTime", "f_145934_"), "J");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetLongField(obj, fieldID);
    };

    // setter for static default field net.minecraft.util.profiler.ProfilerSystem$LocatedInfo#totalTime
    static void set_field_totalTime(const jobject &obj, const jlong &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "accumulatedDuration", "field_21820", "totalTime", "f_145934_"), "J");
        return MinecraftSDK::env->SetLongField(obj, fieldID, value);
    };

    // getter for default field net.minecraft.util.profiler.ProfilerSystem$LocatedInfo#visits
    static jlong get_field_visits(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "count", "field_21821", "visits", "f_18410_"), "J");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetLongField(obj, fieldID);
    };

    // setter for static default field net.minecraft.util.profiler.ProfilerSystem$LocatedInfo#visits
    static void set_field_visits(const jobject &obj, const jlong &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "count", "field_21821", "visits", "f_18410_"), "J");
        return MinecraftSDK::env->SetLongField(obj, fieldID, value);
    };

    // getter for default field net.minecraft.util.profiler.ProfilerSystem$LocatedInfo#counts
    static jobject get_field_counts(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "counters", "field_21822", "counts", "f_18411_"), "Lit/unimi/dsi/fastutil/objects/Object2LongOpenHashMap;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static default field net.minecraft.util.profiler.ProfilerSystem$LocatedInfo#counts
    static void set_field_counts(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "counters", "field_21822", "counts", "f_18411_"), "Lit/unimi/dsi/fastutil/objects/Object2LongOpenHashMap;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID_getTotalTime() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getDuration", "method_24272", "getTotalTime", "m_7235_"), "()J");
    }

    static jlong getTotalTime(const jobject& obj) {
                
       const auto methodID = methodID_getTotalTime();
       return MinecraftSDK::env->CallLongMethod(obj, methodID);
    };
    
    static jmethodID methodID_getMaxTime() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "getMaxDuration", "method_37169", "getMaxTime", "m_142752_"), "()J");
    }

    static jlong getMaxTime(const jobject& obj) {
                
       const auto methodID = methodID_getMaxTime();
       return MinecraftSDK::env->CallLongMethod(obj, methodID);
    };
    
    static jmethodID methodID_getVisitCount() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "getCount", "method_24273", "getVisitCount", "m_7234_"), "()J");
    }

    static jlong getVisitCount(const jobject& obj) {
                
       const auto methodID = methodID_getVisitCount();
       return MinecraftSDK::env->CallLongMethod(obj, methodID);
    };
    
    static jmethodID methodID_getCounts() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("d", "getCounters", "method_24274", "getCounts", "m_7446_"), "()Lit/unimi/dsi/fastutil/objects/Object2LongMap;");
    }

    static jobject getCounts(const jobject& obj) {
                
       const auto methodID = methodID_getCounts();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_UTIL_PROFILER_PROFILERSYSTEM$LOCATEDINFO_HPP