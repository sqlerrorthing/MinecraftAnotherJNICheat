// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_CLIENT_PARTICLE_CRACKPARTICLE_HPP
#define NET_MINECRAFT_CLIENT_PARTICLE_CRACKPARTICLE_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.client.particle.CrackParticle
 * Remapped: gbh
 */
namespace CrackParticle {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("gbh", "net/minecraft/client/particle/BreakingItemParticle", "net/minecraft/class_647", "net/minecraft/client/particle/CrackParticle", "net/minecraft/src/C_3927_"));
        }
        return cachedClass;
    };

    // getter for private field net.minecraft.client.particle.CrackParticle#sampleU
    static jfloat get_field_sampleU(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "uo", "field_17783", "sampleU", "f_105643_"), "F");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetFloatField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.particle.CrackParticle#sampleU
    static void set_field_sampleU(const jobject &obj, const jfloat &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "uo", "field_17783", "sampleU", "f_105643_"), "F");
        return MinecraftSDK::env->SetFloatField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.particle.CrackParticle#sampleV
    static jfloat get_field_sampleV(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "vo", "field_17784", "sampleV", "f_105644_"), "F");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetFloatField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.particle.CrackParticle#sampleV
    static void set_field_sampleV(const jobject &obj, const jfloat &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "vo", "field_17784", "sampleV", "f_105644_"), "F");
        return MinecraftSDK::env->SetFloatField(obj, fieldID, value);
    };

    static jmethodID methodID_getType() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "getRenderType", "method_18122", "getType", "m_7556_"), "()Lgcr;");
    }

    static jobject getType(const jobject& obj) {
                
       const auto methodID = methodID_getType();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_getMinU() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "getU0", "method_18133", "getMinU", "m_5970_"), "()F");
    }

    static jfloat getMinU(const jobject& obj) {
                
       const auto methodID = methodID_getMinU();
       return MinecraftSDK::env->CallFloatMethod(obj, methodID);
    };
    
    static jmethodID methodID_getMaxU() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("d", "getU1", "method_18134", "getMaxU", "m_5952_"), "()F");
    }

    static jfloat getMaxU(const jobject& obj) {
                
       const auto methodID = methodID_getMaxU();
       return MinecraftSDK::env->CallFloatMethod(obj, methodID);
    };
    
    static jmethodID methodID_getMinV() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("e", "getV0", "method_18135", "getMinV", "m_5951_"), "()F");
    }

    static jfloat getMinV(const jobject& obj) {
                
       const auto methodID = methodID_getMinV();
       return MinecraftSDK::env->CallFloatMethod(obj, methodID);
    };
    
    static jmethodID methodID_getMaxV() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("f", "getV1", "method_18136", "getMaxV", "m_5950_"), "()F");
    }

    static jfloat getMaxV(const jobject& obj) {
                
       const auto methodID = methodID_getMaxV();
       return MinecraftSDK::env->CallFloatMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_CLIENT_PARTICLE_CRACKPARTICLE_HPP