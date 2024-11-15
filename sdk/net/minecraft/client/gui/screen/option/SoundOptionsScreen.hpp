// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_CLIENT_GUI_SCREEN_OPTION_SOUNDOPTIONSSCREEN_HPP
#define NET_MINECRAFT_CLIENT_GUI_SCREEN_OPTION_SOUNDOPTIONSSCREEN_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.client.gui.screen.option.SoundOptionsScreen
 * Remapped: frj
 */
namespace SoundOptionsScreen {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("frj", "net/minecraft/client/gui/screens/options/SoundOptionsScreen", "net/minecraft/class_443", "net/minecraft/client/gui/screen/option/SoundOptionsScreen", "net/minecraft/src/C_336573_"));
        }
        return cachedClass;
    };

    // getter for static private field net.minecraft.client.gui.screen.option.SoundOptionsScreen#TITLE_TEXT
    [[maybe_unused]] static jobject get_field_TITLE_TEXT() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "TITLE", "field_49513", "TITLE_TEXT", "f_336630_"), "Lwz;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.gui.screen.option.SoundOptionsScreen#TITLE_TEXT
    [[maybe_unused]] static void set_field_TITLE_TEXT(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "TITLE", "field_49513", "TITLE_TEXT", "f_336630_"), "Lwz;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    static jmethodID methodID_getOptions() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "buttonOptions", "method_45629", "getOptions", "m_338657_"), "(Lfgs;)[Lfgr;");
    }

    static jobject getOptions(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_getOptions();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_addOptions() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("m", "addOptions", "method_60325", "addOptions", "m_338523_"), "()V");
    }

    static void addOptions(const jobject& obj) {
                
       const auto methodID = methodID_addOptions();
       MinecraftSDK::env->CallVoidMethod(obj, methodID);
    };
    
    static jmethodID methodID_getVolumeOptions() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("F", "getAllSoundOptionsExceptMaster", "method_45631", "getVolumeOptions", "m_340612_"), "()[Lfgr;");
    }

    static jobject getVolumeOptions(const jobject& obj) {
                
       const auto methodID = methodID_getVolumeOptions();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_CLIENT_GUI_SCREEN_OPTION_SOUNDOPTIONSSCREEN_HPP