// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_UTIL_ANNOTATION_DEOBFUSCATECLASS_HPP
#define NET_MINECRAFT_UTIL_ANNOTATION_DEOBFUSCATECLASS_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.util.annotation.DeobfuscateClass
 * Remapped: ezb
 */
namespace DeobfuscateClass {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("ezb", "com/mojang/blaze3d/DontObfuscate", "net/minecraft/class_6177", "net/minecraft/util/annotation/DeobfuscateClass", "net/minecraft/src/C_141524_"));
        }
        return cachedClass;
    };

};

#endif // NET_MINECRAFT_UTIL_ANNOTATION_DEOBFUSCATECLASS_HPP