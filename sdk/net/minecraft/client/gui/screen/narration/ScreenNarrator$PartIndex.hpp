// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_CLIENT_GUI_SCREEN_NARRATION_SCREENNARRATOR$PARTINDEX_HPP
#define NET_MINECRAFT_CLIENT_GUI_SCREEN_NARRATION_SCREENNARRATOR$PARTINDEX_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.client.gui.screen.narration.ScreenNarrator$PartIndex
 * Remapped: fml$a
 */
namespace ScreenNarrator$PartIndex {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("fml$a", "net/minecraft/client/gui/narration/ScreenNarrationCollector$EntryKey", "net/minecraft/class_6385$class_6386", "net/minecraft/client/gui/screen/narration/ScreenNarrator$PartIndex", "net/minecraft/src/C_141611_$C_141613_"));
        }
        return cachedClass;
    };

    // getter for default field net.minecraft.client.gui.screen.narration.ScreenNarrator$PartIndex#part
    static jobject get_field_part(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "type", "field_33801", "part", "f_169207_"), "Lfmh;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static default field net.minecraft.client.gui.screen.narration.ScreenNarrator$PartIndex#part
    static void set_field_part(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "type", "field_33801", "part", "f_169207_"), "Lfmh;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for default field net.minecraft.client.gui.screen.narration.ScreenNarrator$PartIndex#depth
    static jint get_field_depth(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "depth", "field_33802", "depth", "f_169208_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetIntField(obj, fieldID);
    };

    // setter for static default field net.minecraft.client.gui.screen.narration.ScreenNarrator$PartIndex#depth
    static void set_field_depth(const jobject &obj, const jint &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "depth", "field_33802", "depth", "f_169208_"), "I");
        return MinecraftSDK::env->SetIntField(obj, fieldID, value);
    };

};

#endif // NET_MINECRAFT_CLIENT_GUI_SCREEN_NARRATION_SCREENNARRATOR$PARTINDEX_HPP