// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_UTIL_PROFILING_JFR_SAMPLE_LONGRUNNINGSAMPLE_HPP
#define NET_MINECRAFT_UTIL_PROFILING_JFR_SAMPLE_LONGRUNNINGSAMPLE_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.util.profiling.jfr.sample.LongRunningSample
 * Remapped: boi
 */
namespace LongRunningSample {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("boi", "net/minecraft/util/profiling/jfr/stats/TimedStat", "net/minecraft/class_6534", "net/minecraft/util/profiling/jfr/sample/LongRunningSample", "net/minecraft/src/C_182839_"));
        }
        return cachedClass;
    };

    static jmethodID methodID_duration() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "duration", "comp_16", "duration", "m_183571_"), "()Ljava/time/Duration;");
    }

    static jobject duration(const jobject& obj) {
                
       const auto methodID = methodID_duration();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_UTIL_PROFILING_JFR_SAMPLE_LONGRUNNINGSAMPLE_HPP