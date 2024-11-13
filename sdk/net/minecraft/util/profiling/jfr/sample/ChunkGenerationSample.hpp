// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_UTIL_PROFILING_JFR_SAMPLE_CHUNKGENERATIONSAMPLE_HPP
#define NET_MINECRAFT_UTIL_PROFILING_JFR_SAMPLE_CHUNKGENERATIONSAMPLE_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.util.profiling.jfr.sample.ChunkGenerationSample
 * Remapped: bnz
 */
namespace ChunkGenerationSample {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("bnz", "net/minecraft/util/profiling/jfr/stats/ChunkGenStat", "net/minecraft/class_6521", "net/minecraft/util/profiling/jfr/sample/ChunkGenerationSample", "net/minecraft/src/C_182825_"));
        }
        return cachedClass;
    };

    // getter for private field net.minecraft.util.profiling.jfr.sample.ChunkGenerationSample#duration
    static jobject get_field_duration(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "duration", "comp_16", "duration", "f_185592_"), "Ljava/time/Duration;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.util.profiling.jfr.sample.ChunkGenerationSample#duration
    static void set_field_duration(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "duration", "comp_16", "duration", "f_185592_"), "Ljava/time/Duration;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.util.profiling.jfr.sample.ChunkGenerationSample#chunkPos
    static jobject get_field_chunkPos(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "chunkPos", "comp_17", "chunkPos", "f_185593_"), "Ldcd;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.util.profiling.jfr.sample.ChunkGenerationSample#chunkPos
    static void set_field_chunkPos(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "chunkPos", "comp_17", "chunkPos", "f_185593_"), "Ldcd;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.util.profiling.jfr.sample.ChunkGenerationSample#centerPos
    static jobject get_field_centerPos(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "worldPos", "comp_18", "centerPos", "f_185594_"), "Laqi;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.util.profiling.jfr.sample.ChunkGenerationSample#centerPos
    static void set_field_centerPos(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "worldPos", "comp_18", "centerPos", "f_185594_"), "Laqi;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.util.profiling.jfr.sample.ChunkGenerationSample#chunkStatus
    static jobject get_field_chunkStatus(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "status", "comp_19", "chunkStatus", "f_185595_"), "Ldvz;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.util.profiling.jfr.sample.ChunkGenerationSample#chunkStatus
    static void set_field_chunkStatus(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "status", "comp_19", "chunkStatus", "f_185595_"), "Ldvz;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.util.profiling.jfr.sample.ChunkGenerationSample#worldKey
    static jobject get_field_worldKey(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "level", "comp_21", "worldKey", "f_185596_"), "Ljava/lang/String;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.util.profiling.jfr.sample.ChunkGenerationSample#worldKey
    static void set_field_worldKey(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "level", "comp_21", "worldKey", "f_185596_"), "Ljava/lang/String;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID_fromEvent() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "from", "method_38031", "fromEvent", "m_185604_"), "(Ljdk/jfr/consumer/RecordedEvent;)Lbnz;");
    }

    static jobject fromEvent(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_fromEvent();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID__duration() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "duration", "comp_16", "duration", "m_183571_"), "()Ljava/time/Duration;");
    }

    static jobject _duration(const jobject& obj) {
                
       const auto methodID = methodID__duration();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID__chunkPos() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "chunkPos", "comp_17", "chunkPos", "f_185593_"), "()Ldcd;");
    }

    static jobject _chunkPos(const jobject& obj) {
                
       const auto methodID = methodID__chunkPos();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID__centerPos() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "worldPos", "comp_18", "centerPos", "f_185594_"), "()Laqi;");
    }

    static jobject _centerPos(const jobject& obj) {
                
       const auto methodID = methodID__centerPos();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID__chunkStatus() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("d", "status", "comp_19", "chunkStatus", "f_185595_"), "()Ldvz;");
    }

    static jobject _chunkStatus(const jobject& obj) {
                
       const auto methodID = methodID__chunkStatus();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID__worldKey() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("e", "level", "comp_21", "worldKey", "f_185596_"), "()Ljava/lang/String;");
    }

    static jobject _worldKey(const jobject& obj) {
                
       const auto methodID = methodID__worldKey();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_UTIL_PROFILING_JFR_SAMPLE_CHUNKGENERATIONSAMPLE_HPP