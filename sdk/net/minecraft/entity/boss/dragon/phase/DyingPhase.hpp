// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_ENTITY_BOSS_DRAGON_PHASE_DYINGPHASE_HPP
#define NET_MINECRAFT_ENTITY_BOSS_DRAGON_PHASE_DYINGPHASE_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.entity.boss.dragon.phase.DyingPhase
 * Remapped: cif
 */
namespace DyingPhase {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("cif", "net/minecraft/world/entity/boss/enderdragon/phases/DragonDeathPhase", "net/minecraft/class_1515", "net/minecraft/entity/boss/dragon/phase/DyingPhase", "net/minecraft/src/C_949_"));
        }
        return cachedClass;
    };

    // getter for private field net.minecraft.entity.boss.dragon.phase.DyingPhase#target
    static jobject get_field_target(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "targetLocation", "field_7041", "target", "f_31214_"), "Lexc;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.entity.boss.dragon.phase.DyingPhase#target
    static void set_field_target(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "targetLocation", "field_7041", "target", "f_31214_"), "Lexc;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.entity.boss.dragon.phase.DyingPhase#ticks
    static jint get_field_ticks(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "time", "field_7040", "ticks", "f_31215_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetIntField(obj, fieldID);
    };

    // setter for static private field net.minecraft.entity.boss.dragon.phase.DyingPhase#ticks
    static void set_field_ticks(const jobject &obj, const jint &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "time", "field_7040", "ticks", "f_31215_"), "I");
        return MinecraftSDK::env->SetIntField(obj, fieldID, value);
    };

    static jmethodID methodID_clientTick() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "doClientTick", "method_6853", "clientTick", "m_6991_"), "()V");
    }

    static void clientTick(const jobject& obj) {
                
       const auto methodID = methodID_clientTick();
       MinecraftSDK::env->CallVoidMethod(obj, methodID);
    };
    
    static jmethodID methodID_serverTick() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "doServerTick", "method_6855", "serverTick", "m_6989_"), "()V");
    }

    static void serverTick(const jobject& obj) {
                
       const auto methodID = methodID_serverTick();
       MinecraftSDK::env->CallVoidMethod(obj, methodID);
    };
    
    static jmethodID methodID_beginPhase() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("d", "begin", "method_6856", "beginPhase", "m_7083_"), "()V");
    }

    static void beginPhase(const jobject& obj) {
                
       const auto methodID = methodID_beginPhase();
       MinecraftSDK::env->CallVoidMethod(obj, methodID);
    };
    
    static jmethodID methodID_getMaxYAcceleration() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("f", "getFlySpeed", "method_6846", "getMaxYAcceleration", "m_7072_"), "()F");
    }

    static jfloat getMaxYAcceleration(const jobject& obj) {
                
       const auto methodID = methodID_getMaxYAcceleration();
       return MinecraftSDK::env->CallFloatMethod(obj, methodID);
    };
    
    static jmethodID methodID_getPathTarget() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("g", "getFlyTargetLocation", "method_6851", "getPathTarget", "m_5535_"), "()Lexc;");
    }

    static jobject getPathTarget(const jobject& obj) {
                
       const auto methodID = methodID_getPathTarget();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_getType() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("i", "getPhase", "method_6849", "getType", "m_7309_"), "()Lciq;");
    }

    static jobject getType(const jobject& obj) {
                
       const auto methodID = methodID_getType();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_ENTITY_BOSS_DRAGON_PHASE_DYINGPHASE_HPP