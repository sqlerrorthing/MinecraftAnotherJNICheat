// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_STRUCTURE_BURIEDTREASUREGENERATOR_HPP
#define NET_MINECRAFT_STRUCTURE_BURIEDTREASUREGENERATOR_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.structure.BuriedTreasureGenerator
 * Remapped: elk
 */
namespace BuriedTreasureGenerator {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("elk", "net/minecraft/world/level/levelgen/structure/structures/BuriedTreasurePieces", "net/minecraft/class_3789", "net/minecraft/structure/BuriedTreasureGenerator", "net/minecraft/src/C_213177_"));
        }
        return cachedClass;
    };

};

#endif // NET_MINECRAFT_STRUCTURE_BURIEDTREASUREGENERATOR_HPP