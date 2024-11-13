// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_SERVER_WORLDGENERATIONPROGRESSLOGGER_HPP
#define NET_MINECRAFT_SERVER_WORLDGENERATIONPROGRESSLOGGER_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.server.WorldGenerationProgressLogger
 * Remapped: arf
 */
namespace WorldGenerationProgressLogger {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("arf", "net/minecraft/server/level/progress/LoggerChunkProgressListener", "net/minecraft/class_3951", "net/minecraft/server/WorldGenerationProgressLogger", "net/minecraft/src/C_23_"));
        }
        return cachedClass;
    };

    // getter for static private field net.minecraft.server.WorldGenerationProgressLogger#LOGGER
    [[maybe_unused]] static jobject get_field_LOGGER() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "LOGGER", "field_17467", "LOGGER", "f_9622_"), "Lorg/slf4j/Logger;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.server.WorldGenerationProgressLogger#LOGGER
    [[maybe_unused]] static void set_field_LOGGER(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "LOGGER", "field_17467", "LOGGER", "f_9622_"), "Lorg/slf4j/Logger;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for private field net.minecraft.server.WorldGenerationProgressLogger#totalCount
    static jint get_field_totalCount(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "maxCount", "field_17468", "totalCount", "f_9623_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetIntField(obj, fieldID);
    };

    // setter for static private field net.minecraft.server.WorldGenerationProgressLogger#totalCount
    static void set_field_totalCount(const jobject &obj, const jint &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "maxCount", "field_17468", "totalCount", "f_9623_"), "I");
        return MinecraftSDK::env->SetIntField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.server.WorldGenerationProgressLogger#generatedCount
    static jint get_field_generatedCount(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "count", "field_17469", "generatedCount", "f_9624_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetIntField(obj, fieldID);
    };

    // setter for static private field net.minecraft.server.WorldGenerationProgressLogger#generatedCount
    static void set_field_generatedCount(const jobject &obj, const jint &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "count", "field_17469", "generatedCount", "f_9624_"), "I");
        return MinecraftSDK::env->SetIntField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.server.WorldGenerationProgressLogger#startTime
    static jlong get_field_startTime(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "startTime", "field_17470", "startTime", "f_9625_"), "J");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetLongField(obj, fieldID);
    };

    // setter for static private field net.minecraft.server.WorldGenerationProgressLogger#startTime
    static void set_field_startTime(const jobject &obj, const jlong &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "startTime", "field_17470", "startTime", "f_9625_"), "J");
        return MinecraftSDK::env->SetLongField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.server.WorldGenerationProgressLogger#nextMessageTime
    static jlong get_field_nextMessageTime(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "nextTickTime", "field_17471", "nextMessageTime", "f_9626_"), "J");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetLongField(obj, fieldID);
    };

    // setter for static private field net.minecraft.server.WorldGenerationProgressLogger#nextMessageTime
    static void set_field_nextMessageTime(const jobject &obj, const jlong &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "nextTickTime", "field_17471", "nextMessageTime", "f_9626_"), "J");
        return MinecraftSDK::env->SetLongField(obj, fieldID, value);
    };

    static jmethodID methodID_create() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("b", "createFromGameruleRadius", "method_56042", "create", "m_324668_"), "(I)Larf;");
    }

    static jobject create(const jint& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_create();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_forSpawnChunks() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("c", "create", "method_56044", "forSpawnChunks", "m_324586_"), "(I)Larf;");
    }

    static jobject forSpawnChunks(const jint& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_forSpawnChunks();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_noSpawnChunks() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("c", "createCompleted", "method_56043", "noSpawnChunks", "m_321559_"), "()Larf;");
    }

    static jobject noSpawnChunks() {
       const auto clazz = self();
       const auto methodID = methodID_noSpawnChunks();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID);
    };
    
    static jmethodID methodID_start() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "updateSpawnPos", "method_17669", "start", "m_7647_"), "(Ldcd;)V");
    }

    static void start(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_start();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_setChunkStatus() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "onStatusChange", "method_17670", "setChunkStatus", "m_5511_"), "(Ldcd;Ldvz;)V");
    }

    static void setChunkStatus(const jobject& obj, const jobject& arg0, const jobject& arg1) {
                
       const auto methodID = methodID_setChunkStatus();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID__start() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "start", "method_17675", "start", "m_9662_"), "()V");
    }

    static void _start(const jobject& obj) {
                
       const auto methodID = methodID__start();
       MinecraftSDK::env->CallVoidMethod(obj, methodID);
    };
    
    static jmethodID methodID_stop() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "stop", "method_17671", "stop", "m_7646_"), "()V");
    }

    static void stop(const jobject& obj) {
                
       const auto methodID = methodID_stop();
       MinecraftSDK::env->CallVoidMethod(obj, methodID);
    };
    
    static jmethodID methodID_getProgressPercentage() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("d", "getProgress", "method_17672", "getProgressPercentage", "m_9636_"), "()I");
    }

    static jint getProgressPercentage(const jobject& obj) {
                
       const auto methodID = methodID_getProgressPercentage();
       return MinecraftSDK::env->CallIntMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_SERVER_WORLDGENERATIONPROGRESSLOGGER_HPP