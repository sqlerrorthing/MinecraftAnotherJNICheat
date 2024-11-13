// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_ENTITY_BOSS_DRAGON_PHASE_TAKEOFFPHASE_HPP
#define NET_MINECRAFT_ENTITY_BOSS_DRAGON_PHASE_TAKEOFFPHASE_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.entity.boss.dragon.phase.TakeoffPhase
 * Remapped: cip
 */
namespace TakeoffPhase {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("cip", "net/minecraft/world/entity/boss/enderdragon/phases/DragonTakeoffPhase", "net/minecraft/class_1524", "net/minecraft/entity/boss/dragon/phase/TakeoffPhase", "net/minecraft/src/C_961_"));
        }
        return cachedClass;
    };

    // getter for private field net.minecraft.entity.boss.dragon.phase.TakeoffPhase#shouldFindNewPath
    static jboolean get_field_shouldFindNewPath(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "firstTick", "field_7056", "shouldFindNewPath", "f_31366_"), "Z");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetBooleanField(obj, fieldID);
    };

    // setter for static private field net.minecraft.entity.boss.dragon.phase.TakeoffPhase#shouldFindNewPath
    static void set_field_shouldFindNewPath(const jobject &obj, const jboolean &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "firstTick", "field_7056", "shouldFindNewPath", "f_31366_"), "Z");
        return MinecraftSDK::env->SetBooleanField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.entity.boss.dragon.phase.TakeoffPhase#path
    static jobject get_field_path(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "currentPath", "field_7054", "path", "f_31367_"), "Leps;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.entity.boss.dragon.phase.TakeoffPhase#path
    static void set_field_path(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "currentPath", "field_7054", "path", "f_31367_"), "Leps;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.entity.boss.dragon.phase.TakeoffPhase#pathTarget
    static jobject get_field_pathTarget(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "targetLocation", "field_7055", "pathTarget", "f_31368_"), "Lexc;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.entity.boss.dragon.phase.TakeoffPhase#pathTarget
    static void set_field_pathTarget(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "targetLocation", "field_7055", "pathTarget", "f_31368_"), "Lexc;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
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
    
    static jmethodID methodID_updatePath() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("j", "findNewTarget", "method_6858", "updatePath", "m_31375_"), "()V");
    }

    static void updatePath(const jobject& obj) {
                
       const auto methodID = methodID_updatePath();
       MinecraftSDK::env->CallVoidMethod(obj, methodID);
    };
    
    static jmethodID methodID_followPath() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("k", "navigateToNextPathNode", "method_6859", "followPath", "m_31376_"), "()V");
    }

    static void followPath(const jobject& obj) {
                
       const auto methodID = methodID_followPath();
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
    
    static jmethodID methodID_getType() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("i", "getPhase", "method_6849", "getType", "m_7309_"), "()Lciq;");
    }

    static jobject getType(const jobject& obj) {
                
       const auto methodID = methodID_getType();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_ENTITY_BOSS_DRAGON_PHASE_TAKEOFFPHASE_HPP