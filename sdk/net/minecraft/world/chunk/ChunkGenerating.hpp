// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_WORLD_CHUNK_CHUNKGENERATING_HPP
#define NET_MINECRAFT_WORLD_CHUNK_CHUNKGENERATING_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.world.chunk.ChunkGenerating
 * Remapped: dwb
 */
namespace ChunkGenerating {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("dwb", "net/minecraft/world/level/chunk/status/ChunkStatusTasks", "net/minecraft/class_9310", "net/minecraft/world/chunk/ChunkGenerating", "net/minecraft/src/C_313840_"));
        }
        return cachedClass;
    };

    static jmethodID methodID_isLightOn() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "isLighted", "method_57595", "isLightOn", "m_322657_"), "(Lduy;)Z");
    }

    static jboolean isLightOn(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_isLightOn();
       return MinecraftSDK::env->CallStaticBooleanMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_noop() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "passThrough", "method_57596", "noop", "m_339603_"), "(Ldwe;Ldwc;Lazi;Lduy;)Ljava/util/concurrent/CompletableFuture;");
    }

    static jobject noop(const jobject& arg0, const jobject& arg1, const jobject& arg2, const jobject& arg3) {
       const auto clazz = self();
       const auto methodID = methodID_noop();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0, arg1, arg2, arg3);
    };
    
    static jmethodID methodID_generateStructures() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("b", "generateStructureStarts", "method_57601", "generateStructures", "m_319607_"), "(Ldwe;Ldwc;Lazi;Lduy;)Ljava/util/concurrent/CompletableFuture;");
    }

    static jobject generateStructures(const jobject& arg0, const jobject& arg1, const jobject& arg2, const jobject& arg3) {
       const auto clazz = self();
       const auto methodID = methodID_generateStructures();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0, arg1, arg2, arg3);
    };
    
    static jmethodID methodID_loadStructures() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("c", "loadStructureStarts", "method_57600", "loadStructures", "m_322589_"), "(Ldwe;Ldwc;Lazi;Lduy;)Ljava/util/concurrent/CompletableFuture;");
    }

    static jobject loadStructures(const jobject& arg0, const jobject& arg1, const jobject& arg2, const jobject& arg3) {
       const auto clazz = self();
       const auto methodID = methodID_loadStructures();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0, arg1, arg2, arg3);
    };
    
    static jmethodID methodID_generateStructureReferences() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("d", "generateStructureReferences", "method_57603", "generateStructureReferences", "m_319021_"), "(Ldwe;Ldwc;Lazi;Lduy;)Ljava/util/concurrent/CompletableFuture;");
    }

    static jobject generateStructureReferences(const jobject& arg0, const jobject& arg1, const jobject& arg2, const jobject& arg3) {
       const auto clazz = self();
       const auto methodID = methodID_generateStructureReferences();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0, arg1, arg2, arg3);
    };
    
    static jmethodID methodID_populateBiomes() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("e", "generateBiomes", "method_57605", "populateBiomes", "m_323653_"), "(Ldwe;Ldwc;Lazi;Lduy;)Ljava/util/concurrent/CompletableFuture;");
    }

    static jobject populateBiomes(const jobject& arg0, const jobject& arg1, const jobject& arg2, const jobject& arg3) {
       const auto clazz = self();
       const auto methodID = methodID_populateBiomes();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0, arg1, arg2, arg3);
    };
    
    static jmethodID methodID_populateNoise() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("f", "generateNoise", "method_57607", "populateNoise", "m_324468_"), "(Ldwe;Ldwc;Lazi;Lduy;)Ljava/util/concurrent/CompletableFuture;");
    }

    static jobject populateNoise(const jobject& arg0, const jobject& arg1, const jobject& arg2, const jobject& arg3) {
       const auto clazz = self();
       const auto methodID = methodID_populateNoise();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0, arg1, arg2, arg3);
    };
    
    static jmethodID methodID_buildSurface() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("g", "generateSurface", "method_57608", "buildSurface", "m_324558_"), "(Ldwe;Ldwc;Lazi;Lduy;)Ljava/util/concurrent/CompletableFuture;");
    }

    static jobject buildSurface(const jobject& arg0, const jobject& arg1, const jobject& arg2, const jobject& arg3) {
       const auto clazz = self();
       const auto methodID = methodID_buildSurface();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0, arg1, arg2, arg3);
    };
    
    static jmethodID methodID_carve() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("h", "generateCarvers", "method_57609", "carve", "m_321114_"), "(Ldwe;Ldwc;Lazi;Lduy;)Ljava/util/concurrent/CompletableFuture;");
    }

    static jobject carve(const jobject& arg0, const jobject& arg1, const jobject& arg2, const jobject& arg3) {
       const auto clazz = self();
       const auto methodID = methodID_carve();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0, arg1, arg2, arg3);
    };
    
    static jmethodID methodID_generateFeatures() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("i", "generateFeatures", "method_57610", "generateFeatures", "m_324159_"), "(Ldwe;Ldwc;Lazi;Lduy;)Ljava/util/concurrent/CompletableFuture;");
    }

    static jobject generateFeatures(const jobject& arg0, const jobject& arg1, const jobject& arg2, const jobject& arg3) {
       const auto clazz = self();
       const auto methodID = methodID_generateFeatures();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0, arg1, arg2, arg3);
    };
    
    static jmethodID methodID_initializeLight() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("j", "initializeLight", "method_57594", "initializeLight", "m_322505_"), "(Ldwe;Ldwc;Lazi;Lduy;)Ljava/util/concurrent/CompletableFuture;");
    }

    static jobject initializeLight(const jobject& arg0, const jobject& arg1, const jobject& arg2, const jobject& arg3) {
       const auto clazz = self();
       const auto methodID = methodID_initializeLight();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0, arg1, arg2, arg3);
    };
    
    static jmethodID methodID_light() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("k", "light", "method_60555", "light", "m_340127_"), "(Ldwe;Ldwc;Lazi;Lduy;)Ljava/util/concurrent/CompletableFuture;");
    }

    static jobject light(const jobject& arg0, const jobject& arg1, const jobject& arg2, const jobject& arg3) {
       const auto clazz = self();
       const auto methodID = methodID_light();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0, arg1, arg2, arg3);
    };
    
    static jmethodID methodID_generateEntities() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("l", "generateSpawn", "method_57613", "generateEntities", "m_324388_"), "(Ldwe;Ldwc;Lazi;Lduy;)Ljava/util/concurrent/CompletableFuture;");
    }

    static jobject generateEntities(const jobject& arg0, const jobject& arg1, const jobject& arg2, const jobject& arg3) {
       const auto clazz = self();
       const auto methodID = methodID_generateEntities();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0, arg1, arg2, arg3);
    };
    
    static jmethodID methodID_convertToFullChunk() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("m", "full", "method_60556", "convertToFullChunk", "m_339540_"), "(Ldwe;Ldwc;Lazi;Lduy;)Ljava/util/concurrent/CompletableFuture;");
    }

    static jobject convertToFullChunk(const jobject& arg0, const jobject& arg1, const jobject& arg2, const jobject& arg3) {
       const auto clazz = self();
       const auto methodID = methodID_convertToFullChunk();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0, arg1, arg2, arg3);
    };
    
    static jmethodID methodID_addEntities() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "postLoadProtoChunk", "method_60552", "addEntities", "m_338845_"), "(Laqu;Ljava/util/List;)V");
    }

    static void addEntities(const jobject& arg0, const jobject& arg1) {
       const auto clazz = self();
       const auto methodID = methodID_addEntities();
       MinecraftSDK::env->CallStaticVoidMethod(clazz, methodID, arg0, arg1);
    };
    
};

#endif // NET_MINECRAFT_WORLD_CHUNK_CHUNKGENERATING_HPP