// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_WORLD_GEN_FEATURE_UTIL_FEATUREDEBUGLOGGER$FEATURES_HPP
#define NET_MINECRAFT_WORLD_GEN_FEATURE_UTIL_FEATUREDEBUGLOGGER$FEATURES_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.world.gen.feature.util.FeatureDebugLogger$Features
 * Remapped: ecf$b
 */
namespace FeatureDebugLogger$Features {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("ecf$b", "net/minecraft/world/level/levelgen/feature/FeatureCountTracker$LevelData", "net/minecraft/class_6785$class_6787", "net/minecraft/world/gen/feature/util/FeatureDebugLogger$Features", "net/minecraft/src/C_182980_$C_182983_"));
        }
        return cachedClass;
    };

    // getter for private field net.minecraft.world.gen.feature.util.FeatureDebugLogger$Features#featureData
    static jobject get_field_featureData(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "featureData", "comp_283", "featureData", "f_190916_"), "Lit/unimi/dsi/fastutil/objects/Object2IntMap;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.world.gen.feature.util.FeatureDebugLogger$Features#featureData
    static void set_field_featureData(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "featureData", "comp_283", "featureData", "f_190916_"), "Lit/unimi/dsi/fastutil/objects/Object2IntMap;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.world.gen.feature.util.FeatureDebugLogger$Features#chunksWithFeatures
    static jobject get_field_chunksWithFeatures(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "chunksWithFeatures", "comp_284", "chunksWithFeatures", "f_190917_"), "Lorg/apache/commons/lang3/mutable/MutableInt;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.world.gen.feature.util.FeatureDebugLogger$Features#chunksWithFeatures
    static void set_field_chunksWithFeatures(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "chunksWithFeatures", "comp_284", "chunksWithFeatures", "f_190917_"), "Lorg/apache/commons/lang3/mutable/MutableInt;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID__featureData() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "featureData", "comp_283", "featureData", "f_190916_"), "()Lit/unimi/dsi/fastutil/objects/Object2IntMap;");
    }

    static jobject _featureData(const jobject& obj) {
                
       const auto methodID = methodID__featureData();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID__chunksWithFeatures() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "chunksWithFeatures", "comp_284", "chunksWithFeatures", "f_190917_"), "()Lorg/apache/commons/lang3/mutable/MutableInt;");
    }

    static jobject _chunksWithFeatures(const jobject& obj) {
                
       const auto methodID = methodID__chunksWithFeatures();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_WORLD_GEN_FEATURE_UTIL_FEATUREDEBUGLOGGER$FEATURES_HPP