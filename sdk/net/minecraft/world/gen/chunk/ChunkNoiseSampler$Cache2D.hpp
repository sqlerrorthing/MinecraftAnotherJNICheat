// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_WORLD_GEN_CHUNK_CHUNKNOISESAMPLER$CACHE2D_HPP
#define NET_MINECRAFT_WORLD_GEN_CHUNK_CHUNKNOISESAMPLER$CACHE2D_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.world.gen.chunk.ChunkNoiseSampler$Cache2D
 * Remapped: dzc$d
 */
namespace ChunkNoiseSampler$Cache2D {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("dzc$d", "net/minecraft/world/level/levelgen/NoiseChunk$Cache2D", "net/minecraft/class_6568$class_6948", "net/minecraft/world/gen/chunk/ChunkNoiseSampler$Cache2D", "net/minecraft/src/C_182895_$C_207009_"));
        }
        return cachedClass;
    };

    // getter for private field net.minecraft.world.gen.chunk.ChunkNoiseSampler$Cache2D#delegate
    static jobject get_field_delegate(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "function", "field_36599", "delegate", "f_209284_"), "Ldyr;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.world.gen.chunk.ChunkNoiseSampler$Cache2D#delegate
    static void set_field_delegate(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "function", "field_36599", "delegate", "f_209284_"), "Ldyr;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.world.gen.chunk.ChunkNoiseSampler$Cache2D#lastSamplingColumnPos
    static jlong get_field_lastSamplingColumnPos(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "lastPos2D", "field_36600", "lastSamplingColumnPos", "f_209285_"), "J");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetLongField(obj, fieldID);
    };

    // setter for static private field net.minecraft.world.gen.chunk.ChunkNoiseSampler$Cache2D#lastSamplingColumnPos
    static void set_field_lastSamplingColumnPos(const jobject &obj, const jlong &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "lastPos2D", "field_36600", "lastSamplingColumnPos", "f_209285_"), "J");
        return MinecraftSDK::env->SetLongField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.world.gen.chunk.ChunkNoiseSampler$Cache2D#lastSamplingResult
    static jdouble get_field_lastSamplingResult(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("f", "lastValue", "field_36601", "lastSamplingResult", "f_209286_"), "D");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetDoubleField(obj, fieldID);
    };

    // setter for static private field net.minecraft.world.gen.chunk.ChunkNoiseSampler$Cache2D#lastSamplingResult
    static void set_field_lastSamplingResult(const jobject &obj, const jdouble &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("f", "lastValue", "field_36601", "lastSamplingResult", "f_209286_"), "D");
        return MinecraftSDK::env->SetDoubleField(obj, fieldID, value);
    };

    static jmethodID methodID_sample() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "compute", "method_40464", "sample", "m_207386_"), "(Ldyr$b;)D");
    }

    static jdouble sample(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_sample();
       return MinecraftSDK::env->CallDoubleMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_fill() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "fillArray", "method_40470", "fill", "m_207362_"), "([DLdyr$a;)V");
    }

    static void fill(const jobject& obj, const jarray& arg0, const jdouble& arg1, const jobject& arg2) {
                
       const auto methodID = methodID_fill();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1, arg2);
    };
    
    static jmethodID methodID_wrapped() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("k", "wrapped", "comp_469", "wrapped", "m_207056_"), "()Ldyr;");
    }

    static jobject wrapped(const jobject& obj) {
                
       const auto methodID = methodID_wrapped();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_type() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("j", "type", "comp_383", "type", "m_207136_"), "()Ldys$l$a;");
    }

    static jobject type(const jobject& obj) {
                
       const auto methodID = methodID_type();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_WORLD_GEN_CHUNK_CHUNKNOISESAMPLER$CACHE2D_HPP