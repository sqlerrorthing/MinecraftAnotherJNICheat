// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_WORLD_BIOME_SPAWNSETTINGS_HPP
#define NET_MINECRAFT_WORLD_BIOME_SPAWNSETTINGS_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.world.biome.SpawnSettings
 * Remapped: dei
 */
namespace SpawnSettings {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("dei", "net/minecraft/world/level/biome/MobSpawnSettings", "net/minecraft/class_5483", "net/minecraft/world/biome/SpawnSettings", "net/minecraft/src/C_1660_"));
        }
        return cachedClass;
    };

    // getter for static private field net.minecraft.world.biome.SpawnSettings#LOGGER
    [[maybe_unused]] static jobject get_field_LOGGER() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("d", "LOGGER", "field_26645", "LOGGER", "f_48325_"), "Lorg/slf4j/Logger;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.world.biome.SpawnSettings#LOGGER
    [[maybe_unused]] static void set_field_LOGGER(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("d", "LOGGER", "field_26645", "LOGGER", "f_48325_"), "Lorg/slf4j/Logger;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.world.biome.SpawnSettings#field_30983
    [[maybe_unused]] static jfloat get_field_field_30983() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("e", "DEFAULT_CREATURE_SPAWN_PROBABILITY", "field_30983", "field_30983", "f_151797_"), "F");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticFloatField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.world.biome.SpawnSettings#field_30983
    [[maybe_unused]] static void set_field_field_30983(const jfloat &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("e", "DEFAULT_CREATURE_SPAWN_PROBABILITY", "field_30983", "field_30983", "f_151797_"), "F");
        return MinecraftSDK::env->SetStaticFloatField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.world.biome.SpawnSettings#EMPTY_ENTRY_POOL
    [[maybe_unused]] static jobject get_field_EMPTY_ENTRY_POOL() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "EMPTY_MOB_LIST", "field_30982", "EMPTY_ENTRY_POOL", "f_151796_"), "Lbpf;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.world.biome.SpawnSettings#EMPTY_ENTRY_POOL
    [[maybe_unused]] static void set_field_EMPTY_ENTRY_POOL(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "EMPTY_MOB_LIST", "field_30982", "EMPTY_ENTRY_POOL", "f_151796_"), "Lbpf;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.world.biome.SpawnSettings#INSTANCE
    [[maybe_unused]] static jobject get_field_INSTANCE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "EMPTY", "field_26646", "INSTANCE", "f_48326_"), "Ldei;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.world.biome.SpawnSettings#INSTANCE
    [[maybe_unused]] static void set_field_INSTANCE(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "EMPTY", "field_26646", "INSTANCE", "f_48326_"), "Ldei;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.world.biome.SpawnSettings#CODEC
    [[maybe_unused]] static jobject get_field_CODEC() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "CODEC", "field_26403", "CODEC", "f_48327_"), "Lcom/mojang/serialization/MapCodec;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.world.biome.SpawnSettings#CODEC
    [[maybe_unused]] static void set_field_CODEC(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "CODEC", "field_26403", "CODEC", "f_48327_"), "Lcom/mojang/serialization/MapCodec;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for private field net.minecraft.world.biome.SpawnSettings#creatureSpawnProbability
    static jfloat get_field_creatureSpawnProbability(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("f", "creatureGenerationProbability", "field_26404", "creatureSpawnProbability", "f_48328_"), "F");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetFloatField(obj, fieldID);
    };

    // setter for static private field net.minecraft.world.biome.SpawnSettings#creatureSpawnProbability
    static void set_field_creatureSpawnProbability(const jobject &obj, const jfloat &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("f", "creatureGenerationProbability", "field_26404", "creatureSpawnProbability", "f_48328_"), "F");
        return MinecraftSDK::env->SetFloatField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.world.biome.SpawnSettings#spawners
    static jobject get_field_spawners(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("g", "spawners", "field_26405", "spawners", "f_48329_"), "Ljava/util/Map;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.world.biome.SpawnSettings#spawners
    static void set_field_spawners(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("g", "spawners", "field_26405", "spawners", "f_48329_"), "Ljava/util/Map;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.world.biome.SpawnSettings#spawnCosts
    static jobject get_field_spawnCosts(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("h", "mobSpawnCosts", "field_26406", "spawnCosts", "f_48330_"), "Ljava/util/Map;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.world.biome.SpawnSettings#spawnCosts
    static void set_field_spawnCosts(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("h", "mobSpawnCosts", "field_26406", "spawnCosts", "f_48330_"), "Ljava/util/Map;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID_getSpawnEntries() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getMobs", "method_31004", "getSpawnEntries", "m_151798_"), "(Lbtq;)Lbpf;");
    }

    static jobject getSpawnEntries(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_getSpawnEntries();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_getSpawnDensity() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getMobSpawnCost", "method_31003", "getSpawnDensity", "m_48345_"), "(Lbsx;)Ldei$b;");
    }

    static jobject getSpawnDensity(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_getSpawnDensity();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_getCreatureSpawnProbability() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getCreatureProbability", "method_31002", "getCreatureSpawnProbability", "m_48344_"), "()F");
    }

    static jfloat getCreatureSpawnProbability(const jobject& obj) {
                
       const auto methodID = methodID_getCreatureSpawnProbability();
       return MinecraftSDK::env->CallFloatMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_WORLD_BIOME_SPAWNSETTINGS_HPP