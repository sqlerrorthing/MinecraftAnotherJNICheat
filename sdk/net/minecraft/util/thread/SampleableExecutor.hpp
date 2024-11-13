// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_UTIL_THREAD_SAMPLEABLEEXECUTOR_HPP
#define NET_MINECRAFT_UTIL_THREAD_SAMPLEABLEEXECUTOR_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.util.thread.SampleableExecutor
 * Remapped: bop
 */
namespace SampleableExecutor {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("bop", "net/minecraft/util/profiling/metrics/ProfilerMeasured", "net/minecraft/class_5952", "net/minecraft/util/thread/SampleableExecutor", "net/minecraft/src/C_141020_"));
        }
        return cachedClass;
    };

    static jmethodID methodID_createSamplers() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("bw", "profiledMetrics", "method_34705", "createSamplers", "m_142754_"), "()Ljava/util/List;");
    }

    static jobject createSamplers(const jobject& obj) {
                
       const auto methodID = methodID_createSamplers();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_UTIL_THREAD_SAMPLEABLEEXECUTOR_HPP