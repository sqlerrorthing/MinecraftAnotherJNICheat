// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_WORLD_SPAWNHELPER$CHUNKSOURCE_HPP
#define NET_MINECRAFT_WORLD_SPAWNHELPER$CHUNKSOURCE_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.world.SpawnHelper$ChunkSource
 * Remapped: ddh$b
 */
namespace SpawnHelper$ChunkSource {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("ddh$b", "net/minecraft/world/level/NaturalSpawner$ChunkGetter", "net/minecraft/class_1948$class_5260", "net/minecraft/world/SpawnHelper$ChunkSource", "net/minecraft/src/C_1608_$C_1611_"));
        }
        return cachedClass;
    };

    static jmethodID methodID_query() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("query", "query", "query", "query", "m_47103_"), "(JLjava/util/function/Consumer;)V");
    }

    static void query(const jobject& obj, const jlong& arg0, const jobject& arg1) {
                
       const auto methodID = methodID_query();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1);
    };
    
};

#endif // NET_MINECRAFT_WORLD_SPAWNHELPER$CHUNKSOURCE_HPP