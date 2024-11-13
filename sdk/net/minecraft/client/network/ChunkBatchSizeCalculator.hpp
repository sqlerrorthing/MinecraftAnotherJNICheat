// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_CLIENT_NETWORK_CHUNKBATCHSIZECALCULATOR_HPP
#define NET_MINECRAFT_CLIENT_NETWORK_CHUNKBATCHSIZECALCULATOR_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.client.network.ChunkBatchSizeCalculator
 * Remapped: fyz
 */
namespace ChunkBatchSizeCalculator {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("fyz", "net/minecraft/client/multiplayer/ChunkBatchSizeCalculator", "net/minecraft/class_8760", "net/minecraft/client/network/ChunkBatchSizeCalculator", "net/minecraft/src/C_290093_"));
        }
        return cachedClass;
    };

    // getter for static private field net.minecraft.client.network.ChunkBatchSizeCalculator#field_45939
    [[maybe_unused]] static jint get_field_field_45939() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "MAX_OLD_SAMPLES_WEIGHT", "field_45939", "field_45939", "f_290473_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.network.ChunkBatchSizeCalculator#field_45939
    [[maybe_unused]] static void set_field_field_45939(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "MAX_OLD_SAMPLES_WEIGHT", "field_45939", "field_45939", "f_290473_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.client.network.ChunkBatchSizeCalculator#field_45940
    [[maybe_unused]] static jint get_field_field_45940() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "CLAMP_COEFFICIENT", "field_45940", "field_45940", "f_291041_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.network.ChunkBatchSizeCalculator#field_45940
    [[maybe_unused]] static void set_field_field_45940(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "CLAMP_COEFFICIENT", "field_45940", "field_45940", "f_291041_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for private field net.minecraft.client.network.ChunkBatchSizeCalculator#averageNanosPerChunk
    static jdouble get_field_averageNanosPerChunk(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "aggregatedNanosPerChunk", "field_45941", "averageNanosPerChunk", "f_290332_"), "D");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetDoubleField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.network.ChunkBatchSizeCalculator#averageNanosPerChunk
    static void set_field_averageNanosPerChunk(const jobject &obj, const jdouble &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "aggregatedNanosPerChunk", "field_45941", "averageNanosPerChunk", "f_290332_"), "D");
        return MinecraftSDK::env->SetDoubleField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.network.ChunkBatchSizeCalculator#sampleSize
    static jint get_field_sampleSize(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "oldSamplesWeight", "field_45942", "sampleSize", "f_290384_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetIntField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.network.ChunkBatchSizeCalculator#sampleSize
    static void set_field_sampleSize(const jobject &obj, const jint &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "oldSamplesWeight", "field_45942", "sampleSize", "f_290384_"), "I");
        return MinecraftSDK::env->SetIntField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.network.ChunkBatchSizeCalculator#startTime
    static jlong get_field_startTime(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "chunkBatchStartTime", "field_45943", "startTime", "f_291259_"), "J");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetLongField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.network.ChunkBatchSizeCalculator#startTime
    static void set_field_startTime(const jobject &obj, const jlong &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "chunkBatchStartTime", "field_45943", "startTime", "f_291259_"), "J");
        return MinecraftSDK::env->SetLongField(obj, fieldID, value);
    };

    static jmethodID methodID_onStartChunkSend() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "onBatchStart", "method_53483", "onStartChunkSend", "m_293630_"), "()V");
    }

    static void onStartChunkSend(const jobject& obj) {
                
       const auto methodID = methodID_onStartChunkSend();
       MinecraftSDK::env->CallVoidMethod(obj, methodID);
    };
    
    static jmethodID methodID_onChunkSent() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "onBatchFinished", "method_53484", "onChunkSent", "m_293201_"), "(I)V");
    }

    static void onChunkSent(const jobject& obj, const jint& arg0) {
                
       const auto methodID = methodID_onChunkSent();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_getDesiredChunksPerTick() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "getDesiredChunksPerTick", "method_53485", "getDesiredChunksPerTick", "m_293338_"), "()F");
    }

    static jfloat getDesiredChunksPerTick(const jobject& obj) {
                
       const auto methodID = methodID_getDesiredChunksPerTick();
       return MinecraftSDK::env->CallFloatMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_CLIENT_NETWORK_CHUNKBATCHSIZECALCULATOR_HPP