// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef COM_MOJANG_BLAZE3D_SYSTEMS_RENDERCALLSTORAGE_HPP
#define COM_MOJANG_BLAZE3D_SYSTEMS_RENDERCALLSTORAGE_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: com.mojang.blaze3d.systems.RenderCallStorage
 * Remapped: ezu
 */
namespace RenderCallStorage {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("ezu", "com/mojang/blaze3d/pipeline/RenderPipeline", "net/minecraft/class_4491", "com/mojang/blaze3d/systems/RenderCallStorage", "net/minecraft/src/C_3105_"));
        }
        return cachedClass;
    };

    // getter for private field com.mojang.blaze3d.systems.RenderCallStorage#recordingQueues
    static jobject get_field_recordingQueues(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "renderCalls", "field_20453", "recordingQueues", "f_83910_"), "Ljava/util/List;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field com.mojang.blaze3d.systems.RenderCallStorage#recordingQueues
    static void set_field_recordingQueues(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "renderCalls", "field_20453", "recordingQueues", "f_83910_"), "Ljava/util/List;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field com.mojang.blaze3d.systems.RenderCallStorage#recording
    static jboolean get_field_recording(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "isRecording", "field_31899", "recording", "f_166180_"), "Z");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetBooleanField(obj, fieldID);
    };

    // setter for static private field com.mojang.blaze3d.systems.RenderCallStorage#recording
    static void set_field_recording(const jobject &obj, const jboolean &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "isRecording", "field_31899", "recording", "f_166180_"), "Z");
        return MinecraftSDK::env->SetBooleanField(obj, fieldID, value);
    };

    // getter for private field com.mojang.blaze3d.systems.RenderCallStorage#recordingIndex
    static jint get_field_recordingIndex(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "recordingBuffer", "field_20454", "recordingIndex", "f_83911_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetIntField(obj, fieldID);
    };

    // setter for static private field com.mojang.blaze3d.systems.RenderCallStorage#recordingIndex
    static void set_field_recordingIndex(const jobject &obj, const jint &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "recordingBuffer", "field_20454", "recordingIndex", "f_83911_"), "I");
        return MinecraftSDK::env->SetIntField(obj, fieldID, value);
    };

    // getter for private field com.mojang.blaze3d.systems.RenderCallStorage#processing
    static jboolean get_field_processing(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "isProcessing", "field_31900", "processing", "f_166181_"), "Z");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetBooleanField(obj, fieldID);
    };

    // setter for static private field com.mojang.blaze3d.systems.RenderCallStorage#processing
    static void set_field_processing(const jobject &obj, const jboolean &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "isProcessing", "field_31900", "processing", "f_166181_"), "Z");
        return MinecraftSDK::env->SetBooleanField(obj, fieldID, value);
    };

    // getter for private field com.mojang.blaze3d.systems.RenderCallStorage#processingIndex
    static jint get_field_processingIndex(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "processedBuffer", "field_20455", "processingIndex", "f_83912_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetIntField(obj, fieldID);
    };

    // setter for static private field com.mojang.blaze3d.systems.RenderCallStorage#processingIndex
    static void set_field_processingIndex(const jobject &obj, const jint &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "processedBuffer", "field_20455", "processingIndex", "f_83912_"), "I");
        return MinecraftSDK::env->SetIntField(obj, fieldID, value);
    };

    // getter for private field com.mojang.blaze3d.systems.RenderCallStorage#lastProcessedIndex
    static jint get_field_lastProcessedIndex(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("f", "renderingBuffer", "field_20456", "lastProcessedIndex", "f_83913_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetIntField(obj, fieldID);
    };

    // setter for static private field com.mojang.blaze3d.systems.RenderCallStorage#lastProcessedIndex
    static void set_field_lastProcessedIndex(const jobject &obj, const jint &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("f", "renderingBuffer", "field_20456", "lastProcessedIndex", "f_83913_"), "I");
        return MinecraftSDK::env->SetIntField(obj, fieldID, value);
    };

    static jmethodID methodID_canRecord() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "canBeginRecording", "method_35599", "canRecord", "m_166182_"), "()Z");
    }

    static jboolean canRecord(const jobject& obj) {
                
       const auto methodID = methodID_canRecord();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID);
    };
    
    static jmethodID methodID_startRecording() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "beginRecording", "method_35601", "startRecording", "m_166185_"), "()Z");
    }

    static jboolean startRecording(const jobject& obj) {
                
       const auto methodID = methodID_startRecording();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID);
    };
    
    static jmethodID methodID_record() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "recordRenderCall", "method_35600", "record", "m_166183_"), "(Lezt;)V");
    }

    static void record(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_record();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_stopRecording() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "endRecording", "method_35602", "stopRecording", "m_166186_"), "()V");
    }

    static void stopRecording(const jobject& obj) {
                
       const auto methodID = methodID_stopRecording();
       MinecraftSDK::env->CallVoidMethod(obj, methodID);
    };
    
    static jmethodID methodID_canProcess() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("d", "canBeginProcessing", "method_35603", "canProcess", "m_166187_"), "()Z");
    }

    static jboolean canProcess(const jobject& obj) {
                
       const auto methodID = methodID_canProcess();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID);
    };
    
    static jmethodID methodID_startProcessing() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("e", "beginProcessing", "method_35604", "startProcessing", "m_166188_"), "()Z");
    }

    static jboolean startProcessing(const jobject& obj) {
                
       const auto methodID = methodID_startProcessing();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID);
    };
    
    static jmethodID methodID_process() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("f", "processRecordedQueue", "method_35605", "process", "m_166189_"), "()V");
    }

    static void process(const jobject& obj) {
                
       const auto methodID = methodID_process();
       MinecraftSDK::env->CallVoidMethod(obj, methodID);
    };
    
    static jmethodID methodID_stopProcessing() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("g", "endProcessing", "method_35606", "stopProcessing", "m_166190_"), "()V");
    }

    static void stopProcessing(const jobject& obj) {
                
       const auto methodID = methodID_stopProcessing();
       MinecraftSDK::env->CallVoidMethod(obj, methodID);
    };
    
    static jmethodID methodID_getLastProcessedQueue() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("h", "startRendering", "method_35607", "getLastProcessedQueue", "m_166191_"), "()Ljava/util/concurrent/ConcurrentLinkedQueue;");
    }

    static jobject getLastProcessedQueue(const jobject& obj) {
                
       const auto methodID = methodID_getLastProcessedQueue();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_getRecordingQueue() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("i", "getRecordingQueue", "method_35608", "getRecordingQueue", "m_166192_"), "()Ljava/util/concurrent/ConcurrentLinkedQueue;");
    }

    static jobject getRecordingQueue(const jobject& obj) {
                
       const auto methodID = methodID_getRecordingQueue();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_getProcessingQueue() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("j", "getProcessedQueue", "method_35609", "getProcessingQueue", "m_166193_"), "()Ljava/util/concurrent/ConcurrentLinkedQueue;");
    }

    static jobject getProcessingQueue(const jobject& obj) {
                
       const auto methodID = methodID_getProcessingQueue();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
};

#endif // COM_MOJANG_BLAZE3D_SYSTEMS_RENDERCALLSTORAGE_HPP