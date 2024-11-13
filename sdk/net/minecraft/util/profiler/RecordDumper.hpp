// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_UTIL_PROFILER_RECORDDUMPER_HPP
#define NET_MINECRAFT_UTIL_PROFILER_RECORDDUMPER_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.util.profiler.RecordDumper
 * Remapped: box
 */
namespace RecordDumper {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("box", "net/minecraft/util/profiling/metrics/storage/MetricsPersister", "net/minecraft/class_5971", "net/minecraft/util/profiler/RecordDumper", "net/minecraft/src/C_141030_"));
        }
        return cachedClass;
    };

    // getter for static public field net.minecraft.util.profiler.RecordDumper#DEBUG_PROFILING_DIRECTORY
    [[maybe_unused]] static jobject get_field_DEBUG_PROFILING_DIRECTORY() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "PROFILING_RESULTS_DIR", "field_29616", "DEBUG_PROFILING_DIRECTORY", "f_146209_"), "Ljava/nio/file/Path;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.util.profiler.RecordDumper#DEBUG_PROFILING_DIRECTORY
    [[maybe_unused]] static void set_field_DEBUG_PROFILING_DIRECTORY(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "PROFILING_RESULTS_DIR", "field_29616", "DEBUG_PROFILING_DIRECTORY", "f_146209_"), "Ljava/nio/file/Path;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.util.profiler.RecordDumper#METRICS_DIRECTORY
    [[maybe_unused]] static jobject get_field_METRICS_DIRECTORY() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "METRICS_DIR_NAME", "field_32677", "METRICS_DIRECTORY", "f_146210_"), "Ljava/lang/String;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.util.profiler.RecordDumper#METRICS_DIRECTORY
    [[maybe_unused]] static void set_field_METRICS_DIRECTORY(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "METRICS_DIR_NAME", "field_32677", "METRICS_DIRECTORY", "f_146210_"), "Ljava/lang/String;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.util.profiler.RecordDumper#DEVIATIONS_DIRECTORY
    [[maybe_unused]] static jobject get_field_DEVIATIONS_DIRECTORY() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "DEVIATIONS_DIR_NAME", "field_32678", "DEVIATIONS_DIRECTORY", "f_146211_"), "Ljava/lang/String;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.util.profiler.RecordDumper#DEVIATIONS_DIRECTORY
    [[maybe_unused]] static void set_field_DEVIATIONS_DIRECTORY(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "DEVIATIONS_DIR_NAME", "field_32678", "DEVIATIONS_DIRECTORY", "f_146211_"), "Ljava/lang/String;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.util.profiler.RecordDumper#FILE_NAME
    [[maybe_unused]] static jobject get_field_FILE_NAME() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("d", "PROFILING_RESULT_FILENAME", "field_32679", "FILE_NAME", "f_146212_"), "Ljava/lang/String;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.util.profiler.RecordDumper#FILE_NAME
    [[maybe_unused]] static void set_field_FILE_NAME(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("d", "PROFILING_RESULT_FILENAME", "field_32679", "FILE_NAME", "f_146212_"), "Ljava/lang/String;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.util.profiler.RecordDumper#LOGGER
    [[maybe_unused]] static jobject get_field_LOGGER() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("e", "LOGGER", "field_29618", "LOGGER", "f_146213_"), "Lorg/slf4j/Logger;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.util.profiler.RecordDumper#LOGGER
    [[maybe_unused]] static void set_field_LOGGER(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("e", "LOGGER", "field_29618", "LOGGER", "f_146213_"), "Lorg/slf4j/Logger;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for private field net.minecraft.util.profiler.RecordDumper#type
    static jobject get_field_type(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("f", "rootFolderName", "field_33903", "type", "f_146214_"), "Ljava/lang/String;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.util.profiler.RecordDumper#type
    static void set_field_type(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("f", "rootFolderName", "field_33903", "type", "f_146214_"), "Ljava/lang/String;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID_createDump() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "saveReports", "method_34807", "createDump", "m_146250_"), "(Ljava/util/Set;Ljava/util/Map;Lbne;)Ljava/nio/file/Path;");
    }

    static jobject createDump(const jobject& obj, const jobject& arg0, const jobject& arg1, const jobject& arg2) {
                
       const auto methodID = methodID_createDump();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1, arg2);
    };
    
    static jmethodID methodID_writeSamplers() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "saveMetrics", "method_34803", "writeSamplers", "m_146247_"), "(Ljava/util/Set;Ljava/nio/file/Path;)V");
    }

    static void writeSamplers(const jobject& obj, const jobject& arg0, const jobject& arg1) {
                
       const auto methodID = methodID_writeSamplers();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_writeSamplersInType() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "saveCategory", "method_37208", "writeSamplersInType", "m_146226_"), "(Lbol;Ljava/util/List;Ljava/nio/file/Path;)V");
    }

    static void writeSamplersInType(const jobject& obj, const jobject& arg0, const jobject& arg1, const jobject& arg2) {
                
       const auto methodID = methodID_writeSamplersInType();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1, arg2);
    };
    
    static jmethodID methodID_writeDeviations() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "saveDeviations", "method_37212", "writeDeviations", "m_146244_"), "(Ljava/util/Map;Ljava/nio/file/Path;)V");
    }

    static void writeDeviations(const jobject& obj, const jobject& arg0, const jobject& arg1) {
                
       const auto methodID = methodID_writeDeviations();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_save() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "saveProfilingTaskExecutionResult", "method_34802", "save", "m_146223_"), "(Lbne;Ljava/nio/file/Path;)V");
    }

    static void save(const jobject& obj, const jobject& arg0, const jobject& arg1) {
                
       const auto methodID = methodID_save();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1);
    };
    
};

#endif // NET_MINECRAFT_UTIL_PROFILER_RECORDDUMPER_HPP