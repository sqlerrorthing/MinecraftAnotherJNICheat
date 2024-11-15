// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_CLIENT_GUI_SCREEN_OPTION_GAMEOPTIONSSCREEN_HPP
#define NET_MINECRAFT_CLIENT_GUI_SCREEN_OPTION_GAMEOPTIONSSCREEN_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.client.gui.screen.option.GameOptionsScreen
 * Remapped: frh
 */
namespace GameOptionsScreen {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("frh", "net/minecraft/client/gui/screens/options/OptionsSubScreen", "net/minecraft/class_4667", "net/minecraft/client/gui/screen/option/GameOptionsScreen", "net/minecraft/src/C_336424_"));
        }
        return cachedClass;
    };

    // getter for protected field net.minecraft.client.gui.screen.option.GameOptionsScreen#parent
    static jobject get_field_parent(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "lastScreen", "field_21335", "parent", "f_337508_"), "Lfod;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static protected field net.minecraft.client.gui.screen.option.GameOptionsScreen#parent
    static void set_field_parent(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "lastScreen", "field_21335", "parent", "f_337508_"), "Lfod;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for protected field net.minecraft.client.gui.screen.option.GameOptionsScreen#gameOptions
    static jobject get_field_gameOptions(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "options", "field_21336", "gameOptions", "f_337734_"), "Lfgs;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static protected field net.minecraft.client.gui.screen.option.GameOptionsScreen#gameOptions
    static void set_field_gameOptions(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "options", "field_21336", "gameOptions", "f_337734_"), "Lfgs;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for protected field net.minecraft.client.gui.screen.option.GameOptionsScreen#body
    static jobject get_field_body(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("r", "list", "field_51824", "body", "f_337426_"), "Lfjj;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static protected field net.minecraft.client.gui.screen.option.GameOptionsScreen#body
    static void set_field_body(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("r", "list", "field_51824", "body", "f_337426_"), "Lfjj;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for public field net.minecraft.client.gui.screen.option.GameOptionsScreen#layout
    static jobject get_field_layout(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("s", "layout", "field_49503", "layout", "f_337270_"), "Lflz;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static public field net.minecraft.client.gui.screen.option.GameOptionsScreen#layout
    static void set_field_layout(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("s", "layout", "field_49503", "layout", "f_337270_"), "Lflz;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID_init() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("aT_", "init", "method_25426", "init", "m_7856_"), "()V");
    }

    static void init(const jobject& obj) {
                
       const auto methodID = methodID_init();
       MinecraftSDK::env->CallVoidMethod(obj, methodID);
    };
    
    static jmethodID methodID_initHeader() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("E", "addTitle", "method_57732", "initHeader", "m_340308_"), "()V");
    }

    static void initHeader(const jobject& obj) {
                
       const auto methodID = methodID_initHeader();
       MinecraftSDK::env->CallVoidMethod(obj, methodID);
    };
    
    static jmethodID methodID_initBody() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("D", "addContents", "method_60329", "initBody", "m_338632_"), "()V");
    }

    static void initBody(const jobject& obj) {
                
       const auto methodID = methodID_initBody();
       MinecraftSDK::env->CallVoidMethod(obj, methodID);
    };
    
    static jmethodID methodID_addOptions() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("m", "addOptions", "method_60325", "addOptions", "m_338523_"), "()V");
    }

    static void addOptions(const jobject& obj) {
                
       const auto methodID = methodID_addOptions();
       MinecraftSDK::env->CallVoidMethod(obj, methodID);
    };
    
    static jmethodID methodID_initFooter() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("C", "addFooter", "method_31387", "initFooter", "m_339217_"), "()V");
    }

    static void initFooter(const jobject& obj) {
                
       const auto methodID = methodID_initFooter();
       MinecraftSDK::env->CallVoidMethod(obj, methodID);
    };
    
    static jmethodID methodID_initTabNavigation() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "repositionElements", "method_48640", "initTabNavigation", "m_267719_"), "()V");
    }

    static void initTabNavigation(const jobject& obj) {
                
       const auto methodID = methodID_initTabNavigation();
       MinecraftSDK::env->CallVoidMethod(obj, methodID);
    };
    
    static jmethodID methodID_removed() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("j", "removed", "method_25432", "removed", "m_7861_"), "()V");
    }

    static void removed(const jobject& obj) {
                
       const auto methodID = methodID_removed();
       MinecraftSDK::env->CallVoidMethod(obj, methodID);
    };
    
    static jmethodID methodID_close() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("d", "onClose", "method_25419", "close", "m_7379_"), "()V");
    }

    static void close(const jobject& obj) {
                
       const auto methodID = methodID_close();
       MinecraftSDK::env->CallVoidMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_CLIENT_GUI_SCREEN_OPTION_GAMEOPTIONSSCREEN_HPP