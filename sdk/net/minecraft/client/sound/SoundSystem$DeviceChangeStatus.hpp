// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_CLIENT_SOUND_SOUNDSYSTEM$DEVICECHANGESTATUS_HPP
#define NET_MINECRAFT_CLIENT_SOUND_SOUNDSYSTEM$DEVICECHANGESTATUS_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.client.sound.SoundSystem$DeviceChangeStatus
 * Remapped: gvc$a
 */
namespace SoundSystem$DeviceChangeStatus {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("gvc$a", "net/minecraft/client/sounds/SoundEngine$DeviceCheckState", "net/minecraft/class_1140$class_6665", "net/minecraft/client/sound/SoundSystem$DeviceChangeStatus", "net/minecraft/src/C_4600_$C_183076_"));
        }
        return cachedClass;
    };

    // getter for static public field net.minecraft.client.sound.SoundSystem$DeviceChangeStatus#ONGOING
    [[maybe_unused]] static jobject get_field_ONGOING() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "ONGOING", "field_35084", "ONGOING", "ONGOING"), "Lgvc$a;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.client.sound.SoundSystem$DeviceChangeStatus#ONGOING
    [[maybe_unused]] static void set_field_ONGOING(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "ONGOING", "field_35084", "ONGOING", "ONGOING"), "Lgvc$a;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.client.sound.SoundSystem$DeviceChangeStatus#CHANGE_DETECTED
    [[maybe_unused]] static jobject get_field_CHANGE_DETECTED() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "CHANGE_DETECTED", "field_35085", "CHANGE_DETECTED", "CHANGE_DETECTED"), "Lgvc$a;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.client.sound.SoundSystem$DeviceChangeStatus#CHANGE_DETECTED
    [[maybe_unused]] static void set_field_CHANGE_DETECTED(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "CHANGE_DETECTED", "field_35085", "CHANGE_DETECTED", "CHANGE_DETECTED"), "Lgvc$a;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.client.sound.SoundSystem$DeviceChangeStatus#NO_CHANGE
    [[maybe_unused]] static jobject get_field_NO_CHANGE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "NO_CHANGE", "field_35086", "NO_CHANGE", "NO_CHANGE"), "Lgvc$a;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.client.sound.SoundSystem$DeviceChangeStatus#NO_CHANGE
    [[maybe_unused]] static void set_field_NO_CHANGE(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "NO_CHANGE", "field_35086", "NO_CHANGE", "NO_CHANGE"), "Lgvc$a;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    static jmethodID methodID_values() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("values", "values", "values", "values", "values"), "()[Lgvc$a;");
    }

    static jobject values() {
       const auto clazz = self();
       const auto methodID = methodID_values();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID);
    };
    
    static jmethodID methodID_valueOf() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("valueOf", "valueOf", "valueOf", "valueOf", "valueOf"), "(Ljava/lang/String;)Lgvc$a;");
    }

    static jobject valueOf(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_valueOf();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0);
    };
    
};

#endif // NET_MINECRAFT_CLIENT_SOUND_SOUNDSYSTEM$DEVICECHANGESTATUS_HPP