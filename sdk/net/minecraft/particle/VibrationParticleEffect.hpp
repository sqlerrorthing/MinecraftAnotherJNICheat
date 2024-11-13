// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_PARTICLE_VIBRATIONPARTICLEEFFECT_HPP
#define NET_MINECRAFT_PARTICLE_VIBRATIONPARTICLEEFFECT_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.particle.VibrationParticleEffect
 * Remapped: lr
 */
namespace VibrationParticleEffect {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("lr", "net/minecraft/core/particles/VibrationParticleOption", "net/minecraft/class_5745", "net/minecraft/particle/VibrationParticleEffect", "net/minecraft/src/C_141792_"));
        }
        return cachedClass;
    };

    // getter for static private field net.minecraft.particle.VibrationParticleEffect#POSITION_SOURCE_CODEC
    [[maybe_unused]] static jobject get_field_POSITION_SOURCE_CODEC() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "SAFE_POSITION_SOURCE_CODEC", "field_51465", "POSITION_SOURCE_CODEC", "f_315170_"), "Lcom/mojang/serialization/Codec;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.particle.VibrationParticleEffect#POSITION_SOURCE_CODEC
    [[maybe_unused]] static void set_field_POSITION_SOURCE_CODEC(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "SAFE_POSITION_SOURCE_CODEC", "field_51465", "POSITION_SOURCE_CODEC", "f_315170_"), "Lcom/mojang/serialization/Codec;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.particle.VibrationParticleEffect#CODEC
    [[maybe_unused]] static jobject get_field_CODEC() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "CODEC", "field_28277", "CODEC", "f_175842_"), "Lcom/mojang/serialization/MapCodec;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.particle.VibrationParticleEffect#CODEC
    [[maybe_unused]] static void set_field_CODEC(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "CODEC", "field_28277", "CODEC", "f_175842_"), "Lcom/mojang/serialization/MapCodec;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.particle.VibrationParticleEffect#PACKET_CODEC
    [[maybe_unused]] static jobject get_field_PACKET_CODEC() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "STREAM_CODEC", "field_48461", "PACKET_CODEC", "f_315797_"), "Lyx;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.particle.VibrationParticleEffect#PACKET_CODEC
    [[maybe_unused]] static void set_field_PACKET_CODEC(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "STREAM_CODEC", "field_48461", "PACKET_CODEC", "f_315797_"), "Lyx;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for private field net.minecraft.particle.VibrationParticleEffect#destination
    static jobject get_field_destination(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "destination", "field_38361", "destination", "f_235972_"), "Ldyd;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.particle.VibrationParticleEffect#destination
    static void set_field_destination(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "destination", "field_38361", "destination", "f_235972_"), "Ldyd;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.particle.VibrationParticleEffect#arrivalInTicks
    static jint get_field_arrivalInTicks(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "arrivalInTicks", "field_38362", "arrivalInTicks", "f_235973_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetIntField(obj, fieldID);
    };

    // setter for static private field net.minecraft.particle.VibrationParticleEffect#arrivalInTicks
    static void set_field_arrivalInTicks(const jobject &obj, const jint &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "arrivalInTicks", "field_38362", "arrivalInTicks", "f_235973_"), "I");
        return MinecraftSDK::env->SetIntField(obj, fieldID, value);
    };

    static jmethodID methodID_getType() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getType", "method_10295", "getType", "m_6012_"), "()Lll;");
    }

    static jobject getType(const jobject& obj) {
                
       const auto methodID = methodID_getType();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_getVibration() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "getDestination", "method_33125", "getVibration", "m_235983_"), "()Ldyd;");
    }

    static jobject getVibration(const jobject& obj) {
                
       const auto methodID = methodID_getVibration();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_getArrivalInTicks() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "getArrivalInTicks", "method_42624", "getArrivalInTicks", "m_235984_"), "()I");
    }

    static jint getArrivalInTicks(const jobject& obj) {
                
       const auto methodID = methodID_getArrivalInTicks();
       return MinecraftSDK::env->CallIntMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_PARTICLE_VIBRATIONPARTICLEEFFECT_HPP