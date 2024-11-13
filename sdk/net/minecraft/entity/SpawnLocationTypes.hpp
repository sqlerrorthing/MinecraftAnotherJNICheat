// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_ENTITY_SPAWNLOCATIONTYPES_HPP
#define NET_MINECRAFT_ENTITY_SPAWNLOCATIONTYPES_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.entity.SpawnLocationTypes
 * Remapped: buj
 */
namespace SpawnLocationTypes {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("buj", "net/minecraft/world/entity/SpawnPlacementTypes", "net/minecraft/class_9169", "net/minecraft/entity/SpawnLocationTypes", "net/minecraft/src/C_313500_"));
        }
        return cachedClass;
    };

    // getter for static public field net.minecraft.entity.SpawnLocationTypes#UNRESTRICTED
    [[maybe_unused]] static jobject get_field_UNRESTRICTED() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "NO_RESTRICTIONS", "field_48742", "UNRESTRICTED", "f_315673_"), "Lbui;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.entity.SpawnLocationTypes#UNRESTRICTED
    [[maybe_unused]] static void set_field_UNRESTRICTED(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "NO_RESTRICTIONS", "field_48742", "UNRESTRICTED", "f_315673_"), "Lbui;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.entity.SpawnLocationTypes#IN_WATER
    [[maybe_unused]] static jobject get_field_IN_WATER() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "IN_WATER", "field_48743", "IN_WATER", "f_317066_"), "Lbui;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.entity.SpawnLocationTypes#IN_WATER
    [[maybe_unused]] static void set_field_IN_WATER(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "IN_WATER", "field_48743", "IN_WATER", "f_317066_"), "Lbui;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.entity.SpawnLocationTypes#IN_LAVA
    [[maybe_unused]] static jobject get_field_IN_LAVA() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "IN_LAVA", "field_48744", "IN_LAVA", "f_315430_"), "Lbui;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.entity.SpawnLocationTypes#IN_LAVA
    [[maybe_unused]] static void set_field_IN_LAVA(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "IN_LAVA", "field_48744", "IN_LAVA", "f_315430_"), "Lbui;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.entity.SpawnLocationTypes#ON_GROUND
    [[maybe_unused]] static jobject get_field_ON_GROUND() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("d", "ON_GROUND", "field_48745", "ON_GROUND", "f_314433_"), "Lbui;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.entity.SpawnLocationTypes#ON_GROUND
    [[maybe_unused]] static void set_field_ON_GROUND(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("d", "ON_GROUND", "field_48745", "ON_GROUND", "f_314433_"), "Lbui;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

};

#endif // NET_MINECRAFT_ENTITY_SPAWNLOCATIONTYPES_HPP