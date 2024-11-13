// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_ENTITY_BOSS_DRAGON_PHASE_LANDINGAPPROACHPHASE_HPP
#define NET_MINECRAFT_ENTITY_BOSS_DRAGON_PHASE_LANDINGAPPROACHPHASE_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.entity.boss.dragon.phase.LandingApproachPhase
 * Remapped: cii
 */
namespace LandingApproachPhase {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("cii", "net/minecraft/world/entity/boss/enderdragon/phases/DragonLandingApproachPhase", "net/minecraft/class_1519", "net/minecraft/entity/boss/dragon/phase/LandingApproachPhase", "net/minecraft/src/C_952_"));
        }
        return cachedClass;
    };

    // getter for static private field net.minecraft.entity.boss.dragon.phase.LandingApproachPhase#PLAYERS_IN_RANGE_PREDICATE
    [[maybe_unused]] static jobject get_field_PLAYERS_IN_RANGE_PREDICATE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "NEAR_EGG_TARGETING", "field_18122", "PLAYERS_IN_RANGE_PREDICATE", "f_31253_"), "Lcef;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.entity.boss.dragon.phase.LandingApproachPhase#PLAYERS_IN_RANGE_PREDICATE
    [[maybe_unused]] static void set_field_PLAYERS_IN_RANGE_PREDICATE(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "NEAR_EGG_TARGETING", "field_18122", "PLAYERS_IN_RANGE_PREDICATE", "f_31253_"), "Lcef;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for private field net.minecraft.entity.boss.dragon.phase.LandingApproachPhase#path
    static jobject get_field_path(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "currentPath", "field_7047", "path", "f_31254_"), "Leps;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.entity.boss.dragon.phase.LandingApproachPhase#path
    static void set_field_path(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "currentPath", "field_7047", "path", "f_31254_"), "Leps;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.entity.boss.dragon.phase.LandingApproachPhase#pathTarget
    static jobject get_field_pathTarget(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "targetLocation", "field_7048", "pathTarget", "f_31255_"), "Lexc;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.entity.boss.dragon.phase.LandingApproachPhase#pathTarget
    static void set_field_pathTarget(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "targetLocation", "field_7048", "pathTarget", "f_31255_"), "Lexc;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID_getType() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("i", "getPhase", "method_6849", "getType", "m_7309_"), "()Lciq;");
    }

    static jobject getType(const jobject& obj) {
                
       const auto methodID = methodID_getType();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_beginPhase() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("d", "begin", "method_6856", "beginPhase", "m_7083_"), "()V");
    }

    static void beginPhase(const jobject& obj) {
                
       const auto methodID = methodID_beginPhase();
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
    
    static jmethodID methodID_getPathTarget() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("g", "getFlyTargetLocation", "method_6851", "getPathTarget", "m_5535_"), "()Lexc;");
    }

    static jobject getPathTarget(const jobject& obj) {
                
       const auto methodID = methodID_getPathTarget();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_updatePath() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("j", "findNewTarget", "method_6844", "updatePath", "m_31263_"), "()V");
    }

    static void updatePath(const jobject& obj) {
                
       const auto methodID = methodID_updatePath();
       MinecraftSDK::env->CallVoidMethod(obj, methodID);
    };
    
    static jmethodID methodID_followPath() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("k", "navigateToNextPathNode", "method_6845", "followPath", "m_31264_"), "()V");
    }

    static void followPath(const jobject& obj) {
                
       const auto methodID = methodID_followPath();
       MinecraftSDK::env->CallVoidMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_ENTITY_BOSS_DRAGON_PHASE_LANDINGAPPROACHPHASE_HPP