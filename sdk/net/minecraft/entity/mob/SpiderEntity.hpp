// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_ENTITY_MOB_SPIDERENTITY_HPP
#define NET_MINECRAFT_ENTITY_MOB_SPIDERENTITY_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.entity.mob.SpiderEntity
 * Remapped: cko
 */
namespace SpiderEntity {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("cko", "net/minecraft/world/entity/monster/Spider", "net/minecraft/class_1628", "net/minecraft/entity/mob/SpiderEntity", "net/minecraft/src/C_1071_"));
        }
        return cachedClass;
    };

    // getter for static private field net.minecraft.entity.mob.SpiderEntity#SPIDER_FLAGS
    [[maybe_unused]] static jobject get_field_SPIDER_FLAGS() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "DATA_FLAGS_ID", "field_7403", "SPIDER_FLAGS", "f_33783_"), "Lajw;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.entity.mob.SpiderEntity#SPIDER_FLAGS
    [[maybe_unused]] static void set_field_SPIDER_FLAGS(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "DATA_FLAGS_ID", "field_7403", "SPIDER_FLAGS", "f_33783_"), "Lajw;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.entity.mob.SpiderEntity#field_30498
    [[maybe_unused]] static jfloat get_field_field_30498() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "SPIDER_SPECIAL_EFFECT_CHANCE", "field_30498", "field_30498", "f_149853_"), "F");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticFloatField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.entity.mob.SpiderEntity#field_30498
    [[maybe_unused]] static void set_field_field_30498(const jfloat &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "SPIDER_SPECIAL_EFFECT_CHANCE", "field_30498", "field_30498", "f_149853_"), "F");
        return MinecraftSDK::env->SetStaticFloatField(clazz, fieldID, value);
    };

    static jmethodID methodID_initGoals() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("B", "registerGoals", "method_5959", "initGoals", "m_8099_"), "()V");
    }

    static void initGoals(const jobject& obj) {
                
       const auto methodID = methodID_initGoals();
       MinecraftSDK::env->CallVoidMethod(obj, methodID);
    };
    
    static jmethodID methodID_createNavigation() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "createNavigation", "method_5965", "createNavigation", "m_6037_"), "(Ldcw;)Lcda;");
    }

    static jobject createNavigation(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_createNavigation();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_initDataTracker() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "defineSynchedData", "method_5693", "initDataTracker", "m_8097_"), "(Laka$a;)V");
    }

    static void initDataTracker(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_initDataTracker();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_tick() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("l", "tick", "method_5773", "tick", "m_8119_"), "()V");
    }

    static void tick(const jobject& obj) {
                
       const auto methodID = methodID_tick();
       MinecraftSDK::env->CallVoidMethod(obj, methodID);
    };
    
    static jmethodID methodID_createSpiderAttributes() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("t", "createAttributes", "method_26923", "createSpiderAttributes", "m_33815_"), "()Lbuv$a;");
    }

    static jobject createSpiderAttributes() {
       const auto clazz = self();
       const auto methodID = methodID_createSpiderAttributes();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID);
    };
    
    static jmethodID methodID_getAmbientSound() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("v", "getAmbientSound", "method_5994", "getAmbientSound", "m_7515_"), "()Lavo;");
    }

    static jobject getAmbientSound(const jobject& obj) {
                
       const auto methodID = methodID_getAmbientSound();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_getHurtSound() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("d", "getHurtSound", "method_6011", "getHurtSound", "m_7975_"), "(Lbrk;)Lavo;");
    }

    static jobject getHurtSound(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_getHurtSound();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_getDeathSound() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("n_", "getDeathSound", "method_6002", "getDeathSound", "m_5592_"), "()Lavo;");
    }

    static jobject getDeathSound(const jobject& obj) {
                
       const auto methodID = methodID_getDeathSound();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_playStepSound() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "playStepSound", "method_5712", "playStepSound", "m_7355_"), "(Ljd;Ldtc;)V");
    }

    static void playStepSound(const jobject& obj, const jobject& arg0, const jobject& arg1) {
                
       const auto methodID = methodID_playStepSound();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_isClimbing() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("p_", "onClimbable", "method_6101", "isClimbing", "m_6147_"), "()Z");
    }

    static jboolean isClimbing(const jobject& obj) {
                
       const auto methodID = methodID_isClimbing();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID);
    };
    
    static jmethodID methodID_slowMovement() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "makeStuckInBlock", "method_5844", "slowMovement", "m_7601_"), "(Ldtc;Lexc;)V");
    }

    static void slowMovement(const jobject& obj, const jobject& arg0, const jobject& arg1) {
                
       const auto methodID = methodID_slowMovement();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_canHaveStatusEffect() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "canBeAffected", "method_6049", "canHaveStatusEffect", "m_7301_"), "(Lbrz;)Z");
    }

    static jboolean canHaveStatusEffect(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_canHaveStatusEffect();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_isClimbingWall() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("x", "isClimbing", "method_7167", "isClimbingWall", "m_33816_"), "()Z");
    }

    static jboolean isClimbingWall(const jobject& obj) {
                
       const auto methodID = methodID_isClimbingWall();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID);
    };
    
    static jmethodID methodID_setClimbingWall() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("x", "setClimbing", "method_7166", "setClimbingWall", "m_33819_"), "(Z)V");
    }

    static void setClimbingWall(const jobject& obj, const jboolean& arg0) {
                
       const auto methodID = methodID_setClimbingWall();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_initialize() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "finalizeSpawn", "method_5943", "initialize", "m_6518_"), "(Lddl;Lbqp;Lbtr;Lbuh;)Lbuh;");
    }

    static jobject initialize(const jobject& obj, const jobject& arg0, const jobject& arg1, const jobject& arg2, const jobject& arg3) {
                
       const auto methodID = methodID_initialize();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1, arg2, arg3);
    };
    
    static jmethodID methodID_getVehicleAttachmentPos() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("l", "getVehicleAttachmentPoint", "method_55668", "getVehicleAttachmentPos", "m_320507_"), "(Lbsr;)Lexc;");
    }

    static jobject getVehicleAttachmentPos(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_getVehicleAttachmentPos();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
};

#endif // NET_MINECRAFT_ENTITY_MOB_SPIDERENTITY_HPP