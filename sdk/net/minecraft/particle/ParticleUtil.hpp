// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_PARTICLE_PARTICLEUTIL_HPP
#define NET_MINECRAFT_PARTICLE_PARTICLEUTIL_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.particle.ParticleUtil
 * Remapped: ays
 */
namespace ParticleUtil {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("ays", "net/minecraft/util/ParticleUtils", "net/minecraft/class_5945", "net/minecraft/particle/ParticleUtil", "net/minecraft/src/C_140992_"));
        }
        return cachedClass;
    };

    static jmethodID methodID_spawnParticle() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "spawnParticlesOnBlockFaces", "method_34682", "spawnParticle", "m_216313_"), "(Ldcw;Ljd;Llk;Lbpw;)V");
    }

    static void spawnParticle(const jobject& arg0, const jobject& arg1, const jobject& arg2, const jobject& arg3) {
       const auto clazz = self();
       const auto methodID = methodID_spawnParticle();
       MinecraftSDK::env->CallStaticVoidMethod(clazz, methodID, arg0, arg1, arg2, arg3);
    };
    
    static jmethodID methodID_spawnParticles() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "spawnParticlesOnBlockFace", "method_41305", "spawnParticles", "m_216318_"), "(Ldcw;Ljd;Llk;Lbpw;Lji;Ljava/util/function/Supplier;D)V");
    }

    static void spawnParticles(const jobject& arg0, const jobject& arg1, const jobject& arg2, const jobject& arg3, const jobject& arg4, const jobject& arg5, const jdouble& arg6) {
       const auto clazz = self();
       const auto methodID = methodID_spawnParticles();
       MinecraftSDK::env->CallStaticVoidMethod(clazz, methodID, arg0, arg1, arg2, arg3, arg4, arg5, arg6);
    };
    
    static jmethodID methodID_getRandomVelocity() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "getRandomSpeedRanges", "method_41306", "getRandomVelocity", "m_216302_"), "(Layw;)Lexc;");
    }

    static jobject getRandomVelocity(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_getRandomVelocity();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID__spawnParticle() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "spawnParticlesAlongAxis", "method_34683", "spawnParticle", "m_144967_"), "(Lji$a;Ldcw;Ljd;DLlk;Lbqc;)V");
    }

    static void _spawnParticle(const jobject& arg0, const jobject& arg1, const jobject& arg2, const jdouble& arg3, const jobject& arg4, const jobject& arg5) {
       const auto clazz = self();
       const auto methodID = methodID__spawnParticle();
       MinecraftSDK::env->CallStaticVoidMethod(clazz, methodID, arg0, arg1, arg2, arg3, arg4, arg5);
    };
    
    static jmethodID methodID___spawnParticle() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "spawnParticleOnFace", "method_34681", "spawnParticle", "m_216306_"), "(Ldcw;Ljd;Lji;Llk;Lexc;D)V");
    }

    static void __spawnParticle(const jobject& arg0, const jobject& arg1, const jobject& arg2, const jobject& arg3, const jobject& arg4, const jdouble& arg5) {
       const auto clazz = self();
       const auto methodID = methodID___spawnParticle();
       MinecraftSDK::env->CallStaticVoidMethod(clazz, methodID, arg0, arg1, arg2, arg3, arg4, arg5);
    };
    
    static jmethodID methodID____spawnParticle() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "spawnParticleBelow", "method_49099", "spawnParticle", "m_272037_"), "(Ldcw;Ljd;Layw;Llk;)V");
    }

    static void ___spawnParticle(const jobject& arg0, const jobject& arg1, const jobject& arg2, const jobject& arg3) {
       const auto clazz = self();
       const auto methodID = methodID____spawnParticle();
       MinecraftSDK::env->CallStaticVoidMethod(clazz, methodID, arg0, arg1, arg2, arg3);
    };
    
    static jmethodID methodID_spawnParticlesAround() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "spawnParticleInBlock", "method_55636", "spawnParticlesAround", "m_320303_"), "(Ldcx;Ljd;ILlk;)V");
    }

    static void spawnParticlesAround(const jobject& arg0, const jobject& arg1, const jint& arg2, const jobject& arg3) {
       const auto clazz = self();
       const auto methodID = methodID_spawnParticlesAround();
       MinecraftSDK::env->CallStaticVoidMethod(clazz, methodID, arg0, arg1, arg2, arg3);
    };
    
    static jmethodID methodID__spawnParticlesAround() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "spawnParticles", "method_55635", "spawnParticlesAround", "m_324507_"), "(Ldcx;Ljd;IDDZLlk;)V");
    }

    static void _spawnParticlesAround(const jobject& arg0, const jobject& arg1, const jint& arg2, const jdouble& arg3, const jdouble& arg4, const jboolean& arg5, const jobject& arg6) {
       const auto clazz = self();
       const auto methodID = methodID__spawnParticlesAround();
       MinecraftSDK::env->CallStaticVoidMethod(clazz, methodID, arg0, arg1, arg2, arg3, arg4, arg5, arg6);
    };
    
    static jmethodID methodID_spawnSmashAttackParticles() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "spawnSmashAttackParticles", "method_58595", "spawnSmashAttackParticles", "m_324552_"), "(Ldcx;Ljd;I)V");
    }

    static void spawnSmashAttackParticles(const jobject& arg0, const jobject& arg1, const jint& arg2) {
       const auto clazz = self();
       const auto methodID = methodID_spawnSmashAttackParticles();
       MinecraftSDK::env->CallStaticVoidMethod(clazz, methodID, arg0, arg1, arg2);
    };
    
};

#endif // NET_MINECRAFT_PARTICLE_PARTICLEUTIL_HPP