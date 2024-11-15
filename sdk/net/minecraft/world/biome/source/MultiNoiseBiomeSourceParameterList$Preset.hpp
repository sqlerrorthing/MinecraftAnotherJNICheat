// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_WORLD_BIOME_SOURCE_MULTINOISEBIOMESOURCEPARAMETERLIST$PRESET_HPP
#define NET_MINECRAFT_WORLD_BIOME_SOURCE_MULTINOISEBIOMESOURCEPARAMETERLIST$PRESET_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.world.biome.source.MultiNoiseBiomeSourceParameterList$Preset
 * Remapped: dek$a
 */
namespace MultiNoiseBiomeSourceParameterList$Preset {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("dek$a", "net/minecraft/world/level/biome/MultiNoiseBiomeSourceParameterList$Preset", "net/minecraft/class_8197$class_5305", "net/minecraft/world/biome/source/MultiNoiseBiomeSourceParameterList$Preset", "net/minecraft/src/C_273807_$C_273799_"));
        }
        return cachedClass;
    };

    // getter for private field net.minecraft.world.biome.source.MultiNoiseBiomeSourceParameterList$Preset#id
    static jobject get_field_id(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "id", "comp_1309", "id", "f_273944_"), "Lakr;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.world.biome.source.MultiNoiseBiomeSourceParameterList$Preset#id
    static void set_field_id(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "id", "comp_1309", "id", "f_273944_"), "Lakr;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for default field net.minecraft.world.biome.source.MultiNoiseBiomeSourceParameterList$Preset#biomeSourceFunction
    static jobject get_field_biomeSourceFunction(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "provider", "comp_1310", "biomeSourceFunction", "f_273865_"), "Ldek$a$a;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static default field net.minecraft.world.biome.source.MultiNoiseBiomeSourceParameterList$Preset#biomeSourceFunction
    static void set_field_biomeSourceFunction(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "provider", "comp_1310", "biomeSourceFunction", "f_273865_"), "Ldek$a$a;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for static public field net.minecraft.world.biome.source.MultiNoiseBiomeSourceParameterList$Preset#NETHER
    [[maybe_unused]] static jobject get_field_NETHER() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "NETHER", "field_24723", "NETHER", "f_273838_"), "Ldek$a;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.world.biome.source.MultiNoiseBiomeSourceParameterList$Preset#NETHER
    [[maybe_unused]] static void set_field_NETHER(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "NETHER", "field_24723", "NETHER", "f_273838_"), "Ldek$a;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.world.biome.source.MultiNoiseBiomeSourceParameterList$Preset#OVERWORLD
    [[maybe_unused]] static jobject get_field_OVERWORLD() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "OVERWORLD", "field_34499", "OVERWORLD", "f_273915_"), "Ldek$a;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.world.biome.source.MultiNoiseBiomeSourceParameterList$Preset#OVERWORLD
    [[maybe_unused]] static void set_field_OVERWORLD(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "OVERWORLD", "field_34499", "OVERWORLD", "f_273915_"), "Ldek$a;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static default field net.minecraft.world.biome.source.MultiNoiseBiomeSourceParameterList$Preset#BY_IDENTIFIER
    [[maybe_unused]] static jobject get_field_BY_IDENTIFIER() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("f", "BY_NAME", "field_24724", "BY_IDENTIFIER", "f_273938_"), "Ljava/util/Map;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static default field net.minecraft.world.biome.source.MultiNoiseBiomeSourceParameterList$Preset#BY_IDENTIFIER
    [[maybe_unused]] static void set_field_BY_IDENTIFIER(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("f", "BY_NAME", "field_24724", "BY_IDENTIFIER", "f_273938_"), "Ljava/util/Map;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.world.biome.source.MultiNoiseBiomeSourceParameterList$Preset#CODEC
    [[maybe_unused]] static jobject get_field_CODEC() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "CODEC", "field_42990", "CODEC", "f_273825_"), "Lcom/mojang/serialization/Codec;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.world.biome.source.MultiNoiseBiomeSourceParameterList$Preset#CODEC
    [[maybe_unused]] static void set_field_CODEC(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "CODEC", "field_42990", "CODEC", "f_273825_"), "Lcom/mojang/serialization/Codec;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    static jmethodID methodID_getOverworldEntries() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "generateOverworldBiomes", "method_49193", "getOverworldEntries", "m_276781_"), "(Ljava/util/function/Function;)Ldef$c;");
    }

    static jobject getOverworldEntries(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_getOverworldEntries();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_biomeStream() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "usedBiomes", "method_49514", "biomeStream", "m_274593_"), "()Ljava/util/stream/Stream;");
    }

    static jobject biomeStream(const jobject& obj) {
                
       const auto methodID = methodID_biomeStream();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID__id() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "id", "comp_1309", "id", "f_273944_"), "()Lakr;");
    }

    static jobject _id(const jobject& obj) {
                
       const auto methodID = methodID__id();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID__biomeSourceFunction() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "provider", "comp_1310", "biomeSourceFunction", "f_273865_"), "()Ldek$a$a;");
    }

    static jobject _biomeSourceFunction(const jobject& obj) {
                
       const auto methodID = methodID__biomeSourceFunction();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_WORLD_BIOME_SOURCE_MULTINOISEBIOMESOURCEPARAMETERLIST$PRESET_HPP