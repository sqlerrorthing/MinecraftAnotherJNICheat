// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_ENTITY_MOB_RAVAGERENTITY_HPP
#define NET_MINECRAFT_ENTITY_MOB_RAVAGERENTITY_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.entity.mob.RavagerEntity
 * Remapped: cki
 */
namespace RavagerEntity {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("cki", "net/minecraft/world/entity/monster/Ravager", "net/minecraft/class_1584", "net/minecraft/entity/mob/RavagerEntity", "net/minecraft/src/C_1043_"));
        }
        return cachedClass;
    };

    // getter for static private field net.minecraft.entity.mob.RavagerEntity#IS_NOT_RAVAGER
    [[maybe_unused]] static jobject get_field_IS_NOT_RAVAGER() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("e", "NO_RAVAGER_AND_ALIVE", "field_7301", "IS_NOT_RAVAGER", "f_33319_"), "Ljava/util/function/Predicate;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.entity.mob.RavagerEntity#IS_NOT_RAVAGER
    [[maybe_unused]] static void set_field_IS_NOT_RAVAGER(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("e", "NO_RAVAGER_AND_ALIVE", "field_7301", "IS_NOT_RAVAGER", "f_33319_"), "Ljava/util/function/Predicate;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.entity.mob.RavagerEntity#field_30480
    [[maybe_unused]] static jdouble get_field_field_30480() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("cc", "BASE_MOVEMENT_SPEED", "field_30480", "field_30480", "f_149747_"), "D");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticDoubleField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.entity.mob.RavagerEntity#field_30480
    [[maybe_unused]] static void set_field_field_30480(const jdouble &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("cc", "BASE_MOVEMENT_SPEED", "field_30480", "field_30480", "f_149747_"), "D");
        return MinecraftSDK::env->SetStaticDoubleField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.entity.mob.RavagerEntity#field_30481
    [[maybe_unused]] static jdouble get_field_field_30481() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("cd", "ATTACK_MOVEMENT_SPEED", "field_30481", "field_30481", "f_149748_"), "D");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticDoubleField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.entity.mob.RavagerEntity#field_30481
    [[maybe_unused]] static void set_field_field_30481(const jdouble &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("cd", "ATTACK_MOVEMENT_SPEED", "field_30481", "field_30481", "f_149748_"), "D");
        return MinecraftSDK::env->SetStaticDoubleField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.entity.mob.RavagerEntity#field_30482
    [[maybe_unused]] static jint get_field_field_30482() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("ce", "STUNNED_COLOR", "field_30482", "field_30482", "f_149749_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.entity.mob.RavagerEntity#field_30482
    [[maybe_unused]] static void set_field_field_30482(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("ce", "STUNNED_COLOR", "field_30482", "field_30482", "f_149749_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.entity.mob.RavagerEntity#STUNNED_PARTICLE_BLUE
    [[maybe_unused]] static jfloat get_field_STUNNED_PARTICLE_BLUE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("cf", "STUNNED_COLOR_BLUE", "field_30483", "STUNNED_PARTICLE_BLUE", "f_149750_"), "F");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticFloatField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.entity.mob.RavagerEntity#STUNNED_PARTICLE_BLUE
    [[maybe_unused]] static void set_field_STUNNED_PARTICLE_BLUE(const jfloat &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("cf", "STUNNED_COLOR_BLUE", "field_30483", "STUNNED_PARTICLE_BLUE", "f_149750_"), "F");
        return MinecraftSDK::env->SetStaticFloatField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.entity.mob.RavagerEntity#STUNNED_PARTICLE_GREEN
    [[maybe_unused]] static jfloat get_field_STUNNED_PARTICLE_GREEN() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("cg", "STUNNED_COLOR_GREEN", "field_30484", "STUNNED_PARTICLE_GREEN", "f_149751_"), "F");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticFloatField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.entity.mob.RavagerEntity#STUNNED_PARTICLE_GREEN
    [[maybe_unused]] static void set_field_STUNNED_PARTICLE_GREEN(const jfloat &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("cg", "STUNNED_COLOR_GREEN", "field_30484", "STUNNED_PARTICLE_GREEN", "f_149751_"), "F");
        return MinecraftSDK::env->SetStaticFloatField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.entity.mob.RavagerEntity#STUNNED_PARTICLE_RED
    [[maybe_unused]] static jfloat get_field_STUNNED_PARTICLE_RED() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("ch", "STUNNED_COLOR_RED", "field_30485", "STUNNED_PARTICLE_RED", "f_149752_"), "F");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticFloatField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.entity.mob.RavagerEntity#STUNNED_PARTICLE_RED
    [[maybe_unused]] static void set_field_STUNNED_PARTICLE_RED(const jfloat &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("ch", "STUNNED_COLOR_RED", "field_30485", "STUNNED_PARTICLE_RED", "f_149752_"), "F");
        return MinecraftSDK::env->SetStaticFloatField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.entity.mob.RavagerEntity#field_30486
    [[maybe_unused]] static jint get_field_field_30486() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("ci", "ATTACK_DURATION", "field_30486", "field_30486", "f_149753_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.entity.mob.RavagerEntity#field_30486
    [[maybe_unused]] static void set_field_field_30486(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("ci", "ATTACK_DURATION", "field_30486", "field_30486", "f_149753_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.entity.mob.RavagerEntity#field_30479
    [[maybe_unused]] static jint get_field_field_30479() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "STUN_DURATION", "field_30479", "field_30479", "f_149746_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.entity.mob.RavagerEntity#field_30479
    [[maybe_unused]] static void set_field_field_30479(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "STUN_DURATION", "field_30479", "field_30479", "f_149746_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for private field net.minecraft.entity.mob.RavagerEntity#attackTick
    static jint get_field_attackTick(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("cj", "attackTick", "field_7303", "attackTick", "f_33320_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetIntField(obj, fieldID);
    };

    // setter for static private field net.minecraft.entity.mob.RavagerEntity#attackTick
    static void set_field_attackTick(const jobject &obj, const jint &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("cj", "attackTick", "field_7303", "attackTick", "f_33320_"), "I");
        return MinecraftSDK::env->SetIntField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.entity.mob.RavagerEntity#stunTick
    static jint get_field_stunTick(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("ck", "stunnedTick", "field_7302", "stunTick", "f_33321_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetIntField(obj, fieldID);
    };

    // setter for static private field net.minecraft.entity.mob.RavagerEntity#stunTick
    static void set_field_stunTick(const jobject &obj, const jint &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("ck", "stunnedTick", "field_7302", "stunTick", "f_33321_"), "I");
        return MinecraftSDK::env->SetIntField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.entity.mob.RavagerEntity#roarTick
    static jint get_field_roarTick(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("cl", "roarTick", "field_7305", "roarTick", "f_33322_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetIntField(obj, fieldID);
    };

    // setter for static private field net.minecraft.entity.mob.RavagerEntity#roarTick
    static void set_field_roarTick(const jobject &obj, const jint &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("cl", "roarTick", "field_7305", "roarTick", "f_33322_"), "I");
        return MinecraftSDK::env->SetIntField(obj, fieldID, value);
    };

    static jmethodID methodID_initGoals() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("B", "registerGoals", "method_5959", "initGoals", "m_8099_"), "()V");
    }

    static void initGoals(const jobject& obj) {
                
       const auto methodID = methodID_initGoals();
       MinecraftSDK::env->CallVoidMethod(obj, methodID);
    };
    
    static jmethodID methodID_updateGoalControls() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("U", "updateControlFlags", "method_20417", "updateGoalControls", "m_8022_"), "()V");
    }

    static void updateGoalControls(const jobject& obj) {
                
       const auto methodID = methodID_updateGoalControls();
       MinecraftSDK::env->CallVoidMethod(obj, methodID);
    };
    
    static jmethodID methodID_createRavagerAttributes() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("s", "createAttributes", "method_26920", "createRavagerAttributes", "m_33371_"), "()Lbuv$a;");
    }

    static jobject createRavagerAttributes() {
       const auto clazz = self();
       const auto methodID = methodID_createRavagerAttributes();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID);
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
    
    static jmethodID methodID_getCelebratingSound() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("ai_", "getCelebrateSound", "method_20033", "getCelebratingSound", "m_7930_"), "()Lavo;");
    }

    static jobject getCelebratingSound(const jobject& obj) {
                
       const auto methodID = methodID_getCelebratingSound();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_getMaxHeadRotation() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("ae", "getMaxHeadYRot", "method_5986", "getMaxHeadRotation", "m_8085_"), "()I");
    }

    static jint getMaxHeadRotation(const jobject& obj) {
                
       const auto methodID = methodID_getMaxHeadRotation();
       return MinecraftSDK::env->CallIntMethod(obj, methodID);
    };
    
    static jmethodID methodID_tickMovement() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("m_", "aiStep", "method_6007", "tickMovement", "m_8107_"), "()V");
    }

    static void tickMovement(const jobject& obj) {
                
       const auto methodID = methodID_tickMovement();
       MinecraftSDK::env->CallVoidMethod(obj, methodID);
    };
    
    static jmethodID methodID_spawnStunnedParticles() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("gv", "stunEffect", "method_7073", "spawnStunnedParticles", "m_33367_"), "()V");
    }

    static void spawnStunnedParticles(const jobject& obj) {
                
       const auto methodID = methodID_spawnStunnedParticles();
       MinecraftSDK::env->CallVoidMethod(obj, methodID);
    };
    
    static jmethodID methodID_isImmobile() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("fc", "isImmobile", "method_6062", "isImmobile", "m_6107_"), "()Z");
    }

    static jboolean isImmobile(const jobject& obj) {
                
       const auto methodID = methodID_isImmobile();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID);
    };
    
    static jmethodID methodID_canSee() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("F", "hasLineOfSight", "method_6057", "canSee", "m_142582_"), "(Lbsr;)Z");
    }

    static jboolean canSee(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_canSee();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_knockback() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("e", "blockedByShield", "method_6060", "knockback", "m_6731_"), "(Lbtn;)V");
    }

    static void knockback(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_knockback();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_roar() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("gw", "roar", "method_7071", "roar", "m_33368_"), "()V");
    }

    static void roar(const jobject& obj) {
                
       const auto methodID = methodID_roar();
       MinecraftSDK::env->CallVoidMethod(obj, methodID);
    };
    
    static jmethodID methodID_knockBack() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "strongKnockback", "method_7068", "knockBack", "m_33339_"), "(Lbsr;)V");
    }

    static void knockBack(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_knockBack();
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
    
    static jmethodID methodID_getAttackTick() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("t", "getAttackTick", "method_7070", "getAttackTick", "m_33362_"), "()I");
    }

    static jint getAttackTick(const jobject& obj) {
                
       const auto methodID = methodID_getAttackTick();
       return MinecraftSDK::env->CallIntMethod(obj, methodID);
    };
    
    static jmethodID methodID_getStunTick() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("gk", "getStunnedTick", "method_7074", "getStunTick", "m_33364_"), "()I");
    }

    static jint getStunTick(const jobject& obj) {
                
       const auto methodID = methodID_getStunTick();
       return MinecraftSDK::env->CallIntMethod(obj, methodID);
    };
    
    static jmethodID methodID_getRoarTick() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("gu", "getRoarTick", "method_7072", "getRoarTick", "m_33366_"), "()I");
    }

    static jint getRoarTick(const jobject& obj) {
                
       const auto methodID = methodID_getRoarTick();
       return MinecraftSDK::env->CallIntMethod(obj, methodID);
    };
    
    static jmethodID methodID_tryAttack() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("D", "doHurtTarget", "method_6121", "tryAttack", "m_7327_"), "(Lbsr;)Z");
    }

    static jboolean tryAttack(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_tryAttack();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0);
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
    
    static jmethodID methodID_canSpawn() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "checkSpawnObstruction", "method_5957", "canSpawn", "m_6914_"), "(Ldcz;)Z");
    }

    static jboolean canSpawn(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_canSpawn();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_addBonusForWave() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "applyRaidBuffs", "method_16484", "addBonusForWave", "m_7895_"), "(Laqu;IZ)V");
    }

    static void addBonusForWave(const jobject& obj, const jobject& arg0, const jint& arg1, const jboolean& arg2) {
                
       const auto methodID = methodID_addBonusForWave();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1, arg2);
    };
    
    static jmethodID methodID_canLead() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("gl", "canBeLeader", "method_16485", "canLead", "m_7490_"), "()Z");
    }

    static jboolean canLead(const jobject& obj) {
                
       const auto methodID = methodID_canLead();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID);
    };
    
    static jmethodID methodID_getAttackBox() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("gc", "getAttackBoundingBox", "method_53511", "getAttackBox", "m_292684_"), "()Lewx;");
    }

    static jobject getAttackBox(const jobject& obj) {
                
       const auto methodID = methodID_getAttackBox();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_ENTITY_MOB_RAVAGERENTITY_HPP