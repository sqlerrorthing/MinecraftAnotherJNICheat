// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_SOUND_BIOMEMOODSOUND_HPP
#define NET_MINECRAFT_SOUND_BIOMEMOODSOUND_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.sound.BiomeMoodSound
 * Remapped: ddu
 */
namespace BiomeMoodSound {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("ddu", "net/minecraft/world/level/biome/AmbientMoodSettings", "net/minecraft/class_4968", "net/minecraft/sound/BiomeMoodSound", "net/minecraft/src/C_1627_"));
        }
        return cachedClass;
    };

    // getter for static public field net.minecraft.sound.BiomeMoodSound#CODEC
    [[maybe_unused]] static jobject get_field_CODEC() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "CODEC", "field_24674", "CODEC", "f_47386_"), "Lcom/mojang/serialization/Codec;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.sound.BiomeMoodSound#CODEC
    [[maybe_unused]] static void set_field_CODEC(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "CODEC", "field_24674", "CODEC", "f_47386_"), "Lcom/mojang/serialization/Codec;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.sound.BiomeMoodSound#CAVE
    [[maybe_unused]] static jobject get_field_CAVE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "LEGACY_CAVE_SETTINGS", "field_23146", "CAVE", "f_47387_"), "Lddu;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.sound.BiomeMoodSound#CAVE
    [[maybe_unused]] static void set_field_CAVE(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "LEGACY_CAVE_SETTINGS", "field_23146", "CAVE", "f_47387_"), "Lddu;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for private field net.minecraft.sound.BiomeMoodSound#sound
    static jobject get_field_sound(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "soundEvent", "field_23147", "sound", "f_47388_"), "Ljm;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.sound.BiomeMoodSound#sound
    static void set_field_sound(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "soundEvent", "field_23147", "sound", "f_47388_"), "Ljm;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.sound.BiomeMoodSound#cultivationTicks
    static jint get_field_cultivationTicks(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "tickDelay", "field_23148", "cultivationTicks", "f_47389_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetIntField(obj, fieldID);
    };

    // setter for static private field net.minecraft.sound.BiomeMoodSound#cultivationTicks
    static void set_field_cultivationTicks(const jobject &obj, const jint &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "tickDelay", "field_23148", "cultivationTicks", "f_47389_"), "I");
        return MinecraftSDK::env->SetIntField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.sound.BiomeMoodSound#spawnRange
    static jint get_field_spawnRange(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "blockSearchExtent", "field_23149", "spawnRange", "f_47390_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetIntField(obj, fieldID);
    };

    // setter for static private field net.minecraft.sound.BiomeMoodSound#spawnRange
    static void set_field_spawnRange(const jobject &obj, const jint &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "blockSearchExtent", "field_23149", "spawnRange", "f_47390_"), "I");
        return MinecraftSDK::env->SetIntField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.sound.BiomeMoodSound#extraDistance
    static jdouble get_field_extraDistance(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("f", "soundPositionOffset", "field_23150", "extraDistance", "f_47391_"), "D");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetDoubleField(obj, fieldID);
    };

    // setter for static private field net.minecraft.sound.BiomeMoodSound#extraDistance
    static void set_field_extraDistance(const jobject &obj, const jdouble &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("f", "soundPositionOffset", "field_23150", "extraDistance", "f_47391_"), "D");
        return MinecraftSDK::env->SetDoubleField(obj, fieldID, value);
    };

    static jmethodID methodID_getSound() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getSoundEvent", "method_26100", "getSound", "m_263199_"), "()Ljm;");
    }

    static jobject getSound(const jobject& obj) {
                
       const auto methodID = methodID_getSound();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_getCultivationTicks() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "getTickDelay", "method_26101", "getCultivationTicks", "m_47403_"), "()I");
    }

    static jint getCultivationTicks(const jobject& obj) {
                
       const auto methodID = methodID_getCultivationTicks();
       return MinecraftSDK::env->CallIntMethod(obj, methodID);
    };
    
    static jmethodID methodID_getSpawnRange() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "getBlockSearchExtent", "method_26102", "getSpawnRange", "m_47406_"), "()I");
    }

    static jint getSpawnRange(const jobject& obj) {
                
       const auto methodID = methodID_getSpawnRange();
       return MinecraftSDK::env->CallIntMethod(obj, methodID);
    };
    
    static jmethodID methodID_getExtraDistance() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("d", "getSoundPositionOffset", "method_26103", "getExtraDistance", "m_47409_"), "()D");
    }

    static jdouble getExtraDistance(const jobject& obj) {
                
       const auto methodID = methodID_getExtraDistance();
       return MinecraftSDK::env->CallDoubleMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_SOUND_BIOMEMOODSOUND_HPP