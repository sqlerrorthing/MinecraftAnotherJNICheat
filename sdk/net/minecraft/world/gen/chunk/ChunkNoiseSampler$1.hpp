// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_WORLD_GEN_CHUNK_CHUNKNOISESAMPLER$1_HPP
#define NET_MINECRAFT_WORLD_GEN_CHUNK_CHUNKNOISESAMPLER$1_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.world.gen.chunk.ChunkNoiseSampler$1
 * Remapped: dzc$1
 */
namespace ChunkNoiseSampler$1 {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("dzc$1", "net/minecraft/world/level/levelgen/NoiseChunk$1", "net/minecraft/class_6568$1", "net/minecraft/world/gen/chunk/ChunkNoiseSampler$1", "net/minecraft/src/C_182895_$C_207005_"));
        }
        return cachedClass;
    };

    static jmethodID methodID_at() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "forIndex", "method_40477", "at", "m_207263_"), "(I)Ldyr$b;");
    }

    static jobject at(const jobject& obj, const jint& arg0) {
                
       const auto methodID = methodID_at();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_fill() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "fillAllDirectly", "method_40478", "fill", "m_207207_"), "([DLdyr;)V");
    }

    static void fill(const jobject& obj, const jarray& arg0, const jdouble& arg1, const jobject& arg2) {
                
       const auto methodID = methodID_fill();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1, arg2);
    };
    
};

#endif // NET_MINECRAFT_WORLD_GEN_CHUNK_CHUNKNOISESAMPLER$1_HPP