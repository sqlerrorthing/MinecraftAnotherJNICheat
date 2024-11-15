// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_CLIENT_SESSION_TELEMETRY_PERFORMANCEMETRICSEVENT_HPP
#define NET_MINECRAFT_CLIENT_SESSION_TELEMETRY_PERFORMANCEMETRICSEVENT_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.client.session.telemetry.PerformanceMetricsEvent
 * Remapped: gvv
 */
namespace PerformanceMetricsEvent {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("gvv", "net/minecraft/client/telemetry/events/PerformanceMetricsEvent", "net/minecraft/class_7977", "net/minecraft/client/session/telemetry/PerformanceMetricsEvent", "net/minecraft/src/C_260413_"));
        }
        return cachedClass;
    };

    // getter for static private field net.minecraft.client.session.telemetry.PerformanceMetricsEvent#MAX_MEMORY_KB
    [[maybe_unused]] static jlong get_field_MAX_MEMORY_KB() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "DEDICATED_MEMORY_KB", "field_41510", "MAX_MEMORY_KB", "f_260536_"), "J");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticLongField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.session.telemetry.PerformanceMetricsEvent#MAX_MEMORY_KB
    [[maybe_unused]] static void set_field_MAX_MEMORY_KB(const jlong &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "DEDICATED_MEMORY_KB", "field_41510", "MAX_MEMORY_KB", "f_260536_"), "J");
        return MinecraftSDK::env->SetStaticLongField(clazz, fieldID, value);
    };

    // getter for private field net.minecraft.client.session.telemetry.PerformanceMetricsEvent#frameRateSamples
    static jobject get_field_frameRateSamples(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "fpsSamples", "field_41511", "frameRateSamples", "f_260632_"), "Lit/unimi/dsi/fastutil/longs/LongList;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.session.telemetry.PerformanceMetricsEvent#frameRateSamples
    static void set_field_frameRateSamples(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "fpsSamples", "field_41511", "frameRateSamples", "f_260632_"), "Lit/unimi/dsi/fastutil/longs/LongList;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.session.telemetry.PerformanceMetricsEvent#renderTimeSamples
    static jobject get_field_renderTimeSamples(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "frameTimeSamples", "field_41512", "renderTimeSamples", "f_260487_"), "Lit/unimi/dsi/fastutil/longs/LongList;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.session.telemetry.PerformanceMetricsEvent#renderTimeSamples
    static void set_field_renderTimeSamples(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "frameTimeSamples", "field_41512", "renderTimeSamples", "f_260487_"), "Lit/unimi/dsi/fastutil/longs/LongList;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.session.telemetry.PerformanceMetricsEvent#usedMemorySamples
    static jobject get_field_usedMemorySamples(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "usedMemorySamples", "field_41513", "usedMemorySamples", "f_260646_"), "Lit/unimi/dsi/fastutil/longs/LongList;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.session.telemetry.PerformanceMetricsEvent#usedMemorySamples
    static void set_field_usedMemorySamples(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "usedMemorySamples", "field_41513", "usedMemorySamples", "f_260646_"), "Lit/unimi/dsi/fastutil/longs/LongList;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID_tick() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "tick", "method_47778", "tick", "m_263206_"), "(Lgvn;)V");
    }

    static void tick(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_tick();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_clearSamples() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("g", "resetValues", "method_47788", "clearSamples", "m_260818_"), "()V");
    }

    static void clearSamples(const jobject& obj) {
                
       const auto methodID = methodID_clearSamples();
       MinecraftSDK::env->CallVoidMethod(obj, methodID);
    };
    
    static jmethodID methodID_sample() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("f", "takeSample", "method_47783", "sample", "m_260835_"), "()V");
    }

    static void sample(const jobject& obj) {
                
       const auto methodID = methodID_sample();
       MinecraftSDK::env->CallVoidMethod(obj, methodID);
    };
    
    static jmethodID methodID_sampleUsedMemory() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("h", "takeUsedMemorySample", "method_47789", "sampleUsedMemory", "m_261164_"), "()V");
    }

    static void sampleUsedMemory(const jobject& obj) {
                
       const auto methodID = methodID_sampleUsedMemory();
       MinecraftSDK::env->CallVoidMethod(obj, methodID);
    };
    
    static jmethodID methodID_send() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "sendEvent", "method_47784", "send", "m_260819_"), "(Lgvn;)V");
    }

    static void send(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_send();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_toKilos() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "toKilobytes", "method_47785", "toKilos", "m_261284_"), "(J)J");
    }

    static jlong toKilos(const jlong& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_toKilos();
       return MinecraftSDK::env->CallStaticLongMethod(clazz, methodID, arg0);
    };
    
};

#endif // NET_MINECRAFT_CLIENT_SESSION_TELEMETRY_PERFORMANCEMETRICSEVENT_HPP