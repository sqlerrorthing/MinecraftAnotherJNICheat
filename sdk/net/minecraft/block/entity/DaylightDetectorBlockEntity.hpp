// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_BLOCK_ENTITY_DAYLIGHTDETECTORBLOCKENTITY_HPP
#define NET_MINECRAFT_BLOCK_ENTITY_DAYLIGHTDETECTORBLOCKENTITY_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.block.entity.DaylightDetectorBlockEntity
 * Remapped: dqw
 */
namespace DaylightDetectorBlockEntity {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("dqw", "net/minecraft/world/level/block/entity/DaylightDetectorBlockEntity", "net/minecraft/class_2603", "net/minecraft/block/entity/DaylightDetectorBlockEntity", "net/minecraft/src/C_2003_"));
        }
        return cachedClass;
    };

};

#endif // NET_MINECRAFT_BLOCK_ENTITY_DAYLIGHTDETECTORBLOCKENTITY_HPP