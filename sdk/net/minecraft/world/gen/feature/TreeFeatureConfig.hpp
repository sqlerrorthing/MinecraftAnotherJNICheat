// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_WORLD_GEN_FEATURE_TREEFEATURECONFIG_HPP
#define NET_MINECRAFT_WORLD_GEN_FEATURE_TREEFEATURECONFIG_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.world.gen.feature.TreeFeatureConfig
 * Remapped: efe
 */
namespace TreeFeatureConfig {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("efe", "net/minecraft/world/level/levelgen/feature/configurations/TreeConfiguration", "net/minecraft/class_4643", "net/minecraft/world/gen/feature/TreeFeatureConfig", "net/minecraft/src/C_2366_"));
        }
        return cachedClass;
    };

    // getter for static public field net.minecraft.world.gen.feature.TreeFeatureConfig#CODEC
    [[maybe_unused]] static jobject get_field_CODEC() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "CODEC", "field_24921", "CODEC", "f_68184_"), "Lcom/mojang/serialization/Codec;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.world.gen.feature.TreeFeatureConfig#CODEC
    [[maybe_unused]] static void set_field_CODEC(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "CODEC", "field_24921", "CODEC", "f_68184_"), "Lcom/mojang/serialization/Codec;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for public field net.minecraft.world.gen.feature.TreeFeatureConfig#trunkProvider
    static jobject get_field_trunkProvider(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "trunkProvider", "field_21288", "trunkProvider", "f_68185_"), "Legj;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static public field net.minecraft.world.gen.feature.TreeFeatureConfig#trunkProvider
    static void set_field_trunkProvider(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "trunkProvider", "field_21288", "trunkProvider", "f_68185_"), "Legj;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for public field net.minecraft.world.gen.feature.TreeFeatureConfig#dirtProvider
    static jobject get_field_dirtProvider(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "dirtProvider", "field_29279", "dirtProvider", "f_161212_"), "Legj;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static public field net.minecraft.world.gen.feature.TreeFeatureConfig#dirtProvider
    static void set_field_dirtProvider(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "dirtProvider", "field_29279", "dirtProvider", "f_161212_"), "Legj;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for public field net.minecraft.world.gen.feature.TreeFeatureConfig#trunkPlacer
    static jobject get_field_trunkPlacer(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "trunkPlacer", "field_24136", "trunkPlacer", "f_68190_"), "Lehm;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static public field net.minecraft.world.gen.feature.TreeFeatureConfig#trunkPlacer
    static void set_field_trunkPlacer(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "trunkPlacer", "field_24136", "trunkPlacer", "f_68190_"), "Lehm;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for public field net.minecraft.world.gen.feature.TreeFeatureConfig#foliageProvider
    static jobject get_field_foliageProvider(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "foliageProvider", "field_29280", "foliageProvider", "f_161213_"), "Legj;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static public field net.minecraft.world.gen.feature.TreeFeatureConfig#foliageProvider
    static void set_field_foliageProvider(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "foliageProvider", "field_29280", "foliageProvider", "f_161213_"), "Legj;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for public field net.minecraft.world.gen.feature.TreeFeatureConfig#foliagePlacer
    static jobject get_field_foliagePlacer(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("f", "foliagePlacer", "field_24135", "foliagePlacer", "f_68189_"), "Lefu;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static public field net.minecraft.world.gen.feature.TreeFeatureConfig#foliagePlacer
    static void set_field_foliagePlacer(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("f", "foliagePlacer", "field_24135", "foliagePlacer", "f_68189_"), "Lefu;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for public field net.minecraft.world.gen.feature.TreeFeatureConfig#rootPlacer
    static jobject get_field_rootPlacer(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("g", "rootPlacer", "field_38767", "rootPlacer", "f_225455_"), "Ljava/util/Optional;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static public field net.minecraft.world.gen.feature.TreeFeatureConfig#rootPlacer
    static void set_field_rootPlacer(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("g", "rootPlacer", "field_38767", "rootPlacer", "f_225455_"), "Ljava/util/Optional;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for public field net.minecraft.world.gen.feature.TreeFeatureConfig#minimumSize
    static jobject get_field_minimumSize(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("h", "minimumSize", "field_24137", "minimumSize", "f_68191_"), "Lefj;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static public field net.minecraft.world.gen.feature.TreeFeatureConfig#minimumSize
    static void set_field_minimumSize(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("h", "minimumSize", "field_24137", "minimumSize", "f_68191_"), "Lefj;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for public field net.minecraft.world.gen.feature.TreeFeatureConfig#decorators
    static jobject get_field_decorators(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("i", "decorators", "field_21290", "decorators", "f_68187_"), "Ljava/util/List;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static public field net.minecraft.world.gen.feature.TreeFeatureConfig#decorators
    static void set_field_decorators(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("i", "decorators", "field_21290", "decorators", "f_68187_"), "Ljava/util/List;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for public field net.minecraft.world.gen.feature.TreeFeatureConfig#ignoreVines
    static jboolean get_field_ignoreVines(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("j", "ignoreVines", "field_24138", "ignoreVines", "f_68193_"), "Z");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetBooleanField(obj, fieldID);
    };

    // setter for static public field net.minecraft.world.gen.feature.TreeFeatureConfig#ignoreVines
    static void set_field_ignoreVines(const jobject &obj, const jboolean &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("j", "ignoreVines", "field_24138", "ignoreVines", "f_68193_"), "Z");
        return MinecraftSDK::env->SetBooleanField(obj, fieldID, value);
    };

    // getter for public field net.minecraft.world.gen.feature.TreeFeatureConfig#forceDirt
    static jboolean get_field_forceDirt(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("k", "forceDirt", "field_29281", "forceDirt", "f_161215_"), "Z");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetBooleanField(obj, fieldID);
    };

    // setter for static public field net.minecraft.world.gen.feature.TreeFeatureConfig#forceDirt
    static void set_field_forceDirt(const jobject &obj, const jboolean &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("k", "forceDirt", "field_29281", "forceDirt", "f_161215_"), "Z");
        return MinecraftSDK::env->SetBooleanField(obj, fieldID, value);
    };

};

#endif // NET_MINECRAFT_WORLD_GEN_FEATURE_TREEFEATURECONFIG_HPP