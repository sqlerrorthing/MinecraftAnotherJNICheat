// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_UTIL_PROFILING_JFR_SAMPLE_SERVERTICKTIMESAMPLE_HPP
#define NET_MINECRAFT_UTIL_PROFILING_JFR_SAMPLE_SERVERTICKTIMESAMPLE_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.util.profiling.jfr.sample.ServerTickTimeSample
 * Remapped: boh
 */
namespace ServerTickTimeSample {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("boh", "net/minecraft/util/profiling/jfr/stats/TickTimeStat", "net/minecraft/class_6532", "net/minecraft/util/profiling/jfr/sample/ServerTickTimeSample", "net/minecraft/src/C_182837_"));
        }
        return cachedClass;
    };

    // getter for private field net.minecraft.util.profiling.jfr.sample.ServerTickTimeSample#time
    static jobject get_field_time(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "timestamp", "comp_52", "time", "f_185819_"), "Ljava/time/Instant;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.util.profiling.jfr.sample.ServerTickTimeSample#time
    static void set_field_time(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "timestamp", "comp_52", "time", "f_185819_"), "Ljava/time/Instant;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.util.profiling.jfr.sample.ServerTickTimeSample#averageTickMs
    static jobject get_field_averageTickMs(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "currentAverage", "comp_53", "averageTickMs", "f_185820_"), "Ljava/time/Duration;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.util.profiling.jfr.sample.ServerTickTimeSample#averageTickMs
    static void set_field_averageTickMs(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "currentAverage", "comp_53", "averageTickMs", "f_185820_"), "Ljava/time/Duration;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID_fromEvent() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "from", "method_38058", "fromEvent", "m_185825_"), "(Ljdk/jfr/consumer/RecordedEvent;)Lboh;");
    }

    static jobject fromEvent(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_fromEvent();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID__time() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "timestamp", "comp_52", "time", "f_185819_"), "()Ljava/time/Instant;");
    }

    static jobject _time(const jobject& obj) {
                
       const auto methodID = methodID__time();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID__averageTickMs() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "currentAverage", "comp_53", "averageTickMs", "f_185820_"), "()Ljava/time/Duration;");
    }

    static jobject _averageTickMs(const jobject& obj) {
                
       const auto methodID = methodID__averageTickMs();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_UTIL_PROFILING_JFR_SAMPLE_SERVERTICKTIMESAMPLE_HPP