// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_CLIENT_PARTICLE_SONICBOOMPARTICLE_HPP
#define NET_MINECRAFT_CLIENT_PARTICLE_SONICBOOMPARTICLE_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.client.particle.SonicBoomParticle
 * Remapped: gdd
 */
namespace SonicBoomParticle {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("gdd", "net/minecraft/client/particle/SonicBoomParticle", "net/minecraft/class_7452", "net/minecraft/client/particle/SonicBoomParticle", "net/minecraft/src/C_213415_"));
        }
        return cachedClass;
    };

};

#endif // NET_MINECRAFT_CLIENT_PARTICLE_SONICBOOMPARTICLE_HPP