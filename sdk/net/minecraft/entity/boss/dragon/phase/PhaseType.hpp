// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_ENTITY_BOSS_DRAGON_PHASE_PHASETYPE_HPP
#define NET_MINECRAFT_ENTITY_BOSS_DRAGON_PHASE_PHASETYPE_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.entity.boss.dragon.phase.PhaseType
 * Remapped: ciq
 */
namespace PhaseType {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("ciq", "net/minecraft/world/entity/boss/enderdragon/phases/EnderDragonPhase", "net/minecraft/class_1527", "net/minecraft/entity/boss/dragon/phase/PhaseType", "net/minecraft/src/C_962_"));
        }
        return cachedClass;
    };

    // getter for static private field net.minecraft.entity.boss.dragon.phase.PhaseType#types
    [[maybe_unused]] static jobject get_field_types() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("l", "phases", "field_7080", "types", "f_31388_"), "[Lciq;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.entity.boss.dragon.phase.PhaseType#types
    [[maybe_unused]] static void set_field_types(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("l", "phases", "field_7080", "types", "f_31388_"), "[Lciq;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.entity.boss.dragon.phase.PhaseType#HOLDING_PATTERN
    [[maybe_unused]] static jobject get_field_HOLDING_PATTERN() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "HOLDING_PATTERN", "field_7069", "HOLDING_PATTERN", "f_31377_"), "Lciq;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.entity.boss.dragon.phase.PhaseType#HOLDING_PATTERN
    [[maybe_unused]] static void set_field_HOLDING_PATTERN(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "HOLDING_PATTERN", "field_7069", "HOLDING_PATTERN", "f_31377_"), "Lciq;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.entity.boss.dragon.phase.PhaseType#STRAFE_PLAYER
    [[maybe_unused]] static jobject get_field_STRAFE_PLAYER() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "STRAFE_PLAYER", "field_7076", "STRAFE_PLAYER", "f_31378_"), "Lciq;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.entity.boss.dragon.phase.PhaseType#STRAFE_PLAYER
    [[maybe_unused]] static void set_field_STRAFE_PLAYER(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "STRAFE_PLAYER", "field_7076", "STRAFE_PLAYER", "f_31378_"), "Lciq;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.entity.boss.dragon.phase.PhaseType#LANDING_APPROACH
    [[maybe_unused]] static jobject get_field_LANDING_APPROACH() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "LANDING_APPROACH", "field_7071", "LANDING_APPROACH", "f_31379_"), "Lciq;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.entity.boss.dragon.phase.PhaseType#LANDING_APPROACH
    [[maybe_unused]] static void set_field_LANDING_APPROACH(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "LANDING_APPROACH", "field_7071", "LANDING_APPROACH", "f_31379_"), "Lciq;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.entity.boss.dragon.phase.PhaseType#LANDING
    [[maybe_unused]] static jobject get_field_LANDING() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("d", "LANDING", "field_7067", "LANDING", "f_31380_"), "Lciq;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.entity.boss.dragon.phase.PhaseType#LANDING
    [[maybe_unused]] static void set_field_LANDING(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("d", "LANDING", "field_7067", "LANDING", "f_31380_"), "Lciq;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.entity.boss.dragon.phase.PhaseType#TAKEOFF
    [[maybe_unused]] static jobject get_field_TAKEOFF() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("e", "TAKEOFF", "field_7077", "TAKEOFF", "f_31381_"), "Lciq;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.entity.boss.dragon.phase.PhaseType#TAKEOFF
    [[maybe_unused]] static void set_field_TAKEOFF(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("e", "TAKEOFF", "field_7077", "TAKEOFF", "f_31381_"), "Lciq;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.entity.boss.dragon.phase.PhaseType#SITTING_FLAMING
    [[maybe_unused]] static jobject get_field_SITTING_FLAMING() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("f", "SITTING_FLAMING", "field_7072", "SITTING_FLAMING", "f_31382_"), "Lciq;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.entity.boss.dragon.phase.PhaseType#SITTING_FLAMING
    [[maybe_unused]] static void set_field_SITTING_FLAMING(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("f", "SITTING_FLAMING", "field_7072", "SITTING_FLAMING", "f_31382_"), "Lciq;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.entity.boss.dragon.phase.PhaseType#SITTING_SCANNING
    [[maybe_unused]] static jobject get_field_SITTING_SCANNING() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("g", "SITTING_SCANNING", "field_7081", "SITTING_SCANNING", "f_31383_"), "Lciq;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.entity.boss.dragon.phase.PhaseType#SITTING_SCANNING
    [[maybe_unused]] static void set_field_SITTING_SCANNING(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("g", "SITTING_SCANNING", "field_7081", "SITTING_SCANNING", "f_31383_"), "Lciq;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.entity.boss.dragon.phase.PhaseType#SITTING_ATTACKING
    [[maybe_unused]] static jobject get_field_SITTING_ATTACKING() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("h", "SITTING_ATTACKING", "field_7073", "SITTING_ATTACKING", "f_31384_"), "Lciq;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.entity.boss.dragon.phase.PhaseType#SITTING_ATTACKING
    [[maybe_unused]] static void set_field_SITTING_ATTACKING(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("h", "SITTING_ATTACKING", "field_7073", "SITTING_ATTACKING", "f_31384_"), "Lciq;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.entity.boss.dragon.phase.PhaseType#CHARGING_PLAYER
    [[maybe_unused]] static jobject get_field_CHARGING_PLAYER() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("i", "CHARGING_PLAYER", "field_7078", "CHARGING_PLAYER", "f_31385_"), "Lciq;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.entity.boss.dragon.phase.PhaseType#CHARGING_PLAYER
    [[maybe_unused]] static void set_field_CHARGING_PLAYER(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("i", "CHARGING_PLAYER", "field_7078", "CHARGING_PLAYER", "f_31385_"), "Lciq;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.entity.boss.dragon.phase.PhaseType#DYING
    [[maybe_unused]] static jobject get_field_DYING() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("j", "DYING", "field_7068", "DYING", "f_31386_"), "Lciq;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.entity.boss.dragon.phase.PhaseType#DYING
    [[maybe_unused]] static void set_field_DYING(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("j", "DYING", "field_7068", "DYING", "f_31386_"), "Lciq;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.entity.boss.dragon.phase.PhaseType#HOVER
    [[maybe_unused]] static jobject get_field_HOVER() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("k", "HOVERING", "field_7075", "HOVER", "f_31387_"), "Lciq;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.entity.boss.dragon.phase.PhaseType#HOVER
    [[maybe_unused]] static void set_field_HOVER(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("k", "HOVERING", "field_7075", "HOVER", "f_31387_"), "Lciq;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for private field net.minecraft.entity.boss.dragon.phase.PhaseType#phaseClass
    static jobject get_field_phaseClass(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("m", "instanceClass", "field_7074", "phaseClass", "f_31389_"), "Ljava/lang/Class;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.entity.boss.dragon.phase.PhaseType#phaseClass
    static void set_field_phaseClass(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("m", "instanceClass", "field_7074", "phaseClass", "f_31389_"), "Ljava/lang/Class;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.entity.boss.dragon.phase.PhaseType#id
    static jint get_field_id(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("n", "id", "field_7079", "id", "f_31390_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetIntField(obj, fieldID);
    };

    // setter for static private field net.minecraft.entity.boss.dragon.phase.PhaseType#id
    static void set_field_id(const jobject &obj, const jint &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("n", "id", "field_7079", "id", "f_31390_"), "I");
        return MinecraftSDK::env->SetIntField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.entity.boss.dragon.phase.PhaseType#name
    static jobject get_field_name(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("o", "name", "field_7070", "name", "f_31391_"), "Ljava/lang/String;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.entity.boss.dragon.phase.PhaseType#name
    static void set_field_name(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("o", "name", "field_7070", "name", "f_31391_"), "Ljava/lang/String;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID_create() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "createInstance", "method_6866", "create", "m_31400_"), "(Lcia;)Lcik;");
    }

    static jobject create(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_create();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_getConstructor() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getConstructor", "method_6867", "getConstructor", "m_31397_"), "()Ljava/lang/reflect/Constructor;");
    }

    static jobject getConstructor(const jobject& obj) {
                
       const auto methodID = methodID_getConstructor();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_getTypeId() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "getId", "method_6871", "getTypeId", "m_31405_"), "()I");
    }

    static jint getTypeId(const jobject& obj) {
                
       const auto methodID = methodID_getTypeId();
       return MinecraftSDK::env->CallIntMethod(obj, methodID);
    };
    
    static jmethodID methodID_getFromId() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "getById", "method_6868", "getFromId", "m_31398_"), "(I)Lciq;");
    }

    static jobject getFromId(const jint& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_getFromId();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_count() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("c", "getCount", "method_6869", "count", "m_31406_"), "()I");
    }

    static jint count() {
       const auto clazz = self();
       const auto methodID = methodID_count();
       return MinecraftSDK::env->CallStaticIntMethod(clazz, methodID);
    };
    
    static jmethodID methodID_register() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "create", "method_6870", "register", "m_31402_"), "(Ljava/lang/Class;Ljava/lang/String;)Lciq;");
    }

    static jobject register(const jobject& arg0, const jobject& arg1) {
       const auto clazz = self();
       const auto methodID = methodID_register();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0, arg1);
    };
    
};

#endif // NET_MINECRAFT_ENTITY_BOSS_DRAGON_PHASE_PHASETYPE_HPP