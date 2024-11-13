// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_CLIENT_PARTICLE_GUSTEMITTERPARTICLE_HPP
#define NET_MINECRAFT_CLIENT_PARTICLE_GUSTEMITTERPARTICLE_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.client.particle.GustEmitterParticle
 * Remapped: gcd
 */
namespace GustEmitterParticle {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("gcd", "net/minecraft/client/particle/GustSeedParticle", "net/minecraft/class_8979", "net/minecraft/client/particle/GustEmitterParticle", "net/minecraft/src/C_301961_"));
        }
        return cachedClass;
    };

    // getter for private field net.minecraft.client.particle.GustEmitterParticle#deviation
    static jdouble get_field_deviation(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "scale", "field_49126", "deviation", "f_314501_"), "D");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetDoubleField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.particle.GustEmitterParticle#deviation
    static void set_field_deviation(const jobject &obj, const jdouble &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "scale", "field_49126", "deviation", "f_314501_"), "D");
        return MinecraftSDK::env->SetDoubleField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.particle.GustEmitterParticle#interval
    static jint get_field_interval(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "tickDelayInBetween", "field_49127", "interval", "f_315875_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetIntField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.particle.GustEmitterParticle#interval
    static void set_field_interval(const jobject &obj, const jint &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "tickDelayInBetween", "field_49127", "interval", "f_315875_"), "I");
        return MinecraftSDK::env->SetIntField(obj, fieldID, value);
    };

    static jmethodID methodID_tick() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "tick", "method_3070", "tick", "m_5989_"), "()V");
    }

    static void tick(const jobject& obj) {
                
       const auto methodID = methodID_tick();
       MinecraftSDK::env->CallVoidMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_CLIENT_PARTICLE_GUSTEMITTERPARTICLE_HPP