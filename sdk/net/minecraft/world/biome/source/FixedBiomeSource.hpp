// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_WORLD_BIOME_SOURCE_FIXEDBIOMESOURCE_HPP
#define NET_MINECRAFT_WORLD_BIOME_SOURCE_FIXEDBIOMESOURCE_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.world.biome.source.FixedBiomeSource
 * Remapped: deh
 */
namespace FixedBiomeSource {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("deh", "net/minecraft/world/level/biome/FixedBiomeSource", "net/minecraft/class_1992", "net/minecraft/world/biome/source/FixedBiomeSource", "net/minecraft/src/C_1657_"));
        }
        return cachedClass;
    };

    // getter for static public field net.minecraft.world.biome.source.FixedBiomeSource#CODEC
    [[maybe_unused]] static jobject get_field_CODEC() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "CODEC", "field_24717", "CODEC", "f_48251_"), "Lcom/mojang/serialization/MapCodec;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.world.biome.source.FixedBiomeSource#CODEC
    [[maybe_unused]] static void set_field_CODEC(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "CODEC", "field_24717", "CODEC", "f_48251_"), "Lcom/mojang/serialization/MapCodec;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for private field net.minecraft.world.biome.source.FixedBiomeSource#biome
    static jobject get_field_biome(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "biome", "field_9486", "biome", "f_48252_"), "Ljm;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.world.biome.source.FixedBiomeSource#biome
    static void set_field_biome(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "biome", "field_9486", "biome", "f_48252_"), "Ljm;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID_biomeStream() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "collectPossibleBiomes", "method_49494", "biomeStream", "m_274359_"), "()Ljava/util/stream/Stream;");
    }

    static jobject biomeStream(const jobject& obj) {
                
       const auto methodID = methodID_biomeStream();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_getCodec() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "codec", "method_28442", "getCodec", "m_5820_"), "()Lcom/mojang/serialization/MapCodec;");
    }

    static jobject getCodec(const jobject& obj) {
                
       const auto methodID = methodID_getCodec();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_getBiome() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("getNoiseBiome", "getNoiseBiome", "method_38109", "getBiome", "m_203407_"), "(IIILdef$f;)Ljm;");
    }

    static jobject getBiome(const jobject& obj, const jint& arg0, const jint& arg1, const jint& arg2, const jobject& arg3) {
                
       const auto methodID = methodID_getBiome();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1, arg2, arg3);
    };
    
    static jmethodID methodID_getBiomeForNoiseGen() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("getNoiseBiome", "getNoiseBiome", "method_16359", "getBiomeForNoiseGen", "m_203495_"), "(III)Ljm;");
    }

    static jobject getBiomeForNoiseGen(const jobject& obj, const jint& arg0, const jint& arg1, const jint& arg2) {
                
       const auto methodID = methodID_getBiomeForNoiseGen();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1, arg2);
    };
    
    static jmethodID methodID_locateBiome() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "findBiomeHorizontal", "method_24385", "locateBiome", "m_213971_"), "(IIIIILjava/util/function/Predicate;Layw;ZLdef$f;)Lcom/mojang/datafixers/util/Pair;");
    }

    static jobject locateBiome(const jobject& obj, const jint& arg0, const jint& arg1, const jint& arg2, const jint& arg3, const jint& arg4, const jobject& arg5, const jobject& arg6, const jboolean& arg7, const jobject& arg8) {
                
       const auto methodID = methodID_locateBiome();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8);
    };
    
    static jmethodID methodID__locateBiome() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "findClosestBiome3d", "method_42310", "locateBiome", "m_214004_"), "(Ljd;IIILjava/util/function/Predicate;Ldef$f;Ldcz;)Lcom/mojang/datafixers/util/Pair;");
    }

    static jobject _locateBiome(const jobject& obj, const jobject& arg0, const jint& arg1, const jint& arg2, const jint& arg3, const jobject& arg4, const jobject& arg5, const jobject& arg6) {
                
       const auto methodID = methodID__locateBiome();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1, arg2, arg3, arg4, arg5, arg6);
    };
    
    static jmethodID methodID_getBiomesInArea() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getBiomesWithin", "method_8763", "getBiomesInArea", "m_183399_"), "(IIIILdef$f;)Ljava/util/Set;");
    }

    static jobject getBiomesInArea(const jobject& obj, const jint& arg0, const jint& arg1, const jint& arg2, const jint& arg3, const jobject& arg4) {
                
       const auto methodID = methodID_getBiomesInArea();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1, arg2, arg3, arg4);
    };
    
};

#endif // NET_MINECRAFT_WORLD_BIOME_SOURCE_FIXEDBIOMESOURCE_HPP