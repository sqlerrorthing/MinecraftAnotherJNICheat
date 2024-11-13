// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_ENTITY_PASSIVE_DOLPHINENTITY_HPP
#define NET_MINECRAFT_ENTITY_PASSIVE_DOLPHINENTITY_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.entity.passive.DolphinEntity
 * Remapped: cfm
 */
namespace DolphinEntity {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("cfm", "net/minecraft/world/entity/animal/Dolphin", "net/minecraft/class_1433", "net/minecraft/entity/passive/DolphinEntity", "net/minecraft/src/C_826_"));
        }
        return cachedClass;
    };

    // getter for static private field net.minecraft.entity.passive.DolphinEntity#TREASURE_POS
    [[maybe_unused]] static jobject get_field_TREASURE_POS() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("d", "TREASURE_POS", "field_6747", "TREASURE_POS", "f_28312_"), "Lajw;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.entity.passive.DolphinEntity#TREASURE_POS
    [[maybe_unused]] static void set_field_TREASURE_POS(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("d", "TREASURE_POS", "field_6747", "TREASURE_POS", "f_28312_"), "Lajw;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.entity.passive.DolphinEntity#HAS_FISH
    [[maybe_unused]] static jobject get_field_HAS_FISH() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("e", "GOT_FISH", "field_6750", "HAS_FISH", "f_28313_"), "Lajw;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.entity.passive.DolphinEntity#HAS_FISH
    [[maybe_unused]] static void set_field_HAS_FISH(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("e", "GOT_FISH", "field_6750", "HAS_FISH", "f_28313_"), "Lajw;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.entity.passive.DolphinEntity#MOISTNESS
    [[maybe_unused]] static jobject get_field_MOISTNESS() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("cc", "MOISTNESS_LEVEL", "field_6749", "MOISTNESS", "f_28310_"), "Lajw;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.entity.passive.DolphinEntity#MOISTNESS
    [[maybe_unused]] static void set_field_MOISTNESS(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("cc", "MOISTNESS_LEVEL", "field_6749", "MOISTNESS", "f_28310_"), "Lajw;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static default field net.minecraft.entity.passive.DolphinEntity#CLOSE_PLAYER_PREDICATE
    [[maybe_unused]] static jobject get_field_CLOSE_PLAYER_PREDICATE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("cd", "SWIM_WITH_PLAYER_TARGETING", "field_18101", "CLOSE_PLAYER_PREDICATE", "f_28311_"), "Lcef;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static default field net.minecraft.entity.passive.DolphinEntity#CLOSE_PLAYER_PREDICATE
    [[maybe_unused]] static void set_field_CLOSE_PLAYER_PREDICATE(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("cd", "SWIM_WITH_PLAYER_TARGETING", "field_18101", "CLOSE_PLAYER_PREDICATE", "f_28311_"), "Lcef;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.entity.passive.DolphinEntity#MAX_AIR
    [[maybe_unused]] static jint get_field_MAX_AIR() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "TOTAL_AIR_SUPPLY", "field_30326", "MAX_AIR", "f_148892_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.entity.passive.DolphinEntity#MAX_AIR
    [[maybe_unused]] static void set_field_MAX_AIR(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "TOTAL_AIR_SUPPLY", "field_30326", "MAX_AIR", "f_148892_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.entity.passive.DolphinEntity#MAX_MOISTNESS
    [[maybe_unused]] static jint get_field_MAX_MOISTNESS() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("ce", "TOTAL_MOISTNESS_LEVEL", "field_30327", "MAX_MOISTNESS", "f_148893_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.entity.passive.DolphinEntity#MAX_MOISTNESS
    [[maybe_unused]] static void set_field_MAX_MOISTNESS(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("ce", "TOTAL_MOISTNESS_LEVEL", "field_30327", "MAX_MOISTNESS", "f_148893_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.entity.passive.DolphinEntity#CAN_TAKE
    [[maybe_unused]] static jobject get_field_CAN_TAKE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "ALLOWED_ITEMS", "field_6748", "CAN_TAKE", "f_28309_"), "Ljava/util/function/Predicate;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.entity.passive.DolphinEntity#CAN_TAKE
    [[maybe_unused]] static void set_field_CAN_TAKE(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "ALLOWED_ITEMS", "field_6748", "CAN_TAKE", "f_28309_"), "Ljava/util/function/Predicate;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    static jmethodID methodID_initialize() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "finalizeSpawn", "method_5943", "initialize", "m_6518_"), "(Lddl;Lbqp;Lbtr;Lbuh;)Lbuh;");
    }

    static jobject initialize(const jobject& obj, const jobject& arg0, const jobject& arg1, const jobject& arg2, const jobject& arg3) {
                
       const auto methodID = methodID_initialize();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1, arg2, arg3);
    };
    
    static jmethodID methodID_tickWaterBreathingAir() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "handleAirSupply", "method_6673", "tickWaterBreathingAir", "m_6229_"), "(I)V");
    }

    static void tickWaterBreathingAir(const jobject& obj, const jint& arg0) {
                
       const auto methodID = methodID_tickWaterBreathingAir();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_setTreasurePos() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("h", "setTreasurePos", "method_6493", "setTreasurePos", "m_28384_"), "(Ljd;)V");
    }

    static void setTreasurePos(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_setTreasurePos();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_getTreasurePos() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("s", "getTreasurePos", "method_6494", "getTreasurePos", "m_28387_"), "()Ljd;");
    }

    static jobject getTreasurePos(const jobject& obj) {
                
       const auto methodID = methodID_getTreasurePos();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_hasFish() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("t", "gotFish", "method_6487", "hasFish", "m_28377_"), "()Z");
    }

    static jboolean hasFish(const jobject& obj) {
                
       const auto methodID = methodID_hasFish();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID);
    };
    
    static jmethodID methodID_setHasFish() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("x", "setGotFish", "method_6486", "setHasFish", "m_28393_"), "(Z)V");
    }

    static void setHasFish(const jobject& obj, const jboolean& arg0) {
                
       const auto methodID = methodID_setHasFish();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_getMoistness() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("x", "getMoistnessLevel", "method_6491", "getMoistness", "m_28378_"), "()I");
    }

    static jint getMoistness(const jobject& obj) {
                
       const auto methodID = methodID_getMoistness();
       return MinecraftSDK::env->CallIntMethod(obj, methodID);
    };
    
    static jmethodID methodID_setMoistness() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "setMoisntessLevel", "method_6489", "setMoistness", "m_28343_"), "(I)V");
    }

    static void setMoistness(const jobject& obj, const jint& arg0) {
                
       const auto methodID = methodID_setMoistness();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_initDataTracker() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "defineSynchedData", "method_5693", "initDataTracker", "m_8097_"), "(Laka$a;)V");
    }

    static void initDataTracker(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_initDataTracker();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
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
    
    static jmethodID methodID_initGoals() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("B", "registerGoals", "method_5959", "initGoals", "m_8099_"), "()V");
    }

    static void initGoals(const jobject& obj) {
                
       const auto methodID = methodID_initGoals();
       MinecraftSDK::env->CallVoidMethod(obj, methodID);
    };
    
    static jmethodID methodID_createDolphinAttributes() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("gk", "createAttributes", "method_26884", "createDolphinAttributes", "m_28379_"), "()Lbuv$a;");
    }

    static jobject createDolphinAttributes() {
       const auto clazz = self();
       const auto methodID = methodID_createDolphinAttributes();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID);
    };
    
    static jmethodID methodID_createNavigation() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "createNavigation", "method_5965", "createNavigation", "m_6037_"), "(Ldcw;)Lcda;");
    }

    static jobject createNavigation(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_createNavigation();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_playAttackSound() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("gd", "playAttackSound", "method_59928", "playAttackSound", "m_339982_"), "()V");
    }

    static void playAttackSound(const jobject& obj) {
                
       const auto methodID = methodID_playAttackSound();
       MinecraftSDK::env->CallVoidMethod(obj, methodID);
    };
    
    static jmethodID methodID_getMaxAir() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("cl", "getMaxAirSupply", "method_5748", "getMaxAir", "m_6062_"), "()I");
    }

    static jint getMaxAir(const jobject& obj) {
                
       const auto methodID = methodID_getMaxAir();
       return MinecraftSDK::env->CallIntMethod(obj, methodID);
    };
    
    static jmethodID methodID_getNextAirOnLand() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("n", "increaseAirSupply", "method_6064", "getNextAirOnLand", "m_7305_"), "(I)I");
    }

    static jint getNextAirOnLand(const jobject& obj, const jint& arg0) {
                
       const auto methodID = methodID_getNextAirOnLand();
       return MinecraftSDK::env->CallIntMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_getMaxLookPitchChange() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("ac", "getMaxHeadXRot", "method_5978", "getMaxLookPitchChange", "m_8132_"), "()I");
    }

    static jint getMaxLookPitchChange(const jobject& obj) {
                
       const auto methodID = methodID_getMaxLookPitchChange();
       return MinecraftSDK::env->CallIntMethod(obj, methodID);
    };
    
    static jmethodID methodID_getMaxHeadRotation() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("ae", "getMaxHeadYRot", "method_5986", "getMaxHeadRotation", "m_8085_"), "()I");
    }

    static jint getMaxHeadRotation(const jobject& obj) {
                
       const auto methodID = methodID_getMaxHeadRotation();
       return MinecraftSDK::env->CallIntMethod(obj, methodID);
    };
    
    static jmethodID methodID_canStartRiding() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("o", "canRide", "method_5860", "canStartRiding", "m_7341_"), "(Lbsr;)Z");
    }

    static jboolean canStartRiding(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_canStartRiding();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_canEquip() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("f", "canTakeItem", "method_18397", "canEquip", "m_7066_"), "(Lcuq;)Z");
    }

    static jboolean canEquip(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_canEquip();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_loot() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "pickUpItem", "method_5949", "loot", "m_7581_"), "(Lcjh;)V");
    }

    static void loot(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_loot();
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
    
    static jmethodID methodID_handleStatus() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "handleEntityEvent", "method_5711", "handleStatus", "m_7822_"), "(B)V");
    }

    static void handleStatus(const jobject& obj, const jbyte& arg0) {
                
       const auto methodID = methodID_handleStatus();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_spawnParticlesAround() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "addParticlesAroundSelf", "method_6492", "spawnParticlesAround", "m_28337_"), "(Llk;)V");
    }

    static void spawnParticlesAround(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_spawnParticlesAround();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_interactMob() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "mobInteract", "method_5992", "interactMob", "m_6071_"), "(Lcmx;Lbqq;)Lbqr;");
    }

    static jobject interactMob(const jobject& obj, const jobject& arg0, const jobject& arg1) {
                
       const auto methodID = methodID_interactMob();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1);
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
    
    static jmethodID methodID_getAmbientSound() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("v", "getAmbientSound", "method_5994", "getAmbientSound", "m_7515_"), "()Lavo;");
    }

    static jobject getAmbientSound(const jobject& obj) {
                
       const auto methodID = methodID_getAmbientSound();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_getSplashSound() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("aR", "getSwimSplashSound", "method_5625", "getSplashSound", "m_5509_"), "()Lavo;");
    }

    static jobject getSplashSound(const jobject& obj) {
                
       const auto methodID = methodID_getSplashSound();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_getSwimSound() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("aQ", "getSwimSound", "method_5737", "getSwimSound", "m_5501_"), "()Lavo;");
    }

    static jobject getSwimSound(const jobject& obj) {
                
       const auto methodID = methodID_getSwimSound();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_isNearTarget() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("gl", "closeToNextPos", "method_6484", "isNearTarget", "m_28380_"), "()Z");
    }

    static jboolean isNearTarget(const jobject& obj) {
                
       const auto methodID = methodID_isNearTarget();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID);
    };
    
    static jmethodID methodID_travel() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "travel", "method_6091", "travel", "m_7023_"), "(Lexc;)V");
    }

    static void travel(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_travel();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_canBeLeashed() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("y", "canBeLeashed", "method_5931", "canBeLeashed", "m_6573_"), "()Z");
    }

    static jboolean canBeLeashed(const jobject& obj) {
                
       const auto methodID = methodID_canBeLeashed();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_ENTITY_PASSIVE_DOLPHINENTITY_HPP