// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_CLIENT_PARTICLE_FIRESMOKEPARTICLE_HPP
#define NET_MINECRAFT_CLIENT_PARTICLE_FIRESMOKEPARTICLE_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.client.particle.FireSmokeParticle
 * Remapped: gdb
 */
namespace FireSmokeParticle {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("gdb", "net/minecraft/client/particle/SmokeParticle", "net/minecraft/class_717", "net/minecraft/client/particle/FireSmokeParticle", "net/minecraft/src/C_4048_"));
        }
        return cachedClass;
    };

};

#endif // NET_MINECRAFT_CLIENT_PARTICLE_FIRESMOKEPARTICLE_HPP