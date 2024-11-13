// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_WORLD_GEN_FEATURE_FEATURECONFIG_HPP
#define NET_MINECRAFT_WORLD_GEN_FEATURE_FEATURECONFIG_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.world.gen.feature.FeatureConfig
 * Remapped: eei
 */
namespace FeatureConfig {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("eei", "net/minecraft/world/level/levelgen/feature/configurations/FeatureConfiguration", "net/minecraft/class_3037", "net/minecraft/world/gen/feature/FeatureConfig", "net/minecraft/src/C_2338_"));
        }
        return cachedClass;
    };

    // getter for static public field net.minecraft.world.gen.feature.FeatureConfig#DEFAULT
    [[maybe_unused]] static jobject get_field_DEFAULT() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("m", "NONE", "field_13603", "DEFAULT", "f_67737_"), "Leep;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.world.gen.feature.FeatureConfig#DEFAULT
    [[maybe_unused]] static void set_field_DEFAULT(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("m", "NONE", "field_13603", "DEFAULT", "f_67737_"), "Leep;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
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

#endif // NET_MINECRAFT_WORLD_GEN_FEATURE_FEATURECONFIG_HPP