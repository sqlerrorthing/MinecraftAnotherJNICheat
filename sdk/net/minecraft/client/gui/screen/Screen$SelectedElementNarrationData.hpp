// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_CLIENT_GUI_SCREEN_SCREEN$SELECTEDELEMENTNARRATIONDATA_HPP
#define NET_MINECRAFT_CLIENT_GUI_SCREEN_SCREEN$SELECTEDELEMENTNARRATIONDATA_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.client.gui.screen.Screen$SelectedElementNarrationData
 * Remapped: fod$b
 */
namespace Screen$SelectedElementNarrationData {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("fod$b", "net/minecraft/client/gui/screens/Screen$NarratableSearchResult", "net/minecraft/class_437$class_6390", "net/minecraft/client/gui/screen/Screen$SelectedElementNarrationData", "net/minecraft/src/C_3583_$C_141619_"));
        }
        return cachedClass;
    };

    // getter for public field net.minecraft.client.gui.screen.Screen$SelectedElementNarrationData#selectable
    static jobject get_field_selectable(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "entry", "field_33825", "selectable", "f_169420_"), "Lfmg;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static public field net.minecraft.client.gui.screen.Screen$SelectedElementNarrationData#selectable
    static void set_field_selectable(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "entry", "field_33825", "selectable", "f_169420_"), "Lfmg;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for public field net.minecraft.client.gui.screen.Screen$SelectedElementNarrationData#index
    static jint get_field_index(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "index", "field_33826", "index", "f_169421_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetIntField(obj, fieldID);
    };

    // setter for static public field net.minecraft.client.gui.screen.Screen$SelectedElementNarrationData#index
    static void set_field_index(const jobject &obj, const jint &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "index", "field_33826", "index", "f_169421_"), "I");
        return MinecraftSDK::env->SetIntField(obj, fieldID, value);
    };

    // getter for public field net.minecraft.client.gui.screen.Screen$SelectedElementNarrationData#selectType
    static jobject get_field_selectType(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "priority", "field_33827", "selectType", "f_169422_"), "Lfmg$a;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static public field net.minecraft.client.gui.screen.Screen$SelectedElementNarrationData#selectType
    static void set_field_selectType(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "priority", "field_33827", "selectType", "f_169422_"), "Lfmg$a;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

};

#endif // NET_MINECRAFT_CLIENT_GUI_SCREEN_SCREEN$SELECTEDELEMENTNARRATIONDATA_HPP