// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_UTIL_PROFILER_LOG_MULTIVALUEDEBUGSAMPLELOG_HPP
#define NET_MINECRAFT_UTIL_PROFILER_LOG_MULTIVALUEDEBUGSAMPLELOG_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.util.profiler.log.MultiValueDebugSampleLog
 * Remapped: blv
 */
namespace MultiValueDebugSampleLog {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("blv", "net/minecraft/util/debugchart/SampleStorage", "net/minecraft/class_9194", "net/minecraft/util/profiler/log/MultiValueDebugSampleLog", "net/minecraft/src/C_313658_"));
        }
        return cachedClass;
    };

    static jmethodID methodID_getDimension() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "capacity", "method_56662", "getDimension", "m_323740_"), "()I");
    }

    static jint getDimension(const jobject& obj) {
                
       const auto methodID = methodID_getDimension();
       return MinecraftSDK::env->CallIntMethod(obj, methodID);
    };
    
    static jmethodID methodID_getLength() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("d", "size", "method_56663", "getLength", "m_322219_"), "()I");
    }

    static jint getLength(const jobject& obj) {
                
       const auto methodID = methodID_getLength();
       return MinecraftSDK::env->CallIntMethod(obj, methodID);
    };
    
    static jmethodID methodID_get() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "get", "method_56659", "get", "m_318870_"), "(I)J");
    }

    static jlong get(const jobject& obj, const jint& arg0) {
                
       const auto methodID = methodID_get();
       return MinecraftSDK::env->CallLongMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID__get() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "get", "method_56660", "get", "m_320960_"), "(II)J");
    }

    static jlong _get(const jobject& obj, const jint& arg0, const jint& arg1) {
                
       const auto methodID = methodID__get();
       return MinecraftSDK::env->CallLongMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_clear() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("e", "reset", "method_56664", "clear", "m_320406_"), "()V");
    }

    static void clear(const jobject& obj) {
                
       const auto methodID = methodID_clear();
       MinecraftSDK::env->CallVoidMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_UTIL_PROFILER_LOG_MULTIVALUEDEBUGSAMPLELOG_HPP