// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_CLIENT_PARTICLE_FLAMEPARTICLE_HPP
#define NET_MINECRAFT_CLIENT_PARTICLE_FLAMEPARTICLE_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.client.particle.FlameParticle
 * Remapped: gby
 */
namespace FlameParticle {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("gby", "net/minecraft/client/particle/FlameParticle", "net/minecraft/class_687", "net/minecraft/client/particle/FlameParticle", "net/minecraft/src/C_3995_"));
        }
        return cachedClass;
    };

    static jmethodID methodID_getType() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "getRenderType", "method_18122", "getType", "m_7556_"), "()Lgcr;");
    }

    static jobject getType(const jobject& obj) {
                
       const auto methodID = methodID_getType();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_move() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "move", "method_3069", "move", "m_6257_"), "(DDD)V");
    }

    static void move(const jobject& obj, const jdouble& arg0, const jdouble& arg1, const jdouble& arg2) {
                
       const auto methodID = methodID_move();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1, arg2);
    };
    
    static jmethodID methodID_getSize() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "getQuadSize", "method_18132", "getSize", "m_5902_"), "(F)F");
    }

    static jfloat getSize(const jobject& obj, const jfloat& arg0) {
                
       const auto methodID = methodID_getSize();
       return MinecraftSDK::env->CallFloatMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_getBrightness() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getLightColor", "method_3068", "getBrightness", "m_6355_"), "(F)I");
    }

    static jint getBrightness(const jobject& obj, const jfloat& arg0) {
                
       const auto methodID = methodID_getBrightness();
       return MinecraftSDK::env->CallIntMethod(obj, methodID, arg0);
    };
    
};

#endif // NET_MINECRAFT_CLIENT_PARTICLE_FLAMEPARTICLE_HPP