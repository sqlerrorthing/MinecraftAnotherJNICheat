// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_CLIENT_PARTICLE_FIREWORKSSPARKPARTICLE_HPP
#define NET_MINECRAFT_CLIENT_PARTICLE_FIREWORKSSPARKPARTICLE_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.client.particle.FireworksSparkParticle
 * Remapped: gbx
 */
namespace FireworksSparkParticle {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("gbx", "net/minecraft/client/particle/FireworkParticles", "net/minecraft/class_677", "net/minecraft/client/particle/FireworksSparkParticle", "net/minecraft/src/C_3988_"));
        }
        return cachedClass;
    };

};

#endif // NET_MINECRAFT_CLIENT_PARTICLE_FIREWORKSSPARKPARTICLE_HPP