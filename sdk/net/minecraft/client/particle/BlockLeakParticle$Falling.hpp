// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_CLIENT_PARTICLE_BLOCKLEAKPARTICLE$FALLING_HPP
#define NET_MINECRAFT_CLIENT_PARTICLE_BLOCKLEAKPARTICLE$FALLING_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.client.particle.BlockLeakParticle$Falling
 * Remapped: gbp$f
 */
namespace BlockLeakParticle$Falling {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("gbp$f", "net/minecraft/client/particle/DripParticle$FallingParticle", "net/minecraft/class_663$class_4497", "net/minecraft/client/particle/BlockLeakParticle$Falling", "net/minecraft/src/C_3953_$C_3959_"));
        }
        return cachedClass;
    };

    static jmethodID methodID_updateVelocity() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("i", "postMoveUpdate", "method_18822", "updateVelocity", "m_5949_"), "()V");
    }

    static void updateVelocity(const jobject& obj) {
                
       const auto methodID = methodID_updateVelocity();
       MinecraftSDK::env->CallVoidMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_CLIENT_PARTICLE_BLOCKLEAKPARTICLE$FALLING_HPP