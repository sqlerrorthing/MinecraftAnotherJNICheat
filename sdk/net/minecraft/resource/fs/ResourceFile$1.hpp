// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_RESOURCE_FS_RESOURCEFILE$1_HPP
#define NET_MINECRAFT_RESOURCE_FS_RESOURCEFILE$1_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.resource.fs.ResourceFile$1
 * Remapped: atb$1
 */
namespace ResourceFile$1 {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("atb$1", "net/minecraft/server/packs/linkfs/PathContents$1", "net/minecraft/class_7673$1", "net/minecraft/resource/fs/ResourceFile$1", "net/minecraft/src/C_243562_$C_243440_"));
        }
        return cachedClass;
    };

};

#endif // NET_MINECRAFT_RESOURCE_FS_RESOURCEFILE$1_HPP