// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_BLOCK_SPAWNER_TRIALSPAWNERDATA_HPP
#define NET_MINECRAFT_BLOCK_SPAWNER_TRIALSPAWNERDATA_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.block.spawner.TrialSpawnerData
 * Remapped: dsh
 */
namespace TrialSpawnerData {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("dsh", "net/minecraft/world/level/block/entity/trialspawner/TrialSpawnerData", "net/minecraft/class_8966", "net/minecraft/block/spawner/TrialSpawnerData", "net/minecraft/src/C_301979_"));
        }
        return cachedClass;
    };

    // getter for static public field net.minecraft.block.spawner.TrialSpawnerData#SPAWN_DATA_KEY
    [[maybe_unused]] static jobject get_field_SPAWN_DATA_KEY() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "TAG_SPAWN_DATA", "field_47369", "SPAWN_DATA_KEY", "f_302545_"), "Ljava/lang/String;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.block.spawner.TrialSpawnerData#SPAWN_DATA_KEY
    [[maybe_unused]] static void set_field_SPAWN_DATA_KEY(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "TAG_SPAWN_DATA", "field_47369", "SPAWN_DATA_KEY", "f_302545_"), "Ljava/lang/String;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.block.spawner.TrialSpawnerData#NEXT_MOB_SPAWNS_AT_KEY
    [[maybe_unused]] static jobject get_field_NEXT_MOB_SPAWNS_AT_KEY() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("m", "TAG_NEXT_MOB_SPAWNS_AT", "field_47382", "NEXT_MOB_SPAWNS_AT_KEY", "f_303495_"), "Ljava/lang/String;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.block.spawner.TrialSpawnerData#NEXT_MOB_SPAWNS_AT_KEY
    [[maybe_unused]] static void set_field_NEXT_MOB_SPAWNS_AT_KEY(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("m", "TAG_NEXT_MOB_SPAWNS_AT", "field_47382", "NEXT_MOB_SPAWNS_AT_KEY", "f_303495_"), "Ljava/lang/String;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.block.spawner.TrialSpawnerData#field_50190
    [[maybe_unused]] static jint get_field_field_50190() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("n", "DELAY_BETWEEN_PLAYER_SCANS", "field_50190", "field_50190", "f_315937_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.block.spawner.TrialSpawnerData#field_50190
    [[maybe_unused]] static void set_field_field_50190(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("n", "DELAY_BETWEEN_PLAYER_SCANS", "field_50190", "field_50190", "f_315937_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.block.spawner.TrialSpawnerData#field_50191
    [[maybe_unused]] static jint get_field_field_50191() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("o", "TRIAL_OMEN_PER_BAD_OMEN_LEVEL", "field_50191", "field_50191", "f_314589_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.block.spawner.TrialSpawnerData#field_50191
    [[maybe_unused]] static void set_field_field_50191(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("o", "TRIAL_OMEN_PER_BAD_OMEN_LEVEL", "field_50191", "field_50191", "f_314589_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.block.spawner.TrialSpawnerData#codec
    [[maybe_unused]] static jobject get_field_codec() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "MAP_CODEC", "field_47370", "codec", "f_302600_"), "Lcom/mojang/serialization/MapCodec;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.block.spawner.TrialSpawnerData#codec
    [[maybe_unused]] static void set_field_codec(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "MAP_CODEC", "field_47370", "codec", "f_302600_"), "Lcom/mojang/serialization/MapCodec;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for protected field net.minecraft.block.spawner.TrialSpawnerData#players
    static jobject get_field_players(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "detectedPlayers", "field_47371", "players", "f_303462_"), "Ljava/util/Set;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static protected field net.minecraft.block.spawner.TrialSpawnerData#players
    static void set_field_players(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "detectedPlayers", "field_47371", "players", "f_303462_"), "Ljava/util/Set;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for protected field net.minecraft.block.spawner.TrialSpawnerData#spawnedMobsAlive
    static jobject get_field_spawnedMobsAlive(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "currentMobs", "field_47372", "spawnedMobsAlive", "f_302440_"), "Ljava/util/Set;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static protected field net.minecraft.block.spawner.TrialSpawnerData#spawnedMobsAlive
    static void set_field_spawnedMobsAlive(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "currentMobs", "field_47372", "spawnedMobsAlive", "f_302440_"), "Ljava/util/Set;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for protected field net.minecraft.block.spawner.TrialSpawnerData#cooldownEnd
    static jlong get_field_cooldownEnd(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "cooldownEndsAt", "field_47373", "cooldownEnd", "f_303712_"), "J");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetLongField(obj, fieldID);
    };

    // setter for static protected field net.minecraft.block.spawner.TrialSpawnerData#cooldownEnd
    static void set_field_cooldownEnd(const jobject &obj, const jlong &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "cooldownEndsAt", "field_47373", "cooldownEnd", "f_303712_"), "J");
        return MinecraftSDK::env->SetLongField(obj, fieldID, value);
    };

    // getter for protected field net.minecraft.block.spawner.TrialSpawnerData#nextMobSpawnsAt
    static jlong get_field_nextMobSpawnsAt(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("f", "nextMobSpawnsAt", "field_47374", "nextMobSpawnsAt", "f_302458_"), "J");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetLongField(obj, fieldID);
    };

    // setter for static protected field net.minecraft.block.spawner.TrialSpawnerData#nextMobSpawnsAt
    static void set_field_nextMobSpawnsAt(const jobject &obj, const jlong &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("f", "nextMobSpawnsAt", "field_47374", "nextMobSpawnsAt", "f_302458_"), "J");
        return MinecraftSDK::env->SetLongField(obj, fieldID, value);
    };

    // getter for protected field net.minecraft.block.spawner.TrialSpawnerData#totalSpawnedMobs
    static jint get_field_totalSpawnedMobs(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("g", "totalMobsSpawned", "field_47375", "totalSpawnedMobs", "f_302930_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetIntField(obj, fieldID);
    };

    // setter for static protected field net.minecraft.block.spawner.TrialSpawnerData#totalSpawnedMobs
    static void set_field_totalSpawnedMobs(const jobject &obj, const jint &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("g", "totalMobsSpawned", "field_47375", "totalSpawnedMobs", "f_302930_"), "I");
        return MinecraftSDK::env->SetIntField(obj, fieldID, value);
    };

    // getter for protected field net.minecraft.block.spawner.TrialSpawnerData#spawnData
    static jobject get_field_spawnData(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("h", "nextSpawnData", "field_47376", "spawnData", "f_303191_"), "Ljava/util/Optional;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static protected field net.minecraft.block.spawner.TrialSpawnerData#spawnData
    static void set_field_spawnData(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("h", "nextSpawnData", "field_47376", "spawnData", "f_303191_"), "Ljava/util/Optional;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for protected field net.minecraft.block.spawner.TrialSpawnerData#rewardLootTable
    static jobject get_field_rewardLootTable(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("i", "ejectingLootTable", "field_47377", "rewardLootTable", "f_303012_"), "Ljava/util/Optional;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static protected field net.minecraft.block.spawner.TrialSpawnerData#rewardLootTable
    static void set_field_rewardLootTable(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("i", "ejectingLootTable", "field_47377", "rewardLootTable", "f_303012_"), "Ljava/util/Optional;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for protected field net.minecraft.block.spawner.TrialSpawnerData#displayEntity
    static jobject get_field_displayEntity(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("j", "displayEntity", "field_47379", "displayEntity", "f_302195_"), "Lbsr;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static protected field net.minecraft.block.spawner.TrialSpawnerData#displayEntity
    static void set_field_displayEntity(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("j", "displayEntity", "field_47379", "displayEntity", "f_302195_"), "Lbsr;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.block.spawner.TrialSpawnerData#itemsToDropWhenOminous
    static jobject get_field_itemsToDropWhenOminous(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("p", "dispensing", "field_50192", "itemsToDropWhenOminous", "f_314593_"), "Lbpb;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.block.spawner.TrialSpawnerData#itemsToDropWhenOminous
    static void set_field_itemsToDropWhenOminous(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("p", "dispensing", "field_50192", "itemsToDropWhenOminous", "f_314593_"), "Lbpb;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for protected field net.minecraft.block.spawner.TrialSpawnerData#displayEntityRotation
    static jdouble get_field_displayEntityRotation(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("k", "spin", "field_47380", "displayEntityRotation", "f_302632_"), "D");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetDoubleField(obj, fieldID);
    };

    // setter for static protected field net.minecraft.block.spawner.TrialSpawnerData#displayEntityRotation
    static void set_field_displayEntityRotation(const jobject &obj, const jdouble &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("k", "spin", "field_47380", "displayEntityRotation", "f_302632_"), "D");
        return MinecraftSDK::env->SetDoubleField(obj, fieldID, value);
    };

    // getter for protected field net.minecraft.block.spawner.TrialSpawnerData#lastDisplayEntityRotation
    static jdouble get_field_lastDisplayEntityRotation(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("l", "oSpin", "field_47381", "lastDisplayEntityRotation", "f_303293_"), "D");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetDoubleField(obj, fieldID);
    };

    // setter for static protected field net.minecraft.block.spawner.TrialSpawnerData#lastDisplayEntityRotation
    static void set_field_lastDisplayEntityRotation(const jobject &obj, const jdouble &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("l", "oSpin", "field_47381", "lastDisplayEntityRotation", "f_303293_"), "D");
        return MinecraftSDK::env->SetDoubleField(obj, fieldID, value);
    };

    static jmethodID methodID_reset() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "reset", "method_55182", "reset", "m_305301_"), "()V");
    }

    static void reset(const jobject& obj) {
                
       const auto methodID = methodID_reset();
       MinecraftSDK::env->CallVoidMethod(obj, methodID);
    };
    
    static jmethodID methodID_hasSpawnData() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "hasMobToSpawn", "method_55197", "hasSpawnData", "m_306286_"), "(Ldsf;Layw;)Z");
    }

    static jboolean hasSpawnData(const jobject& obj, const jobject& arg0, const jobject& arg1) {
                
       const auto methodID = methodID_hasSpawnData();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_hasSpawnedAllMobs() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "hasFinishedSpawningAllMobs", "method_55192", "hasSpawnedAllMobs", "m_305025_"), "(Ldsg;I)Z");
    }

    static jboolean hasSpawnedAllMobs(const jobject& obj, const jobject& arg0, const jint& arg1) {
                
       const auto methodID = methodID_hasSpawnedAllMobs();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_areMobsDead() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "haveAllCurrentMobsDied", "method_55200", "areMobsDead", "m_307352_"), "()Z");
    }

    static jboolean areMobsDead(const jobject& obj) {
                
       const auto methodID = methodID_areMobsDead();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID);
    };
    
    static jmethodID methodID_canSpawnMore() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "isReadyToSpawnNextMob", "method_55185", "canSpawnMore", "m_305681_"), "(Laqu;Ldsg;I)Z");
    }

    static jboolean canSpawnMore(const jobject& obj, const jobject& arg0, const jobject& arg1, const jint& arg2) {
                
       const auto methodID = methodID_canSpawnMore();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0, arg1, arg2);
    };
    
    static jmethodID methodID_getAdditionalPlayers() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "countAdditionalPlayers", "method_55195", "getAdditionalPlayers", "m_305480_"), "(Ljd;)I");
    }

    static jint getAdditionalPlayers(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_getAdditionalPlayers();
       return MinecraftSDK::env->CallIntMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_updatePlayers() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "tryDetectPlayers", "method_55186", "updatePlayers", "m_304942_"), "(Laqu;Ljd;Ldsf;)V");
    }

    static void updatePlayers(const jobject& obj, const jobject& arg0, const jobject& arg1, const jobject& arg2) {
                
       const auto methodID = methodID_updatePlayers();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1, arg2);
    };
    
    static jmethodID methodID_findPlayerWithOmen() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "findPlayerWithOminousEffect", "method_60789", "findPlayerWithOmen", "m_340436_"), "(Laqu;Ljava/util/List;)Ljava/util/Optional;");
    }

    static jobject findPlayerWithOmen(const jobject& arg0, const jobject& arg1) {
       const auto clazz = self();
       const auto methodID = methodID_findPlayerWithOmen();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_resetAndClearMobs() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "resetAfterBecomingOminous", "method_58717", "resetAndClearMobs", "m_321694_"), "(Ldsf;Laqu;)V");
    }

    static void resetAndClearMobs(const jobject& obj, const jobject& arg0, const jobject& arg1) {
                
       const auto methodID = methodID_resetAndClearMobs();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_applyTrialOmen() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "transformBadOmenIntoTrialOmen", "method_58716", "applyTrialOmen", "m_319436_"), "(Lcmx;)V");
    }

    static void applyTrialOmen(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_applyTrialOmen();
       MinecraftSDK::env->CallStaticVoidMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_isCooldownPast() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "isReadyToOpenShutter", "method_55184", "isCooldownPast", "m_305761_"), "(Laqu;FI)Z");
    }

    static jboolean isCooldownPast(const jobject& obj, const jobject& arg0, const jfloat& arg1, const jint& arg2) {
                
       const auto methodID = methodID_isCooldownPast();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0, arg1, arg2);
    };
    
    static jmethodID methodID_isCooldownAtRepeating() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "isReadyToEjectItems", "method_55198", "isCooldownAtRepeating", "m_305594_"), "(Laqu;FI)Z");
    }

    static jboolean isCooldownAtRepeating(const jobject& obj, const jobject& arg0, const jfloat& arg1, const jint& arg2) {
                
       const auto methodID = methodID_isCooldownAtRepeating();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0, arg1, arg2);
    };
    
    static jmethodID methodID_isCooldownOver() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "isCooldownFinished", "method_55183", "isCooldownOver", "m_305171_"), "(Laqu;)Z");
    }

    static jboolean isCooldownOver(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_isCooldownOver();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_setEntityType() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "setEntityId", "method_55189", "setEntityType", "m_307184_"), "(Ldsf;Layw;Lbsx;)V");
    }

    static void setEntityType(const jobject& obj, const jobject& arg0, const jobject& arg1, const jobject& arg2) {
                
       const auto methodID = methodID_setEntityType();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1, arg2);
    };
    
    static jmethodID methodID_getSpawnData() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "getOrCreateNextSpawnData", "method_55188", "getSpawnData", "m_306716_"), "(Ldsf;Layw;)Lddo;");
    }

    static jobject getSpawnData(const jobject& obj, const jobject& arg0, const jobject& arg1) {
                
       const auto methodID = methodID_getSpawnData();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_setDisplayEntity() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getOrCreateDisplayEntity", "method_55190", "setDisplayEntity", "m_307031_"), "(Ldsf;Ldcw;Ldsi;)Lbsr;");
    }

    static jobject setDisplayEntity(const jobject& obj, const jobject& arg0, const jobject& arg1, const jobject& arg2) {
                
       const auto methodID = methodID_setDisplayEntity();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1, arg2);
    };
    
    static jmethodID methodID_getSpawnDataNbt() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getUpdateTag", "method_55194", "getSpawnDataNbt", "m_307504_"), "(Ldsi;)Lub;");
    }

    static jobject getSpawnDataNbt(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_getSpawnDataNbt();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_getDisplayEntityRotation() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "getSpin", "method_55202", "getDisplayEntityRotation", "m_306486_"), "()D");
    }

    static jdouble getDisplayEntityRotation(const jobject& obj) {
                
       const auto methodID = methodID_getDisplayEntityRotation();
       return MinecraftSDK::env->CallDoubleMethod(obj, methodID);
    };
    
    static jmethodID methodID_getLastDisplayEntityRotation() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("d", "getOSpin", "method_55204", "getLastDisplayEntityRotation", "m_305098_"), "()D");
    }

    static jdouble getLastDisplayEntityRotation(const jobject& obj) {
                
       const auto methodID = methodID_getLastDisplayEntityRotation();
       return MinecraftSDK::env->CallDoubleMethod(obj, methodID);
    };
    
    static jmethodID methodID_getItemsToDropWhenOminous() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getDispensingItems", "method_58714", "getItemsToDropWhenOminous", "m_319751_"), "(Laqu;Ldsg;Ljd;)Lbpb;");
    }

    static jobject getItemsToDropWhenOminous(const jobject& obj, const jobject& arg0, const jobject& arg1, const jobject& arg2) {
                
       const auto methodID = methodID_getItemsToDropWhenOminous();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1, arg2);
    };
    
    static jmethodID methodID_getLootSeed() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "lowResolutionPosition", "method_58715", "getLootSeed", "m_324844_"), "(Laqu;Ljd;)J");
    }

    static jlong getLootSeed(const jobject& arg0, const jobject& arg1) {
       const auto clazz = self();
       const auto methodID = methodID_getLootSeed();
       return MinecraftSDK::env->CallStaticLongMethod(clazz, methodID, arg0, arg1);
    };
    
};

#endif // NET_MINECRAFT_BLOCK_SPAWNER_TRIALSPAWNERDATA_HPP