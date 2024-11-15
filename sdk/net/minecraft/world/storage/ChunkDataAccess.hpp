// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_WORLD_STORAGE_CHUNKDATAACCESS_HPP
#define NET_MINECRAFT_WORLD_STORAGE_CHUNKDATAACCESS_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.world.storage.ChunkDataAccess
 * Remapped: dxj
 */
namespace ChunkDataAccess {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("dxj", "net/minecraft/world/level/entity/EntityPersistentStorage", "net/minecraft/class_5571", "net/minecraft/world/storage/ChunkDataAccess", "net/minecraft/src/C_141283_"));
        }
        return cachedClass;
    };

    static jmethodID methodID_readChunkData() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "loadEntities", "method_31759", "readChunkData", "m_141930_"), "(Ldcd;)Ljava/util/concurrent/CompletableFuture;");
    }

    static jobject readChunkData(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_readChunkData();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_writeChunkData() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "storeEntities", "method_31760", "writeChunkData", "m_141971_"), "(Ldxe;)V");
    }

    static void writeChunkData(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_writeChunkData();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_awaitAll() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "flush", "method_31758", "awaitAll", "m_182219_"), "(Z)V");
    }

    static void awaitAll(const jobject& obj, const jboolean& arg0) {
                
       const auto methodID = methodID_awaitAll();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_close() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("close", "close", "", "", "close"), "()V");
    }

    static void close(const jobject& obj) {
                
       const auto methodID = methodID_close();
       MinecraftSDK::env->CallVoidMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_WORLD_STORAGE_CHUNKDATAACCESS_HPP