// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_ENTITY_PASSIVE_IRONGOLEMENTITY_HPP
#define NET_MINECRAFT_ENTITY_PASSIVE_IRONGOLEMENTITY_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.entity.passive.IronGolemEntity
 * Remapped: cfq
 */
namespace IronGolemEntity {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("cfq", "net/minecraft/world/entity/animal/IronGolem", "net/minecraft/class_1439", "net/minecraft/entity/passive/IronGolemEntity", "net/minecraft/src/C_857_"));
        }
        return cachedClass;
    };

    // getter for static protected field net.minecraft.entity.passive.IronGolemEntity#IRON_GOLEM_FLAGS
    [[maybe_unused]] static jobject get_field_IRON_GOLEM_FLAGS() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "DATA_FLAGS_ID", "field_6763", "IRON_GOLEM_FLAGS", "f_28826_"), "Lajw;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static protected field net.minecraft.entity.passive.IronGolemEntity#IRON_GOLEM_FLAGS
    [[maybe_unused]] static void set_field_IRON_GOLEM_FLAGS(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "DATA_FLAGS_ID", "field_6763", "IRON_GOLEM_FLAGS", "f_28826_"), "Lajw;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.entity.passive.IronGolemEntity#HEALTH_PER_INGOT
    [[maybe_unused]] static jint get_field_HEALTH_PER_INGOT() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("d", "IRON_INGOT_HEAL_AMOUNT", "field_30338", "HEALTH_PER_INGOT", "f_148932_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.entity.passive.IronGolemEntity#HEALTH_PER_INGOT
    [[maybe_unused]] static void set_field_HEALTH_PER_INGOT(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("d", "IRON_INGOT_HEAL_AMOUNT", "field_30338", "HEALTH_PER_INGOT", "f_148932_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for private field net.minecraft.entity.passive.IronGolemEntity#attackTicksLeft
    static jint get_field_attackTicksLeft(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "attackAnimationTick", "field_6762", "attackTicksLeft", "f_28830_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetIntField(obj, fieldID);
    };

    // setter for static private field net.minecraft.entity.passive.IronGolemEntity#attackTicksLeft
    static void set_field_attackTicksLeft(const jobject &obj, const jint &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "attackAnimationTick", "field_6762", "attackTicksLeft", "f_28830_"), "I");
        return MinecraftSDK::env->SetIntField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.entity.passive.IronGolemEntity#lookingAtVillagerTicksLeft
    static jint get_field_lookingAtVillagerTicksLeft(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("cc", "offerFlowerTick", "field_6759", "lookingAtVillagerTicksLeft", "f_28831_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetIntField(obj, fieldID);
    };

    // setter for static private field net.minecraft.entity.passive.IronGolemEntity#lookingAtVillagerTicksLeft
    static void set_field_lookingAtVillagerTicksLeft(const jobject &obj, const jint &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("cc", "offerFlowerTick", "field_6759", "lookingAtVillagerTicksLeft", "f_28831_"), "I");
        return MinecraftSDK::env->SetIntField(obj, fieldID, value);
    };

    // getter for static private field net.minecraft.entity.passive.IronGolemEntity#ANGER_TIME_RANGE
    [[maybe_unused]] static jobject get_field_ANGER_TIME_RANGE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("cd", "PERSISTENT_ANGER_TIME", "field_25365", "ANGER_TIME_RANGE", "f_28827_"), "Lbqc;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.entity.passive.IronGolemEntity#ANGER_TIME_RANGE
    [[maybe_unused]] static void set_field_ANGER_TIME_RANGE(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("cd", "PERSISTENT_ANGER_TIME", "field_25365", "ANGER_TIME_RANGE", "f_28827_"), "Lbqc;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for private field net.minecraft.entity.passive.IronGolemEntity#angerTime
    static jint get_field_angerTime(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("ce", "remainingPersistentAngerTime", "field_25366", "angerTime", "f_28828_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetIntField(obj, fieldID);
    };

    // setter for static private field net.minecraft.entity.passive.IronGolemEntity#angerTime
    static void set_field_angerTime(const jobject &obj, const jint &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("ce", "remainingPersistentAngerTime", "field_25366", "angerTime", "f_28828_"), "I");
        return MinecraftSDK::env->SetIntField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.entity.passive.IronGolemEntity#angryAt
    static jobject get_field_angryAt(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("cf", "persistentAngerTarget", "field_25367", "angryAt", "f_28829_"), "Ljava/util/UUID;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.entity.passive.IronGolemEntity#angryAt
    static void set_field_angryAt(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("cf", "persistentAngerTarget", "field_25367", "angryAt", "f_28829_"), "Ljava/util/UUID;");
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
    
    static jmethodID methodID_initDataTracker() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "defineSynchedData", "method_5693", "initDataTracker", "m_8097_"), "(Laka$a;)V");
    }

    static void initDataTracker(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_initDataTracker();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_createIronGolemAttributes() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("s", "createAttributes", "method_26886", "createIronGolemAttributes", "m_28883_"), "()Lbuv$a;");
    }

    static jobject createIronGolemAttributes() {
       const auto clazz = self();
       const auto methodID = methodID_createIronGolemAttributes();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID);
    };
    
    static jmethodID methodID_getNextAirUnderwater() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("m", "decreaseAirSupply", "method_6130", "getNextAirUnderwater", "m_7302_"), "(I)I");
    }

    static jint getNextAirUnderwater(const jobject& obj, const jint& arg0) {
                
       const auto methodID = methodID_getNextAirUnderwater();
       return MinecraftSDK::env->CallIntMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_pushAway() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("E", "doPush", "method_6087", "pushAway", "m_7324_"), "(Lbsr;)V");
    }

    static void pushAway(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_pushAway();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_tickMovement() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("m_", "aiStep", "method_6007", "tickMovement", "m_8107_"), "()V");
    }

    static void tickMovement(const jobject& obj) {
                
       const auto methodID = methodID_tickMovement();
       MinecraftSDK::env->CallVoidMethod(obj, methodID);
    };
    
    static jmethodID methodID_shouldSpawnSprintingParticles() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("br", "canSpawnSprintParticle", "method_27298", "shouldSpawnSprintingParticles", "m_5843_"), "()Z");
    }

    static jboolean shouldSpawnSprintingParticles(const jobject& obj) {
                
       const auto methodID = methodID_shouldSpawnSprintingParticles();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID);
    };
    
    static jmethodID methodID_canTarget() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "canAttackType", "method_5973", "canTarget", "m_6549_"), "(Lbsx;)Z");
    }

    static jboolean canTarget(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_canTarget();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0);
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
    
    static jmethodID methodID_chooseRandomAngerTime() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "startPersistentAngerTimer", "method_29509", "chooseRandomAngerTime", "m_6825_"), "()V");
    }

    static void chooseRandomAngerTime(const jobject& obj) {
                
       const auto methodID = methodID_chooseRandomAngerTime();
       MinecraftSDK::env->CallVoidMethod(obj, methodID);
    };
    
    static jmethodID methodID_setAngerTime() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "setRemainingPersistentAngerTime", "method_29514", "setAngerTime", "m_7870_"), "(I)V");
    }

    static void setAngerTime(const jobject& obj, const jint& arg0) {
                
       const auto methodID = methodID_setAngerTime();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_getAngerTime() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getRemainingPersistentAngerTime", "method_29507", "getAngerTime", "m_6784_"), "()I");
    }

    static jint getAngerTime(const jobject& obj) {
                
       const auto methodID = methodID_getAngerTime();
       return MinecraftSDK::env->CallIntMethod(obj, methodID);
    };
    
    static jmethodID methodID_setAngryAt() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "setPersistentAngerTarget", "method_29513", "setAngryAt", "m_6925_"), "(Ljava/util/UUID;)V");
    }

    static void setAngryAt(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_setAngryAt();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_getAngryAt() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "getPersistentAngerTarget", "method_29508", "getAngryAt", "m_6120_"), "()Ljava/util/UUID;");
    }

    static jobject getAngryAt(const jobject& obj) {
                
       const auto methodID = methodID_getAngryAt();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_getAttackDamage() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("gm", "getAttackDamage", "method_22328", "getAttackDamage", "m_28877_"), "()F");
    }

    static jfloat getAttackDamage(const jobject& obj) {
                
       const auto methodID = methodID_getAttackDamage();
       return MinecraftSDK::env->CallFloatMethod(obj, methodID);
    };
    
    static jmethodID methodID_tryAttack() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("D", "doHurtTarget", "method_6121", "tryAttack", "m_7327_"), "(Lbsr;)Z");
    }

    static jboolean tryAttack(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_tryAttack();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_damage() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "hurt", "method_5643", "damage", "m_6469_"), "(Lbrk;F)Z");
    }

    static jboolean damage(const jobject& obj, const jobject& arg0, const jfloat& arg1) {
                
       const auto methodID = methodID_damage();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_getCrackLevel() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("t", "getCrackiness", "method_23347", "getCrackLevel", "m_28873_"), "()Lbsp$a;");
    }

    static jobject getCrackLevel(const jobject& obj) {
                
       const auto methodID = methodID_getCrackLevel();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_handleStatus() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "handleEntityEvent", "method_5711", "handleStatus", "m_7822_"), "(B)V");
    }

    static void handleStatus(const jobject& obj, const jbyte& arg0) {
                
       const auto methodID = methodID_handleStatus();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_getAttackTicksLeft() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("x", "getAttackAnimationTick", "method_6501", "getAttackTicksLeft", "m_28874_"), "()I");
    }

    static jint getAttackTicksLeft(const jobject& obj) {
                
       const auto methodID = methodID_getAttackTicksLeft();
       return MinecraftSDK::env->CallIntMethod(obj, methodID);
    };
    
    static jmethodID methodID_setLookingAtVillager() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("x", "offerFlower", "method_6497", "setLookingAtVillager", "m_28885_"), "(Z)V");
    }

    static void setLookingAtVillager(const jobject& obj, const jboolean& arg0) {
                
       const auto methodID = methodID_setLookingAtVillager();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
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
    
    static jmethodID methodID_interactMob() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "mobInteract", "method_5992", "interactMob", "m_6071_"), "(Lcmx;Lbqq;)Lbqr;");
    }

    static jobject interactMob(const jobject& obj, const jobject& arg0, const jobject& arg1) {
                
       const auto methodID = methodID_interactMob();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_playStepSound() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "playStepSound", "method_5712", "playStepSound", "m_7355_"), "(Ljd;Ldtc;)V");
    }

    static void playStepSound(const jobject& obj, const jobject& arg0, const jobject& arg1) {
                
       const auto methodID = methodID_playStepSound();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_getLookingAtVillagerTicks() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("gk", "getOfferFlowerTick", "method_6502", "getLookingAtVillagerTicks", "m_28875_"), "()I");
    }

    static jint getLookingAtVillagerTicks(const jobject& obj) {
                
       const auto methodID = methodID_getLookingAtVillagerTicks();
       return MinecraftSDK::env->CallIntMethod(obj, methodID);
    };
    
    static jmethodID methodID_isPlayerCreated() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("gl", "isPlayerCreated", "method_6496", "isPlayerCreated", "m_28876_"), "()Z");
    }

    static jboolean isPlayerCreated(const jobject& obj) {
                
       const auto methodID = methodID_isPlayerCreated();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID);
    };
    
    static jmethodID methodID_setPlayerCreated() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("y", "setPlayerCreated", "method_6499", "setPlayerCreated", "m_28887_"), "(Z)V");
    }

    static void setPlayerCreated(const jobject& obj, const jboolean& arg0) {
                
       const auto methodID = methodID_setPlayerCreated();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_onDeath() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "die", "method_6078", "onDeath", "m_6667_"), "(Lbrk;)V");
    }

    static void onDeath(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_onDeath();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_canSpawn() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "checkSpawnObstruction", "method_5957", "canSpawn", "m_6914_"), "(Ldcz;)Z");
    }

    static jboolean canSpawn(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_canSpawn();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_getLeashOffset() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("cM", "getLeashOffset", "method_29919", "getLeashOffset", "m_7939_"), "()Lexc;");
    }

    static jobject getLeashOffset(const jobject& obj) {
                
       const auto methodID = methodID_getLeashOffset();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_ENTITY_PASSIVE_IRONGOLEMENTITY_HPP