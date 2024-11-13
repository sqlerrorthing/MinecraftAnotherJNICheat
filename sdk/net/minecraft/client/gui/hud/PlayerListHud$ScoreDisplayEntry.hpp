// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_CLIENT_GUI_HUD_PLAYERLISTHUD$SCOREDISPLAYENTRY_HPP
#define NET_MINECRAFT_CLIENT_GUI_HUD_PLAYERLISTHUD$SCOREDISPLAYENTRY_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.client.gui.hud.PlayerListHud$ScoreDisplayEntry
 * Remapped: fjn$b
 */
namespace PlayerListHud$ScoreDisplayEntry {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("fjn$b", "net/minecraft/client/gui/components/PlayerTabOverlay$ScoreDisplayEntry", "net/minecraft/class_355$class_9018", "net/minecraft/client/gui/hud/PlayerListHud$ScoreDisplayEntry", "net/minecraft/src/C_3479_$C_302079_"));
        }
        return cachedClass;
    };

    // getter for default field net.minecraft.client.gui.hud.PlayerListHud$ScoreDisplayEntry#name
    static jobject get_field_name(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "name", "comp_2134", "name", "f_303716_"), "Lwz;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static default field net.minecraft.client.gui.hud.PlayerListHud$ScoreDisplayEntry#name
    static void set_field_name(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "name", "comp_2134", "name", "f_303716_"), "Lwz;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for default field net.minecraft.client.gui.hud.PlayerListHud$ScoreDisplayEntry#score
    static jint get_field_score(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "score", "comp_2135", "score", "f_303697_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetIntField(obj, fieldID);
    };

    // setter for static default field net.minecraft.client.gui.hud.PlayerListHud$ScoreDisplayEntry#score
    static void set_field_score(const jobject &obj, const jint &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "score", "comp_2135", "score", "f_303697_"), "I");
        return MinecraftSDK::env->SetIntField(obj, fieldID, value);
    };

    // getter for default field net.minecraft.client.gui.hud.PlayerListHud$ScoreDisplayEntry#formattedScore
    static jobject get_field_formattedScore(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "formattedScore", "comp_2136", "formattedScore", "f_303794_"), "Lwz;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static default field net.minecraft.client.gui.hud.PlayerListHud$ScoreDisplayEntry#formattedScore
    static void set_field_formattedScore(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "formattedScore", "comp_2136", "formattedScore", "f_303794_"), "Lwz;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for default field net.minecraft.client.gui.hud.PlayerListHud$ScoreDisplayEntry#scoreWidth
    static jint get_field_scoreWidth(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "scoreWidth", "comp_2137", "scoreWidth", "f_302857_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetIntField(obj, fieldID);
    };

    // setter for static default field net.minecraft.client.gui.hud.PlayerListHud$ScoreDisplayEntry#scoreWidth
    static void set_field_scoreWidth(const jobject &obj, const jint &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "scoreWidth", "comp_2137", "scoreWidth", "f_302857_"), "I");
        return MinecraftSDK::env->SetIntField(obj, fieldID, value);
    };

    static jmethodID methodID__name() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "name", "comp_2134", "name", "f_303716_"), "()Lwz;");
    }

    static jobject _name(const jobject& obj) {
                
       const auto methodID = methodID__name();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID__score() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "score", "comp_2135", "score", "f_303697_"), "()I");
    }

    static jint _score(const jobject& obj) {
                
       const auto methodID = methodID__score();
       return MinecraftSDK::env->CallIntMethod(obj, methodID);
    };
    
    static jmethodID methodID__formattedScore() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "formattedScore", "comp_2136", "formattedScore", "f_303794_"), "()Lwz;");
    }

    static jobject _formattedScore(const jobject& obj) {
                
       const auto methodID = methodID__formattedScore();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID__scoreWidth() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("d", "scoreWidth", "comp_2137", "scoreWidth", "f_302857_"), "()I");
    }

    static jint _scoreWidth(const jobject& obj) {
                
       const auto methodID = methodID__scoreWidth();
       return MinecraftSDK::env->CallIntMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_CLIENT_GUI_HUD_PLAYERLISTHUD$SCOREDISPLAYENTRY_HPP