// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_UTIL_PROFILER_PROFILERESULT_HPP
#define NET_MINECRAFT_UTIL_PROFILER_PROFILERESULT_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.util.profiler.ProfileResult
 * Remapped: bne
 */
namespace ProfileResult {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("bne", "net/minecraft/util/profiling/ProfileResults", "net/minecraft/class_3696", "net/minecraft/util/profiler/ProfileResult", "net/minecraft/src/C_441_"));
        }
        return cachedClass;
    };

    // getter for static public field net.minecraft.util.profiler.ProfileResult#SPLITTER_CHAR
    [[maybe_unused]] static jchar get_field_SPLITTER_CHAR() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("d", "PATH_SEPARATOR", "field_29924", "SPLITTER_CHAR", "f_145956_"), "C");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticCharField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.util.profiler.ProfileResult#SPLITTER_CHAR
    [[maybe_unused]] static void set_field_SPLITTER_CHAR(const jchar &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("d", "PATH_SEPARATOR", "field_29924", "SPLITTER_CHAR", "f_145956_"), "C");
        return MinecraftSDK::env->SetStaticCharField(clazz, fieldID, value);
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
    
    static jmethodID methodID_getTimeSpan() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("g", "getNanoDuration", "method_16071", "getTimeSpan", "m_18577_"), "()J");
    }

    static jlong getTimeSpan(const jobject& obj) {
                
       const auto methodID = methodID_getTimeSpan();
       return MinecraftSDK::env->CallLongMethod(obj, methodID);
    };
    
    static jmethodID methodID_getTickSpan() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("f", "getTickDuration", "method_16074", "getTickSpan", "m_7315_"), "()I");
    }

    static jint getTickSpan(const jobject& obj) {
                
       const auto methodID = methodID_getTickSpan();
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
    
    static jmethodID methodID_getHumanReadableName() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("b", "demanglePath", "method_21721", "getHumanReadableName", "m_18575_"), "(Ljava/lang/String;)Ljava/lang/String;");
    }

    static jobject getHumanReadableName(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_getHumanReadableName();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0);
    };
    
};

#endif // NET_MINECRAFT_UTIL_PROFILER_PROFILERESULT_HPP