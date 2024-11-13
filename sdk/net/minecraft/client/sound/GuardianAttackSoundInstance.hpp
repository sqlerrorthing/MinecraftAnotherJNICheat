// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_CLIENT_SOUND_GUARDIANATTACKSOUNDINSTANCE_HPP
#define NET_MINECRAFT_CLIENT_SOUND_GUARDIANATTACKSOUNDINSTANCE_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.client.sound.GuardianAttackSoundInstance
 * Remapped: gts
 */
namespace GuardianAttackSoundInstance {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("gts", "net/minecraft/client/resources/sounds/GuardianAttackSoundInstance", "net/minecraft/class_1105", "net/minecraft/client/sound/GuardianAttackSoundInstance", "net/minecraft/src/C_4558_"));
        }
        return cachedClass;
    };

    // getter for static private field net.minecraft.client.sound.GuardianAttackSoundInstance#BASE_VOLUME
    [[maybe_unused]] static jfloat get_field_BASE_VOLUME() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("n", "VOLUME_MIN", "field_32997", "BASE_VOLUME", "f_174927_"), "F");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticFloatField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.sound.GuardianAttackSoundInstance#BASE_VOLUME
    [[maybe_unused]] static void set_field_BASE_VOLUME(const jfloat &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("n", "VOLUME_MIN", "field_32997", "BASE_VOLUME", "f_174927_"), "F");
        return MinecraftSDK::env->SetStaticFloatField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.client.sound.GuardianAttackSoundInstance#BEAM_PROGRESS_VOLUME_MULTIPLIER
    [[maybe_unused]] static jfloat get_field_BEAM_PROGRESS_VOLUME_MULTIPLIER() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("o", "VOLUME_SCALE", "field_32998", "BEAM_PROGRESS_VOLUME_MULTIPLIER", "f_174928_"), "F");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticFloatField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.sound.GuardianAttackSoundInstance#BEAM_PROGRESS_VOLUME_MULTIPLIER
    [[maybe_unused]] static void set_field_BEAM_PROGRESS_VOLUME_MULTIPLIER(const jfloat &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("o", "VOLUME_SCALE", "field_32998", "BEAM_PROGRESS_VOLUME_MULTIPLIER", "f_174928_"), "F");
        return MinecraftSDK::env->SetStaticFloatField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.client.sound.GuardianAttackSoundInstance#BASE_PITCH
    [[maybe_unused]] static jfloat get_field_BASE_PITCH() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("p", "PITCH_MIN", "field_32999", "BASE_PITCH", "f_174929_"), "F");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticFloatField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.sound.GuardianAttackSoundInstance#BASE_PITCH
    [[maybe_unused]] static void set_field_BASE_PITCH(const jfloat &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("p", "PITCH_MIN", "field_32999", "BASE_PITCH", "f_174929_"), "F");
        return MinecraftSDK::env->SetStaticFloatField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.client.sound.GuardianAttackSoundInstance#BEAM_PROGRESS_PITCH_MULTIPLIER
    [[maybe_unused]] static jfloat get_field_BEAM_PROGRESS_PITCH_MULTIPLIER() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("q", "PITCH_SCALE", "field_33000", "BEAM_PROGRESS_PITCH_MULTIPLIER", "f_174930_"), "F");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticFloatField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.sound.GuardianAttackSoundInstance#BEAM_PROGRESS_PITCH_MULTIPLIER
    [[maybe_unused]] static void set_field_BEAM_PROGRESS_PITCH_MULTIPLIER(const jfloat &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("q", "PITCH_SCALE", "field_33000", "BEAM_PROGRESS_PITCH_MULTIPLIER", "f_174930_"), "F");
        return MinecraftSDK::env->SetStaticFloatField(clazz, fieldID, value);
    };

    // getter for private field net.minecraft.client.sound.GuardianAttackSoundInstance#guardian
    static jobject get_field_guardian(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("r", "guardian", "field_5454", "guardian", "f_119688_"), "Lcjz;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.sound.GuardianAttackSoundInstance#guardian
    static void set_field_guardian(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("r", "guardian", "field_5454", "guardian", "f_119688_"), "Lcjz;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID_canPlay() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("s", "canPlaySound", "method_26273", "canPlay", "m_7767_"), "()Z");
    }

    static jboolean canPlay(const jobject& obj) {
                
       const auto methodID = methodID_canPlay();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID);
    };
    
    static jmethodID methodID_tick() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("q", "tick", "method_16896", "tick", "m_7788_"), "()V");
    }

    static void tick(const jobject& obj) {
                
       const auto methodID = methodID_tick();
       MinecraftSDK::env->CallVoidMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_CLIENT_SOUND_GUARDIANATTACKSOUNDINSTANCE_HPP