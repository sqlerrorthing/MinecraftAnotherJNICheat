// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_WORLD_GEN_CHUNK_CHUNKNOISESAMPLER$BLOCKSTATESAMPLER_HPP
#define NET_MINECRAFT_WORLD_GEN_CHUNK_CHUNKNOISESAMPLER$BLOCKSTATESAMPLER_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.world.gen.chunk.ChunkNoiseSampler$BlockStateSampler
 * Remapped: dzc$c
 */
namespace ChunkNoiseSampler$BlockStateSampler {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("dzc$c", "net/minecraft/world/level/levelgen/NoiseChunk$BlockStateFiller", "net/minecraft/class_6568$class_6569", "net/minecraft/world/gen/chunk/ChunkNoiseSampler$BlockStateSampler", "net/minecraft/src/C_182895_$C_182896_"));
        }
        return cachedClass;
    };

    static jmethodID methodID_sample() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("calculate", "calculate", "calculate", "sample", "m_207387_"), "(Ldyr$b;)Ldtc;");
    }

    static jobject sample(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_sample();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
};

#endif // NET_MINECRAFT_WORLD_GEN_CHUNK_CHUNKNOISESAMPLER$BLOCKSTATESAMPLER_HPP