// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_UTIL_PROFILING_JFR_SAMPLE_THREADALLOCATIONSTATISTICSSAMPLE_HPP
#define NET_MINECRAFT_UTIL_PROFILING_JFR_SAMPLE_THREADALLOCATIONSTATISTICSSAMPLE_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.util.profiling.jfr.sample.ThreadAllocationStatisticsSample
 * Remapped: bog
 */
namespace ThreadAllocationStatisticsSample {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("bog", "net/minecraft/util/profiling/jfr/stats/ThreadAllocationStat", "net/minecraft/class_6530", "net/minecraft/util/profiling/jfr/sample/ThreadAllocationStatisticsSample", "net/minecraft/src/C_182835_"));
        }
        return cachedClass;
    };

    // getter for private field net.minecraft.util.profiling.jfr.sample.ThreadAllocationStatisticsSample#time
    static jobject get_field_time(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "timestamp", "comp_48", "time", "f_185786_"), "Ljava/time/Instant;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.util.profiling.jfr.sample.ThreadAllocationStatisticsSample#time
    static void set_field_time(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "timestamp", "comp_48", "time", "f_185786_"), "Ljava/time/Instant;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.util.profiling.jfr.sample.ThreadAllocationStatisticsSample#threadName
    static jobject get_field_threadName(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "threadName", "comp_49", "threadName", "f_185787_"), "Ljava/lang/String;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.util.profiling.jfr.sample.ThreadAllocationStatisticsSample#threadName
    static void set_field_threadName(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "threadName", "comp_49", "threadName", "f_185787_"), "Ljava/lang/String;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.util.profiling.jfr.sample.ThreadAllocationStatisticsSample#allocated
    static jlong get_field_allocated(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "totalBytes", "comp_50", "allocated", "f_185788_"), "J");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetLongField(obj, fieldID);
    };

    // setter for static private field net.minecraft.util.profiling.jfr.sample.ThreadAllocationStatisticsSample#allocated
    static void set_field_allocated(const jobject &obj, const jlong &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "totalBytes", "comp_50", "allocated", "f_185788_"), "J");
        return MinecraftSDK::env->SetLongField(obj, fieldID, value);
    };

    // getter for static private field net.minecraft.util.profiling.jfr.sample.ThreadAllocationStatisticsSample#UNKNOWN
    [[maybe_unused]] static jobject get_field_UNKNOWN() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("d", "UNKNOWN_THREAD", "field_34446", "UNKNOWN", "f_185789_"), "Ljava/lang/String;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.util.profiling.jfr.sample.ThreadAllocationStatisticsSample#UNKNOWN
    [[maybe_unused]] static void set_field_UNKNOWN(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("d", "UNKNOWN_THREAD", "field_34446", "UNKNOWN", "f_185789_"), "Ljava/lang/String;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    static jmethodID methodID_fromEvent() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "from", "method_38057", "fromEvent", "m_185803_"), "(Ljdk/jfr/consumer/RecordedEvent;)Lbog;");
    }

    static jobject fromEvent(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_fromEvent();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_toAllocationMap() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "summary", "method_38055", "toAllocationMap", "m_185797_"), "(Ljava/util/List;)Lbog$a;");
    }

    static jobject toAllocationMap(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_toAllocationMap();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID__time() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "timestamp", "comp_48", "time", "f_185786_"), "()Ljava/time/Instant;");
    }

    static jobject _time(const jobject& obj) {
                
       const auto methodID = methodID__time();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID__threadName() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "threadName", "comp_49", "threadName", "f_185787_"), "()Ljava/lang/String;");
    }

    static jobject _threadName(const jobject& obj) {
                
       const auto methodID = methodID__threadName();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID__allocated() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "totalBytes", "comp_50", "allocated", "f_185788_"), "()J");
    }

    static jlong _allocated(const jobject& obj) {
                
       const auto methodID = methodID__allocated();
       return MinecraftSDK::env->CallLongMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_UTIL_PROFILING_JFR_SAMPLE_THREADALLOCATIONSTATISTICSSAMPLE_HPP