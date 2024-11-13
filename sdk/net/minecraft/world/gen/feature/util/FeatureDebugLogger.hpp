// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_WORLD_GEN_FEATURE_UTIL_FEATUREDEBUGLOGGER_HPP
#define NET_MINECRAFT_WORLD_GEN_FEATURE_UTIL_FEATUREDEBUGLOGGER_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.world.gen.feature.util.FeatureDebugLogger
 * Remapped: ecf
 */
namespace FeatureDebugLogger {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("ecf", "net/minecraft/world/level/levelgen/feature/FeatureCountTracker", "net/minecraft/class_6785", "net/minecraft/world/gen/feature/util/FeatureDebugLogger", "net/minecraft/src/C_182980_"));
        }
        return cachedClass;
    };

    // getter for static private field net.minecraft.world.gen.feature.util.FeatureDebugLogger#LOGGER
    [[maybe_unused]] static jobject get_field_LOGGER() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "LOGGER", "field_35704", "LOGGER", "f_190876_"), "Lorg/slf4j/Logger;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.world.gen.feature.util.FeatureDebugLogger#LOGGER
    [[maybe_unused]] static void set_field_LOGGER(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "LOGGER", "field_35704", "LOGGER", "f_190876_"), "Lorg/slf4j/Logger;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.world.gen.feature.util.FeatureDebugLogger#FEATURES
    [[maybe_unused]] static jobject get_field_FEATURES() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "data", "field_35705", "FEATURES", "f_190877_"), "Lcom/google/common/cache/LoadingCache;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.world.gen.feature.util.FeatureDebugLogger#FEATURES
    [[maybe_unused]] static void set_field_FEATURES(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "data", "field_35705", "FEATURES", "f_190877_"), "Lcom/google/common/cache/LoadingCache;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    static jmethodID methodID_incrementTotalChunksCount() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "chunkDecorated", "method_39598", "incrementTotalChunksCount", "m_190881_"), "(Laqu;)V");
    }

    static void incrementTotalChunksCount(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_incrementTotalChunksCount();
       MinecraftSDK::env->CallStaticVoidMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_incrementFeatureCount() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "featurePlaced", "method_39599", "incrementFeatureCount", "m_190883_"), "(Laqu;Lebq;Ljava/util/Optional;)V");
    }

    static void incrementFeatureCount(const jobject& arg0, const jobject& arg1, const jobject& arg2) {
       const auto clazz = self();
       const auto methodID = methodID_incrementFeatureCount();
       MinecraftSDK::env->CallStaticVoidMethod(clazz, methodID, arg0, arg1, arg2);
    };
    
    static jmethodID methodID_clear() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "clearCounts", "method_39597", "clear", "m_190880_"), "()V");
    }

    static void clear() {
       const auto clazz = self();
       const auto methodID = methodID_clear();
       MinecraftSDK::env->CallStaticVoidMethod(clazz, methodID);
    };
    
    static jmethodID methodID_dump() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("b", "logCounts", "method_39603", "dump", "m_190899_"), "()V");
    }

    static void dump() {
       const auto clazz = self();
       const auto methodID = methodID_dump();
       MinecraftSDK::env->CallStaticVoidMethod(clazz, methodID);
    };
    
};

#endif // NET_MINECRAFT_WORLD_GEN_FEATURE_UTIL_FEATUREDEBUGLOGGER_HPP