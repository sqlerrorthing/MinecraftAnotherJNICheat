// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_UTIL_PROFILER_SAMPLETYPE_HPP
#define NET_MINECRAFT_UTIL_PROFILER_SAMPLETYPE_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.util.profiler.SampleType
 * Remapped: bol
 */
namespace SampleType {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("bol", "net/minecraft/util/profiling/metrics/MetricCategory", "net/minecraft/class_5949", "net/minecraft/util/profiler/SampleType", "net/minecraft/src/C_141011_"));
        }
        return cachedClass;
    };

    // getter for static public field net.minecraft.util.profiler.SampleType#PATH_FINDING
    [[maybe_unused]] static jobject get_field_PATH_FINDING() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "PATH_FINDING", "field_33876", "PATH_FINDING", "PATH_FINDING"), "Lbol;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.util.profiler.SampleType#PATH_FINDING
    [[maybe_unused]] static void set_field_PATH_FINDING(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "PATH_FINDING", "field_33876", "PATH_FINDING", "PATH_FINDING"), "Lbol;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.util.profiler.SampleType#EVENT_LOOPS
    [[maybe_unused]] static jobject get_field_EVENT_LOOPS() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "EVENT_LOOPS", "field_29551", "EVENT_LOOPS", "EVENT_LOOPS"), "Lbol;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.util.profiler.SampleType#EVENT_LOOPS
    [[maybe_unused]] static void set_field_EVENT_LOOPS(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "EVENT_LOOPS", "field_29551", "EVENT_LOOPS", "EVENT_LOOPS"), "Lbol;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.util.profiler.SampleType#MAIL_BOXES
    [[maybe_unused]] static jobject get_field_MAIL_BOXES() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "MAIL_BOXES", "field_29552", "MAIL_BOXES", "MAIL_BOXES"), "Lbol;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.util.profiler.SampleType#MAIL_BOXES
    [[maybe_unused]] static void set_field_MAIL_BOXES(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "MAIL_BOXES", "field_29552", "MAIL_BOXES", "MAIL_BOXES"), "Lbol;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.util.profiler.SampleType#TICK_LOOP
    [[maybe_unused]] static jobject get_field_TICK_LOOP() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("d", "TICK_LOOP", "field_33877", "TICK_LOOP", "TICK_LOOP"), "Lbol;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.util.profiler.SampleType#TICK_LOOP
    [[maybe_unused]] static void set_field_TICK_LOOP(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("d", "TICK_LOOP", "field_33877", "TICK_LOOP", "TICK_LOOP"), "Lbol;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.util.profiler.SampleType#JVM
    [[maybe_unused]] static jobject get_field_JVM() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("e", "JVM", "field_33878", "JVM", "JVM"), "Lbol;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.util.profiler.SampleType#JVM
    [[maybe_unused]] static void set_field_JVM(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("e", "JVM", "field_33878", "JVM", "JVM"), "Lbol;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.util.profiler.SampleType#CHUNK_RENDERING
    [[maybe_unused]] static jobject get_field_CHUNK_RENDERING() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("f", "CHUNK_RENDERING", "field_33879", "CHUNK_RENDERING", "CHUNK_RENDERING"), "Lbol;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.util.profiler.SampleType#CHUNK_RENDERING
    [[maybe_unused]] static void set_field_CHUNK_RENDERING(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("f", "CHUNK_RENDERING", "field_33879", "CHUNK_RENDERING", "CHUNK_RENDERING"), "Lbol;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.util.profiler.SampleType#CHUNK_RENDERING_DISPATCHING
    [[maybe_unused]] static jobject get_field_CHUNK_RENDERING_DISPATCHING() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("g", "CHUNK_RENDERING_DISPATCHING", "field_33880", "CHUNK_RENDERING_DISPATCHING", "CHUNK_RENDERING_DISPATCHING"), "Lbol;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.util.profiler.SampleType#CHUNK_RENDERING_DISPATCHING
    [[maybe_unused]] static void set_field_CHUNK_RENDERING_DISPATCHING(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("g", "CHUNK_RENDERING_DISPATCHING", "field_33880", "CHUNK_RENDERING_DISPATCHING", "CHUNK_RENDERING_DISPATCHING"), "Lbol;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.util.profiler.SampleType#CPU
    [[maybe_unused]] static jobject get_field_CPU() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("h", "CPU", "field_33881", "CPU", "CPU"), "Lbol;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.util.profiler.SampleType#CPU
    [[maybe_unused]] static void set_field_CPU(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("h", "CPU", "field_33881", "CPU", "CPU"), "Lbol;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.util.profiler.SampleType#GPU
    [[maybe_unused]] static jobject get_field_GPU() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("i", "GPU", "field_37416", "GPU", "GPU"), "Lbol;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.util.profiler.SampleType#GPU
    [[maybe_unused]] static void set_field_GPU(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("i", "GPU", "field_37416", "GPU", "GPU"), "Lbol;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for private field net.minecraft.util.profiler.SampleType#name
    static jobject get_field_name(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("j", "description", "field_29553", "name", "f_145974_"), "Ljava/lang/String;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.util.profiler.SampleType#name
    static void set_field_name(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("j", "description", "field_29553", "name", "f_145974_"), "Ljava/lang/String;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID_values() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("values", "values", "values", "values", "values"), "()[Lbol;");
    }

    static jobject values() {
       const auto clazz = self();
       const auto methodID = methodID_values();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID);
    };
    
    static jmethodID methodID_valueOf() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("valueOf", "valueOf", "valueOf", "valueOf", "valueOf"), "(Ljava/lang/String;)Lbol;");
    }

    static jobject valueOf(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_valueOf();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_getName() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getDescription", "method_34700", "getName", "m_145981_"), "()Ljava/lang/String;");
    }

    static jobject getName(const jobject& obj) {
                
       const auto methodID = methodID_getName();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_UTIL_PROFILER_SAMPLETYPE_HPP