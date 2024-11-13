// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_WORLD_BIOME_SOURCE_BIOMECOORDS_HPP
#define NET_MINECRAFT_WORLD_BIOME_SOURCE_BIOMECOORDS_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.world.biome.source.BiomeCoords
 * Remapped: jx
 */
namespace BiomeCoords {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("jx", "net/minecraft/core/QuartPos", "net/minecraft/class_5742", "net/minecraft/world/biome/source/BiomeCoords", "net/minecraft/src/C_141783_"));
        }
        return cachedClass;
    };

    // getter for static public field net.minecraft.world.biome.source.BiomeCoords#field_33089
    [[maybe_unused]] static jint get_field_field_33089() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "BITS", "field_33089", "field_33089", "f_175396_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.world.biome.source.BiomeCoords#field_33089
    [[maybe_unused]] static void set_field_field_33089(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "BITS", "field_33089", "field_33089", "f_175396_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.world.biome.source.BiomeCoords#field_33090
    [[maybe_unused]] static jint get_field_field_33090() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "SIZE", "field_33090", "field_33090", "f_175397_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.world.biome.source.BiomeCoords#field_33090
    [[maybe_unused]] static void set_field_field_33090(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "SIZE", "field_33090", "field_33090", "f_175397_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.world.biome.source.BiomeCoords#field_34830
    [[maybe_unused]] static jint get_field_field_34830() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "MASK", "field_34830", "field_34830", "f_194564_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.world.biome.source.BiomeCoords#field_34830
    [[maybe_unused]] static void set_field_field_34830(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "MASK", "field_34830", "field_34830", "f_194564_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.world.biome.source.BiomeCoords#field_33091
    [[maybe_unused]] static jint get_field_field_33091() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("d", "SECTION_TO_QUARTS_BITS", "field_33091", "field_33091", "f_175398_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.world.biome.source.BiomeCoords#field_33091
    [[maybe_unused]] static void set_field_field_33091(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("d", "SECTION_TO_QUARTS_BITS", "field_33091", "field_33091", "f_175398_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    static jmethodID methodID_fromBlock() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "fromBlock", "method_33100", "fromBlock", "m_175400_"), "(I)I");
    }

    static jint fromBlock(const jint& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_fromBlock();
       return MinecraftSDK::env->CallStaticIntMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_method_39920() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("b", "quartLocal", "method_39920", "method_39920", "m_198376_"), "(I)I");
    }

    static jint method_39920(const jint& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_method_39920();
       return MinecraftSDK::env->CallStaticIntMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_toBlock() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("c", "toBlock", "method_33101", "toBlock", "m_175402_"), "(I)I");
    }

    static jint toBlock(const jint& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_toBlock();
       return MinecraftSDK::env->CallStaticIntMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_fromChunk() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("d", "fromSection", "method_33102", "fromChunk", "m_175404_"), "(I)I");
    }

    static jint fromChunk(const jint& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_fromChunk();
       return MinecraftSDK::env->CallStaticIntMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_toChunk() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("e", "toSection", "method_33103", "toChunk", "m_175406_"), "(I)I");
    }

    static jint toChunk(const jint& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_toChunk();
       return MinecraftSDK::env->CallStaticIntMethod(clazz, methodID, arg0);
    };
    
};

#endif // NET_MINECRAFT_WORLD_BIOME_SOURCE_BIOMECOORDS_HPP