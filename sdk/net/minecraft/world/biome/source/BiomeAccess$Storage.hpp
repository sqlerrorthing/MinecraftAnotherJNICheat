// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_WORLD_BIOME_SOURCE_BIOMEACCESS$STORAGE_HPP
#define NET_MINECRAFT_WORLD_BIOME_SOURCE_BIOMEACCESS$STORAGE_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.world.biome.source.BiomeAccess$Storage
 * Remapped: ddy$a
 */
namespace BiomeAccess$Storage {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("ddy$a", "net/minecraft/world/level/biome/BiomeManager$NoiseBiomeSource", "net/minecraft/class_4543$class_4544", "net/minecraft/world/biome/source/BiomeAccess$Storage", "net/minecraft/src/C_1642_$C_1643_"));
        }
        return cachedClass;
    };

    static jmethodID methodID_getBiomeForNoiseGen() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("getNoiseBiome", "getNoiseBiome", "method_16359", "getBiomeForNoiseGen", "m_203495_"), "(III)Ljm;");
    }

    static jobject getBiomeForNoiseGen(const jobject& obj, const jint& arg0, const jint& arg1, const jint& arg2) {
                
       const auto methodID = methodID_getBiomeForNoiseGen();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1, arg2);
    };
    
};

#endif // NET_MINECRAFT_WORLD_BIOME_SOURCE_BIOMEACCESS$STORAGE_HPP