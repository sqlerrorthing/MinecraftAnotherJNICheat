// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_ENTITY_ENTITYDATA_HPP
#define NET_MINECRAFT_ENTITY_ENTITYDATA_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.entity.EntityData
 * Remapped: buh
 */
namespace EntityData {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("buh", "net/minecraft/world/entity/SpawnGroupData", "net/minecraft/class_1315", "net/minecraft/entity/EntityData", "net/minecraft/src/C_542_"));
        }
        return cachedClass;
    };

};

#endif // NET_MINECRAFT_ENTITY_ENTITYDATA_HPP