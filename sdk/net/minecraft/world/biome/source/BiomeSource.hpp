// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_WORLD_BIOME_SOURCE_BIOMESOURCE_HPP
#define NET_MINECRAFT_WORLD_BIOME_SOURCE_BIOMESOURCE_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.world.biome.source.BiomeSource
 * Remapped: dea
 */
namespace BiomeSource {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("dea", "net/minecraft/world/level/biome/BiomeSource", "net/minecraft/class_1966", "net/minecraft/world/biome/source/BiomeSource", "net/minecraft/src/C_1644_"));
        }
        return cachedClass;
    };

    // getter for static public field net.minecraft.world.biome.source.BiomeSource#CODEC
    [[maybe_unused]] static jobject get_field_CODEC() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "CODEC", "field_24713", "CODEC", "f_47888_"), "Lcom/mojang/serialization/Codec;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.world.biome.source.BiomeSource#CODEC
    [[maybe_unused]] static void set_field_CODEC(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "CODEC", "field_24713", "CODEC", "f_47888_"), "Lcom/mojang/serialization/Codec;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for private field net.minecraft.world.biome.source.BiomeSource#biomes
    static jobject get_field_biomes(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "possibleBiomes", "field_20643", "biomes", "f_47891_"), "Ljava/util/function/Supplier;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.world.biome.source.BiomeSource#biomes
    static void set_field_biomes(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "possibleBiomes", "field_20643", "biomes", "f_47891_"), "Ljava/util/function/Supplier;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID_getCodec() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "codec", "method_28442", "getCodec", "m_5820_"), "()Lcom/mojang/serialization/MapCodec;");
    }

    static jobject getCodec(const jobject& obj) {
                
       const auto methodID = methodID_getCodec();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_biomeStream() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "collectPossibleBiomes", "method_49494", "biomeStream", "m_274359_"), "()Ljava/util/stream/Stream;");
    }

    static jobject biomeStream(const jobject& obj) {
                
       const auto methodID = methodID_biomeStream();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_getBiomes() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "possibleBiomes", "method_28443", "getBiomes", "m_207840_"), "()Ljava/util/Set;");
    }

    static jobject getBiomes(const jobject& obj) {
                
       const auto methodID = methodID_getBiomes();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_getBiomesInArea() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getBiomesWithin", "method_8763", "getBiomesInArea", "m_183399_"), "(IIIILdef$f;)Ljava/util/Set;");
    }

    static jobject getBiomesInArea(const jobject& obj, const jint& arg0, const jint& arg1, const jint& arg2, const jint& arg3, const jobject& arg4) {
                
       const auto methodID = methodID_getBiomesInArea();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1, arg2, arg3, arg4);
    };
    
    static jmethodID methodID_locateBiome() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "findBiomeHorizontal", "method_8762", "locateBiome", "m_220570_"), "(IIIILjava/util/function/Predicate;Layw;Ldef$f;)Lcom/mojang/datafixers/util/Pair;");
    }

    static jobject locateBiome(const jobject& obj, const jint& arg0, const jint& arg1, const jint& arg2, const jint& arg3, const jobject& arg4, const jobject& arg5, const jobject& arg6) {
                
       const auto methodID = methodID_locateBiome();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1, arg2, arg3, arg4, arg5, arg6);
    };
    
    static jmethodID methodID__locateBiome() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "findClosestBiome3d", "method_42310", "locateBiome", "m_214004_"), "(Ljd;IIILjava/util/function/Predicate;Ldef$f;Ldcz;)Lcom/mojang/datafixers/util/Pair;");
    }

    static jobject _locateBiome(const jobject& obj, const jobject& arg0, const jint& arg1, const jint& arg2, const jint& arg3, const jobject& arg4, const jobject& arg5, const jobject& arg6) {
                
       const auto methodID = methodID__locateBiome();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1, arg2, arg3, arg4, arg5, arg6);
    };
    
    static jmethodID methodID___locateBiome() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "findBiomeHorizontal", "method_24385", "locateBiome", "m_213971_"), "(IIIIILjava/util/function/Predicate;Layw;ZLdef$f;)Lcom/mojang/datafixers/util/Pair;");
    }

    static jobject __locateBiome(const jobject& obj, const jint& arg0, const jint& arg1, const jint& arg2, const jint& arg3, const jint& arg4, const jobject& arg5, const jobject& arg6, const jboolean& arg7, const jobject& arg8) {
                
       const auto methodID = methodID___locateBiome();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8);
    };
    
    static jmethodID methodID_getBiome() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("getNoiseBiome", "getNoiseBiome", "method_38109", "getBiome", "m_203407_"), "(IIILdef$f;)Ljm;");
    }

    static jobject getBiome(const jobject& obj, const jint& arg0, const jint& arg1, const jint& arg2, const jobject& arg3) {
                
       const auto methodID = methodID_getBiome();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1, arg2, arg3);
    };
    
    static jmethodID methodID_addDebugInfo() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "addDebugInfo", "method_38114", "addDebugInfo", "m_207301_"), "(Ljava/util/List;Ljd;Ldef$f;)V");
    }

    static void addDebugInfo(const jobject& obj, const jobject& arg0, const jobject& arg1, const jobject& arg2) {
                
       const auto methodID = methodID_addDebugInfo();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1, arg2);
    };
    
};

#endif // NET_MINECRAFT_WORLD_BIOME_SOURCE_BIOMESOURCE_HPP