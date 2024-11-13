// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_UTIL_PROFILING_JFR_JFRPROFILERECORDER_HPP
#define NET_MINECRAFT_UTIL_PROFILING_JFR_JFRPROFILERECORDER_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.util.profiling.jfr.JfrProfileRecorder
 * Remapped: bnu
 */
namespace JfrProfileRecorder {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("bnu", "net/minecraft/util/profiling/jfr/parse/JfrStatsParser", "net/minecraft/class_6516", "net/minecraft/util/profiling/jfr/JfrProfileRecorder", "net/minecraft/src/C_182818_"));
        }
        return cachedClass;
    };

    // getter for private field net.minecraft.util.profiling.jfr.JfrProfileRecorder#startTime
    static jobject get_field_startTime(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "recordingStarted", "field_34422", "startTime", "f_185428_"), "Ljava/time/Instant;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.util.profiling.jfr.JfrProfileRecorder#startTime
    static void set_field_startTime(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "recordingStarted", "field_34422", "startTime", "f_185428_"), "Ljava/time/Instant;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.util.profiling.jfr.JfrProfileRecorder#endTime
    static jobject get_field_endTime(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "recordingEnded", "field_34423", "endTime", "f_185429_"), "Ljava/time/Instant;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.util.profiling.jfr.JfrProfileRecorder#endTime
    static void set_field_endTime(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "recordingEnded", "field_34423", "endTime", "f_185429_"), "Ljava/time/Instant;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.util.profiling.jfr.JfrProfileRecorder#chunkGenerationSamples
    static jobject get_field_chunkGenerationSamples(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "chunkGenStats", "field_34424", "chunkGenerationSamples", "f_185430_"), "Ljava/util/List;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.util.profiling.jfr.JfrProfileRecorder#chunkGenerationSamples
    static void set_field_chunkGenerationSamples(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "chunkGenStats", "field_34424", "chunkGenerationSamples", "f_185430_"), "Ljava/util/List;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.util.profiling.jfr.JfrProfileRecorder#cpuLoadSamples
    static jobject get_field_cpuLoadSamples(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "cpuLoadStat", "field_34425", "cpuLoadSamples", "f_185431_"), "Ljava/util/List;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.util.profiling.jfr.JfrProfileRecorder#cpuLoadSamples
    static void set_field_cpuLoadSamples(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "cpuLoadStat", "field_34425", "cpuLoadSamples", "f_185431_"), "Ljava/util/List;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.util.profiling.jfr.JfrProfileRecorder#receivedPacketsToCounter
    static jobject get_field_receivedPacketsToCounter(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "receivedPackets", "field_34426", "receivedPacketsToCounter", "f_185432_"), "Ljava/util/Map;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.util.profiling.jfr.JfrProfileRecorder#receivedPacketsToCounter
    static void set_field_receivedPacketsToCounter(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "receivedPackets", "field_34426", "receivedPacketsToCounter", "f_185432_"), "Ljava/util/Map;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.util.profiling.jfr.JfrProfileRecorder#sentPacketsToCounter
    static jobject get_field_sentPacketsToCounter(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("f", "sentPackets", "field_34427", "sentPacketsToCounter", "f_185433_"), "Ljava/util/Map;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.util.profiling.jfr.JfrProfileRecorder#sentPacketsToCounter
    static void set_field_sentPacketsToCounter(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("f", "sentPackets", "field_34427", "sentPacketsToCounter", "f_185433_"), "Ljava/util/Map;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.util.profiling.jfr.JfrProfileRecorder#chunkRegionReadCounter
    static jobject get_field_chunkRegionReadCounter(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("g", "readChunks", "field_49070", "chunkRegionReadCounter", "f_315403_"), "Ljava/util/Map;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.util.profiling.jfr.JfrProfileRecorder#chunkRegionReadCounter
    static void set_field_chunkRegionReadCounter(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("g", "readChunks", "field_49070", "chunkRegionReadCounter", "f_315403_"), "Ljava/util/Map;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.util.profiling.jfr.JfrProfileRecorder#chunkRegionWriteCounter
    static jobject get_field_chunkRegionWriteCounter(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("h", "writtenChunks", "field_49071", "chunkRegionWriteCounter", "f_315168_"), "Ljava/util/Map;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.util.profiling.jfr.JfrProfileRecorder#chunkRegionWriteCounter
    static void set_field_chunkRegionWriteCounter(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("h", "writtenChunks", "field_49071", "chunkRegionWriteCounter", "f_315168_"), "Ljava/util/Map;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.util.profiling.jfr.JfrProfileRecorder#fileWriteSamples
    static jobject get_field_fileWriteSamples(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("i", "fileWrites", "field_34428", "fileWriteSamples", "f_185434_"), "Ljava/util/List;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.util.profiling.jfr.JfrProfileRecorder#fileWriteSamples
    static void set_field_fileWriteSamples(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("i", "fileWrites", "field_34428", "fileWriteSamples", "f_185434_"), "Ljava/util/List;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.util.profiling.jfr.JfrProfileRecorder#fileReadSamples
    static jobject get_field_fileReadSamples(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("j", "fileReads", "field_34429", "fileReadSamples", "f_185435_"), "Ljava/util/List;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.util.profiling.jfr.JfrProfileRecorder#fileReadSamples
    static void set_field_fileReadSamples(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("j", "fileReads", "field_34429", "fileReadSamples", "f_185435_"), "Ljava/util/List;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.util.profiling.jfr.JfrProfileRecorder#gcCount
    static jint get_field_gcCount(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("k", "garbageCollections", "field_34430", "gcCount", "f_185436_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetIntField(obj, fieldID);
    };

    // setter for static private field net.minecraft.util.profiling.jfr.JfrProfileRecorder#gcCount
    static void set_field_gcCount(const jobject &obj, const jint &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("k", "garbageCollections", "field_34430", "gcCount", "f_185436_"), "I");
        return MinecraftSDK::env->SetIntField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.util.profiling.jfr.JfrProfileRecorder#gcDuration
    static jobject get_field_gcDuration(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("l", "gcTotalDuration", "field_34431", "gcDuration", "f_185437_"), "Ljava/time/Duration;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.util.profiling.jfr.JfrProfileRecorder#gcDuration
    static void set_field_gcDuration(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("l", "gcTotalDuration", "field_34431", "gcDuration", "f_185437_"), "Ljava/time/Duration;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.util.profiling.jfr.JfrProfileRecorder#gcHeapSummarySamples
    static jobject get_field_gcHeapSummarySamples(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("m", "gcHeapStats", "field_34432", "gcHeapSummarySamples", "f_185438_"), "Ljava/util/List;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.util.profiling.jfr.JfrProfileRecorder#gcHeapSummarySamples
    static void set_field_gcHeapSummarySamples(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("m", "gcHeapStats", "field_34432", "gcHeapSummarySamples", "f_185438_"), "Ljava/util/List;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.util.profiling.jfr.JfrProfileRecorder#threadAllocationStatisticsSamples
    static jobject get_field_threadAllocationStatisticsSamples(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("n", "threadAllocationStats", "field_34433", "threadAllocationStatisticsSamples", "f_185439_"), "Ljava/util/List;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.util.profiling.jfr.JfrProfileRecorder#threadAllocationStatisticsSamples
    static void set_field_threadAllocationStatisticsSamples(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("n", "threadAllocationStats", "field_34433", "threadAllocationStatisticsSamples", "f_185439_"), "Ljava/util/List;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.util.profiling.jfr.JfrProfileRecorder#serverTickTimeSamples
    static jobject get_field_serverTickTimeSamples(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("o", "tickTimes", "field_34434", "serverTickTimeSamples", "f_185440_"), "Ljava/util/List;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.util.profiling.jfr.JfrProfileRecorder#serverTickTimeSamples
    static void set_field_serverTickTimeSamples(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("o", "tickTimes", "field_34434", "serverTickTimeSamples", "f_185440_"), "Ljava/util/List;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.util.profiling.jfr.JfrProfileRecorder#worldGenDuration
    static jobject get_field_worldGenDuration(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("p", "worldCreationDuration", "field_34435", "worldGenDuration", "f_185441_"), "Ljava/time/Duration;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.util.profiling.jfr.JfrProfileRecorder#worldGenDuration
    static void set_field_worldGenDuration(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("p", "worldCreationDuration", "field_34435", "worldGenDuration", "f_185441_"), "Ljava/time/Duration;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID_readProfile() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "parse", "method_38001", "readProfile", "m_185447_"), "(Ljava/nio/file/Path;)Lbnv;");
    }

    static jobject readProfile(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_readProfile();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_createProfile() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "results", "method_38000", "createProfile", "m_185444_"), "()Lbnv;");
    }

    static jobject createProfile(const jobject& obj) {
                
       const auto methodID = methodID_createProfile();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_handleEvents() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "capture", "method_38002", "handleEvents", "m_185454_"), "(Ljava/util/stream/Stream;)V");
    }

    static void handleEvents(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_handleEvents();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_addPacket() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "incrementPacket", "method_39435", "addPacket", "m_185458_"), "(Ljdk/jfr/consumer/RecordedEvent;ILjava/util/Map;)V");
    }

    static void addPacket(const jobject& obj, const jobject& arg0, const jint& arg1, const jobject& arg2) {
                
       const auto methodID = methodID_addPacket();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1, arg2);
    };
    
    static jmethodID methodID_addChunkRegionEvent() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "incrementChunk", "method_56982", "addChunkRegionEvent", "m_324568_"), "(Ljdk/jfr/consumer/RecordedEvent;ILjava/util/Map;)V");
    }

    static void addChunkRegionEvent(const jobject& obj, const jobject& arg0, const jint& arg1, const jobject& arg2) {
                
       const auto methodID = methodID_addChunkRegionEvent();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1, arg2);
    };
    
    static jmethodID methodID_addFileIoSample() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "appendFileIO", "method_38004", "addFileIoSample", "m_185462_"), "(Ljdk/jfr/consumer/RecordedEvent;Ljava/util/List;Ljava/lang/String;)V");
    }

    static void addFileIoSample(const jobject& obj, const jobject& arg0, const jobject& arg1, const jobject& arg2) {
                
       const auto methodID = methodID_addFileIoSample();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1, arg2);
    };
    
    static jmethodID methodID_createNetworkIoStatistics() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "collectIoStats", "method_39433", "createNetworkIoStatistics", "m_319732_"), "(Ljava/time/Duration;Ljava/util/Map;)Lboe;");
    }

    static jobject createNetworkIoStatistics(const jobject& arg0, const jobject& arg1) {
       const auto clazz = self();
       const auto methodID = methodID_createNetworkIoStatistics();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0, arg1);
    };
    
};

#endif // NET_MINECRAFT_UTIL_PROFILING_JFR_JFRPROFILERECORDER_HPP