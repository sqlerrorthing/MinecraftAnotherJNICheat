// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_BLOCK_SPAWNER_MOBSPAWNERENTRY_HPP
#define NET_MINECRAFT_BLOCK_SPAWNER_MOBSPAWNERENTRY_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.block.spawner.MobSpawnerEntry
 * Remapped: ddo
 */
namespace MobSpawnerEntry {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("ddo", "net/minecraft/world/level/SpawnData", "net/minecraft/class_1952", "net/minecraft/block/spawner/MobSpawnerEntry", "net/minecraft/src/C_1620_"));
        }
        return cachedClass;
    };

    // getter for private field net.minecraft.block.spawner.MobSpawnerEntry#entity
    static jobject get_field_entity(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "entityToSpawn", "comp_64", "entity", "f_186561_"), "Lub;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.block.spawner.MobSpawnerEntry#entity
    static void set_field_entity(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "entityToSpawn", "comp_64", "entity", "f_186561_"), "Lub;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.block.spawner.MobSpawnerEntry#customSpawnRules
    static jobject get_field_customSpawnRules(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "customSpawnRules", "comp_65", "customSpawnRules", "f_186562_"), "Ljava/util/Optional;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.block.spawner.MobSpawnerEntry#customSpawnRules
    static void set_field_customSpawnRules(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "customSpawnRules", "comp_65", "customSpawnRules", "f_186562_"), "Ljava/util/Optional;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.block.spawner.MobSpawnerEntry#equipment
    static jobject get_field_equipment(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("f", "equipment", "comp_2648", "equipment", "f_315543_"), "Ljava/util/Optional;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.block.spawner.MobSpawnerEntry#equipment
    static void set_field_equipment(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("f", "equipment", "comp_2648", "equipment", "f_315543_"), "Ljava/util/Optional;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for static public field net.minecraft.block.spawner.MobSpawnerEntry#ENTITY_KEY
    [[maybe_unused]] static jobject get_field_ENTITY_KEY() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "ENTITY_TAG", "field_40893", "ENTITY_KEY", "f_254695_"), "Ljava/lang/String;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.block.spawner.MobSpawnerEntry#ENTITY_KEY
    [[maybe_unused]] static void set_field_ENTITY_KEY(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "ENTITY_TAG", "field_40893", "ENTITY_KEY", "f_254695_"), "Ljava/lang/String;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.block.spawner.MobSpawnerEntry#CODEC
    [[maybe_unused]] static jobject get_field_CODEC() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "CODEC", "field_34460", "CODEC", "f_186559_"), "Lcom/mojang/serialization/Codec;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.block.spawner.MobSpawnerEntry#CODEC
    [[maybe_unused]] static void set_field_CODEC(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "CODEC", "field_34460", "CODEC", "f_186559_"), "Lcom/mojang/serialization/Codec;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.block.spawner.MobSpawnerEntry#DATA_POOL_CODEC
    [[maybe_unused]] static jobject get_field_DATA_POOL_CODEC() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "LIST_CODEC", "field_34461", "DATA_POOL_CODEC", "f_186560_"), "Lcom/mojang/serialization/Codec;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.block.spawner.MobSpawnerEntry#DATA_POOL_CODEC
    [[maybe_unused]] static void set_field_DATA_POOL_CODEC(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "LIST_CODEC", "field_34461", "DATA_POOL_CODEC", "f_186560_"), "Lcom/mojang/serialization/Codec;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    static jmethodID methodID_getNbt() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getEntityToSpawn", "method_38093", "getNbt", "m_186567_"), "()Lub;");
    }

    static jobject getNbt(const jobject& obj) {
                
       const auto methodID = methodID_getNbt();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_getCustomSpawnRules() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "getCustomSpawnRules", "method_38097", "getCustomSpawnRules", "m_186574_"), "()Ljava/util/Optional;");
    }

    static jobject getCustomSpawnRules(const jobject& obj) {
                
       const auto methodID = methodID_getCustomSpawnRules();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_getEquipment() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "getEquipment", "method_59717", "getEquipment", "m_318950_"), "()Ljava/util/Optional;");
    }

    static jobject getEquipment(const jobject& obj) {
                
       const auto methodID = methodID_getEquipment();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID__entity() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("d", "entityToSpawn", "comp_64", "entity", "f_186561_"), "()Lub;");
    }

    static jobject _entity(const jobject& obj) {
                
       const auto methodID = methodID__entity();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID__customSpawnRules() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("e", "customSpawnRules", "comp_65", "customSpawnRules", "f_186562_"), "()Ljava/util/Optional;");
    }

    static jobject _customSpawnRules(const jobject& obj) {
                
       const auto methodID = methodID__customSpawnRules();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID__equipment() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("f", "equipment", "comp_2648", "equipment", "f_315543_"), "()Ljava/util/Optional;");
    }

    static jobject _equipment(const jobject& obj) {
                
       const auto methodID = methodID__equipment();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_BLOCK_SPAWNER_MOBSPAWNERENTRY_HPP