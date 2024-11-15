// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_ENTITY_PASSIVE_WOLFENTITY_HPP
#define NET_MINECRAFT_ENTITY_PASSIVE_WOLFENTITY_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.entity.passive.WolfEntity
 * Remapped: cgh
 */
namespace WolfEntity {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("cgh", "net/minecraft/world/entity/animal/Wolf", "net/minecraft/class_1493", "net/minecraft/entity/passive/WolfEntity", "net/minecraft/src/C_922_"));
        }
        return cachedClass;
    };

    // getter for static private field net.minecraft.entity.passive.WolfEntity#BEGGING
    [[maybe_unused]] static jobject get_field_BEGGING() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("ch", "DATA_INTERESTED_ID", "field_6946", "BEGGING", "f_30358_"), "Lajw;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.entity.passive.WolfEntity#BEGGING
    [[maybe_unused]] static void set_field_BEGGING(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("ch", "DATA_INTERESTED_ID", "field_6946", "BEGGING", "f_30358_"), "Lajw;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.entity.passive.WolfEntity#COLLAR_COLOR
    [[maybe_unused]] static jobject get_field_COLLAR_COLOR() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("ci", "DATA_COLLAR_COLOR", "field_6950", "COLLAR_COLOR", "f_30359_"), "Lajw;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.entity.passive.WolfEntity#COLLAR_COLOR
    [[maybe_unused]] static void set_field_COLLAR_COLOR(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("ci", "DATA_COLLAR_COLOR", "field_6950", "COLLAR_COLOR", "f_30359_"), "Lajw;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.entity.passive.WolfEntity#ANGER_TIME
    [[maybe_unused]] static jobject get_field_ANGER_TIME() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("cj", "DATA_REMAINING_ANGER_TIME", "field_25373", "ANGER_TIME", "f_30360_"), "Lajw;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.entity.passive.WolfEntity#ANGER_TIME
    [[maybe_unused]] static void set_field_ANGER_TIME(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("cj", "DATA_REMAINING_ANGER_TIME", "field_25373", "ANGER_TIME", "f_30360_"), "Lajw;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.entity.passive.WolfEntity#VARIANT
    [[maybe_unused]] static jobject get_field_VARIANT() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("ck", "DATA_VARIANT_ID", "field_49722", "VARIANT", "f_315779_"), "Lajw;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.entity.passive.WolfEntity#VARIANT
    [[maybe_unused]] static void set_field_VARIANT(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("ck", "DATA_VARIANT_ID", "field_49722", "VARIANT", "f_315779_"), "Lajw;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.entity.passive.WolfEntity#FOLLOW_TAMED_PREDICATE
    [[maybe_unused]] static jobject get_field_FOLLOW_TAMED_PREDICATE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("cg", "PREY_SELECTOR", "field_18004", "FOLLOW_TAMED_PREDICATE", "f_30357_"), "Ljava/util/function/Predicate;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.entity.passive.WolfEntity#FOLLOW_TAMED_PREDICATE
    [[maybe_unused]] static void set_field_FOLLOW_TAMED_PREDICATE(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("cg", "PREY_SELECTOR", "field_18004", "FOLLOW_TAMED_PREDICATE", "f_30357_"), "Ljava/util/function/Predicate;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.entity.passive.WolfEntity#WILD_MAX_HEALTH
    [[maybe_unused]] static jfloat get_field_WILD_MAX_HEALTH() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("cl", "START_HEALTH", "field_30386", "WILD_MAX_HEALTH", "f_149082_"), "F");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticFloatField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.entity.passive.WolfEntity#WILD_MAX_HEALTH
    [[maybe_unused]] static void set_field_WILD_MAX_HEALTH(const jfloat &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("cl", "START_HEALTH", "field_30386", "WILD_MAX_HEALTH", "f_149082_"), "F");
        return MinecraftSDK::env->SetStaticFloatField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.entity.passive.WolfEntity#TAMED_MAX_HEALTH
    [[maybe_unused]] static jfloat get_field_TAMED_MAX_HEALTH() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("cm", "TAME_HEALTH", "field_30387", "TAMED_MAX_HEALTH", "f_149083_"), "F");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticFloatField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.entity.passive.WolfEntity#TAMED_MAX_HEALTH
    [[maybe_unused]] static void set_field_TAMED_MAX_HEALTH(const jfloat &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("cm", "TAME_HEALTH", "field_30387", "TAMED_MAX_HEALTH", "f_149083_"), "F");
        return MinecraftSDK::env->SetStaticFloatField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.entity.passive.WolfEntity#field_49237
    [[maybe_unused]] static jfloat get_field_field_49237() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("cn", "ARMOR_REPAIR_UNIT", "field_49237", "field_49237", "f_314667_"), "F");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticFloatField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.entity.passive.WolfEntity#field_49237
    [[maybe_unused]] static void set_field_field_49237(const jfloat &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("cn", "ARMOR_REPAIR_UNIT", "field_49237", "field_49237", "f_314667_"), "F");
        return MinecraftSDK::env->SetStaticFloatField(clazz, fieldID, value);
    };

    // getter for private field net.minecraft.entity.passive.WolfEntity#begAnimationProgress
    static jfloat get_field_begAnimationProgress(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("co", "interestedAngle", "field_6952", "begAnimationProgress", "f_30361_"), "F");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetFloatField(obj, fieldID);
    };

    // setter for static private field net.minecraft.entity.passive.WolfEntity#begAnimationProgress
    static void set_field_begAnimationProgress(const jobject &obj, const jfloat &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("co", "interestedAngle", "field_6952", "begAnimationProgress", "f_30361_"), "F");
        return MinecraftSDK::env->SetFloatField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.entity.passive.WolfEntity#lastBegAnimationProgress
    static jfloat get_field_lastBegAnimationProgress(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("cp", "interestedAngleO", "field_6949", "lastBegAnimationProgress", "f_30362_"), "F");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetFloatField(obj, fieldID);
    };

    // setter for static private field net.minecraft.entity.passive.WolfEntity#lastBegAnimationProgress
    static void set_field_lastBegAnimationProgress(const jobject &obj, const jfloat &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("cp", "interestedAngleO", "field_6949", "lastBegAnimationProgress", "f_30362_"), "F");
        return MinecraftSDK::env->SetFloatField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.entity.passive.WolfEntity#furWet
    static jboolean get_field_furWet(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("cq", "isWet", "field_6944", "furWet", "f_30363_"), "Z");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetBooleanField(obj, fieldID);
    };

    // setter for static private field net.minecraft.entity.passive.WolfEntity#furWet
    static void set_field_furWet(const jobject &obj, const jboolean &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("cq", "isWet", "field_6944", "furWet", "f_30363_"), "Z");
        return MinecraftSDK::env->SetBooleanField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.entity.passive.WolfEntity#canShakeWaterOff
    static jboolean get_field_canShakeWaterOff(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("cr", "isShaking", "field_6951", "canShakeWaterOff", "f_30364_"), "Z");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetBooleanField(obj, fieldID);
    };

    // setter for static private field net.minecraft.entity.passive.WolfEntity#canShakeWaterOff
    static void set_field_canShakeWaterOff(const jobject &obj, const jboolean &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("cr", "isShaking", "field_6951", "canShakeWaterOff", "f_30364_"), "Z");
        return MinecraftSDK::env->SetBooleanField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.entity.passive.WolfEntity#shakeProgress
    static jfloat get_field_shakeProgress(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("cs", "shakeAnim", "field_6947", "shakeProgress", "f_30365_"), "F");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetFloatField(obj, fieldID);
    };

    // setter for static private field net.minecraft.entity.passive.WolfEntity#shakeProgress
    static void set_field_shakeProgress(const jobject &obj, const jfloat &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("cs", "shakeAnim", "field_6947", "shakeProgress", "f_30365_"), "F");
        return MinecraftSDK::env->SetFloatField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.entity.passive.WolfEntity#lastShakeProgress
    static jfloat get_field_lastShakeProgress(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("ct", "shakeAnimO", "field_6945", "lastShakeProgress", "f_30366_"), "F");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetFloatField(obj, fieldID);
    };

    // setter for static private field net.minecraft.entity.passive.WolfEntity#lastShakeProgress
    static void set_field_lastShakeProgress(const jobject &obj, const jfloat &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("ct", "shakeAnimO", "field_6945", "lastShakeProgress", "f_30366_"), "F");
        return MinecraftSDK::env->SetFloatField(obj, fieldID, value);
    };

    // getter for static private field net.minecraft.entity.passive.WolfEntity#ANGER_TIME_RANGE
    [[maybe_unused]] static jobject get_field_ANGER_TIME_RANGE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("cu", "PERSISTENT_ANGER_TIME", "field_25371", "ANGER_TIME_RANGE", "f_30355_"), "Lbqc;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.entity.passive.WolfEntity#ANGER_TIME_RANGE
    [[maybe_unused]] static void set_field_ANGER_TIME_RANGE(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("cu", "PERSISTENT_ANGER_TIME", "field_25371", "ANGER_TIME_RANGE", "f_30355_"), "Lbqc;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for private field net.minecraft.entity.passive.WolfEntity#angryAt
    static jobject get_field_angryAt(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("cv", "persistentAngerTarget", "field_25372", "angryAt", "f_30356_"), "Ljava/util/UUID;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.entity.passive.WolfEntity#angryAt
    static void set_field_angryAt(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("cv", "persistentAngerTarget", "field_25372", "angryAt", "f_30356_"), "Ljava/util/UUID;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID_initGoals() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("B", "registerGoals", "method_5959", "initGoals", "m_8099_"), "()V");
    }

    static void initGoals(const jobject& obj) {
                
       const auto methodID = methodID_initGoals();
       MinecraftSDK::env->CallVoidMethod(obj, methodID);
    };
    
    static jmethodID methodID_getTextureId() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("gu", "getTexture", "method_58061", "getTextureId", "m_322344_"), "()Lakr;");
    }

    static jobject getTextureId(const jobject& obj) {
                
       const auto methodID = methodID_getTextureId();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_getVariant() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("gv", "getVariant", "method_58062", "getVariant", "m_28554_"), "()Ljm;");
    }

    static jobject getVariant(const jobject& obj) {
                
       const auto methodID = methodID_getVariant();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_setVariant() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("i", "setVariant", "method_58063", "setVariant", "m_28464_"), "(Ljm;)V");
    }

    static void setVariant(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_setVariant();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_createWolfAttributes() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("gw", "createAttributes", "method_26897", "createWolfAttributes", "m_30425_"), "()Lbuv$a;");
    }

    static jobject createWolfAttributes() {
       const auto clazz = self();
       const auto methodID = methodID_createWolfAttributes();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID);
    };
    
    static jmethodID methodID_initDataTracker() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "defineSynchedData", "method_5693", "initDataTracker", "m_8097_"), "(Laka$a;)V");
    }

    static void initDataTracker(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_initDataTracker();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_playStepSound() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "playStepSound", "method_5712", "playStepSound", "m_7355_"), "(Ljd;Ldtc;)V");
    }

    static void playStepSound(const jobject& obj, const jobject& arg0, const jobject& arg1) {
                
       const auto methodID = methodID_playStepSound();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_writeCustomDataToNbt() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "addAdditionalSaveData", "method_5652", "writeCustomDataToNbt", "m_7380_"), "(Lub;)V");
    }

    static void writeCustomDataToNbt(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_writeCustomDataToNbt();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_readCustomDataFromNbt() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "readAdditionalSaveData", "method_5749", "readCustomDataFromNbt", "m_7378_"), "(Lub;)V");
    }

    static void readCustomDataFromNbt(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_readCustomDataFromNbt();
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
    
    static jmethodID methodID_getSoundVolume() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("fa", "getSoundVolume", "method_6107", "getSoundVolume", "m_6121_"), "()F");
    }

    static jfloat getSoundVolume(const jobject& obj) {
                
       const auto methodID = methodID_getSoundVolume();
       return MinecraftSDK::env->CallFloatMethod(obj, methodID);
    };
    
    static jmethodID methodID_tickMovement() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("m_", "aiStep", "method_6007", "tickMovement", "m_8107_"), "()V");
    }

    static void tickMovement(const jobject& obj) {
                
       const auto methodID = methodID_tickMovement();
       MinecraftSDK::env->CallVoidMethod(obj, methodID);
    };
    
    static jmethodID methodID_tick() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("l", "tick", "method_5773", "tick", "m_8119_"), "()V");
    }

    static void tick(const jobject& obj) {
                
       const auto methodID = methodID_tick();
       MinecraftSDK::env->CallVoidMethod(obj, methodID);
    };
    
    static jmethodID methodID_resetShake() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("gC", "cancelShake", "method_31167", "resetShake", "m_30430_"), "()V");
    }

    static void resetShake(const jobject& obj) {
                
       const auto methodID = methodID_resetShake();
       MinecraftSDK::env->CallVoidMethod(obj, methodID);
    };
    
    static jmethodID methodID_onDeath() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "die", "method_6078", "onDeath", "m_6667_"), "(Lbrk;)V");
    }

    static void onDeath(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_onDeath();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_isFurWet() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("gx", "isWet", "method_6711", "isFurWet", "m_30426_"), "()Z");
    }

    static jboolean isFurWet(const jobject& obj) {
                
       const auto methodID = methodID_isFurWet();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID);
    };
    
    static jmethodID methodID_getFurWetBrightnessMultiplier() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("H", "getWetShade", "method_6707", "getFurWetBrightnessMultiplier", "m_30446_"), "(F)F");
    }

    static jfloat getFurWetBrightnessMultiplier(const jobject& obj, const jfloat& arg0) {
                
       const auto methodID = methodID_getFurWetBrightnessMultiplier();
       return MinecraftSDK::env->CallFloatMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_getShakeAnimationProgress() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("g", "getBodyRollAngle", "method_6715", "getShakeAnimationProgress", "m_30432_"), "(FF)F");
    }

    static jfloat getShakeAnimationProgress(const jobject& obj, const jfloat& arg0, const jfloat& arg1) {
                
       const auto methodID = methodID_getShakeAnimationProgress();
       return MinecraftSDK::env->CallFloatMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_getBegAnimationProgress() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("I", "getHeadRollAngle", "method_6719", "getBegAnimationProgress", "m_30448_"), "(F)F");
    }

    static jfloat getBegAnimationProgress(const jobject& obj, const jfloat& arg0) {
                
       const auto methodID = methodID_getBegAnimationProgress();
       return MinecraftSDK::env->CallFloatMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_getMaxLookPitchChange() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("ac", "getMaxHeadXRot", "method_5978", "getMaxLookPitchChange", "m_8132_"), "()I");
    }

    static jint getMaxLookPitchChange(const jobject& obj) {
                
       const auto methodID = methodID_getMaxLookPitchChange();
       return MinecraftSDK::env->CallIntMethod(obj, methodID);
    };
    
    static jmethodID methodID_damage() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "hurt", "method_5643", "damage", "m_6469_"), "(Lbrk;F)Z");
    }

    static jboolean damage(const jobject& obj, const jobject& arg0, const jfloat& arg1) {
                
       const auto methodID = methodID_damage();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_canUseSlot() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("d", "canUseSlot", "method_56991", "canUseSlot", "m_30729_"), "(Lbsy;)Z");
    }

    static jboolean canUseSlot(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_canUseSlot();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_applyDamage() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("f", "actuallyHurt", "method_6074", "applyDamage", "m_6475_"), "(Lbrk;F)V");
    }

    static void applyDamage(const jobject& obj, const jobject& arg0, const jfloat& arg1) {
                
       const auto methodID = methodID_applyDamage();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_shouldArmorAbsorbDamage() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("g", "canArmorAbsorb", "method_57304", "shouldArmorAbsorbDamage", "m_324962_"), "(Lbrk;)Z");
    }

    static jboolean shouldArmorAbsorbDamage(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_shouldArmorAbsorbDamage();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_updateAttributesForTamed() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("t", "applyTamingSideEffects", "method_56996", "updateAttributesForTamed", "m_5849_"), "()V");
    }

    static void updateAttributesForTamed(const jobject& obj) {
                
       const auto methodID = methodID_updateAttributesForTamed();
       MinecraftSDK::env->CallVoidMethod(obj, methodID);
    };
    
    static jmethodID methodID_damageArmor() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "hurtArmor", "method_6105", "damageArmor", "m_6472_"), "(Lbrk;F)V");
    }

    static void damageArmor(const jobject& obj, const jobject& arg0, const jfloat& arg1) {
                
       const auto methodID = methodID_damageArmor();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_interactMob() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "mobInteract", "method_5992", "interactMob", "m_6071_"), "(Lcmx;Lbqq;)Lbqr;");
    }

    static jobject interactMob(const jobject& obj, const jobject& arg0, const jobject& arg1) {
                
       const auto methodID = methodID_interactMob();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_tryTame() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("g", "tryToTame", "method_58169", "tryTame", "m_318612_"), "(Lcmx;)V");
    }

    static void tryTame(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_tryTame();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_handleStatus() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "handleEntityEvent", "method_5711", "handleStatus", "m_7822_"), "(B)V");
    }

    static void handleStatus(const jobject& obj, const jbyte& arg0) {
                
       const auto methodID = methodID_handleStatus();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_getTailAngle() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("gy", "getTailAngle", "method_6714", "getTailAngle", "m_30427_"), "()F");
    }

    static jfloat getTailAngle(const jobject& obj) {
                
       const auto methodID = methodID_getTailAngle();
       return MinecraftSDK::env->CallFloatMethod(obj, methodID);
    };
    
    static jmethodID methodID_isBreedingItem() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("o", "isFood", "method_6481", "isBreedingItem", "m_6898_"), "(Lcuq;)Z");
    }

    static jboolean isBreedingItem(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_isBreedingItem();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_getLimitPerChunk() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("fN", "getMaxSpawnClusterSize", "method_5945", "getLimitPerChunk", "m_5792_"), "()I");
    }

    static jint getLimitPerChunk(const jobject& obj) {
                
       const auto methodID = methodID_getLimitPerChunk();
       return MinecraftSDK::env->CallIntMethod(obj, methodID);
    };
    
    static jmethodID methodID_getAngerTime() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getRemainingPersistentAngerTime", "method_29507", "getAngerTime", "m_6784_"), "()I");
    }

    static jint getAngerTime(const jobject& obj) {
                
       const auto methodID = methodID_getAngerTime();
       return MinecraftSDK::env->CallIntMethod(obj, methodID);
    };
    
    static jmethodID methodID_setAngerTime() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "setRemainingPersistentAngerTime", "method_29514", "setAngerTime", "m_7870_"), "(I)V");
    }

    static void setAngerTime(const jobject& obj, const jint& arg0) {
                
       const auto methodID = methodID_setAngerTime();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_chooseRandomAngerTime() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "startPersistentAngerTimer", "method_29509", "chooseRandomAngerTime", "m_6825_"), "()V");
    }

    static void chooseRandomAngerTime(const jobject& obj) {
                
       const auto methodID = methodID_chooseRandomAngerTime();
       MinecraftSDK::env->CallVoidMethod(obj, methodID);
    };
    
    static jmethodID methodID_getAngryAt() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "getPersistentAngerTarget", "method_29508", "getAngryAt", "m_6120_"), "()Ljava/util/UUID;");
    }

    static jobject getAngryAt(const jobject& obj) {
                
       const auto methodID = methodID_getAngryAt();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_setAngryAt() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "setPersistentAngerTarget", "method_29513", "setAngryAt", "m_6925_"), "(Ljava/util/UUID;)V");
    }

    static void setAngryAt(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_setAngryAt();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_getCollarColor() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("gz", "getCollarColor", "method_6713", "getCollarColor", "m_30428_"), "()Lcti;");
    }

    static jobject getCollarColor(const jobject& obj) {
                
       const auto methodID = methodID_getCollarColor();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_hasArmor() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("gA", "hasArmor", "method_55710", "hasArmor", "m_324194_"), "()Z");
    }

    static jboolean hasArmor(const jobject& obj) {
                
       const auto methodID = methodID_hasArmor();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID);
    };
    
    static jmethodID methodID_setCollarColor() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "setCollarColor", "method_6708", "setCollarColor", "m_30397_"), "(Lcti;)V");
    }

    static void setCollarColor(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_setCollarColor();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_createChild() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "getBreedOffspring", "method_6717", "createChild", "m_142606_"), "(Laqu;Lbsl;)Lcgh;");
    }

    static jobject createChild(const jobject& obj, const jobject& arg0, const jobject& arg1) {
                
       const auto methodID = methodID_createChild();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_setBegging() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("A", "setIsInterested", "method_6712", "setBegging", "m_30444_"), "(Z)V");
    }

    static void setBegging(const jobject& obj, const jboolean& arg0) {
                
       const auto methodID = methodID_setBegging();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_canBreedWith() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "canMate", "method_6474", "canBreedWith", "m_7848_"), "(Lcfe;)Z");
    }

    static jboolean canBreedWith(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_canBreedWith();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_isBegging() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("gB", "isInterested", "method_6710", "isBegging", "m_30429_"), "()Z");
    }

    static jboolean isBegging(const jobject& obj) {
                
       const auto methodID = methodID_isBegging();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID);
    };
    
    static jmethodID methodID_canAttackWithOwner() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "wantsToAttack", "method_6178", "canAttackWithOwner", "m_7757_"), "(Lbtn;Lbtn;)Z");
    }

    static jboolean canAttackWithOwner(const jobject& obj, const jobject& arg0, const jobject& arg1) {
                
       const auto methodID = methodID_canAttackWithOwner();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_canBeLeashed() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("y", "canBeLeashed", "method_5931", "canBeLeashed", "m_6573_"), "()Z");
    }

    static jboolean canBeLeashed(const jobject& obj) {
                
       const auto methodID = methodID_canBeLeashed();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID);
    };
    
    static jmethodID methodID_getLeashOffset() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("cM", "getLeashOffset", "method_29919", "getLeashOffset", "m_7939_"), "()Lexc;");
    }

    static jobject getLeashOffset(const jobject& obj) {
                
       const auto methodID = methodID_getLeashOffset();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_canSpawn() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("c", "checkWolfSpawnRules", "method_39450", "canSpawn", "m_218291_"), "(Lbsx;Ldcx;Lbtr;Ljd;Layw;)Z");
    }

    static jboolean canSpawn(const jobject& arg0, const jobject& arg1, const jobject& arg2, const jobject& arg3, const jobject& arg4) {
       const auto clazz = self();
       const auto methodID = methodID_canSpawn();
       return MinecraftSDK::env->CallStaticBooleanMethod(clazz, methodID, arg0, arg1, arg2, arg3, arg4);
    };
    
};

#endif // NET_MINECRAFT_ENTITY_PASSIVE_WOLFENTITY_HPP