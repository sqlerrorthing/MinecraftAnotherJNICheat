// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_WORLD_CHUNK_CHUNKSTATUSCHANGELISTENER_HPP
#define NET_MINECRAFT_WORLD_CHUNK_CHUNKSTATUSCHANGELISTENER_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.world.chunk.ChunkStatusChangeListener
 * Remapped: dxf
 */
namespace ChunkStatusChangeListener {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("dxf", "net/minecraft/world/level/entity/ChunkStatusUpdateListener", "net/minecraft/class_5567", "net/minecraft/world/chunk/ChunkStatusChangeListener", "net/minecraft/src/C_141278_"));
        }
        return cachedClass;
    };

    static jmethodID methodID_onChunkStatusChange() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("onChunkStatusChange", "onChunkStatusChange", "onChunkStatusChange", "onChunkStatusChange", "m_156794_"), "(Ldcd;Laql;)V");
    }

    static void onChunkStatusChange(const jobject& obj, const jobject& arg0, const jobject& arg1) {
                
       const auto methodID = methodID_onChunkStatusChange();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1);
    };
    
};

#endif // NET_MINECRAFT_WORLD_CHUNK_CHUNKSTATUSCHANGELISTENER_HPP