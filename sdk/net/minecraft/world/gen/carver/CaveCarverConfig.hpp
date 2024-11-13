// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_WORLD_GEN_CARVER_CAVECARVERCONFIG_HPP
#define NET_MINECRAFT_WORLD_GEN_CARVER_CAVECARVERCONFIG_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.world.gen.carver.CaveCarverConfig
 * Remapped: eba
 */
namespace CaveCarverConfig {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("eba", "net/minecraft/world/level/levelgen/carver/CaveCarverConfiguration", "net/minecraft/class_6108", "net/minecraft/world/gen/carver/CaveCarverConfig", "net/minecraft/src/C_141356_"));
        }
        return cachedClass;
    };

    // getter for static public field net.minecraft.world.gen.carver.CaveCarverConfig#CAVE_CODEC
    [[maybe_unused]] static jobject get_field_CAVE_CODEC() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "CODEC", "field_31491", "CAVE_CODEC", "f_159154_"), "Lcom/mojang/serialization/Codec;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.world.gen.carver.CaveCarverConfig#CAVE_CODEC
    [[maybe_unused]] static void set_field_CAVE_CODEC(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "CODEC", "field_31491", "CAVE_CODEC", "f_159154_"), "Lcom/mojang/serialization/Codec;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for public field net.minecraft.world.gen.carver.CaveCarverConfig#horizontalRadiusMultiplier
    static jobject get_field_horizontalRadiusMultiplier(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "horizontalRadiusMultiplier", "field_31492", "horizontalRadiusMultiplier", "f_159155_"), "Lbpu;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static public field net.minecraft.world.gen.carver.CaveCarverConfig#horizontalRadiusMultiplier
    static void set_field_horizontalRadiusMultiplier(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "horizontalRadiusMultiplier", "field_31492", "horizontalRadiusMultiplier", "f_159155_"), "Lbpu;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for public field net.minecraft.world.gen.carver.CaveCarverConfig#verticalRadiusMultiplier
    static jobject get_field_verticalRadiusMultiplier(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "verticalRadiusMultiplier", "field_31493", "verticalRadiusMultiplier", "f_159156_"), "Lbpu;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static public field net.minecraft.world.gen.carver.CaveCarverConfig#verticalRadiusMultiplier
    static void set_field_verticalRadiusMultiplier(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "verticalRadiusMultiplier", "field_31493", "verticalRadiusMultiplier", "f_159156_"), "Lbpu;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for default field net.minecraft.world.gen.carver.CaveCarverConfig#floorLevel
    static jobject get_field_floorLevel(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("j", "floorLevel", "field_31494", "floorLevel", "f_159157_"), "Lbpu;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static default field net.minecraft.world.gen.carver.CaveCarverConfig#floorLevel
    static void set_field_floorLevel(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("j", "floorLevel", "field_31494", "floorLevel", "f_159157_"), "Lbpu;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

};

#endif // NET_MINECRAFT_WORLD_GEN_CARVER_CAVECARVERCONFIG_HPP