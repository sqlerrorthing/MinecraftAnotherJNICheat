// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_WORLD_GEN_FEATURE_GEODELAYERTHICKNESSCONFIG_HPP
#define NET_MINECRAFT_WORLD_GEN_FEATURE_GEODELAYERTHICKNESSCONFIG_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.world.gen.feature.GeodeLayerThicknessConfig
 * Remapped: dyx
 */
namespace GeodeLayerThicknessConfig {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("dyx", "net/minecraft/world/level/levelgen/GeodeLayerSettings", "net/minecraft/class_5587", "net/minecraft/world/gen/feature/GeodeLayerThicknessConfig", "net/minecraft/src/C_141334_"));
        }
        return cachedClass;
    };

    // getter for static private field net.minecraft.world.gen.feature.GeodeLayerThicknessConfig#RANGE
    [[maybe_unused]] static jobject get_field_RANGE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("f", "LAYER_RANGE", "field_27311", "RANGE", "f_158346_"), "Lcom/mojang/serialization/Codec;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.world.gen.feature.GeodeLayerThicknessConfig#RANGE
    [[maybe_unused]] static void set_field_RANGE(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("f", "LAYER_RANGE", "field_27311", "RANGE", "f_158346_"), "Lcom/mojang/serialization/Codec;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.world.gen.feature.GeodeLayerThicknessConfig#CODEC
    [[maybe_unused]] static jobject get_field_CODEC() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "CODEC", "field_27306", "CODEC", "f_158341_"), "Lcom/mojang/serialization/Codec;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.world.gen.feature.GeodeLayerThicknessConfig#CODEC
    [[maybe_unused]] static void set_field_CODEC(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "CODEC", "field_27306", "CODEC", "f_158341_"), "Lcom/mojang/serialization/Codec;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for public field net.minecraft.world.gen.feature.GeodeLayerThicknessConfig#filling
    static jdouble get_field_filling(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "filling", "field_27307", "filling", "f_158342_"), "D");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetDoubleField(obj, fieldID);
    };

    // setter for static public field net.minecraft.world.gen.feature.GeodeLayerThicknessConfig#filling
    static void set_field_filling(const jobject &obj, const jdouble &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "filling", "field_27307", "filling", "f_158342_"), "D");
        return MinecraftSDK::env->SetDoubleField(obj, fieldID, value);
    };

    // getter for public field net.minecraft.world.gen.feature.GeodeLayerThicknessConfig#innerLayer
    static jdouble get_field_innerLayer(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "innerLayer", "field_27308", "innerLayer", "f_158343_"), "D");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetDoubleField(obj, fieldID);
    };

    // setter for static public field net.minecraft.world.gen.feature.GeodeLayerThicknessConfig#innerLayer
    static void set_field_innerLayer(const jobject &obj, const jdouble &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "innerLayer", "field_27308", "innerLayer", "f_158343_"), "D");
        return MinecraftSDK::env->SetDoubleField(obj, fieldID, value);
    };

    // getter for public field net.minecraft.world.gen.feature.GeodeLayerThicknessConfig#middleLayer
    static jdouble get_field_middleLayer(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "middleLayer", "field_27309", "middleLayer", "f_158344_"), "D");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetDoubleField(obj, fieldID);
    };

    // setter for static public field net.minecraft.world.gen.feature.GeodeLayerThicknessConfig#middleLayer
    static void set_field_middleLayer(const jobject &obj, const jdouble &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "middleLayer", "field_27309", "middleLayer", "f_158344_"), "D");
        return MinecraftSDK::env->SetDoubleField(obj, fieldID, value);
    };

    // getter for public field net.minecraft.world.gen.feature.GeodeLayerThicknessConfig#outerLayer
    static jdouble get_field_outerLayer(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "outerLayer", "field_27310", "outerLayer", "f_158345_"), "D");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetDoubleField(obj, fieldID);
    };

    // setter for static public field net.minecraft.world.gen.feature.GeodeLayerThicknessConfig#outerLayer
    static void set_field_outerLayer(const jobject &obj, const jdouble &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "outerLayer", "field_27310", "outerLayer", "f_158345_"), "D");
        return MinecraftSDK::env->SetDoubleField(obj, fieldID, value);
    };

};

#endif // NET_MINECRAFT_WORLD_GEN_FEATURE_GEODELAYERTHICKNESSCONFIG_HPP