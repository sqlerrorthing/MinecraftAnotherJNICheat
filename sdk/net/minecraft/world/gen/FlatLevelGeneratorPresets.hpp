// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_WORLD_GEN_FLATLEVELGENERATORPRESETS_HPP
#define NET_MINECRAFT_WORLD_GEN_FLATLEVELGENERATORPRESETS_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.world.gen.FlatLevelGeneratorPresets
 * Remapped: ehs
 */
namespace FlatLevelGeneratorPresets {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("ehs", "net/minecraft/world/level/levelgen/flat/FlatLevelGeneratorPresets", "net/minecraft/class_7143", "net/minecraft/world/gen/FlatLevelGeneratorPresets", "net/minecraft/src/C_213157_"));
        }
        return cachedClass;
    };

    // getter for static public field net.minecraft.world.gen.FlatLevelGeneratorPresets#CLASSIC_FLAT
    [[maybe_unused]] static jobject get_field_CLASSIC_FLAT() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "CLASSIC_FLAT", "field_37713", "CLASSIC_FLAT", "f_226263_"), "Lakq;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.world.gen.FlatLevelGeneratorPresets#CLASSIC_FLAT
    [[maybe_unused]] static void set_field_CLASSIC_FLAT(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "CLASSIC_FLAT", "field_37713", "CLASSIC_FLAT", "f_226263_"), "Lakq;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.world.gen.FlatLevelGeneratorPresets#TUNNELERS_DREAM
    [[maybe_unused]] static jobject get_field_TUNNELERS_DREAM() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "TUNNELERS_DREAM", "field_37714", "TUNNELERS_DREAM", "f_226264_"), "Lakq;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.world.gen.FlatLevelGeneratorPresets#TUNNELERS_DREAM
    [[maybe_unused]] static void set_field_TUNNELERS_DREAM(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "TUNNELERS_DREAM", "field_37714", "TUNNELERS_DREAM", "f_226264_"), "Lakq;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.world.gen.FlatLevelGeneratorPresets#WATER_WORLD
    [[maybe_unused]] static jobject get_field_WATER_WORLD() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "WATER_WORLD", "field_37715", "WATER_WORLD", "f_226265_"), "Lakq;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.world.gen.FlatLevelGeneratorPresets#WATER_WORLD
    [[maybe_unused]] static void set_field_WATER_WORLD(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "WATER_WORLD", "field_37715", "WATER_WORLD", "f_226265_"), "Lakq;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.world.gen.FlatLevelGeneratorPresets#OVERWORLD
    [[maybe_unused]] static jobject get_field_OVERWORLD() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("d", "OVERWORLD", "field_37716", "OVERWORLD", "f_226266_"), "Lakq;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.world.gen.FlatLevelGeneratorPresets#OVERWORLD
    [[maybe_unused]] static void set_field_OVERWORLD(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("d", "OVERWORLD", "field_37716", "OVERWORLD", "f_226266_"), "Lakq;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.world.gen.FlatLevelGeneratorPresets#SNOWY_KINGDOM
    [[maybe_unused]] static jobject get_field_SNOWY_KINGDOM() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("e", "SNOWY_KINGDOM", "field_37717", "SNOWY_KINGDOM", "f_226267_"), "Lakq;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.world.gen.FlatLevelGeneratorPresets#SNOWY_KINGDOM
    [[maybe_unused]] static void set_field_SNOWY_KINGDOM(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("e", "SNOWY_KINGDOM", "field_37717", "SNOWY_KINGDOM", "f_226267_"), "Lakq;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.world.gen.FlatLevelGeneratorPresets#BOTTOMLESS_PIT
    [[maybe_unused]] static jobject get_field_BOTTOMLESS_PIT() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("f", "BOTTOMLESS_PIT", "field_37718", "BOTTOMLESS_PIT", "f_226268_"), "Lakq;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.world.gen.FlatLevelGeneratorPresets#BOTTOMLESS_PIT
    [[maybe_unused]] static void set_field_BOTTOMLESS_PIT(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("f", "BOTTOMLESS_PIT", "field_37718", "BOTTOMLESS_PIT", "f_226268_"), "Lakq;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.world.gen.FlatLevelGeneratorPresets#DESERT
    [[maybe_unused]] static jobject get_field_DESERT() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("g", "DESERT", "field_37719", "DESERT", "f_226269_"), "Lakq;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.world.gen.FlatLevelGeneratorPresets#DESERT
    [[maybe_unused]] static void set_field_DESERT(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("g", "DESERT", "field_37719", "DESERT", "f_226269_"), "Lakq;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.world.gen.FlatLevelGeneratorPresets#REDSTONE_READY
    [[maybe_unused]] static jobject get_field_REDSTONE_READY() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("h", "REDSTONE_READY", "field_37720", "REDSTONE_READY", "f_226270_"), "Lakq;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.world.gen.FlatLevelGeneratorPresets#REDSTONE_READY
    [[maybe_unused]] static void set_field_REDSTONE_READY(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("h", "REDSTONE_READY", "field_37720", "REDSTONE_READY", "f_226270_"), "Lakq;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.world.gen.FlatLevelGeneratorPresets#THE_VOID
    [[maybe_unused]] static jobject get_field_THE_VOID() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("i", "THE_VOID", "field_37721", "THE_VOID", "f_226271_"), "Lakq;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.world.gen.FlatLevelGeneratorPresets#THE_VOID
    [[maybe_unused]] static void set_field_THE_VOID(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("i", "THE_VOID", "field_37721", "THE_VOID", "f_226271_"), "Lakq;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    static jmethodID methodID_bootstrap() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "bootstrap", "method_41579", "bootstrap", "m_254848_"), "(Lqq;)V");
    }

    static void bootstrap(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_bootstrap();
       MinecraftSDK::env->CallStaticVoidMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_of() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "register", "method_41580", "of", "m_226276_"), "(Ljava/lang/String;)Lakq;");
    }

    static jobject of(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_of();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0);
    };
    
};

#endif // NET_MINECRAFT_WORLD_GEN_FLATLEVELGENERATORPRESETS_HPP