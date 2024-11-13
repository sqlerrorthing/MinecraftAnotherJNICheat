// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_UTIL_PROFILER_LOG_DEBUGSAMPLELOG_HPP
#define NET_MINECRAFT_UTIL_PROFILER_LOG_DEBUGSAMPLELOG_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.util.profiler.log.DebugSampleLog
 * Remapped: blu
 */
namespace DebugSampleLog {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("blu", "net/minecraft/util/debugchart/SampleLogger", "net/minecraft/class_8743", "net/minecraft/util/profiler/log/DebugSampleLog", "net/minecraft/src/C_313593_"));
        }
        return cachedClass;
    };

    static jmethodID methodID_set() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "logFullSample", "method_56650", "set", "m_320889_"), "([J)V");
    }

    static void set(const jobject& obj, const jarray& arg0, const jlong& arg1) {
                
       const auto methodID = methodID_set();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_push() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "logSample", "method_53066", "push", "m_322732_"), "(J)V");
    }

    static void push(const jobject& obj, const jlong& arg0) {
                
       const auto methodID = methodID_push();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID__push() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "logPartialSample", "method_56535", "push", "m_319503_"), "(JI)V");
    }

    static void _push(const jobject& obj, const jlong& arg0, const jint& arg1) {
                
       const auto methodID = methodID__push();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1);
    };
    
};

#endif // NET_MINECRAFT_UTIL_PROFILER_LOG_DEBUGSAMPLELOG_HPP