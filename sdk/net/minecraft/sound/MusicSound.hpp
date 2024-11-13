// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_SOUND_MUSICSOUND_HPP
#define NET_MINECRAFT_SOUND_MUSICSOUND_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.sound.MusicSound
 * Remapped: avm
 */
namespace MusicSound {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("avm", "net/minecraft/sounds/Music", "net/minecraft/class_5195", "net/minecraft/sound/MusicSound", "net/minecraft/src/C_121_"));
        }
        return cachedClass;
    };

    // getter for static public field net.minecraft.sound.MusicSound#CODEC
    [[maybe_unused]] static jobject get_field_CODEC() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "CODEC", "field_24627", "CODEC", "f_11620_"), "Lcom/mojang/serialization/Codec;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.sound.MusicSound#CODEC
    [[maybe_unused]] static void set_field_CODEC(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "CODEC", "field_24627", "CODEC", "f_11620_"), "Lcom/mojang/serialization/Codec;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for private field net.minecraft.sound.MusicSound#sound
    static jobject get_field_sound(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "event", "field_24057", "sound", "f_11621_"), "Ljm;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.sound.MusicSound#sound
    static void set_field_sound(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "event", "field_24057", "sound", "f_11621_"), "Ljm;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.sound.MusicSound#minDelay
    static jint get_field_minDelay(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "minDelay", "field_24058", "minDelay", "f_11622_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetIntField(obj, fieldID);
    };

    // setter for static private field net.minecraft.sound.MusicSound#minDelay
    static void set_field_minDelay(const jobject &obj, const jint &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "minDelay", "field_24058", "minDelay", "f_11622_"), "I");
        return MinecraftSDK::env->SetIntField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.sound.MusicSound#maxDelay
    static jint get_field_maxDelay(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "maxDelay", "field_24059", "maxDelay", "f_11623_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetIntField(obj, fieldID);
    };

    // setter for static private field net.minecraft.sound.MusicSound#maxDelay
    static void set_field_maxDelay(const jobject &obj, const jint &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "maxDelay", "field_24059", "maxDelay", "f_11623_"), "I");
        return MinecraftSDK::env->SetIntField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.sound.MusicSound#replaceCurrentMusic
    static jboolean get_field_replaceCurrentMusic(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "replaceCurrentMusic", "field_24060", "replaceCurrentMusic", "f_11624_"), "Z");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetBooleanField(obj, fieldID);
    };

    // setter for static private field net.minecraft.sound.MusicSound#replaceCurrentMusic
    static void set_field_replaceCurrentMusic(const jobject &obj, const jboolean &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "replaceCurrentMusic", "field_24060", "replaceCurrentMusic", "f_11624_"), "Z");
        return MinecraftSDK::env->SetBooleanField(obj, fieldID, value);
    };

    static jmethodID methodID_getSound() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getEvent", "method_27279", "getSound", "m_263193_"), "()Ljm;");
    }

    static jobject getSound(const jobject& obj) {
                
       const auto methodID = methodID_getSound();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_getMinDelay() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "getMinDelay", "method_27280", "getMinDelay", "m_11636_"), "()I");
    }

    static jint getMinDelay(const jobject& obj) {
                
       const auto methodID = methodID_getMinDelay();
       return MinecraftSDK::env->CallIntMethod(obj, methodID);
    };
    
    static jmethodID methodID_getMaxDelay() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "getMaxDelay", "method_27281", "getMaxDelay", "m_11639_"), "()I");
    }

    static jint getMaxDelay(const jobject& obj) {
                
       const auto methodID = methodID_getMaxDelay();
       return MinecraftSDK::env->CallIntMethod(obj, methodID);
    };
    
    static jmethodID methodID_shouldReplaceCurrentMusic() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("d", "replaceCurrentMusic", "method_27282", "shouldReplaceCurrentMusic", "m_11642_"), "()Z");
    }

    static jboolean shouldReplaceCurrentMusic(const jobject& obj) {
                
       const auto methodID = methodID_shouldReplaceCurrentMusic();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_SOUND_MUSICSOUND_HPP