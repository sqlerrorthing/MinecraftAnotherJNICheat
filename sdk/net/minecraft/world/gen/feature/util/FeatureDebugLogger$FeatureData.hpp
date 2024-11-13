// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_WORLD_GEN_FEATURE_UTIL_FEATUREDEBUGLOGGER$FEATUREDATA_HPP
#define NET_MINECRAFT_WORLD_GEN_FEATURE_UTIL_FEATUREDEBUGLOGGER$FEATUREDATA_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.world.gen.feature.util.FeatureDebugLogger$FeatureData
 * Remapped: ecf$a
 */
namespace FeatureDebugLogger$FeatureData {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("ecf$a", "net/minecraft/world/level/levelgen/feature/FeatureCountTracker$FeatureData", "net/minecraft/class_6785$class_6786", "net/minecraft/world/gen/feature/util/FeatureDebugLogger$FeatureData", "net/minecraft/src/C_182980_$C_182982_"));
        }
        return cachedClass;
    };

    // getter for private field net.minecraft.world.gen.feature.util.FeatureDebugLogger$FeatureData#feature
    static jobject get_field_feature(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "feature", "comp_281", "feature", "f_190905_"), "Lebq;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.world.gen.feature.util.FeatureDebugLogger$FeatureData#feature
    static void set_field_feature(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "feature", "comp_281", "feature", "f_190905_"), "Lebq;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.world.gen.feature.util.FeatureDebugLogger$FeatureData#topFeature
    static jobject get_field_topFeature(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "topFeature", "comp_282", "topFeature", "f_190906_"), "Ljava/util/Optional;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.world.gen.feature.util.FeatureDebugLogger$FeatureData#topFeature
    static void set_field_topFeature(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "topFeature", "comp_282", "topFeature", "f_190906_"), "Ljava/util/Optional;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID__feature() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "feature", "comp_281", "feature", "f_190905_"), "()Lebq;");
    }

    static jobject _feature(const jobject& obj) {
                
       const auto methodID = methodID__feature();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID__topFeature() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "topFeature", "comp_282", "topFeature", "f_190906_"), "()Ljava/util/Optional;");
    }

    static jobject _topFeature(const jobject& obj) {
                
       const auto methodID = methodID__topFeature();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_WORLD_GEN_FEATURE_UTIL_FEATUREDEBUGLOGGER$FEATUREDATA_HPP