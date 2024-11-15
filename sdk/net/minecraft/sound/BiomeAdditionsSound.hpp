// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_SOUND_BIOMEADDITIONSSOUND_HPP
#define NET_MINECRAFT_SOUND_BIOMEADDITIONSSOUND_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.sound.BiomeAdditionsSound
 * Remapped: ddt
 */
namespace BiomeAdditionsSound {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("ddt", "net/minecraft/world/level/biome/AmbientAdditionsSettings", "net/minecraft/class_4967", "net/minecraft/sound/BiomeAdditionsSound", "net/minecraft/src/C_1626_"));
        }
        return cachedClass;
    };

    // getter for static public field net.minecraft.sound.BiomeAdditionsSound#CODEC
    [[maybe_unused]] static jobject get_field_CODEC() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "CODEC", "field_24673", "CODEC", "f_47371_"), "Lcom/mojang/serialization/Codec;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.sound.BiomeAdditionsSound#CODEC
    [[maybe_unused]] static void set_field_CODEC(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "CODEC", "field_24673", "CODEC", "f_47371_"), "Lcom/mojang/serialization/Codec;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for private field net.minecraft.sound.BiomeAdditionsSound#sound
    static jobject get_field_sound(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "soundEvent", "field_23144", "sound", "f_47372_"), "Ljm;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.sound.BiomeAdditionsSound#sound
    static void set_field_sound(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "soundEvent", "field_23144", "sound", "f_47372_"), "Ljm;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.sound.BiomeAdditionsSound#chance
    static jdouble get_field_chance(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "tickChance", "field_23145", "chance", "f_47373_"), "D");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetDoubleField(obj, fieldID);
    };

    // setter for static private field net.minecraft.sound.BiomeAdditionsSound#chance
    static void set_field_chance(const jobject &obj, const jdouble &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "tickChance", "field_23145", "chance", "f_47373_"), "D");
        return MinecraftSDK::env->SetDoubleField(obj, fieldID, value);
    };

    static jmethodID methodID_getSound() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getSoundEvent", "method_26098", "getSound", "m_263205_"), "()Ljm;");
    }

    static jobject getSound(const jobject& obj) {
                
       const auto methodID = methodID_getSound();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_getChance() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "getTickChance", "method_26099", "getChance", "m_47383_"), "()D");
    }

    static jdouble getChance(const jobject& obj) {
                
       const auto methodID = methodID_getChance();
       return MinecraftSDK::env->CallDoubleMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_SOUND_BIOMEADDITIONSSOUND_HPP