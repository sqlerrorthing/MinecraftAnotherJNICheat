// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_CLIENT_GUI_HUD_SUBTITLESHUD_HPP
#define NET_MINECRAFT_CLIENT_GUI_HUD_SUBTITLESHUD_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.client.gui.hud.SubtitlesHud
 * Remapped: fju
 */
namespace SubtitlesHud {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("fju", "net/minecraft/client/gui/components/SubtitleOverlay", "net/minecraft/class_359", "net/minecraft/client/gui/hud/SubtitlesHud", "net/minecraft/src/C_3487_"));
        }
        return cachedClass;
    };

    // getter for static private field net.minecraft.client.gui.hud.SubtitlesHud#REMOVE_DELAY
    [[maybe_unused]] static jlong get_field_REMOVE_DELAY() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "DISPLAY_TIME", "field_32214", "REMOVE_DELAY", "f_169070_"), "J");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticLongField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.gui.hud.SubtitlesHud#REMOVE_DELAY
    [[maybe_unused]] static void set_field_REMOVE_DELAY(const jlong &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "DISPLAY_TIME", "field_32214", "REMOVE_DELAY", "f_169070_"), "J");
        return MinecraftSDK::env->SetStaticLongField(clazz, fieldID, value);
    };

    // getter for private field net.minecraft.client.gui.hud.SubtitlesHud#client
    static jobject get_field_client(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "minecraft", "field_2182", "client", "f_94637_"), "Lfgo;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.gui.hud.SubtitlesHud#client
    static void set_field_client(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "minecraft", "field_2182", "client", "f_94637_"), "Lfgo;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.gui.hud.SubtitlesHud#entries
    static jobject get_field_entries(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "subtitles", "field_2183", "entries", "f_94638_"), "Ljava/util/List;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.gui.hud.SubtitlesHud#entries
    static void set_field_entries(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "subtitles", "field_2183", "entries", "f_94638_"), "Ljava/util/List;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.gui.hud.SubtitlesHud#enabled
    static jboolean get_field_enabled(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "isListening", "field_2184", "enabled", "f_94639_"), "Z");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetBooleanField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.gui.hud.SubtitlesHud#enabled
    static void set_field_enabled(const jobject &obj, const jboolean &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "isListening", "field_2184", "enabled", "f_94639_"), "Z");
        return MinecraftSDK::env->SetBooleanField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.gui.hud.SubtitlesHud#audibleEntries
    static jobject get_field_audibleEntries(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "audibleSubtitles", "field_47672", "audibleEntries", "f_303493_"), "Ljava/util/List;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.gui.hud.SubtitlesHud#audibleEntries
    static void set_field_audibleEntries(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "audibleSubtitles", "field_47672", "audibleEntries", "f_303493_"), "Ljava/util/List;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID_render() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "render", "method_1957", "render", "m_280227_"), "(Lfhz;)V");
    }

    static void render(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_render();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_onSoundPlayed() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "onPlaySound", "method_4884", "onSoundPlayed", "m_6985_"), "(Lgua;Lgvg;F)V");
    }

    static void onSoundPlayed(const jobject& obj, const jobject& arg0, const jobject& arg1, const jfloat& arg2) {
                
       const auto methodID = methodID_onSoundPlayed();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1, arg2);
    };
    
};

#endif // NET_MINECRAFT_CLIENT_GUI_HUD_SUBTITLESHUD_HPP