// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_STRUCTURE_OCEANMONUMENTGENERATOR_HPP
#define NET_MINECRAFT_STRUCTURE_OCEANMONUMENTGENERATOR_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.structure.OceanMonumentGenerator
 * Remapped: emb
 */
namespace OceanMonumentGenerator {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("emb", "net/minecraft/world/level/levelgen/structure/structures/OceanMonumentPieces", "net/minecraft/class_3366", "net/minecraft/structure/OceanMonumentGenerator", "net/minecraft/src/C_213230_"));
        }
        return cachedClass;
    };

};

#endif // NET_MINECRAFT_STRUCTURE_OCEANMONUMENTGENERATOR_HPP