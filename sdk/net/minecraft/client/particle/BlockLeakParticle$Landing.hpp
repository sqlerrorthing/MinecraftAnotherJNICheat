// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_CLIENT_PARTICLE_BLOCKLEAKPARTICLE$LANDING_HPP
#define NET_MINECRAFT_CLIENT_PARTICLE_BLOCKLEAKPARTICLE$LANDING_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.client.particle.BlockLeakParticle$Landing
 * Remapped: gbp$c
 */
namespace BlockLeakParticle$Landing {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("gbp$c", "net/minecraft/client/particle/DripParticle$DripLandParticle", "net/minecraft/class_663$class_4085", "net/minecraft/client/particle/BlockLeakParticle$Landing", "net/minecraft/src/C_3953_$C_3957_"));
        }
        return cachedClass;
    };

};

#endif // NET_MINECRAFT_CLIENT_PARTICLE_BLOCKLEAKPARTICLE$LANDING_HPP