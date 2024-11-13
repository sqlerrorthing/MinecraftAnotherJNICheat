// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_WORLD_CHUNK_LIGHT_BLOCKLIGHTSTORAGE_HPP
#define NET_MINECRAFT_WORLD_CHUNK_LIGHT_BLOCKLIGHTSTORAGE_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.world.chunk.light.BlockLightStorage
 * Remapped: eon
 */
namespace BlockLightStorage {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("eon", "net/minecraft/world/level/lighting/BlockLightSectionStorage", "net/minecraft/class_3547", "net/minecraft/world/chunk/light/BlockLightStorage", "net/minecraft/src/C_2669_"));
        }
        return cachedClass;
    };

    static jmethodID methodID_getLight() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getLightValue", "method_15538", "getLight", "m_6181_"), "(J)I");
    }

    static jint getLight(const jobject& obj, const jlong& arg0) {
                
       const auto methodID = methodID_getLight();
       return MinecraftSDK::env->CallIntMethod(obj, methodID, arg0);
    };
    
};

#endif // NET_MINECRAFT_WORLD_CHUNK_LIGHT_BLOCKLIGHTSTORAGE_HPP