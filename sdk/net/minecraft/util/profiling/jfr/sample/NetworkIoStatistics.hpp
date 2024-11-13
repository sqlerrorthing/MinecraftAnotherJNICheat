// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_UTIL_PROFILING_JFR_SAMPLE_NETWORKIOSTATISTICS_HPP
#define NET_MINECRAFT_UTIL_PROFILING_JFR_SAMPLE_NETWORKIOSTATISTICS_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.util.profiling.jfr.sample.NetworkIoStatistics
 * Remapped: boe
 */
namespace NetworkIoStatistics {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("boe", "net/minecraft/util/profiling/jfr/stats/IoSummary", "net/minecraft/class_6767", "net/minecraft/util/profiling/jfr/sample/NetworkIoStatistics", "net/minecraft/src/C_313480_"));
        }
        return cachedClass;
    };

    // getter for private field net.minecraft.util.profiling.jfr.sample.NetworkIoStatistics#combinedStatistics
    static jobject get_field_combinedStatistics(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "totalCountAndSize", "field_35583", "combinedStatistics", "f_314697_"), "Lboe$a;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.util.profiling.jfr.sample.NetworkIoStatistics#combinedStatistics
    static void set_field_combinedStatistics(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "totalCountAndSize", "field_35583", "combinedStatistics", "f_314697_"), "Lboe$a;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.util.profiling.jfr.sample.NetworkIoStatistics#topContributors
    static jobject get_field_topContributors(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "largestSizeContributors", "field_35584", "topContributors", "f_315261_"), "Ljava/util/List;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.util.profiling.jfr.sample.NetworkIoStatistics#topContributors
    static void set_field_topContributors(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "largestSizeContributors", "field_35584", "topContributors", "f_315261_"), "Ljava/util/List;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.util.profiling.jfr.sample.NetworkIoStatistics#duration
    static jobject get_field_duration(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "recordingDuration", "field_35585", "duration", "f_314585_"), "Ljava/time/Duration;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.util.profiling.jfr.sample.NetworkIoStatistics#duration
    static void set_field_duration(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "recordingDuration", "field_35585", "duration", "f_314585_"), "Ljava/time/Duration;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID_getCountPerSecond() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getCountsPerSecond", "method_39438", "getCountPerSecond", "m_321055_"), "()D");
    }

    static jdouble getCountPerSecond(const jobject& obj) {
                
       const auto methodID = methodID_getCountPerSecond();
       return MinecraftSDK::env->CallDoubleMethod(obj, methodID);
    };
    
    static jmethodID methodID_getBytesPerSecond() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "getSizePerSecond", "method_39439", "getBytesPerSecond", "m_323182_"), "()D");
    }

    static jdouble getBytesPerSecond(const jobject& obj) {
                
       const auto methodID = methodID_getBytesPerSecond();
       return MinecraftSDK::env->CallDoubleMethod(obj, methodID);
    };
    
    static jmethodID methodID_getTotalCount() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "getTotalCount", "method_39440", "getTotalCount", "m_319079_"), "()J");
    }

    static jlong getTotalCount(const jobject& obj) {
                
       const auto methodID = methodID_getTotalCount();
       return MinecraftSDK::env->CallLongMethod(obj, methodID);
    };
    
    static jmethodID methodID_getTotalSize() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("d", "getTotalSize", "method_39441", "getTotalSize", "m_324825_"), "()J");
    }

    static jlong getTotalSize(const jobject& obj) {
                
       const auto methodID = methodID_getTotalSize();
       return MinecraftSDK::env->CallLongMethod(obj, methodID);
    };
    
    static jmethodID methodID_getTopContributors() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("e", "largestSizeContributors", "method_39442", "getTopContributors", "m_324176_"), "()Ljava/util/List;");
    }

    static jobject getTopContributors(const jobject& obj) {
                
       const auto methodID = methodID_getTopContributors();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_UTIL_PROFILING_JFR_SAMPLE_NETWORKIOSTATISTICS_HPP