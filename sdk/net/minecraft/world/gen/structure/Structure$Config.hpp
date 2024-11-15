// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_WORLD_GEN_STRUCTURE_STRUCTURE$CONFIG_HPP
#define NET_MINECRAFT_WORLD_GEN_STRUCTURE_STRUCTURE$CONFIG_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.world.gen.structure.Structure$Config
 * Remapped: ejr$c
 */
namespace Structure$Config {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("ejr$c", "net/minecraft/world/level/levelgen/structure/Structure$StructureSettings", "net/minecraft/class_3195$class_7302", "net/minecraft/world/gen/structure/Structure$Config", "net/minecraft/src/C_213164_$C_213167_"));
        }
        return cachedClass;
    };

    // getter for default field net.minecraft.world.gen.structure.Structure$Config#biomes
    static jobject get_field_biomes(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "biomes", "comp_686", "biomes", "f_226689_"), "Ljq;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static default field net.minecraft.world.gen.structure.Structure$Config#biomes
    static void set_field_biomes(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "biomes", "comp_686", "biomes", "f_226689_"), "Ljq;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for default field net.minecraft.world.gen.structure.Structure$Config#spawnOverrides
    static jobject get_field_spawnOverrides(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "spawnOverrides", "comp_687", "spawnOverrides", "f_226690_"), "Ljava/util/Map;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static default field net.minecraft.world.gen.structure.Structure$Config#spawnOverrides
    static void set_field_spawnOverrides(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "spawnOverrides", "comp_687", "spawnOverrides", "f_226690_"), "Ljava/util/Map;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for default field net.minecraft.world.gen.structure.Structure$Config#step
    static jobject get_field_step(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "step", "comp_688", "step", "f_226691_"), "Ldyu$b;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static default field net.minecraft.world.gen.structure.Structure$Config#step
    static void set_field_step(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "step", "comp_688", "step", "f_226691_"), "Ldyu$b;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for default field net.minecraft.world.gen.structure.Structure$Config#terrainAdaptation
    static jobject get_field_terrainAdaptation(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "terrainAdaptation", "comp_689", "terrainAdaptation", "f_226692_"), "Lekc;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static default field net.minecraft.world.gen.structure.Structure$Config#terrainAdaptation
    static void set_field_terrainAdaptation(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "terrainAdaptation", "comp_689", "terrainAdaptation", "f_226692_"), "Lekc;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for static default field net.minecraft.world.gen.structure.Structure$Config#DEFAULT
    [[maybe_unused]] static jobject get_field_DEFAULT() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("f", "DEFAULT", "field_52229", "DEFAULT", "f_336922_"), "Lejr$c;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static default field net.minecraft.world.gen.structure.Structure$Config#DEFAULT
    [[maybe_unused]] static void set_field_DEFAULT(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("f", "DEFAULT", "field_52229", "DEFAULT", "f_336922_"), "Lejr$c;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.world.gen.structure.Structure$Config#CODEC
    [[maybe_unused]] static jobject get_field_CODEC() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "CODEC", "field_38430", "CODEC", "f_226688_"), "Lcom/mojang/serialization/MapCodec;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.world.gen.structure.Structure$Config#CODEC
    [[maybe_unused]] static void set_field_CODEC(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "CODEC", "field_38430", "CODEC", "f_226688_"), "Lcom/mojang/serialization/MapCodec;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    static jmethodID methodID__biomes() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "biomes", "comp_686", "biomes", "f_226689_"), "()Ljq;");
    }

    static jobject _biomes(const jobject& obj) {
                
       const auto methodID = methodID__biomes();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID__spawnOverrides() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "spawnOverrides", "comp_687", "spawnOverrides", "f_226690_"), "()Ljava/util/Map;");
    }

    static jobject _spawnOverrides(const jobject& obj) {
                
       const auto methodID = methodID__spawnOverrides();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID__step() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "step", "comp_688", "step", "f_226691_"), "()Ldyu$b;");
    }

    static jobject _step(const jobject& obj) {
                
       const auto methodID = methodID__step();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID__terrainAdaptation() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("d", "terrainAdaptation", "comp_689", "terrainAdaptation", "f_226692_"), "()Lekc;");
    }

    static jobject _terrainAdaptation(const jobject& obj) {
                
       const auto methodID = methodID__terrainAdaptation();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_WORLD_GEN_STRUCTURE_STRUCTURE$CONFIG_HPP