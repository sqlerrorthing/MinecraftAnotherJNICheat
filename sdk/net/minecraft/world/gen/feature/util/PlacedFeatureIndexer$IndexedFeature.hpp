// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_WORLD_GEN_FEATURE_UTIL_PLACEDFEATUREINDEXER$INDEXEDFEATURE_HPP
#define NET_MINECRAFT_WORLD_GEN_FEATURE_UTIL_PLACEDFEATUREINDEXER$INDEXEDFEATURE_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.world.gen.feature.util.PlacedFeatureIndexer$IndexedFeature
 * Remapped: deg$a
 */
namespace PlacedFeatureIndexer$IndexedFeature {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("deg$a", "net/minecraft/world/level/biome/FeatureSorter$1FeatureData", "net/minecraft/class_7510$class_6543", "net/minecraft/world/gen/feature/util/PlacedFeatureIndexer$IndexedFeature", "net/minecraft/src/C_213088_$C_213089_"));
        }
        return cachedClass;
    };

    // getter for private field net.minecraft.world.gen.feature.util.PlacedFeatureIndexer$IndexedFeature#featureIndex
    static jint get_field_featureIndex(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "featureIndex", "comp_234", "featureIndex", "f_220610_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetIntField(obj, fieldID);
    };

    // setter for static private field net.minecraft.world.gen.feature.util.PlacedFeatureIndexer$IndexedFeature#featureIndex
    static void set_field_featureIndex(const jobject &obj, const jint &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "featureIndex", "comp_234", "featureIndex", "f_220610_"), "I");
        return MinecraftSDK::env->SetIntField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.world.gen.feature.util.PlacedFeatureIndexer$IndexedFeature#step
    static jint get_field_step(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "step", "comp_68", "step", "f_220611_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetIntField(obj, fieldID);
    };

    // setter for static private field net.minecraft.world.gen.feature.util.PlacedFeatureIndexer$IndexedFeature#step
    static void set_field_step(const jobject &obj, const jint &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "step", "comp_68", "step", "f_220611_"), "I");
        return MinecraftSDK::env->SetIntField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.world.gen.feature.util.PlacedFeatureIndexer$IndexedFeature#feature
    static jobject get_field_feature(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "feature", "comp_69", "feature", "f_220612_"), "Leiv;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.world.gen.feature.util.PlacedFeatureIndexer$IndexedFeature#feature
    static void set_field_feature(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "feature", "comp_69", "feature", "f_220612_"), "Leiv;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID__featureIndex() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "featureIndex", "comp_234", "featureIndex", "f_220610_"), "()I");
    }

    static jint _featureIndex(const jobject& obj) {
                
       const auto methodID = methodID__featureIndex();
       return MinecraftSDK::env->CallIntMethod(obj, methodID);
    };
    
    static jmethodID methodID__step() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "step", "comp_68", "step", "f_220611_"), "()I");
    }

    static jint _step(const jobject& obj) {
                
       const auto methodID = methodID__step();
       return MinecraftSDK::env->CallIntMethod(obj, methodID);
    };
    
    static jmethodID methodID__feature() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "feature", "comp_69", "feature", "f_220612_"), "()Leiv;");
    }

    static jobject _feature(const jobject& obj) {
                
       const auto methodID = methodID__feature();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_WORLD_GEN_FEATURE_UTIL_PLACEDFEATUREINDEXER$INDEXEDFEATURE_HPP