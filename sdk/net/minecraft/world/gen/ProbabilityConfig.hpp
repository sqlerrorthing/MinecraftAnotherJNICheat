// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_WORLD_GEN_PROBABILITYCONFIG_HPP
#define NET_MINECRAFT_WORLD_GEN_PROBABILITYCONFIG_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.world.gen.ProbabilityConfig
 * Remapped: ees
 */
namespace ProbabilityConfig {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("ees", "net/minecraft/world/level/levelgen/feature/configurations/ProbabilityFeatureConfiguration", "net/minecraft/class_3133", "net/minecraft/world/gen/ProbabilityConfig", "net/minecraft/src/C_2349_"));
        }
        return cachedClass;
    };

    // getter for static public field net.minecraft.world.gen.ProbabilityConfig#CODEC
    [[maybe_unused]] static jobject get_field_CODEC() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("k", "CODEC", "field_24899", "CODEC", "f_67858_"), "Lcom/mojang/serialization/Codec;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.world.gen.ProbabilityConfig#CODEC
    [[maybe_unused]] static void set_field_CODEC(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("k", "CODEC", "field_24899", "CODEC", "f_67858_"), "Lcom/mojang/serialization/Codec;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for public field net.minecraft.world.gen.ProbabilityConfig#probability
    static jfloat get_field_probability(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("l", "probability", "field_13738", "probability", "f_67859_"), "F");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetFloatField(obj, fieldID);
    };

    // setter for static public field net.minecraft.world.gen.ProbabilityConfig#probability
    static void set_field_probability(const jobject &obj, const jfloat &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("l", "probability", "field_13738", "probability", "f_67859_"), "F");
        return MinecraftSDK::env->SetFloatField(obj, fieldID, value);
    };

};

#endif // NET_MINECRAFT_WORLD_GEN_PROBABILITYCONFIG_HPP