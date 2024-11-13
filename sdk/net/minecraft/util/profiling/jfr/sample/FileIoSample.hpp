// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_UTIL_PROFILING_JFR_SAMPLE_FILEIOSAMPLE_HPP
#define NET_MINECRAFT_UTIL_PROFILING_JFR_SAMPLE_FILEIOSAMPLE_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.util.profiling.jfr.sample.FileIoSample
 * Remapped: boc
 */
namespace FileIoSample {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("boc", "net/minecraft/util/profiling/jfr/stats/FileIOStat", "net/minecraft/class_6523", "net/minecraft/util/profiling/jfr/sample/FileIoSample", "net/minecraft/src/C_182827_"));
        }
        return cachedClass;
    };

    // getter for private field net.minecraft.util.profiling.jfr.sample.FileIoSample#duration
    static jobject get_field_duration(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "duration", "comp_25", "duration", "f_185630_"), "Ljava/time/Duration;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.util.profiling.jfr.sample.FileIoSample#duration
    static void set_field_duration(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "duration", "comp_25", "duration", "f_185630_"), "Ljava/time/Duration;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.util.profiling.jfr.sample.FileIoSample#path
    static jobject get_field_path(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "path", "comp_26", "path", "f_185631_"), "Ljava/lang/String;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.util.profiling.jfr.sample.FileIoSample#path
    static void set_field_path(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "path", "comp_26", "path", "f_185631_"), "Ljava/lang/String;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.util.profiling.jfr.sample.FileIoSample#bytes
    static jlong get_field_bytes(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "bytes", "comp_27", "bytes", "f_185632_"), "J");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetLongField(obj, fieldID);
    };

    // setter for static private field net.minecraft.util.profiling.jfr.sample.FileIoSample#bytes
    static void set_field_bytes(const jobject &obj, const jlong &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "bytes", "comp_27", "bytes", "f_185632_"), "J");
        return MinecraftSDK::env->SetLongField(obj, fieldID, value);
    };

    static jmethodID methodID_toStatistics() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "summary", "method_38034", "toStatistics", "m_185640_"), "(Ljava/time/Duration;Ljava/util/List;)Lboc$a;");
    }

    static jobject toStatistics(const jobject& arg0, const jobject& arg1) {
       const auto clazz = self();
       const auto methodID = methodID_toStatistics();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0, arg1);
    };
    
    static jmethodID methodID__duration() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "duration", "comp_25", "duration", "f_185630_"), "()Ljava/time/Duration;");
    }

    static jobject _duration(const jobject& obj) {
                
       const auto methodID = methodID__duration();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID__path() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "path", "comp_26", "path", "f_185631_"), "()Ljava/lang/String;");
    }

    static jobject _path(const jobject& obj) {
                
       const auto methodID = methodID__path();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID__bytes() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "bytes", "comp_27", "bytes", "f_185632_"), "()J");
    }

    static jlong _bytes(const jobject& obj) {
                
       const auto methodID = methodID__bytes();
       return MinecraftSDK::env->CallLongMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_UTIL_PROFILING_JFR_SAMPLE_FILEIOSAMPLE_HPP