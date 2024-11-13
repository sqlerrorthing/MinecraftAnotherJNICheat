// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_WORLD_GEN_FEATURE_DRIPSTONECLUSTERFEATURECONFIG_HPP
#define NET_MINECRAFT_WORLD_GEN_FEATURE_DRIPSTONECLUSTERFEATURECONFIG_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.world.gen.feature.DripstoneClusterFeatureConfig
 * Remapped: eeg
 */
namespace DripstoneClusterFeatureConfig {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("eeg", "net/minecraft/world/level/levelgen/feature/configurations/DripstoneClusterConfiguration", "net/minecraft/class_5731", "net/minecraft/world/gen/feature/DripstoneClusterFeatureConfig", "net/minecraft/src/C_141379_"));
        }
        return cachedClass;
    };

    // getter for static public field net.minecraft.world.gen.feature.DripstoneClusterFeatureConfig#CODEC
    [[maybe_unused]] static jobject get_field_CODEC() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "CODEC", "field_28213", "CODEC", "f_160758_"), "Lcom/mojang/serialization/Codec;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.world.gen.feature.DripstoneClusterFeatureConfig#CODEC
    [[maybe_unused]] static void set_field_CODEC(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "CODEC", "field_28213", "CODEC", "f_160758_"), "Lcom/mojang/serialization/Codec;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for public field net.minecraft.world.gen.feature.DripstoneClusterFeatureConfig#floorToCeilingSearchRange
    static jint get_field_floorToCeilingSearchRange(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "floorToCeilingSearchRange", "field_28214", "floorToCeilingSearchRange", "f_160759_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetIntField(obj, fieldID);
    };

    // setter for static public field net.minecraft.world.gen.feature.DripstoneClusterFeatureConfig#floorToCeilingSearchRange
    static void set_field_floorToCeilingSearchRange(const jobject &obj, const jint &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "floorToCeilingSearchRange", "field_28214", "floorToCeilingSearchRange", "f_160759_"), "I");
        return MinecraftSDK::env->SetIntField(obj, fieldID, value);
    };

    // getter for public field net.minecraft.world.gen.feature.DripstoneClusterFeatureConfig#height
    static jobject get_field_height(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "height", "field_28215", "height", "f_160760_"), "Lbpw;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static public field net.minecraft.world.gen.feature.DripstoneClusterFeatureConfig#height
    static void set_field_height(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "height", "field_28215", "height", "f_160760_"), "Lbpw;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for public field net.minecraft.world.gen.feature.DripstoneClusterFeatureConfig#radius
    static jobject get_field_radius(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "radius", "field_28216", "radius", "f_160761_"), "Lbpw;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static public field net.minecraft.world.gen.feature.DripstoneClusterFeatureConfig#radius
    static void set_field_radius(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "radius", "field_28216", "radius", "f_160761_"), "Lbpw;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for public field net.minecraft.world.gen.feature.DripstoneClusterFeatureConfig#maxStalagmiteStalactiteHeightDiff
    static jint get_field_maxStalagmiteStalactiteHeightDiff(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "maxStalagmiteStalactiteHeightDiff", "field_28217", "maxStalagmiteStalactiteHeightDiff", "f_160762_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetIntField(obj, fieldID);
    };

    // setter for static public field net.minecraft.world.gen.feature.DripstoneClusterFeatureConfig#maxStalagmiteStalactiteHeightDiff
    static void set_field_maxStalagmiteStalactiteHeightDiff(const jobject &obj, const jint &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "maxStalagmiteStalactiteHeightDiff", "field_28217", "maxStalagmiteStalactiteHeightDiff", "f_160762_"), "I");
        return MinecraftSDK::env->SetIntField(obj, fieldID, value);
    };

    // getter for public field net.minecraft.world.gen.feature.DripstoneClusterFeatureConfig#heightDeviation
    static jint get_field_heightDeviation(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("f", "heightDeviation", "field_28218", "heightDeviation", "f_160763_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetIntField(obj, fieldID);
    };

    // setter for static public field net.minecraft.world.gen.feature.DripstoneClusterFeatureConfig#heightDeviation
    static void set_field_heightDeviation(const jobject &obj, const jint &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("f", "heightDeviation", "field_28218", "heightDeviation", "f_160763_"), "I");
        return MinecraftSDK::env->SetIntField(obj, fieldID, value);
    };

    // getter for public field net.minecraft.world.gen.feature.DripstoneClusterFeatureConfig#dripstoneBlockLayerThickness
    static jobject get_field_dripstoneBlockLayerThickness(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("g", "dripstoneBlockLayerThickness", "field_28219", "dripstoneBlockLayerThickness", "f_160764_"), "Lbpw;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static public field net.minecraft.world.gen.feature.DripstoneClusterFeatureConfig#dripstoneBlockLayerThickness
    static void set_field_dripstoneBlockLayerThickness(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("g", "dripstoneBlockLayerThickness", "field_28219", "dripstoneBlockLayerThickness", "f_160764_"), "Lbpw;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for public field net.minecraft.world.gen.feature.DripstoneClusterFeatureConfig#density
    static jobject get_field_density(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("h", "density", "field_28220", "density", "f_160765_"), "Lbpu;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static public field net.minecraft.world.gen.feature.DripstoneClusterFeatureConfig#density
    static void set_field_density(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("h", "density", "field_28220", "density", "f_160765_"), "Lbpu;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for public field net.minecraft.world.gen.feature.DripstoneClusterFeatureConfig#wetness
    static jobject get_field_wetness(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("i", "wetness", "field_28221", "wetness", "f_160766_"), "Lbpu;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static public field net.minecraft.world.gen.feature.DripstoneClusterFeatureConfig#wetness
    static void set_field_wetness(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("i", "wetness", "field_28221", "wetness", "f_160766_"), "Lbpu;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for public field net.minecraft.world.gen.feature.DripstoneClusterFeatureConfig#chanceOfDripstoneColumnAtMaxDistanceFromCenter
    static jfloat get_field_chanceOfDripstoneColumnAtMaxDistanceFromCenter(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("j", "chanceOfDripstoneColumnAtMaxDistanceFromCenter", "field_28224", "chanceOfDripstoneColumnAtMaxDistanceFromCenter", "f_160767_"), "F");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetFloatField(obj, fieldID);
    };

    // setter for static public field net.minecraft.world.gen.feature.DripstoneClusterFeatureConfig#chanceOfDripstoneColumnAtMaxDistanceFromCenter
    static void set_field_chanceOfDripstoneColumnAtMaxDistanceFromCenter(const jobject &obj, const jfloat &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("j", "chanceOfDripstoneColumnAtMaxDistanceFromCenter", "field_28224", "chanceOfDripstoneColumnAtMaxDistanceFromCenter", "f_160767_"), "F");
        return MinecraftSDK::env->SetFloatField(obj, fieldID, value);
    };

    // getter for public field net.minecraft.world.gen.feature.DripstoneClusterFeatureConfig#maxDistanceFromCenterAffectingChanceOfDripstoneColumn
    static jint get_field_maxDistanceFromCenterAffectingChanceOfDripstoneColumn(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("k", "maxDistanceFromEdgeAffectingChanceOfDripstoneColumn", "field_28225", "maxDistanceFromCenterAffectingChanceOfDripstoneColumn", "f_160768_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetIntField(obj, fieldID);
    };

    // setter for static public field net.minecraft.world.gen.feature.DripstoneClusterFeatureConfig#maxDistanceFromCenterAffectingChanceOfDripstoneColumn
    static void set_field_maxDistanceFromCenterAffectingChanceOfDripstoneColumn(const jobject &obj, const jint &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("k", "maxDistanceFromEdgeAffectingChanceOfDripstoneColumn", "field_28225", "maxDistanceFromCenterAffectingChanceOfDripstoneColumn", "f_160768_"), "I");
        return MinecraftSDK::env->SetIntField(obj, fieldID, value);
    };

    // getter for public field net.minecraft.world.gen.feature.DripstoneClusterFeatureConfig#maxDistanceFromCenterAffectingHeightBias
    static jint get_field_maxDistanceFromCenterAffectingHeightBias(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("l", "maxDistanceFromCenterAffectingHeightBias", "field_28226", "maxDistanceFromCenterAffectingHeightBias", "f_160769_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetIntField(obj, fieldID);
    };

    // setter for static public field net.minecraft.world.gen.feature.DripstoneClusterFeatureConfig#maxDistanceFromCenterAffectingHeightBias
    static void set_field_maxDistanceFromCenterAffectingHeightBias(const jobject &obj, const jint &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("l", "maxDistanceFromCenterAffectingHeightBias", "field_28226", "maxDistanceFromCenterAffectingHeightBias", "f_160769_"), "I");
        return MinecraftSDK::env->SetIntField(obj, fieldID, value);
    };

};

#endif // NET_MINECRAFT_WORLD_GEN_FEATURE_DRIPSTONECLUSTERFEATURECONFIG_HPP