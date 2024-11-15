// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_BLOCK_ENUMS_TRIALSPAWNERSTATE$PARTICLEEMITTER_HPP
#define NET_MINECRAFT_BLOCK_ENUMS_TRIALSPAWNERSTATE$PARTICLEEMITTER_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.block.enums.TrialSpawnerState$ParticleEmitter
 * Remapped: dsi$b
 */
namespace TrialSpawnerState$ParticleEmitter {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("dsi$b", "net/minecraft/world/level/block/entity/trialspawner/TrialSpawnerState$ParticleEmission", "net/minecraft/class_8967$class_8969", "net/minecraft/block/enums/TrialSpawnerState$ParticleEmitter", "net/minecraft/src/C_302094_$C_301957_"));
        }
        return cachedClass;
    };

    // getter for static public field net.minecraft.block.enums.TrialSpawnerState$ParticleEmitter#NONE
    [[maybe_unused]] static jobject get_field_NONE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "NONE", "field_47401", "NONE", "f_302687_"), "Ldsi$b;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.block.enums.TrialSpawnerState$ParticleEmitter#NONE
    [[maybe_unused]] static void set_field_NONE(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "NONE", "field_47401", "NONE", "f_302687_"), "Ldsi$b;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.block.enums.TrialSpawnerState$ParticleEmitter#WAITING
    [[maybe_unused]] static jobject get_field_WAITING() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "SMALL_FLAMES", "field_47402", "WAITING", "f_302488_"), "Ldsi$b;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.block.enums.TrialSpawnerState$ParticleEmitter#WAITING
    [[maybe_unused]] static void set_field_WAITING(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "SMALL_FLAMES", "field_47402", "WAITING", "f_302488_"), "Ldsi$b;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.block.enums.TrialSpawnerState$ParticleEmitter#ACTIVE
    [[maybe_unused]] static jobject get_field_ACTIVE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "FLAMES_AND_SMOKE", "field_47403", "ACTIVE", "f_302540_"), "Ldsi$b;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.block.enums.TrialSpawnerState$ParticleEmitter#ACTIVE
    [[maybe_unused]] static void set_field_ACTIVE(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "FLAMES_AND_SMOKE", "field_47403", "ACTIVE", "f_302540_"), "Ldsi$b;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.block.enums.TrialSpawnerState$ParticleEmitter#COOLDOWN
    [[maybe_unused]] static jobject get_field_COOLDOWN() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("d", "SMOKE_INSIDE_AND_TOP_FACE", "field_47404", "COOLDOWN", "f_303781_"), "Ldsi$b;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.block.enums.TrialSpawnerState$ParticleEmitter#COOLDOWN
    [[maybe_unused]] static void set_field_COOLDOWN(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("d", "SMOKE_INSIDE_AND_TOP_FACE", "field_47404", "COOLDOWN", "f_303781_"), "Ldsi$b;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    static jmethodID methodID_emitParticle() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "addParticle", "method_55220", "emitParticle", "m_307767_"), "(Llq;Lexc;Ldcw;)V");
    }

    static void emitParticle(const jobject& arg0, const jobject& arg1, const jobject& arg2) {
       const auto clazz = self();
       const auto methodID = methodID_emitParticle();
       MinecraftSDK::env->CallStaticVoidMethod(clazz, methodID, arg0, arg1, arg2);
    };
    
    static jmethodID methodID_emit() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("emit", "emit", "emit", "emit", "m_308004_"), "(Ldcw;Layw;Ljd;Z)V");
    }

    static void emit(const jobject& obj, const jobject& arg0, const jobject& arg1, const jobject& arg2, const jboolean& arg3) {
                
       const auto methodID = methodID_emit();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1, arg2, arg3);
    };
    
};

#endif // NET_MINECRAFT_BLOCK_ENUMS_TRIALSPAWNERSTATE$PARTICLEEMITTER_HPP