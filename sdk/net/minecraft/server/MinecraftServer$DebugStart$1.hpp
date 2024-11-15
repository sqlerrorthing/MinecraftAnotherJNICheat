// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_SERVER_MINECRAFTSERVER$DEBUGSTART$1_HPP
#define NET_MINECRAFT_SERVER_MINECRAFTSERVER$DEBUGSTART$1_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.server.MinecraftServer$DebugStart$1
 * Remapped: net/minecraft/server/MinecraftServer$c$1
 */
namespace MinecraftServer$DebugStart$1 {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("net/minecraft/server/MinecraftServer$c$1", "net/minecraft/server/MinecraftServer$TimeProfiler$1", "net/minecraft/server/MinecraftServer$class_6414$1", "net/minecraft/server/MinecraftServer$DebugStart$1", "net/minecraft/server/MinecraftServer$C_141834_$C_141835_"));
        }
        return cachedClass;
    };

    static jmethodID methodID_getTimings() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getTimes", "method_16067", "getTimings", "m_6412_"), "(Ljava/lang/String;)Ljava/util/List;");
    }

    static jobject getTimings(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_getTimings();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_save() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "saveResults", "method_16069", "save", "m_142444_"), "(Ljava/nio/file/Path;)Z");
    }

    static jboolean save(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_save();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_getStartTime() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getStartTimeNano", "method_16068", "getStartTime", "m_7229_"), "()J");
    }

    static jlong getStartTime(const jobject& obj) {
                
       const auto methodID = methodID_getStartTime();
       return MinecraftSDK::env->CallLongMethod(obj, methodID);
    };
    
    static jmethodID methodID_getStartTick() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "getStartTimeTicks", "method_16072", "getStartTick", "m_7230_"), "()I");
    }

    static jint getStartTick(const jobject& obj) {
                
       const auto methodID = methodID_getStartTick();
       return MinecraftSDK::env->CallIntMethod(obj, methodID);
    };
    
    static jmethodID methodID_getEndTime() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "getEndTimeNano", "method_16073", "getEndTime", "m_7236_"), "()J");
    }

    static jlong getEndTime(const jobject& obj) {
                
       const auto methodID = methodID_getEndTime();
       return MinecraftSDK::env->CallLongMethod(obj, methodID);
    };
    
    static jmethodID methodID_getEndTick() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("d", "getEndTimeTicks", "method_16070", "getEndTick", "m_7317_"), "()I");
    }

    static jint getEndTick(const jobject& obj) {
                
       const auto methodID = methodID_getEndTick();
       return MinecraftSDK::env->CallIntMethod(obj, methodID);
    };
    
    static jmethodID methodID_getRootTimings() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("e", "getProfilerResults", "method_34970", "getRootTimings", "m_142368_"), "()Ljava/lang/String;");
    }

    static jobject getRootTimings(const jobject& obj) {
                
       const auto methodID = methodID_getRootTimings();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_SERVER_MINECRAFTSERVER$DEBUGSTART$1_HPP