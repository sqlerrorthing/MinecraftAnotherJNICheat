// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_PARTICLE_BLOCKSTATEPARTICLEEFFECT_HPP
#define NET_MINECRAFT_PARTICLE_BLOCKSTATEPARTICLEEFFECT_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.particle.BlockStateParticleEffect
 * Remapped: le
 */
namespace BlockStateParticleEffect {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("le", "net/minecraft/core/particles/BlockParticleOption", "net/minecraft/class_2388", "net/minecraft/particle/BlockStateParticleEffect", "net/minecraft/src/C_4750_"));
        }
        return cachedClass;
    };

    // getter for static private field net.minecraft.particle.BlockStateParticleEffect#BLOCK_STATE_CODEC
    [[maybe_unused]] static jobject get_field_BLOCK_STATE_CODEC() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "BLOCK_STATE_CODEC", "field_51463", "BLOCK_STATE_CODEC", "f_315570_"), "Lcom/mojang/serialization/Codec;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.particle.BlockStateParticleEffect#BLOCK_STATE_CODEC
    [[maybe_unused]] static void set_field_BLOCK_STATE_CODEC(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "BLOCK_STATE_CODEC", "field_51463", "BLOCK_STATE_CODEC", "f_315570_"), "Lcom/mojang/serialization/Codec;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for private field net.minecraft.particle.BlockStateParticleEffect#type
    static jobject get_field_type(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "type", "field_11183", "type", "f_123625_"), "Lll;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.particle.BlockStateParticleEffect#type
    static void set_field_type(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "type", "field_11183", "type", "f_123625_"), "Lll;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.particle.BlockStateParticleEffect#blockState
    static jobject get_field_blockState(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "state", "field_11182", "blockState", "f_123626_"), "Ldtc;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.particle.BlockStateParticleEffect#blockState
    static void set_field_blockState(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "state", "field_11182", "blockState", "f_123626_"), "Ldtc;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID_createCodec() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "codec", "method_29128", "createCodec", "m_123634_"), "(Lll;)Lcom/mojang/serialization/MapCodec;");
    }

    static jobject createCodec(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_createCodec();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_createPacketCodec() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("b", "streamCodec", "method_56170", "createPacketCodec", "m_320731_"), "(Lll;)Lyx;");
    }

    static jobject createPacketCodec(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_createPacketCodec();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_getType() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getType", "method_10295", "getType", "m_6012_"), "()Lll;");
    }

    static jobject getType(const jobject& obj) {
                
       const auto methodID = methodID_getType();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_getBlockState() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "getState", "method_10278", "getBlockState", "m_123642_"), "()Ldtc;");
    }

    static jobject getBlockState(const jobject& obj) {
                
       const auto methodID = methodID_getBlockState();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_PARTICLE_BLOCKSTATEPARTICLEEFFECT_HPP