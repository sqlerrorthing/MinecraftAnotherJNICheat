// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_ENTITY_SPAWNREASON_HPP
#define NET_MINECRAFT_ENTITY_SPAWNREASON_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.entity.SpawnReason
 * Remapped: btr
 */
namespace SpawnReason {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("btr", "net/minecraft/world/entity/MobSpawnType", "net/minecraft/class_3730", "net/minecraft/entity/SpawnReason", "net/minecraft/src/C_529_"));
        }
        return cachedClass;
    };

    // getter for static public field net.minecraft.entity.SpawnReason#NATURAL
    [[maybe_unused]] static jobject get_field_NATURAL() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "NATURAL", "field_16459", "NATURAL", "NATURAL"), "Lbtr;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.entity.SpawnReason#NATURAL
    [[maybe_unused]] static void set_field_NATURAL(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "NATURAL", "field_16459", "NATURAL", "NATURAL"), "Lbtr;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.entity.SpawnReason#CHUNK_GENERATION
    [[maybe_unused]] static jobject get_field_CHUNK_GENERATION() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "CHUNK_GENERATION", "field_16472", "CHUNK_GENERATION", "CHUNK_GENERATION"), "Lbtr;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.entity.SpawnReason#CHUNK_GENERATION
    [[maybe_unused]] static void set_field_CHUNK_GENERATION(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "CHUNK_GENERATION", "field_16472", "CHUNK_GENERATION", "CHUNK_GENERATION"), "Lbtr;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.entity.SpawnReason#SPAWNER
    [[maybe_unused]] static jobject get_field_SPAWNER() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "SPAWNER", "field_16469", "SPAWNER", "SPAWNER"), "Lbtr;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.entity.SpawnReason#SPAWNER
    [[maybe_unused]] static void set_field_SPAWNER(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "SPAWNER", "field_16469", "SPAWNER", "SPAWNER"), "Lbtr;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.entity.SpawnReason#STRUCTURE
    [[maybe_unused]] static jobject get_field_STRUCTURE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("d", "STRUCTURE", "field_16474", "STRUCTURE", "STRUCTURE"), "Lbtr;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.entity.SpawnReason#STRUCTURE
    [[maybe_unused]] static void set_field_STRUCTURE(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("d", "STRUCTURE", "field_16474", "STRUCTURE", "STRUCTURE"), "Lbtr;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.entity.SpawnReason#BREEDING
    [[maybe_unused]] static jobject get_field_BREEDING() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("e", "BREEDING", "field_16466", "BREEDING", "BREEDING"), "Lbtr;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.entity.SpawnReason#BREEDING
    [[maybe_unused]] static void set_field_BREEDING(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("e", "BREEDING", "field_16466", "BREEDING", "BREEDING"), "Lbtr;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.entity.SpawnReason#MOB_SUMMONED
    [[maybe_unused]] static jobject get_field_MOB_SUMMONED() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("f", "MOB_SUMMONED", "field_16471", "MOB_SUMMONED", "MOB_SUMMONED"), "Lbtr;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.entity.SpawnReason#MOB_SUMMONED
    [[maybe_unused]] static void set_field_MOB_SUMMONED(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("f", "MOB_SUMMONED", "field_16471", "MOB_SUMMONED", "MOB_SUMMONED"), "Lbtr;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.entity.SpawnReason#JOCKEY
    [[maybe_unused]] static jobject get_field_JOCKEY() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("g", "JOCKEY", "field_16460", "JOCKEY", "JOCKEY"), "Lbtr;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.entity.SpawnReason#JOCKEY
    [[maybe_unused]] static void set_field_JOCKEY(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("g", "JOCKEY", "field_16460", "JOCKEY", "JOCKEY"), "Lbtr;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.entity.SpawnReason#EVENT
    [[maybe_unused]] static jobject get_field_EVENT() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("h", "EVENT", "field_16467", "EVENT", "EVENT"), "Lbtr;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.entity.SpawnReason#EVENT
    [[maybe_unused]] static void set_field_EVENT(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("h", "EVENT", "field_16467", "EVENT", "EVENT"), "Lbtr;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.entity.SpawnReason#CONVERSION
    [[maybe_unused]] static jobject get_field_CONVERSION() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("i", "CONVERSION", "field_16468", "CONVERSION", "CONVERSION"), "Lbtr;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.entity.SpawnReason#CONVERSION
    [[maybe_unused]] static void set_field_CONVERSION(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("i", "CONVERSION", "field_16468", "CONVERSION", "CONVERSION"), "Lbtr;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.entity.SpawnReason#REINFORCEMENT
    [[maybe_unused]] static jobject get_field_REINFORCEMENT() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("j", "REINFORCEMENT", "field_16463", "REINFORCEMENT", "REINFORCEMENT"), "Lbtr;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.entity.SpawnReason#REINFORCEMENT
    [[maybe_unused]] static void set_field_REINFORCEMENT(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("j", "REINFORCEMENT", "field_16463", "REINFORCEMENT", "REINFORCEMENT"), "Lbtr;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.entity.SpawnReason#TRIGGERED
    [[maybe_unused]] static jobject get_field_TRIGGERED() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("k", "TRIGGERED", "field_16461", "TRIGGERED", "TRIGGERED"), "Lbtr;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.entity.SpawnReason#TRIGGERED
    [[maybe_unused]] static void set_field_TRIGGERED(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("k", "TRIGGERED", "field_16461", "TRIGGERED", "TRIGGERED"), "Lbtr;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.entity.SpawnReason#BUCKET
    [[maybe_unused]] static jobject get_field_BUCKET() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("l", "BUCKET", "field_16473", "BUCKET", "BUCKET"), "Lbtr;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.entity.SpawnReason#BUCKET
    [[maybe_unused]] static void set_field_BUCKET(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("l", "BUCKET", "field_16473", "BUCKET", "BUCKET"), "Lbtr;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.entity.SpawnReason#SPAWN_EGG
    [[maybe_unused]] static jobject get_field_SPAWN_EGG() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("m", "SPAWN_EGG", "field_16465", "SPAWN_EGG", "SPAWN_EGG"), "Lbtr;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.entity.SpawnReason#SPAWN_EGG
    [[maybe_unused]] static void set_field_SPAWN_EGG(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("m", "SPAWN_EGG", "field_16465", "SPAWN_EGG", "SPAWN_EGG"), "Lbtr;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.entity.SpawnReason#COMMAND
    [[maybe_unused]] static jobject get_field_COMMAND() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("n", "COMMAND", "field_16462", "COMMAND", "COMMAND"), "Lbtr;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.entity.SpawnReason#COMMAND
    [[maybe_unused]] static void set_field_COMMAND(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("n", "COMMAND", "field_16462", "COMMAND", "COMMAND"), "Lbtr;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.entity.SpawnReason#DISPENSER
    [[maybe_unused]] static jobject get_field_DISPENSER() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("o", "DISPENSER", "field_16470", "DISPENSER", "DISPENSER"), "Lbtr;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.entity.SpawnReason#DISPENSER
    [[maybe_unused]] static void set_field_DISPENSER(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("o", "DISPENSER", "field_16470", "DISPENSER", "DISPENSER"), "Lbtr;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.entity.SpawnReason#PATROL
    [[maybe_unused]] static jobject get_field_PATROL() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("p", "PATROL", "field_16527", "PATROL", "PATROL"), "Lbtr;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.entity.SpawnReason#PATROL
    [[maybe_unused]] static void set_field_PATROL(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("p", "PATROL", "field_16527", "PATROL", "PATROL"), "Lbtr;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.entity.SpawnReason#TRIAL_SPAWNER
    [[maybe_unused]] static jobject get_field_TRIAL_SPAWNER() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("q", "TRIAL_SPAWNER", "field_47245", "TRIAL_SPAWNER", "TRIAL_SPAWNER"), "Lbtr;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.entity.SpawnReason#TRIAL_SPAWNER
    [[maybe_unused]] static void set_field_TRIAL_SPAWNER(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("q", "TRIAL_SPAWNER", "field_47245", "TRIAL_SPAWNER", "TRIAL_SPAWNER"), "Lbtr;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    static jmethodID methodID_values() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("values", "values", "values", "values", "values"), "()[Lbtr;");
    }

    static jobject values() {
       const auto clazz = self();
       const auto methodID = methodID_values();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID);
    };
    
    static jmethodID methodID_valueOf() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("valueOf", "valueOf", "valueOf", "valueOf", "valueOf"), "(Ljava/lang/String;)Lbtr;");
    }

    static jobject valueOf(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_valueOf();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_isAnySpawner() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "isSpawner", "method_54986", "isAnySpawner", "m_307588_"), "(Lbtr;)Z");
    }

    static jboolean isAnySpawner(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_isAnySpawner();
       return MinecraftSDK::env->CallStaticBooleanMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_isTrialSpawner() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("b", "ignoresLightRequirements", "method_54987", "isTrialSpawner", "m_307154_"), "(Lbtr;)Z");
    }

    static jboolean isTrialSpawner(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_isTrialSpawner();
       return MinecraftSDK::env->CallStaticBooleanMethod(clazz, methodID, arg0);
    };
    
};

#endif // NET_MINECRAFT_ENTITY_SPAWNREASON_HPP