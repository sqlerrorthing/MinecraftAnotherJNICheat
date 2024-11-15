// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_BLOCK_ENUMS_TRIALSPAWNERSTATE$DISPLAYROTATIONSPEED_HPP
#define NET_MINECRAFT_BLOCK_ENUMS_TRIALSPAWNERSTATE$DISPLAYROTATIONSPEED_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.block.enums.TrialSpawnerState$DisplayRotationSpeed
 * Remapped: dsi$c
 */
namespace TrialSpawnerState$DisplayRotationSpeed {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("dsi$c", "net/minecraft/world/level/block/entity/trialspawner/TrialSpawnerState$SpinningMob", "net/minecraft/class_8967$class_8970", "net/minecraft/block/enums/TrialSpawnerState$DisplayRotationSpeed", "net/minecraft/src/C_302094_$C_301874_"));
        }
        return cachedClass;
    };

    // getter for static private field net.minecraft.block.enums.TrialSpawnerState$DisplayRotationSpeed#NONE
    [[maybe_unused]] static jdouble get_field_NONE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "NONE", "field_47405", "NONE", "f_303131_"), "D");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticDoubleField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.block.enums.TrialSpawnerState$DisplayRotationSpeed#NONE
    [[maybe_unused]] static void set_field_NONE(const jdouble &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "NONE", "field_47405", "NONE", "f_303131_"), "D");
        return MinecraftSDK::env->SetStaticDoubleField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.block.enums.TrialSpawnerState$DisplayRotationSpeed#SLOW
    [[maybe_unused]] static jdouble get_field_SLOW() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "SLOW", "field_47406", "SLOW", "f_303460_"), "D");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticDoubleField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.block.enums.TrialSpawnerState$DisplayRotationSpeed#SLOW
    [[maybe_unused]] static void set_field_SLOW(const jdouble &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "SLOW", "field_47406", "SLOW", "f_303460_"), "D");
        return MinecraftSDK::env->SetStaticDoubleField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.block.enums.TrialSpawnerState$DisplayRotationSpeed#FAST
    [[maybe_unused]] static jdouble get_field_FAST() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "FAST", "field_47407", "FAST", "f_302416_"), "D");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticDoubleField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.block.enums.TrialSpawnerState$DisplayRotationSpeed#FAST
    [[maybe_unused]] static void set_field_FAST(const jdouble &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "FAST", "field_47407", "FAST", "f_302416_"), "D");
        return MinecraftSDK::env->SetStaticDoubleField(clazz, fieldID, value);
    };

};

#endif // NET_MINECRAFT_BLOCK_ENUMS_TRIALSPAWNERSTATE$DISPLAYROTATIONSPEED_HPP