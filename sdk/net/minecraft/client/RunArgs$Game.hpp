// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_CLIENT_RUNARGS$GAME_HPP
#define NET_MINECRAFT_CLIENT_RUNARGS$GAME_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.client.RunArgs$Game
 * Remapped: fua$b
 */
namespace RunArgs$Game {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("fua$b", "net/minecraft/client/main/GameConfig$GameData", "net/minecraft/class_542$class_545", "net/minecraft/client/RunArgs$Game", "net/minecraft/src/C_3787_$C_3789_"));
        }
        return cachedClass;
    };

    // getter for public field net.minecraft.client.RunArgs$Game#demo
    static jboolean get_field_demo(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "demo", "field_3292", "demo", "f_101926_"), "Z");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetBooleanField(obj, fieldID);
    };

    // setter for static public field net.minecraft.client.RunArgs$Game#demo
    static void set_field_demo(const jobject &obj, const jboolean &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "demo", "field_3292", "demo", "f_101926_"), "Z");
        return MinecraftSDK::env->SetBooleanField(obj, fieldID, value);
    };

    // getter for public field net.minecraft.client.RunArgs$Game#version
    static jobject get_field_version(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "launchVersion", "field_3293", "version", "f_101927_"), "Ljava/lang/String;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static public field net.minecraft.client.RunArgs$Game#version
    static void set_field_version(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "launchVersion", "field_3293", "version", "f_101927_"), "Ljava/lang/String;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for public field net.minecraft.client.RunArgs$Game#versionType
    static jobject get_field_versionType(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "versionType", "field_3291", "versionType", "f_101928_"), "Ljava/lang/String;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static public field net.minecraft.client.RunArgs$Game#versionType
    static void set_field_versionType(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "versionType", "field_3291", "versionType", "f_101928_"), "Ljava/lang/String;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for public field net.minecraft.client.RunArgs$Game#multiplayerDisabled
    static jboolean get_field_multiplayerDisabled(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "disableMultiplayer", "field_25061", "multiplayerDisabled", "f_101929_"), "Z");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetBooleanField(obj, fieldID);
    };

    // setter for static public field net.minecraft.client.RunArgs$Game#multiplayerDisabled
    static void set_field_multiplayerDisabled(const jobject &obj, const jboolean &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "disableMultiplayer", "field_25061", "multiplayerDisabled", "f_101929_"), "Z");
        return MinecraftSDK::env->SetBooleanField(obj, fieldID, value);
    };

    // getter for public field net.minecraft.client.RunArgs$Game#onlineChatDisabled
    static jboolean get_field_onlineChatDisabled(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "disableChat", "field_25062", "onlineChatDisabled", "f_101930_"), "Z");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetBooleanField(obj, fieldID);
    };

    // setter for static public field net.minecraft.client.RunArgs$Game#onlineChatDisabled
    static void set_field_onlineChatDisabled(const jobject &obj, const jboolean &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "disableChat", "field_25062", "onlineChatDisabled", "f_101930_"), "Z");
        return MinecraftSDK::env->SetBooleanField(obj, fieldID, value);
    };

};

#endif // NET_MINECRAFT_CLIENT_RUNARGS$GAME_HPP