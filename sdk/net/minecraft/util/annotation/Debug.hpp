// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_UTIL_ANNOTATION_DEBUG_HPP
#define NET_MINECRAFT_UTIL_ANNOTATION_DEBUG_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.util.annotation.Debug
 * Remapped: azt
 */
namespace Debug {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("azt", "net/minecraft/util/VisibleForDebug", "net/minecraft/class_5996", "net/minecraft/util/annotation/Debug", "net/minecraft/src/C_140994_"));
        }
        return cachedClass;
    };

};

#endif // NET_MINECRAFT_UTIL_ANNOTATION_DEBUG_HPP