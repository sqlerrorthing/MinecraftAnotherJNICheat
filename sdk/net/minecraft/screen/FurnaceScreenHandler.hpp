// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_SCREEN_FURNACESCREENHANDLER_HPP
#define NET_MINECRAFT_SCREEN_FURNACESCREENHANDLER_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.screen.FurnaceScreenHandler
 * Remapped: cqr
 */
namespace FurnaceScreenHandler {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("cqr", "net/minecraft/world/inventory/FurnaceMenu", "net/minecraft/class_3858", "net/minecraft/screen/FurnaceScreenHandler", "net/minecraft/src/C_1263_"));
        }
        return cachedClass;
    };

};

#endif // NET_MINECRAFT_SCREEN_FURNACESCREENHANDLER_HPP