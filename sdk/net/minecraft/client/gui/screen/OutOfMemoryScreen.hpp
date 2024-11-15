// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_CLIENT_GUI_SCREEN_OUTOFMEMORYSCREEN_HPP
#define NET_MINECRAFT_CLIENT_GUI_SCREEN_OUTOFMEMORYSCREEN_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.client.gui.screen.OutOfMemoryScreen
 * Remapped: fnw
 */
namespace OutOfMemoryScreen {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("fnw", "net/minecraft/client/gui/screens/OutOfMemoryScreen", "net/minecraft/class_428", "net/minecraft/client/gui/screen/OutOfMemoryScreen", "net/minecraft/src/C_3572_"));
        }
        return cachedClass;
    };

    // getter for static private field net.minecraft.client.gui.screen.OutOfMemoryScreen#TITLE
    [[maybe_unused]] static jobject get_field_TITLE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "TITLE", "field_49504", "TITLE", "f_315821_"), "Lwz;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.gui.screen.OutOfMemoryScreen#TITLE
    [[maybe_unused]] static void set_field_TITLE(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "TITLE", "field_49504", "TITLE", "f_315821_"), "Lwz;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.client.gui.screen.OutOfMemoryScreen#MESSAGE
    [[maybe_unused]] static jobject get_field_MESSAGE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "MESSAGE", "field_49505", "MESSAGE", "f_315125_"), "Lwz;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.gui.screen.OutOfMemoryScreen#MESSAGE
    [[maybe_unused]] static void set_field_MESSAGE(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "MESSAGE", "field_49505", "MESSAGE", "f_315125_"), "Lwz;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.client.gui.screen.OutOfMemoryScreen#MAX_TEXT_WIDTH
    [[maybe_unused]] static jint get_field_MAX_TEXT_WIDTH() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "MESSAGE_WIDTH", "field_49506", "MAX_TEXT_WIDTH", "f_316414_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.gui.screen.OutOfMemoryScreen#MAX_TEXT_WIDTH
    [[maybe_unused]] static void set_field_MAX_TEXT_WIDTH(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "MESSAGE_WIDTH", "field_49506", "MAX_TEXT_WIDTH", "f_316414_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for private field net.minecraft.client.gui.screen.OutOfMemoryScreen#layout
    static jobject get_field_layout(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("r", "layout", "field_49507", "layout", "f_316501_"), "Lflz;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.gui.screen.OutOfMemoryScreen#layout
    static void set_field_layout(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("r", "layout", "field_49507", "layout", "f_316501_"), "Lflz;");
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
    
    static jmethodID methodID_initTabNavigation() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "repositionElements", "method_48640", "initTabNavigation", "m_267719_"), "()V");
    }

    static void initTabNavigation(const jobject& obj) {
                
       const auto methodID = methodID_initTabNavigation();
       MinecraftSDK::env->CallVoidMethod(obj, methodID);
    };
    
    static jmethodID methodID_shouldCloseOnEsc() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("aJ_", "shouldCloseOnEsc", "method_25422", "shouldCloseOnEsc", "m_6913_"), "()Z");
    }

    static jboolean shouldCloseOnEsc(const jobject& obj) {
                
       const auto methodID = methodID_shouldCloseOnEsc();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_CLIENT_GUI_SCREEN_OUTOFMEMORYSCREEN_HPP