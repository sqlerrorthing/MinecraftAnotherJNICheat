// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_CLIENT_PARTICLE_WATERSUSPENDPARTICLE$SPOREBLOSSOMAIRFACTORY$1_HPP
#define NET_MINECRAFT_CLIENT_PARTICLE_WATERSUSPENDPARTICLE$SPOREBLOSSOMAIRFACTORY$1_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.client.particle.WaterSuspendParticle$SporeBlossomAirFactory$1
 * Remapped: gdk$b$1
 */
namespace WaterSuspendParticle$SporeBlossomAirFactory$1 {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("gdk$b$1", "net/minecraft/client/particle/SuspendedParticle$SporeBlossomAirProvider$1", "net/minecraft/class_723$class_5877$1", "net/minecraft/client/particle/WaterSuspendParticle$SporeBlossomAirFactory$1", "net/minecraft/src/C_4070_$C_141706_$C_141707_"));
        }
        return cachedClass;
    };

    static jmethodID methodID_getGroup() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("o", "getParticleGroup", "method_34019", "getGroup", "m_142654_"), "()Ljava/util/Optional;");
    }

    static jobject getGroup(const jobject& obj) {
                
       const auto methodID = methodID_getGroup();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_CLIENT_PARTICLE_WATERSUSPENDPARTICLE$SPOREBLOSSOMAIRFACTORY$1_HPP