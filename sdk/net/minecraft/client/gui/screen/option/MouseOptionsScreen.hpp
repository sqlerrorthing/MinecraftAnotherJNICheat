// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_CLIENT_GUI_SCREEN_OPTION_MOUSEOPTIONSSCREEN_HPP
#define NET_MINECRAFT_CLIENT_GUI_SCREEN_OPTION_MOUSEOPTIONSSCREEN_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.client.gui.screen.option.MouseOptionsScreen
 * Remapped: fre
 */
namespace MouseOptionsScreen {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("fre", "net/minecraft/client/gui/screens/options/MouseSettingsScreen", "net/minecraft/class_4288", "net/minecraft/client/gui/screen/option/MouseOptionsScreen", "net/minecraft/src/C_336569_"));
        }
        return cachedClass;
    };

    // getter for static private field net.minecraft.client.gui.screen.option.MouseOptionsScreen#TITLE
    [[maybe_unused]] static jobject get_field_TITLE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "TITLE", "field_49498", "TITLE", "f_337053_"), "Lwz;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.gui.screen.option.MouseOptionsScreen#TITLE
    [[maybe_unused]] static void set_field_TITLE(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "TITLE", "field_49498", "TITLE", "f_337053_"), "Lwz;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    static jmethodID methodID_getOptions() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "options", "method_41841", "getOptions", "m_340429_"), "(Lfgs;)[Lfgr;");
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
    
};

#endif // NET_MINECRAFT_CLIENT_GUI_SCREEN_OPTION_MOUSEOPTIONSSCREEN_HPP