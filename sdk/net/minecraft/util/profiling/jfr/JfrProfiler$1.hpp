// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_UTIL_PROFILING_JFR_JFRPROFILER$1_HPP
#define NET_MINECRAFT_UTIL_PROFILING_JFR_JFRPROFILER$1_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.util.profiling.jfr.JfrProfiler$1
 * Remapped: bnk$1
 */
namespace JfrProfiler$1 {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("bnk$1", "net/minecraft/util/profiling/jfr/JfrProfiler$1", "net/minecraft/class_6505$1", "net/minecraft/util/profiling/jfr/JfrProfiler$1", "net/minecraft/src/C_182806_$C_182807_"));
        }
        return cachedClass;
    };

    // getter for default field net.minecraft.util.profiling.jfr.JfrProfiler$1#innerListener
    static jobject get_field_innerListener(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "summaryReporter", "field_34921", "innerListener", "f_185333_"), "Lbnn;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static default field net.minecraft.util.profiling.jfr.JfrProfiler$1#innerListener
    static void set_field_innerListener(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "summaryReporter", "field_34921", "innerListener", "f_185333_"), "Lbnn;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID_recordingStateChanged() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("recordingStateChanged", "recordingStateChanged", "recordingStateChanged", "recordingStateChanged", "recordingStateChanged"), "(Ljdk/jfr/Recording;)V");
    }

    static void recordingStateChanged(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_recordingStateChanged();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
};

#endif // NET_MINECRAFT_UTIL_PROFILING_JFR_JFRPROFILER$1_HPP