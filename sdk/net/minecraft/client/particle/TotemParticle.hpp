// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_CLIENT_PARTICLE_TOTEMPARTICLE_HPP
#define NET_MINECRAFT_CLIENT_PARTICLE_TOTEMPARTICLE_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.client.particle.TotemParticle
 * Remapped: gdo
 */
namespace TotemParticle {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("gdo", "net/minecraft/client/particle/TotemParticle", "net/minecraft/class_734", "net/minecraft/client/particle/TotemParticle", "net/minecraft/src/C_4088_"));
        }
        return cachedClass;
    };

};

#endif // NET_MINECRAFT_CLIENT_PARTICLE_TOTEMPARTICLE_HPP