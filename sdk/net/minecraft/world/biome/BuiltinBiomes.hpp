// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_WORLD_BIOME_BUILTINBIOMES_HPP
#define NET_MINECRAFT_WORLD_BIOME_BUILTINBIOMES_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.world.biome.BuiltinBiomes
 * Remapped: rj
 */
namespace BuiltinBiomes {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("rj", "net/minecraft/data/worldgen/biome/BiomeData", "net/minecraft/class_5504", "net/minecraft/world/biome/BuiltinBiomes", "net/minecraft/src/C_271041_"));
        }
        return cachedClass;
    };

    static jmethodID methodID_bootstrap() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "bootstrap", "method_40363", "bootstrap", "m_272174_"), "(Lqq;)V");
    }

    static void bootstrap(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_bootstrap();
       MinecraftSDK::env->CallStaticVoidMethod(clazz, methodID, arg0);
    };
    
};

#endif // NET_MINECRAFT_WORLD_BIOME_BUILTINBIOMES_HPP