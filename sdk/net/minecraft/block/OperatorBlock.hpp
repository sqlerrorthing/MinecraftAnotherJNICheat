// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_BLOCK_OPERATORBLOCK_HPP
#define NET_MINECRAFT_BLOCK_OPERATORBLOCK_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.block.OperatorBlock
 * Remapped: djg
 */
namespace OperatorBlock {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("djg", "net/minecraft/world/level/block/GameMasterBlock", "net/minecraft/class_5552", "net/minecraft/block/OperatorBlock", "net/minecraft/src/C_141206_"));
        }
        return cachedClass;
    };

};

#endif // NET_MINECRAFT_BLOCK_OPERATORBLOCK_HPP