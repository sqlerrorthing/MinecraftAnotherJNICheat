// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_CLIENT_SOUND_SOUNDMANAGER$1_HPP
#define NET_MINECRAFT_CLIENT_SOUND_SOUNDMANAGER$1_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.client.sound.SoundManager$1
 * Remapped: gvf$1
 */
namespace SoundManager$1 {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("gvf$1", "net/minecraft/client/sounds/SoundManager$1", "net/minecraft/class_1144$1", "net/minecraft/client/sound/SoundManager$1", "net/minecraft/src/C_4603_$C_4604_"));
        }
        return cachedClass;
    };

};

#endif // NET_MINECRAFT_CLIENT_SOUND_SOUNDMANAGER$1_HPP