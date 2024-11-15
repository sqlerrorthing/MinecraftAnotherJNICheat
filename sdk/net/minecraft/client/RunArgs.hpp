// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_CLIENT_RUNARGS_HPP
#define NET_MINECRAFT_CLIENT_RUNARGS_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.client.RunArgs
 * Remapped: fua
 */
namespace RunArgs {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("fua", "net/minecraft/client/main/GameConfig", "net/minecraft/class_542", "net/minecraft/client/RunArgs", "net/minecraft/src/C_3787_"));
        }
        return cachedClass;
    };

    // getter for public field net.minecraft.client.RunArgs#network
    static jobject get_field_network(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "user", "field_3278", "network", "f_101905_"), "Lfua$d;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static public field net.minecraft.client.RunArgs#network
    static void set_field_network(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "user", "field_3278", "network", "f_101905_"), "Lfua$d;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for public field net.minecraft.client.RunArgs#windowSettings
    static jobject get_field_windowSettings(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "display", "field_3279", "windowSettings", "f_101906_"), "Lfaa;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static public field net.minecraft.client.RunArgs#windowSettings
    static void set_field_windowSettings(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "display", "field_3279", "windowSettings", "f_101906_"), "Lfaa;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for public field net.minecraft.client.RunArgs#directories
    static jobject get_field_directories(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "location", "field_3277", "directories", "f_101907_"), "Lfua$a;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static public field net.minecraft.client.RunArgs#directories
    static void set_field_directories(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "location", "field_3277", "directories", "f_101907_"), "Lfua$a;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for public field net.minecraft.client.RunArgs#game
    static jobject get_field_game(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "game", "field_3280", "game", "f_101908_"), "Lfua$b;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static public field net.minecraft.client.RunArgs#game
    static void set_field_game(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "game", "field_3280", "game", "f_101908_"), "Lfua$b;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for public field net.minecraft.client.RunArgs#quickPlay
    static jobject get_field_quickPlay(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "quickPlay", "field_44553", "quickPlay", "f_278410_"), "Lfua$c;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static public field net.minecraft.client.RunArgs#quickPlay
    static void set_field_quickPlay(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "quickPlay", "field_44553", "quickPlay", "f_278410_"), "Lfua$c;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

};

#endif // NET_MINECRAFT_CLIENT_RUNARGS_HPP