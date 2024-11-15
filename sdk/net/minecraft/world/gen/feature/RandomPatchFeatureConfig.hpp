// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_WORLD_GEN_FEATURE_RANDOMPATCHFEATURECONFIG_HPP
#define NET_MINECRAFT_WORLD_GEN_FEATURE_RANDOMPATCHFEATURECONFIG_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.world.gen.feature.RandomPatchFeatureConfig
 * Remapped: eev
 */
namespace RandomPatchFeatureConfig {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("eev", "net/minecraft/world/level/levelgen/feature/configurations/RandomPatchConfiguration", "net/minecraft/class_4638", "net/minecraft/world/gen/feature/RandomPatchFeatureConfig", "net/minecraft/src/C_2352_"));
        }
        return cachedClass;
    };

    // getter for private field net.minecraft.world.gen.feature.RandomPatchFeatureConfig#tries
    static jint get_field_tries(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "tries", "comp_149", "tries", "f_67907_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetIntField(obj, fieldID);
    };

    // setter for static private field net.minecraft.world.gen.feature.RandomPatchFeatureConfig#tries
    static void set_field_tries(const jobject &obj, const jint &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "tries", "comp_149", "tries", "f_67907_"), "I");
        return MinecraftSDK::env->SetIntField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.world.gen.feature.RandomPatchFeatureConfig#xzSpread
    static jint get_field_xzSpread(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "xzSpread", "comp_150", "xzSpread", "f_191302_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetIntField(obj, fieldID);
    };

    // setter for static private field net.minecraft.world.gen.feature.RandomPatchFeatureConfig#xzSpread
    static void set_field_xzSpread(const jobject &obj, const jint &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "xzSpread", "comp_150", "xzSpread", "f_191302_"), "I");
        return MinecraftSDK::env->SetIntField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.world.gen.feature.RandomPatchFeatureConfig#ySpread
    static jint get_field_ySpread(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "ySpread", "comp_151", "ySpread", "f_191303_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetIntField(obj, fieldID);
    };

    // setter for static private field net.minecraft.world.gen.feature.RandomPatchFeatureConfig#ySpread
    static void set_field_ySpread(const jobject &obj, const jint &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "ySpread", "comp_151", "ySpread", "f_191303_"), "I");
        return MinecraftSDK::env->SetIntField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.world.gen.feature.RandomPatchFeatureConfig#feature
    static jobject get_field_feature(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "feature", "comp_155", "feature", "f_191304_"), "Ljm;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.world.gen.feature.RandomPatchFeatureConfig#feature
    static void set_field_feature(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "feature", "comp_155", "feature", "f_191304_"), "Ljm;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for static public field net.minecraft.world.gen.feature.RandomPatchFeatureConfig#CODEC
    [[maybe_unused]] static jobject get_field_CODEC() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "CODEC", "field_24902", "CODEC", "f_67902_"), "Lcom/mojang/serialization/Codec;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.world.gen.feature.RandomPatchFeatureConfig#CODEC
    [[maybe_unused]] static void set_field_CODEC(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "CODEC", "field_24902", "CODEC", "f_67902_"), "Lcom/mojang/serialization/Codec;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    static jmethodID methodID__tries() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "tries", "comp_149", "tries", "f_67907_"), "()I");
    }

    static jint _tries(const jobject& obj) {
                
       const auto methodID = methodID__tries();
       return MinecraftSDK::env->CallIntMethod(obj, methodID);
    };
    
    static jmethodID methodID__xzSpread() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "xzSpread", "comp_150", "xzSpread", "f_191302_"), "()I");
    }

    static jint _xzSpread(const jobject& obj) {
                
       const auto methodID = methodID__xzSpread();
       return MinecraftSDK::env->CallIntMethod(obj, methodID);
    };
    
    static jmethodID methodID__ySpread() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "ySpread", "comp_151", "ySpread", "f_191303_"), "()I");
    }

    static jint _ySpread(const jobject& obj) {
                
       const auto methodID = methodID__ySpread();
       return MinecraftSDK::env->CallIntMethod(obj, methodID);
    };
    
    static jmethodID methodID__feature() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("d", "feature", "comp_155", "feature", "f_191304_"), "()Ljm;");
    }

    static jobject _feature(const jobject& obj) {
                
       const auto methodID = methodID__feature();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_WORLD_GEN_FEATURE_RANDOMPATCHFEATURECONFIG_HPP