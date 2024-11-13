// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_WORLD_GEN_FEATURE_RANDOMFEATURECONFIG_HPP
#define NET_MINECRAFT_WORLD_GEN_FEATURE_RANDOMFEATURECONFIG_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.world.gen.feature.RandomFeatureConfig
 * Remapped: eeu
 */
namespace RandomFeatureConfig {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("eeu", "net/minecraft/world/level/levelgen/feature/configurations/RandomFeatureConfiguration", "net/minecraft/class_3141", "net/minecraft/world/gen/feature/RandomFeatureConfig", "net/minecraft/src/C_2351_"));
        }
        return cachedClass;
    };

    // getter for static public field net.minecraft.world.gen.feature.RandomFeatureConfig#CODEC
    [[maybe_unused]] static jobject get_field_CODEC() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "CODEC", "field_24901", "CODEC", "f_67881_"), "Lcom/mojang/serialization/Codec;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.world.gen.feature.RandomFeatureConfig#CODEC
    [[maybe_unused]] static void set_field_CODEC(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "CODEC", "field_24901", "CODEC", "f_67881_"), "Lcom/mojang/serialization/Codec;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for public field net.minecraft.world.gen.feature.RandomFeatureConfig#features
    static jobject get_field_features(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "features", "field_13744", "features", "f_67882_"), "Ljava/util/List;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static public field net.minecraft.world.gen.feature.RandomFeatureConfig#features
    static void set_field_features(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "features", "field_13744", "features", "f_67882_"), "Ljava/util/List;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for public field net.minecraft.world.gen.feature.RandomFeatureConfig#defaultFeature
    static jobject get_field_defaultFeature(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "defaultFeature", "field_13745", "defaultFeature", "f_67883_"), "Ljm;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static public field net.minecraft.world.gen.feature.RandomFeatureConfig#defaultFeature
    static void set_field_defaultFeature(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "defaultFeature", "field_13745", "defaultFeature", "f_67883_"), "Ljm;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID_getDecoratedFeatures() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("e", "getFeatures", "method_30649", "getDecoratedFeatures", "m_7817_"), "()Ljava/util/stream/Stream;");
    }

    static jobject getDecoratedFeatures(const jobject& obj) {
                
       const auto methodID = methodID_getDecoratedFeatures();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_WORLD_GEN_FEATURE_RANDOMFEATURECONFIG_HPP