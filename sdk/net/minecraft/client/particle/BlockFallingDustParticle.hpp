// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_CLIENT_PARTICLE_BLOCKFALLINGDUSTPARTICLE_HPP
#define NET_MINECRAFT_CLIENT_PARTICLE_BLOCKFALLINGDUSTPARTICLE_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.client.particle.BlockFallingDustParticle
 * Remapped: gbw
 */
namespace BlockFallingDustParticle {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("gbw", "net/minecraft/client/particle/FallingDustParticle", "net/minecraft/class_682", "net/minecraft/client/particle/BlockFallingDustParticle", "net/minecraft/src/C_3985_"));
        }
        return cachedClass;
    };

    // getter for private field net.minecraft.client.particle.BlockFallingDustParticle#rotationSpeed
    static jfloat get_field_rotationSpeed(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "rotSpeed", "field_3809", "rotationSpeed", "f_106607_"), "F");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetFloatField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.particle.BlockFallingDustParticle#rotationSpeed
    static void set_field_rotationSpeed(const jobject &obj, const jfloat &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "rotSpeed", "field_3809", "rotationSpeed", "f_106607_"), "F");
        return MinecraftSDK::env->SetFloatField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.particle.BlockFallingDustParticle#spriteProvider
    static jobject get_field_spriteProvider(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "sprites", "field_17808", "spriteProvider", "f_106608_"), "Lgdi;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.particle.BlockFallingDustParticle#spriteProvider
    static void set_field_spriteProvider(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "sprites", "field_17808", "spriteProvider", "f_106608_"), "Lgdi;");
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
    
    static jmethodID methodID_getSize() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "getQuadSize", "method_18132", "getSize", "m_5902_"), "(F)F");
    }

    static jfloat getSize(const jobject& obj, const jfloat& arg0) {
                
       const auto methodID = methodID_getSize();
       return MinecraftSDK::env->CallFloatMethod(obj, methodID, arg0);
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

#endif // NET_MINECRAFT_CLIENT_PARTICLE_BLOCKFALLINGDUSTPARTICLE_HPP