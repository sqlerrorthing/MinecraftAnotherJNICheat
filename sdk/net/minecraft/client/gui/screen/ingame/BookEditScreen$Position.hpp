// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_CLIENT_GUI_SCREEN_INGAME_BOOKEDITSCREEN$POSITION_HPP
#define NET_MINECRAFT_CLIENT_GUI_SCREEN_INGAME_BOOKEDITSCREEN$POSITION_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.client.gui.screen.ingame.BookEditScreen$Position
 * Remapped: foz$c
 */
namespace BookEditScreen$Position {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("foz$c", "net/minecraft/client/gui/screens/inventory/BookEditScreen$Pos2i", "net/minecraft/class_473$class_5234", "net/minecraft/client/gui/screen/ingame/BookEditScreen$Position", "net/minecraft/src/C_3635_$C_3638_"));
        }
        return cachedClass;
    };

    // getter for public field net.minecraft.client.gui.screen.ingame.BookEditScreen$Position#x
    static jint get_field_x(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "x", "field_24281", "x", "f_98246_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetIntField(obj, fieldID);
    };

    // setter for static public field net.minecraft.client.gui.screen.ingame.BookEditScreen$Position#x
    static void set_field_x(const jobject &obj, const jint &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "x", "field_24281", "x", "f_98246_"), "I");
        return MinecraftSDK::env->SetIntField(obj, fieldID, value);
    };

    // getter for public field net.minecraft.client.gui.screen.ingame.BookEditScreen$Position#y
    static jint get_field_y(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "y", "field_24282", "y", "f_98247_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetIntField(obj, fieldID);
    };

    // setter for static public field net.minecraft.client.gui.screen.ingame.BookEditScreen$Position#y
    static void set_field_y(const jobject &obj, const jint &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "y", "field_24282", "y", "f_98247_"), "I");
        return MinecraftSDK::env->SetIntField(obj, fieldID, value);
    };

};

#endif // NET_MINECRAFT_CLIENT_GUI_SCREEN_INGAME_BOOKEDITSCREEN$POSITION_HPP