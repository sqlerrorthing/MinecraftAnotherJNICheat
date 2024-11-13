// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_CLIENT_GUI_HUD_SUBTITLESHUD$SOUNDENTRY_HPP
#define NET_MINECRAFT_CLIENT_GUI_HUD_SUBTITLESHUD$SOUNDENTRY_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.client.gui.hud.SubtitlesHud$SoundEntry
 * Remapped: fju$a
 */
namespace SubtitlesHud$SoundEntry {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("fju$a", "net/minecraft/client/gui/components/SubtitleOverlay$SoundPlayedAt", "net/minecraft/class_359$class_9772", "net/minecraft/client/gui/hud/SubtitlesHud$SoundEntry", "net/minecraft/src/C_3487_$C_336490_"));
        }
        return cachedClass;
    };

    // getter for default field net.minecraft.client.gui.hud.SubtitlesHud$SoundEntry#location
    static jobject get_field_location(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "location", "comp_2809", "location", "f_336650_"), "Lexc;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static default field net.minecraft.client.gui.hud.SubtitlesHud$SoundEntry#location
    static void set_field_location(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "location", "comp_2809", "location", "f_336650_"), "Lexc;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for default field net.minecraft.client.gui.hud.SubtitlesHud$SoundEntry#time
    static jlong get_field_time(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "time", "comp_2810", "time", "f_337474_"), "J");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetLongField(obj, fieldID);
    };

    // setter for static default field net.minecraft.client.gui.hud.SubtitlesHud$SoundEntry#time
    static void set_field_time(const jobject &obj, const jlong &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "time", "comp_2810", "time", "f_337474_"), "J");
        return MinecraftSDK::env->SetLongField(obj, fieldID, value);
    };

    static jmethodID methodID__location() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "location", "comp_2809", "location", "f_336650_"), "()Lexc;");
    }

    static jobject _location(const jobject& obj) {
                
       const auto methodID = methodID__location();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID__time() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "time", "comp_2810", "time", "f_337474_"), "()J");
    }

    static jlong _time(const jobject& obj) {
                
       const auto methodID = methodID__time();
       return MinecraftSDK::env->CallLongMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_CLIENT_GUI_HUD_SUBTITLESHUD$SOUNDENTRY_HPP