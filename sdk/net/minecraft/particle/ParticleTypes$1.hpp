// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_PARTICLE_PARTICLETYPES$1_HPP
#define NET_MINECRAFT_PARTICLE_PARTICLETYPES$1_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.particle.ParticleTypes$1
 * Remapped: lm$1
 */
namespace ParticleTypes$1 {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("lm$1", "net/minecraft/core/particles/ParticleTypes$1", "net/minecraft/class_2398$1", "net/minecraft/particle/ParticleTypes$1", "net/minecraft/src/C_4759_$C_4760_"));
        }
        return cachedClass;
    };

    static jmethodID methodID_getCodec() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "codec", "method_29138", "getCodec", "m_7652_"), "()Lcom/mojang/serialization/MapCodec;");
    }

    static jobject getCodec(const jobject& obj) {
                
       const auto methodID = methodID_getCodec();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_getPacketCodec() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("d", "streamCodec", "method_56179", "getPacketCodec", "m_319843_"), "()Lyx;");
    }

    static jobject getPacketCodec(const jobject& obj) {
                
       const auto methodID = methodID_getPacketCodec();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_PARTICLE_PARTICLETYPES$1_HPP