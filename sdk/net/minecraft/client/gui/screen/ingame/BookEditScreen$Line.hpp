// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_CLIENT_GUI_SCREEN_INGAME_BOOKEDITSCREEN$LINE_HPP
#define NET_MINECRAFT_CLIENT_GUI_SCREEN_INGAME_BOOKEDITSCREEN$LINE_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.client.gui.screen.ingame.BookEditScreen$Line
 * Remapped: foz$b
 */
namespace BookEditScreen$Line {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("foz$b", "net/minecraft/client/gui/screens/inventory/BookEditScreen$LineInfo", "net/minecraft/class_473$class_475", "net/minecraft/client/gui/screen/ingame/BookEditScreen$Line", "net/minecraft/src/C_3635_$C_3637_"));
        }
        return cachedClass;
    };

    // getter for default field net.minecraft.client.gui.screen.ingame.BookEditScreen$Line#style
    static jobject get_field_style(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "style", "field_24278", "style", "f_98226_"), "Lxw;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static default field net.minecraft.client.gui.screen.ingame.BookEditScreen$Line#style
    static void set_field_style(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "style", "field_24278", "style", "f_98226_"), "Lxw;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for default field net.minecraft.client.gui.screen.ingame.BookEditScreen$Line#content
    static jobject get_field_content(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "contents", "field_24279", "content", "f_98227_"), "Ljava/lang/String;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static default field net.minecraft.client.gui.screen.ingame.BookEditScreen$Line#content
    static void set_field_content(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "contents", "field_24279", "content", "f_98227_"), "Ljava/lang/String;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for default field net.minecraft.client.gui.screen.ingame.BookEditScreen$Line#text
    static jobject get_field_text(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "asComponent", "field_24280", "text", "f_98228_"), "Lwz;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static default field net.minecraft.client.gui.screen.ingame.BookEditScreen$Line#text
    static void set_field_text(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "asComponent", "field_24280", "text", "f_98228_"), "Lwz;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for default field net.minecraft.client.gui.screen.ingame.BookEditScreen$Line#x
    static jint get_field_x(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "x", "field_2854", "x", "f_98229_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetIntField(obj, fieldID);
    };

    // setter for static default field net.minecraft.client.gui.screen.ingame.BookEditScreen$Line#x
    static void set_field_x(const jobject &obj, const jint &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "x", "field_2854", "x", "f_98229_"), "I");
        return MinecraftSDK::env->SetIntField(obj, fieldID, value);
    };

    // getter for default field net.minecraft.client.gui.screen.ingame.BookEditScreen$Line#y
    static jint get_field_y(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "y", "field_2853", "y", "f_98230_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetIntField(obj, fieldID);
    };

    // setter for static default field net.minecraft.client.gui.screen.ingame.BookEditScreen$Line#y
    static void set_field_y(const jobject &obj, const jint &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "y", "field_2853", "y", "f_98230_"), "I");
        return MinecraftSDK::env->SetIntField(obj, fieldID, value);
    };

};

#endif // NET_MINECRAFT_CLIENT_GUI_SCREEN_INGAME_BOOKEDITSCREEN$LINE_HPP