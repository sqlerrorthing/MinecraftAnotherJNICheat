// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_WORLD_BIOME_SOURCE_CHECKERBOARDBIOMESOURCE_HPP
#define NET_MINECRAFT_WORLD_BIOME_SOURCE_CHECKERBOARDBIOMESOURCE_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.world.biome.source.CheckerboardBiomeSource
 * Remapped: dee
 */
namespace CheckerboardBiomeSource {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("dee", "net/minecraft/world/level/biome/CheckerboardColumnBiomeSource", "net/minecraft/class_1973", "net/minecraft/world/biome/source/CheckerboardBiomeSource", "net/minecraft/src/C_1656_"));
        }
        return cachedClass;
    };

    // getter for static public field net.minecraft.world.biome.source.CheckerboardBiomeSource#CODEC
    [[maybe_unused]] static jobject get_field_CODEC() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "CODEC", "field_24715", "CODEC", "f_48230_"), "Lcom/mojang/serialization/MapCodec;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.world.biome.source.CheckerboardBiomeSource#CODEC
    [[maybe_unused]] static void set_field_CODEC(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "CODEC", "field_24715", "CODEC", "f_48230_"), "Lcom/mojang/serialization/MapCodec;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for private field net.minecraft.world.biome.source.CheckerboardBiomeSource#biomeArray
    static jobject get_field_biomeArray(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "allowedBiomes", "field_9481", "biomeArray", "f_48231_"), "Ljq;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.world.biome.source.CheckerboardBiomeSource#biomeArray
    static void set_field_biomeArray(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "allowedBiomes", "field_9481", "biomeArray", "f_48231_"), "Ljq;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.world.biome.source.CheckerboardBiomeSource#gridSize
    static jint get_field_gridSize(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "bitShift", "field_9480", "gridSize", "f_48232_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetIntField(obj, fieldID);
    };

    // setter for static private field net.minecraft.world.biome.source.CheckerboardBiomeSource#gridSize
    static void set_field_gridSize(const jobject &obj, const jint &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "bitShift", "field_9480", "gridSize", "f_48232_"), "I");
        return MinecraftSDK::env->SetIntField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.world.biome.source.CheckerboardBiomeSource#scale
    static jint get_field_scale(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "size", "field_24716", "scale", "f_48233_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetIntField(obj, fieldID);
    };

    // setter for static private field net.minecraft.world.biome.source.CheckerboardBiomeSource#scale
    static void set_field_scale(const jobject &obj, const jint &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "size", "field_24716", "scale", "f_48233_"), "I");
        return MinecraftSDK::env->SetIntField(obj, fieldID, value);
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
    
};

#endif // NET_MINECRAFT_WORLD_BIOME_SOURCE_CHECKERBOARDBIOMESOURCE_HPP