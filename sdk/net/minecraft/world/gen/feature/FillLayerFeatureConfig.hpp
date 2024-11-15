// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_WORLD_GEN_FEATURE_FILLLAYERFEATURECONFIG_HPP
#define NET_MINECRAFT_WORLD_GEN_FEATURE_FILLLAYERFEATURECONFIG_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.world.gen.feature.FillLayerFeatureConfig
 * Remapped: eem
 */
namespace FillLayerFeatureConfig {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("eem", "net/minecraft/world/level/levelgen/feature/configurations/LayerConfiguration", "net/minecraft/class_4279", "net/minecraft/world/gen/feature/FillLayerFeatureConfig", "net/minecraft/src/C_2341_"));
        }
        return cachedClass;
    };

    // getter for static public field net.minecraft.world.gen.feature.FillLayerFeatureConfig#CODEC
    [[maybe_unused]] static jobject get_field_CODEC() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "CODEC", "field_24887", "CODEC", "f_67767_"), "Lcom/mojang/serialization/Codec;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.world.gen.feature.FillLayerFeatureConfig#CODEC
    [[maybe_unused]] static void set_field_CODEC(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "CODEC", "field_24887", "CODEC", "f_67767_"), "Lcom/mojang/serialization/Codec;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for public field net.minecraft.world.gen.feature.FillLayerFeatureConfig#height
    static jint get_field_height(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "height", "field_19202", "height", "f_67768_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetIntField(obj, fieldID);
    };

    // setter for static public field net.minecraft.world.gen.feature.FillLayerFeatureConfig#height
    static void set_field_height(const jobject &obj, const jint &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "height", "field_19202", "height", "f_67768_"), "I");
        return MinecraftSDK::env->SetIntField(obj, fieldID, value);
    };

    // getter for public field net.minecraft.world.gen.feature.FillLayerFeatureConfig#state
    static jobject get_field_state(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "state", "field_19203", "state", "f_67769_"), "Ldtc;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static public field net.minecraft.world.gen.feature.FillLayerFeatureConfig#state
    static void set_field_state(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "state", "field_19203", "state", "f_67769_"), "Ldtc;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

};

#endif // NET_MINECRAFT_WORLD_GEN_FEATURE_FILLLAYERFEATURECONFIG_HPP