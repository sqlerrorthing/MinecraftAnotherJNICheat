// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_NBT_NBTLONG$CACHE_HPP
#define NET_MINECRAFT_NBT_NBTLONG$CACHE_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.nbt.NbtLong$Cache
 * Remapped: uj$a
 */
namespace NbtLong$Cache {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("uj$a", "net/minecraft/nbt/LongTag$Cache", "net/minecraft/class_2503$class_4612", "net/minecraft/nbt/NbtLong$Cache", "net/minecraft/src/C_4934_$C_4936_"));
        }
        return cachedClass;
    };

    // getter for static private field net.minecraft.nbt.NbtLong$Cache#MAX
    [[maybe_unused]] static jint get_field_MAX() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "HIGH", "field_33202", "MAX", "f_177999_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.nbt.NbtLong$Cache#MAX
    [[maybe_unused]] static void set_field_MAX(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "HIGH", "field_33202", "MAX", "f_177999_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.nbt.NbtLong$Cache#MIN
    [[maybe_unused]] static jint get_field_MIN() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "LOW", "field_33203", "MIN", "f_178000_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.nbt.NbtLong$Cache#MIN
    [[maybe_unused]] static void set_field_MIN(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "LOW", "field_33203", "MIN", "f_178000_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for static default field net.minecraft.nbt.NbtLong$Cache#VALUES
    [[maybe_unused]] static jobject get_field_VALUES() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "cache", "field_21042", "VALUES", "f_128915_"), "[Luj;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static default field net.minecraft.nbt.NbtLong$Cache#VALUES
    [[maybe_unused]] static void set_field_VALUES(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "cache", "field_21042", "VALUES", "f_128915_"), "[Luj;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

};

#endif // NET_MINECRAFT_NBT_NBTLONG$CACHE_HPP