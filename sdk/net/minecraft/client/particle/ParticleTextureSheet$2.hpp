// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_CLIENT_PARTICLE_PARTICLETEXTURESHEET$2_HPP
#define NET_MINECRAFT_CLIENT_PARTICLE_PARTICLETEXTURESHEET$2_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.client.particle.ParticleTextureSheet$2
 * Remapped: gcr$2
 */
namespace ParticleTextureSheet$2 {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("gcr$2", "net/minecraft/client/particle/ParticleRenderType$2", "net/minecraft/class_3999$2", "net/minecraft/client/particle/ParticleTextureSheet$2", "net/minecraft/src/C_4029_$C_4031_"));
        }
        return cachedClass;
    };

    static jmethodID methodID_begin() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "begin", "method_18130", "begin", "m_6505_"), "(Lfbk;Lgqm;)Lfbd;");
    }

    static jobject begin(const jobject& obj, const jobject& arg0, const jobject& arg1) {
                
       const auto methodID = methodID_begin();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1);
    };
    
};

#endif // NET_MINECRAFT_CLIENT_PARTICLE_PARTICLETEXTURESHEET$2_HPP