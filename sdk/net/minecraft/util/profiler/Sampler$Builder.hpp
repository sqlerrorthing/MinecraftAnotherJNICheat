// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_UTIL_PROFILER_SAMPLER$BUILDER_HPP
#define NET_MINECRAFT_UTIL_PROFILER_SAMPLER$BUILDER_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.util.profiler.Sampler$Builder
 * Remapped: bom$a
 */
namespace Sampler$Builder {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("bom$a", "net/minecraft/util/profiling/metrics/MetricSampler$MetricSamplerBuilder", "net/minecraft/class_5965$class_5966", "net/minecraft/util/profiler/Sampler$Builder", "net/minecraft/src/C_141012_$C_141013_"));
        }
        return cachedClass;
    };

    // getter for private field net.minecraft.util.profiler.Sampler$Builder#name
    static jobject get_field_name(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "name", "field_33885", "name", "f_146028_"), "Ljava/lang/String;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.util.profiler.Sampler$Builder#name
    static void set_field_name(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "name", "field_33885", "name", "f_146028_"), "Ljava/lang/String;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.util.profiler.Sampler$Builder#type
    static jobject get_field_type(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "category", "field_33886", "type", "f_146029_"), "Lbol;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.util.profiler.Sampler$Builder#type
    static void set_field_type(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "category", "field_33886", "type", "f_146029_"), "Lbol;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.util.profiler.Sampler$Builder#timeGetter
    static jobject get_field_timeGetter(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "sampler", "field_29605", "timeGetter", "f_146030_"), "Ljava/util/function/DoubleSupplier;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.util.profiler.Sampler$Builder#timeGetter
    static void set_field_timeGetter(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "sampler", "field_29605", "timeGetter", "f_146030_"), "Ljava/util/function/DoubleSupplier;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.util.profiler.Sampler$Builder#context
    static jobject get_field_context(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "context", "field_29606", "context", "f_146031_"), "Ljava/lang/Object;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.util.profiler.Sampler$Builder#context
    static void set_field_context(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "context", "field_29606", "context", "f_146031_"), "Ljava/lang/Object;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.util.profiler.Sampler$Builder#startAction
    static jobject get_field_startAction(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "beforeTick", "field_29607", "startAction", "f_146032_"), "Ljava/lang/Runnable;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.util.profiler.Sampler$Builder#startAction
    static void set_field_startAction(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "beforeTick", "field_29607", "startAction", "f_146032_"), "Ljava/lang/Runnable;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.util.profiler.Sampler$Builder#deviationChecker
    static jobject get_field_deviationChecker(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("f", "thresholdTest", "field_29608", "deviationChecker", "f_146033_"), "Lbom$c;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.util.profiler.Sampler$Builder#deviationChecker
    static void set_field_deviationChecker(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("f", "thresholdTest", "field_29608", "deviationChecker", "f_146033_"), "Lbom$c;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID__startAction() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "withBeforeTick", "method_34789", "startAction", "m_146042_"), "(Ljava/util/function/Consumer;)Lbom$a;");
    }

    static jobject _startAction(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID__startAction();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID__deviationChecker() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "withThresholdAlert", "method_34788", "deviationChecker", "m_146040_"), "(Lbom$c;)Lbom$a;");
    }

    static jobject _deviationChecker(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID__deviationChecker();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_build() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "build", "method_34787", "build", "m_146039_"), "()Lbom;");
    }

    static jobject build(const jobject& obj) {
                
       const auto methodID = methodID_build();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_UTIL_PROFILER_SAMPLER$BUILDER_HPP