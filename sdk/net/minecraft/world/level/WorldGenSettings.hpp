// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_WORLD_LEVEL_WORLDGENSETTINGS_HPP
#define NET_MINECRAFT_WORLD_LEVEL_WORLDGENSETTINGS_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.world.level.WorldGenSettings
 * Remapped: dzu
 */
namespace WorldGenSettings {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("dzu", "net/minecraft/world/level/levelgen/WorldGenSettings", "net/minecraft/class_7726", "net/minecraft/world/level/WorldGenSettings", "net/minecraft/src/C_2201_"));
        }
        return cachedClass;
    };

    // getter for private field net.minecraft.world.level.WorldGenSettings#generatorOptions
    static jobject get_field_generatorOptions(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "options", "comp_1019", "generatorOptions", "f_243992_"), "Ldzw;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.world.level.WorldGenSettings#generatorOptions
    static void set_field_generatorOptions(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "options", "comp_1019", "generatorOptions", "f_243992_"), "Ldzw;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.world.level.WorldGenSettings#dimensionOptionsRegistryHolder
    static jobject get_field_dimensionOptionsRegistryHolder(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "dimensions", "comp_1020", "dimensionOptionsRegistryHolder", "f_64605_"), "Ldzt;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.world.level.WorldGenSettings#dimensionOptionsRegistryHolder
    static void set_field_dimensionOptionsRegistryHolder(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "dimensions", "comp_1020", "dimensionOptionsRegistryHolder", "f_64605_"), "Ldzt;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for static public field net.minecraft.world.level.WorldGenSettings#CODEC
    [[maybe_unused]] static jobject get_field_CODEC() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "CODEC", "field_40366", "CODEC", "f_64600_"), "Lcom/mojang/serialization/Codec;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.world.level.WorldGenSettings#CODEC
    [[maybe_unused]] static void set_field_CODEC(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "CODEC", "field_40366", "CODEC", "f_64600_"), "Lcom/mojang/serialization/Codec;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    static jmethodID methodID_encode() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "encode", "method_45538", "encode", "m_246823_"), "(Lcom/mojang/serialization/DynamicOps;Ldzw;Ldzt;)Lcom/mojang/serialization/DataResult;");
    }

    static jobject encode(const jobject& arg0, const jobject& arg1, const jobject& arg2) {
       const auto clazz = self();
       const auto methodID = methodID_encode();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0, arg1, arg2);
    };
    
    static jmethodID methodID__encode() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "encode", "method_45539", "encode", "m_245563_"), "(Lcom/mojang/serialization/DynamicOps;Ldzw;Lka;)Lcom/mojang/serialization/DataResult;");
    }

    static jobject _encode(const jobject& arg0, const jobject& arg1, const jobject& arg2) {
       const auto clazz = self();
       const auto methodID = methodID__encode();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0, arg1, arg2);
    };
    
    static jmethodID methodID__generatorOptions() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "options", "comp_1019", "generatorOptions", "f_243992_"), "()Ldzw;");
    }

    static jobject _generatorOptions(const jobject& obj) {
                
       const auto methodID = methodID__generatorOptions();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID__dimensionOptionsRegistryHolder() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "dimensions", "comp_1020", "dimensionOptionsRegistryHolder", "f_64605_"), "()Ldzt;");
    }

    static jobject _dimensionOptionsRegistryHolder(const jobject& obj) {
                
       const auto methodID = methodID__dimensionOptionsRegistryHolder();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_WORLD_LEVEL_WORLDGENSETTINGS_HPP