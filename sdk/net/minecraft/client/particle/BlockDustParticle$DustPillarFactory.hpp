// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_CLIENT_PARTICLE_BLOCKDUSTPARTICLE$DUSTPILLARFACTORY_HPP
#define NET_MINECRAFT_CLIENT_PARTICLE_BLOCKDUSTPARTICLE$DUSTPILLARFACTORY_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.client.particle.BlockDustParticle$DustPillarFactory
 * Remapped: gdm$a
 */
namespace BlockDustParticle$DustPillarFactory {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("gdm$a", "net/minecraft/client/particle/TerrainParticle$DustPillarProvider", "net/minecraft/class_727$class_9482", "net/minecraft/client/particle/BlockDustParticle$DustPillarFactory", "net/minecraft/src/C_4085_$C_313417_"));
        }
        return cachedClass;
    };

    static jmethodID methodID_createParticle() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "createParticle", "method_58751", "createParticle", "m_6966_"), "(Lle;Lfzf;DDDDDD)Lgcn;");
    }

    static jobject createParticle(const jobject& obj, const jobject& arg0, const jobject& arg1, const jdouble& arg2, const jdouble& arg3, const jdouble& arg4, const jdouble& arg5, const jdouble& arg6, const jdouble& arg7) {
                
       const auto methodID = methodID_createParticle();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7);
    };
    
};

#endif // NET_MINECRAFT_CLIENT_PARTICLE_BLOCKDUSTPARTICLE$DUSTPILLARFACTORY_HPP