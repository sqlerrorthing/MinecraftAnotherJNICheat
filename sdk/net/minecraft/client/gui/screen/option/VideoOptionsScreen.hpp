// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_CLIENT_GUI_SCREEN_OPTION_VIDEOOPTIONSSCREEN_HPP
#define NET_MINECRAFT_CLIENT_GUI_SCREEN_OPTION_VIDEOOPTIONSSCREEN_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.client.gui.screen.option.VideoOptionsScreen
 * Remapped: frl
 */
namespace VideoOptionsScreen {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("frl", "net/minecraft/client/gui/screens/options/VideoSettingsScreen", "net/minecraft/class_446", "net/minecraft/client/gui/screen/option/VideoOptionsScreen", "net/minecraft/src/C_336491_"));
        }
        return cachedClass;
    };

    // getter for static private field net.minecraft.client.gui.screen.option.VideoOptionsScreen#TITLE_TEXT
    [[maybe_unused]] static jobject get_field_TITLE_TEXT() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "TITLE", "field_49515", "TITLE_TEXT", "f_337002_"), "Lwz;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.gui.screen.option.VideoOptionsScreen#TITLE_TEXT
    [[maybe_unused]] static void set_field_TITLE_TEXT(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "TITLE", "field_49515", "TITLE_TEXT", "f_337002_"), "Lwz;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.client.gui.screen.option.VideoOptionsScreen#GRAPHICS_FABULOUS_TEXT
    [[maybe_unused]] static jobject get_field_GRAPHICS_FABULOUS_TEXT() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("u", "FABULOUS", "field_25682", "GRAPHICS_FABULOUS_TEXT", "f_337176_"), "Lwz;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.gui.screen.option.VideoOptionsScreen#GRAPHICS_FABULOUS_TEXT
    [[maybe_unused]] static void set_field_GRAPHICS_FABULOUS_TEXT(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("u", "FABULOUS", "field_25682", "GRAPHICS_FABULOUS_TEXT", "f_337176_"), "Lwz;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.client.gui.screen.option.VideoOptionsScreen#GRAPHICS_WARNING_MESSAGE_TEXT
    [[maybe_unused]] static jobject get_field_GRAPHICS_WARNING_MESSAGE_TEXT() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("v", "WARNING_MESSAGE", "field_25683", "GRAPHICS_WARNING_MESSAGE_TEXT", "f_337228_"), "Lwz;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.gui.screen.option.VideoOptionsScreen#GRAPHICS_WARNING_MESSAGE_TEXT
    [[maybe_unused]] static void set_field_GRAPHICS_WARNING_MESSAGE_TEXT(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("v", "WARNING_MESSAGE", "field_25683", "GRAPHICS_WARNING_MESSAGE_TEXT", "f_337228_"), "Lwz;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.client.gui.screen.option.VideoOptionsScreen#GRAPHICS_WARNING_TITLE_TEXT
    [[maybe_unused]] static jobject get_field_GRAPHICS_WARNING_TITLE_TEXT() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("w", "WARNING_TITLE", "field_25684", "GRAPHICS_WARNING_TITLE_TEXT", "f_337558_"), "Lwz;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.gui.screen.option.VideoOptionsScreen#GRAPHICS_WARNING_TITLE_TEXT
    [[maybe_unused]] static void set_field_GRAPHICS_WARNING_TITLE_TEXT(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("w", "WARNING_TITLE", "field_25684", "GRAPHICS_WARNING_TITLE_TEXT", "f_337558_"), "Lwz;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.client.gui.screen.option.VideoOptionsScreen#GRAPHICS_WARNING_ACCEPT_TEXT
    [[maybe_unused]] static jobject get_field_GRAPHICS_WARNING_ACCEPT_TEXT() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("x", "BUTTON_ACCEPT", "field_25685", "GRAPHICS_WARNING_ACCEPT_TEXT", "f_337559_"), "Lwz;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.gui.screen.option.VideoOptionsScreen#GRAPHICS_WARNING_ACCEPT_TEXT
    [[maybe_unused]] static void set_field_GRAPHICS_WARNING_ACCEPT_TEXT(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("x", "BUTTON_ACCEPT", "field_25685", "GRAPHICS_WARNING_ACCEPT_TEXT", "f_337559_"), "Lwz;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.client.gui.screen.option.VideoOptionsScreen#GRAPHICS_WARNING_CANCEL_TEXT
    [[maybe_unused]] static jobject get_field_GRAPHICS_WARNING_CANCEL_TEXT() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("y", "BUTTON_CANCEL", "field_25686", "GRAPHICS_WARNING_CANCEL_TEXT", "f_337380_"), "Lwz;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.gui.screen.option.VideoOptionsScreen#GRAPHICS_WARNING_CANCEL_TEXT
    [[maybe_unused]] static void set_field_GRAPHICS_WARNING_CANCEL_TEXT(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("y", "BUTTON_CANCEL", "field_25686", "GRAPHICS_WARNING_CANCEL_TEXT", "f_337380_"), "Lwz;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for private field net.minecraft.client.gui.screen.option.VideoOptionsScreen#warningManager
    static jobject get_field_warningManager(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("z", "gpuWarnlistManager", "field_25688", "warningManager", "f_336620_"), "Lget;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.gui.screen.option.VideoOptionsScreen#warningManager
    static void set_field_warningManager(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("z", "gpuWarnlistManager", "field_25688", "warningManager", "f_336620_"), "Lget;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.gui.screen.option.VideoOptionsScreen#mipmapLevels
    static jint get_field_mipmapLevels(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("A", "oldMipmaps", "field_19186", "mipmapLevels", "f_336724_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetIntField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.gui.screen.option.VideoOptionsScreen#mipmapLevels
    static void set_field_mipmapLevels(const jobject &obj, const jint &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("A", "oldMipmaps", "field_19186", "mipmapLevels", "f_336724_"), "I");
        return MinecraftSDK::env->SetIntField(obj, fieldID, value);
    };

    static jmethodID methodID_getOptions() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "options", "method_41846", "getOptions", "m_339161_"), "(Lfgs;)[Lfgr;");
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
    
    static jmethodID methodID_close() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("d", "onClose", "method_25419", "close", "m_7379_"), "()V");
    }

    static void close(const jobject& obj) {
                
       const auto methodID = methodID_close();
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
    
    static jmethodID methodID_mouseClicked() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "mouseClicked", "method_25402", "mouseClicked", "m_6375_"), "(DDI)Z");
    }

    static jboolean mouseClicked(const jobject& obj, const jdouble& arg0, const jdouble& arg1, const jint& arg2) {
                
       const auto methodID = methodID_mouseClicked();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0, arg1, arg2);
    };
    
    static jmethodID methodID_mouseScrolled() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "mouseScrolled", "method_25401", "mouseScrolled", "m_6050_"), "(DDDD)Z");
    }

    static jboolean mouseScrolled(const jobject& obj, const jdouble& arg0, const jdouble& arg1, const jdouble& arg2, const jdouble& arg3) {
                
       const auto methodID = methodID_mouseScrolled();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0, arg1, arg2, arg3);
    };
    
};

#endif // NET_MINECRAFT_CLIENT_GUI_SCREEN_OPTION_VIDEOOPTIONSSCREEN_HPP