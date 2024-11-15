// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_WORLD_GEN_CARVER_CARVERCONTEXT_HPP
#define NET_MINECRAFT_WORLD_GEN_CARVER_CARVERCONTEXT_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.world.gen.carver.CarverContext
 * Remapped: eaz
 */
namespace CarverContext {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("eaz", "net/minecraft/world/level/levelgen/carver/CarvingContext", "net/minecraft/class_5873", "net/minecraft/world/gen/carver/CarverContext", "net/minecraft/src/C_141355_"));
        }
        return cachedClass;
    };

    // getter for private field net.minecraft.world.gen.carver.CarverContext#registryManager
    static jobject get_field_registryManager(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "registryAccess", "field_35299", "registryManager", "f_190639_"), "Lka;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.world.gen.carver.CarverContext#registryManager
    static void set_field_registryManager(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "registryAccess", "field_35299", "registryManager", "f_190639_"), "Lka;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.world.gen.carver.CarverContext#chunkNoiseSampler
    static jobject get_field_chunkNoiseSampler(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "noiseChunk", "field_35703", "chunkNoiseSampler", "f_190640_"), "Ldzc;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.world.gen.carver.CarverContext#chunkNoiseSampler
    static void set_field_chunkNoiseSampler(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "noiseChunk", "field_35703", "chunkNoiseSampler", "f_190640_"), "Ldzc;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.world.gen.carver.CarverContext#noiseConfig
    static jobject get_field_noiseConfig(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "randomState", "field_37706", "noiseConfig", "f_224842_"), "Ldzm;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.world.gen.carver.CarverContext#noiseConfig
    static void set_field_noiseConfig(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "randomState", "field_37706", "noiseConfig", "f_224842_"), "Ldzm;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.world.gen.carver.CarverContext#materialRule
    static jobject get_field_materialRule(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "surfaceRule", "field_37707", "materialRule", "f_224843_"), "Ldzp$o;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.world.gen.carver.CarverContext#materialRule
    static void set_field_materialRule(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "surfaceRule", "field_37707", "materialRule", "f_224843_"), "Ldzp$o;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID_applyMaterialRule() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "topMaterial", "method_39114", "applyMaterialRule", "m_190646_"), "(Ljava/util/function/Function;Lduy;Ljd;Z)Ljava/util/Optional;");
    }

    static jobject applyMaterialRule(const jobject& obj, const jobject& arg0, const jobject& arg1, const jobject& arg2, const jboolean& arg3) {
                
       const auto methodID = methodID_applyMaterialRule();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1, arg2, arg3);
    };
    
    static jmethodID methodID_getRegistryManager() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "registryAccess", "method_39115", "getRegistryManager", "m_190651_"), "()Lka;");
    }

    static jobject getRegistryManager(const jobject& obj) {
                
       const auto methodID = methodID_getRegistryManager();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_getNoiseConfig() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("d", "randomState", "method_41570", "getNoiseConfig", "m_224851_"), "()Ldzm;");
    }

    static jobject getNoiseConfig(const jobject& obj) {
                
       const auto methodID = methodID_getNoiseConfig();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_WORLD_GEN_CARVER_CARVERCONTEXT_HPP