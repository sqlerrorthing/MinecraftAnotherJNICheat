// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_ENTITY_BOSS_DRAGON_PHASE_CHARGINGPLAYERPHASE_HPP
#define NET_MINECRAFT_ENTITY_BOSS_DRAGON_PHASE_CHARGINGPLAYERPHASE_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.entity.boss.dragon.phase.ChargingPlayerPhase
 * Remapped: cie
 */
namespace ChargingPlayerPhase {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("cie", "net/minecraft/world/entity/boss/enderdragon/phases/DragonChargePlayerPhase", "net/minecraft/class_1513", "net/minecraft/entity/boss/dragon/phase/ChargingPlayerPhase", "net/minecraft/src/C_948_"));
        }
        return cachedClass;
    };

    // getter for static private field net.minecraft.entity.boss.dragon.phase.ChargingPlayerPhase#LOGGER
    [[maybe_unused]] static jobject get_field_LOGGER() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "LOGGER", "field_7039", "LOGGER", "f_31201_"), "Lorg/slf4j/Logger;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.entity.boss.dragon.phase.ChargingPlayerPhase#LOGGER
    [[maybe_unused]] static void set_field_LOGGER(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "LOGGER", "field_7039", "LOGGER", "f_31201_"), "Lorg/slf4j/Logger;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.entity.boss.dragon.phase.ChargingPlayerPhase#DURATION
    [[maybe_unused]] static jint get_field_DURATION() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "CHARGE_RECOVERY_TIME", "field_30431", "DURATION", "f_149577_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.entity.boss.dragon.phase.ChargingPlayerPhase#DURATION
    [[maybe_unused]] static void set_field_DURATION(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "CHARGE_RECOVERY_TIME", "field_30431", "DURATION", "f_149577_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for private field net.minecraft.entity.boss.dragon.phase.ChargingPlayerPhase#pathTarget
    static jobject get_field_pathTarget(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "targetLocation", "field_7038", "pathTarget", "f_31202_"), "Lexc;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.entity.boss.dragon.phase.ChargingPlayerPhase#pathTarget
    static void set_field_pathTarget(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "targetLocation", "field_7038", "pathTarget", "f_31202_"), "Lexc;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.entity.boss.dragon.phase.ChargingPlayerPhase#chargingTicks
    static jint get_field_chargingTicks(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "timeSinceCharge", "field_7037", "chargingTicks", "f_31203_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetIntField(obj, fieldID);
    };

    // setter for static private field net.minecraft.entity.boss.dragon.phase.ChargingPlayerPhase#chargingTicks
    static void set_field_chargingTicks(const jobject &obj, const jint &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "timeSinceCharge", "field_7037", "chargingTicks", "f_31203_"), "I");
        return MinecraftSDK::env->SetIntField(obj, fieldID, value);
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
    
    static jmethodID methodID_setPathTarget() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "setTarget", "method_6840", "setPathTarget", "m_31207_"), "(Lexc;)V");
    }

    static void setPathTarget(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_setPathTarget();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
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

#endif // NET_MINECRAFT_ENTITY_BOSS_DRAGON_PHASE_CHARGINGPLAYERPHASE_HPP