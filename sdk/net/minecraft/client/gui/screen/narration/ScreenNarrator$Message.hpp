// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_CLIENT_GUI_SCREEN_NARRATION_SCREENNARRATOR$MESSAGE_HPP
#define NET_MINECRAFT_CLIENT_GUI_SCREEN_NARRATION_SCREENNARRATOR$MESSAGE_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.client.gui.screen.narration.ScreenNarrator$Message
 * Remapped: fml$b
 */
namespace ScreenNarrator$Message {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("fml$b", "net/minecraft/client/gui/narration/ScreenNarrationCollector$NarrationEntry", "net/minecraft/class_6385$class_6387", "net/minecraft/client/gui/screen/narration/ScreenNarrator$Message", "net/minecraft/src/C_141611_$C_141614_"));
        }
        return cachedClass;
    };

    // getter for default field net.minecraft.client.gui.screen.narration.ScreenNarrator$Message#narration
    static jobject get_field_narration(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "contents", "field_33803", "narration", "f_169212_"), "Lfmk;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static default field net.minecraft.client.gui.screen.narration.ScreenNarrator$Message#narration
    static void set_field_narration(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "contents", "field_33803", "narration", "f_169212_"), "Lfmk;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for default field net.minecraft.client.gui.screen.narration.ScreenNarrator$Message#index
    static jint get_field_index(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "generation", "field_33804", "index", "f_169213_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetIntField(obj, fieldID);
    };

    // setter for static default field net.minecraft.client.gui.screen.narration.ScreenNarrator$Message#index
    static void set_field_index(const jobject &obj, const jint &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "generation", "field_33804", "index", "f_169213_"), "I");
        return MinecraftSDK::env->SetIntField(obj, fieldID, value);
    };

    // getter for default field net.minecraft.client.gui.screen.narration.ScreenNarrator$Message#used
    static jboolean get_field_used(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "alreadyNarrated", "field_33805", "used", "f_169214_"), "Z");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetBooleanField(obj, fieldID);
    };

    // setter for static default field net.minecraft.client.gui.screen.narration.ScreenNarrator$Message#used
    static void set_field_used(const jobject &obj, const jboolean &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "alreadyNarrated", "field_33805", "used", "f_169214_"), "Z");
        return MinecraftSDK::env->SetBooleanField(obj, fieldID, value);
    };

    static jmethodID methodID_setNarration() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "update", "method_37049", "setNarration", "m_169216_"), "(ILfmk;)Lfml$b;");
    }

    static jobject setNarration(const jobject& obj, const jint& arg0, const jobject& arg1) {
                
       const auto methodID = methodID_setNarration();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1);
    };
    
};

#endif // NET_MINECRAFT_CLIENT_GUI_SCREEN_NARRATION_SCREENNARRATOR$MESSAGE_HPP