// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_WORLD_GEN_GENERATIONSTEP_HPP
#define NET_MINECRAFT_WORLD_GEN_GENERATIONSTEP_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.world.gen.GenerationStep
 * Remapped: dyu
 */
namespace GenerationStep {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("dyu", "net/minecraft/world/level/levelgen/GenerationStep", "net/minecraft/class_2893", "net/minecraft/world/gen/GenerationStep", "net/minecraft/src/C_2187_"));
        }
        return cachedClass;
    };

};

#endif // NET_MINECRAFT_WORLD_GEN_GENERATIONSTEP_HPP