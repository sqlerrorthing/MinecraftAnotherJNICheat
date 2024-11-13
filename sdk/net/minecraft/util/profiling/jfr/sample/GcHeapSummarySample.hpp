// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_UTIL_PROFILING_JFR_SAMPLE_GCHEAPSUMMARYSAMPLE_HPP
#define NET_MINECRAFT_UTIL_PROFILING_JFR_SAMPLE_GCHEAPSUMMARYSAMPLE_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.util.profiling.jfr.sample.GcHeapSummarySample
 * Remapped: bod
 */
namespace GcHeapSummarySample {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("bod", "net/minecraft/util/profiling/jfr/stats/GcHeapStat", "net/minecraft/class_6525", "net/minecraft/util/profiling/jfr/sample/GcHeapSummarySample", "net/minecraft/src/C_182829_"));
        }
        return cachedClass;
    };

    // getter for private field net.minecraft.util.profiling.jfr.sample.GcHeapSummarySample#time
    static jobject get_field_time(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "timestamp", "comp_34", "time", "f_185680_"), "Ljava/time/Instant;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.util.profiling.jfr.sample.GcHeapSummarySample#time
    static void set_field_time(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "timestamp", "comp_34", "time", "f_185680_"), "Ljava/time/Instant;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.util.profiling.jfr.sample.GcHeapSummarySample#heapUsed
    static jlong get_field_heapUsed(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "heapUsed", "comp_35", "heapUsed", "f_185681_"), "J");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetLongField(obj, fieldID);
    };

    // setter for static private field net.minecraft.util.profiling.jfr.sample.GcHeapSummarySample#heapUsed
    static void set_field_heapUsed(const jobject &obj, const jlong &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "heapUsed", "comp_35", "heapUsed", "f_185681_"), "J");
        return MinecraftSDK::env->SetLongField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.util.profiling.jfr.sample.GcHeapSummarySample#summaryType
    static jobject get_field_summaryType(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "timing", "comp_36", "summaryType", "f_185682_"), "Lbod$b;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.util.profiling.jfr.sample.GcHeapSummarySample#summaryType
    static void set_field_summaryType(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "timing", "comp_36", "summaryType", "f_185682_"), "Lbod$b;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID_fromEvent() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "from", "method_38042", "fromEvent", "m_185697_"), "(Ljdk/jfr/consumer/RecordedEvent;)Lbod;");
    }

    static jobject fromEvent(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_fromEvent();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_toStatistics() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "summary", "method_38040", "toStatistics", "m_185690_"), "(Ljava/time/Duration;Ljava/util/List;Ljava/time/Duration;I)Lbod$a;");
    }

    static jobject toStatistics(const jobject& arg0, const jobject& arg1, const jobject& arg2, const jint& arg3) {
       const auto clazz = self();
       const auto methodID = methodID_toStatistics();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0, arg1, arg2, arg3);
    };
    
    static jmethodID methodID_getAllocatedBytesPerSecond() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "calculateAllocationRatePerSecond", "method_38041", "getAllocatedBytesPerSecond", "m_185695_"), "(Ljava/util/List;)D");
    }

    static jdouble getAllocatedBytesPerSecond(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_getAllocatedBytesPerSecond();
       return MinecraftSDK::env->CallStaticDoubleMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID__time() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "timestamp", "comp_34", "time", "f_185680_"), "()Ljava/time/Instant;");
    }

    static jobject _time(const jobject& obj) {
                
       const auto methodID = methodID__time();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID__heapUsed() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "heapUsed", "comp_35", "heapUsed", "f_185681_"), "()J");
    }

    static jlong _heapUsed(const jobject& obj) {
                
       const auto methodID = methodID__heapUsed();
       return MinecraftSDK::env->CallLongMethod(obj, methodID);
    };
    
    static jmethodID methodID__summaryType() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "timing", "comp_36", "summaryType", "f_185682_"), "()Lbod$b;");
    }

    static jobject _summaryType(const jobject& obj) {
                
       const auto methodID = methodID__summaryType();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_UTIL_PROFILING_JFR_SAMPLE_GCHEAPSUMMARYSAMPLE_HPP