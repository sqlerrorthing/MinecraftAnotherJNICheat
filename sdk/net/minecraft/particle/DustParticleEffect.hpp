// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_PARTICLE_DUSTPARTICLEEFFECT_HPP
#define NET_MINECRAFT_PARTICLE_DUSTPARTICLEEFFECT_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.particle.DustParticleEffect
 * Remapped: lh
 */
namespace DustParticleEffect {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("lh", "net/minecraft/core/particles/DustParticleOptions", "net/minecraft/class_2390", "net/minecraft/particle/DustParticleEffect", "net/minecraft/src/C_4752_"));
        }
        return cachedClass;
    };

    // getter for static public field net.minecraft.particle.DustParticleEffect#RED
    [[maybe_unused]] static jobject get_field_RED() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "REDSTONE_PARTICLE_COLOR", "field_28272", "RED", "f_175788_"), "Lorg/joml/Vector3f;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.particle.DustParticleEffect#RED
    [[maybe_unused]] static void set_field_RED(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "REDSTONE_PARTICLE_COLOR", "field_28272", "RED", "f_175788_"), "Lorg/joml/Vector3f;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.particle.DustParticleEffect#DEFAULT
    [[maybe_unused]] static jobject get_field_DEFAULT() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "REDSTONE", "field_11188", "DEFAULT", "f_123656_"), "Llh;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.particle.DustParticleEffect#DEFAULT
    [[maybe_unused]] static void set_field_DEFAULT(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "REDSTONE", "field_11188", "DEFAULT", "f_123656_"), "Llh;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.particle.DustParticleEffect#CODEC
    [[maybe_unused]] static jobject get_field_CODEC() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "CODEC", "field_25124", "CODEC", "f_123657_"), "Lcom/mojang/serialization/MapCodec;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.particle.DustParticleEffect#CODEC
    [[maybe_unused]] static void set_field_CODEC(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "CODEC", "field_25124", "CODEC", "f_123657_"), "Lcom/mojang/serialization/MapCodec;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.particle.DustParticleEffect#PACKET_CODEC
    [[maybe_unused]] static jobject get_field_PACKET_CODEC() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("d", "STREAM_CODEC", "field_48455", "PACKET_CODEC", "f_315304_"), "Lyx;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.particle.DustParticleEffect#PACKET_CODEC
    [[maybe_unused]] static void set_field_PACKET_CODEC(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("d", "STREAM_CODEC", "field_48455", "PACKET_CODEC", "f_315304_"), "Lyx;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for private field net.minecraft.particle.DustParticleEffect#color
    static jobject get_field_color(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("h", "color", "field_51492", "color", "f_316445_"), "Lorg/joml/Vector3f;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.particle.DustParticleEffect#color
    static void set_field_color(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("h", "color", "field_51492", "color", "f_316445_"), "Lorg/joml/Vector3f;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID_getType() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getType", "method_10295", "getType", "m_6012_"), "()Lll;");
    }

    static jobject getType(const jobject& obj) {
                
       const auto methodID = methodID_getType();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_getColor() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "getColor", "method_59843", "getColor", "m_323596_"), "()Lorg/joml/Vector3f;");
    }

    static jobject getColor(const jobject& obj) {
                
       const auto methodID = methodID_getColor();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_PARTICLE_DUSTPARTICLEEFFECT_HPP