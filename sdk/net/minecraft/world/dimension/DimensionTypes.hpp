// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_WORLD_DIMENSION_DIMENSIONTYPES_HPP
#define NET_MINECRAFT_WORLD_DIMENSION_DIMENSIONTYPES_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.world.dimension.DimensionTypes
 * Remapped: dww
 */
namespace DimensionTypes {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("dww", "net/minecraft/world/level/dimension/BuiltinDimensionTypes", "net/minecraft/class_7134", "net/minecraft/world/dimension/DimensionTypes", "net/minecraft/src/C_213127_"));
        }
        return cachedClass;
    };

    // getter for static public field net.minecraft.world.dimension.DimensionTypes#OVERWORLD
    [[maybe_unused]] static jobject get_field_OVERWORLD() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "OVERWORLD", "field_37666", "OVERWORLD", "f_223538_"), "Lakq;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.world.dimension.DimensionTypes#OVERWORLD
    [[maybe_unused]] static void set_field_OVERWORLD(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "OVERWORLD", "field_37666", "OVERWORLD", "f_223538_"), "Lakq;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.world.dimension.DimensionTypes#THE_NETHER
    [[maybe_unused]] static jobject get_field_THE_NETHER() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "NETHER", "field_37667", "THE_NETHER", "f_223539_"), "Lakq;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.world.dimension.DimensionTypes#THE_NETHER
    [[maybe_unused]] static void set_field_THE_NETHER(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "NETHER", "field_37667", "THE_NETHER", "f_223539_"), "Lakq;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.world.dimension.DimensionTypes#THE_END
    [[maybe_unused]] static jobject get_field_THE_END() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "END", "field_37668", "THE_END", "f_223540_"), "Lakq;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.world.dimension.DimensionTypes#THE_END
    [[maybe_unused]] static void set_field_THE_END(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "END", "field_37668", "THE_END", "f_223540_"), "Lakq;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.world.dimension.DimensionTypes#OVERWORLD_CAVES
    [[maybe_unused]] static jobject get_field_OVERWORLD_CAVES() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("d", "OVERWORLD_CAVES", "field_37669", "OVERWORLD_CAVES", "f_223541_"), "Lakq;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.world.dimension.DimensionTypes#OVERWORLD_CAVES
    [[maybe_unused]] static void set_field_OVERWORLD_CAVES(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("d", "OVERWORLD_CAVES", "field_37669", "OVERWORLD_CAVES", "f_223541_"), "Lakq;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.world.dimension.DimensionTypes#OVERWORLD_ID
    [[maybe_unused]] static jobject get_field_OVERWORLD_ID() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("e", "OVERWORLD_EFFECTS", "field_37670", "OVERWORLD_ID", "f_223542_"), "Lakr;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.world.dimension.DimensionTypes#OVERWORLD_ID
    [[maybe_unused]] static void set_field_OVERWORLD_ID(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("e", "OVERWORLD_EFFECTS", "field_37670", "OVERWORLD_ID", "f_223542_"), "Lakr;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.world.dimension.DimensionTypes#THE_NETHER_ID
    [[maybe_unused]] static jobject get_field_THE_NETHER_ID() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("f", "NETHER_EFFECTS", "field_37671", "THE_NETHER_ID", "f_223543_"), "Lakr;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.world.dimension.DimensionTypes#THE_NETHER_ID
    [[maybe_unused]] static void set_field_THE_NETHER_ID(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("f", "NETHER_EFFECTS", "field_37671", "THE_NETHER_ID", "f_223543_"), "Lakr;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.world.dimension.DimensionTypes#THE_END_ID
    [[maybe_unused]] static jobject get_field_THE_END_ID() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("g", "END_EFFECTS", "field_37672", "THE_END_ID", "f_223544_"), "Lakr;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.world.dimension.DimensionTypes#THE_END_ID
    [[maybe_unused]] static void set_field_THE_END_ID(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("g", "END_EFFECTS", "field_37672", "THE_END_ID", "f_223544_"), "Lakr;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    static jmethodID methodID_of() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "register", "method_41524", "of", "m_223547_"), "(Ljava/lang/String;)Lakq;");
    }

    static jobject of(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_of();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0);
    };
    
};

#endif // NET_MINECRAFT_WORLD_DIMENSION_DIMENSIONTYPES_HPP