// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_CLIENT_PARTICLE_EXPLOSIONSMOKEPARTICLE_HPP
#define NET_MINECRAFT_CLIENT_PARTICLE_EXPLOSIONSMOKEPARTICLE_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.client.particle.ExplosionSmokeParticle
 * Remapped: gbv
 */
namespace ExplosionSmokeParticle {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("gbv", "net/minecraft/client/particle/ExplodeParticle", "net/minecraft/class_673", "net/minecraft/client/particle/ExplosionSmokeParticle", "net/minecraft/src/C_3983_"));
        }
        return cachedClass;
    };

    // getter for private field net.minecraft.client.particle.ExplosionSmokeParticle#spriteProvider
    static jobject get_field_spriteProvider(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "sprites", "field_17806", "spriteProvider", "f_106574_"), "Lgdi;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.particle.ExplosionSmokeParticle#spriteProvider
    static void set_field_spriteProvider(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "sprites", "field_17806", "spriteProvider", "f_106574_"), "Lgdi;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID_getType() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "getRenderType", "method_18122", "getType", "m_7556_"), "()Lgcr;");
    }

    static jobject getType(const jobject& obj) {
                
       const auto methodID = methodID_getType();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
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

#endif // NET_MINECRAFT_CLIENT_PARTICLE_EXPLOSIONSMOKEPARTICLE_HPP