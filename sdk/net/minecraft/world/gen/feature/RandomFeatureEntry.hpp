// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_WORLD_GEN_FEATURE_RANDOMFEATUREENTRY_HPP
#define NET_MINECRAFT_WORLD_GEN_FEATURE_RANDOMFEATUREENTRY_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.world.gen.feature.RandomFeatureEntry
 * Remapped: edy
 */
namespace RandomFeatureEntry {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("edy", "net/minecraft/world/level/levelgen/feature/WeightedPlacedFeature", "net/minecraft/class_3226", "net/minecraft/world/gen/feature/RandomFeatureEntry", "net/minecraft/src/C_182988_"));
        }
        return cachedClass;
    };

    // getter for static public field net.minecraft.world.gen.feature.RandomFeatureEntry#CODEC
    [[maybe_unused]] static jobject get_field_CODEC() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "CODEC", "field_24864", "CODEC", "f_191171_"), "Lcom/mojang/serialization/Codec;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.world.gen.feature.RandomFeatureEntry#CODEC
    [[maybe_unused]] static void set_field_CODEC(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "CODEC", "field_24864", "CODEC", "f_191171_"), "Lcom/mojang/serialization/Codec;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for public field net.minecraft.world.gen.feature.RandomFeatureEntry#feature
    static jobject get_field_feature(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "feature", "field_14013", "feature", "f_191172_"), "Ljm;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static public field net.minecraft.world.gen.feature.RandomFeatureEntry#feature
    static void set_field_feature(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "feature", "field_14013", "feature", "f_191172_"), "Ljm;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for public field net.minecraft.world.gen.feature.RandomFeatureEntry#chance
    static jfloat get_field_chance(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "chance", "field_14011", "chance", "f_191173_"), "F");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetFloatField(obj, fieldID);
    };

    // setter for static public field net.minecraft.world.gen.feature.RandomFeatureEntry#chance
    static void set_field_chance(const jobject &obj, const jfloat &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "chance", "field_14011", "chance", "f_191173_"), "F");
        return MinecraftSDK::env->SetFloatField(obj, fieldID, value);
    };

    static jmethodID methodID_generate() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "place", "method_14271", "generate", "m_225367_"), "(Ldds;Lduz;Layw;Ljd;)Z");
    }

    static jboolean generate(const jobject& obj, const jobject& arg0, const jobject& arg1, const jobject& arg2, const jobject& arg3) {
                
       const auto methodID = methodID_generate();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0, arg1, arg2, arg3);
    };
    
};

#endif // NET_MINECRAFT_WORLD_GEN_FEATURE_RANDOMFEATUREENTRY_HPP