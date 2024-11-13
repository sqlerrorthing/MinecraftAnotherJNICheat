// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_CLIENT_GUI_SCREEN_MULTIPLAYER_DIRECTCONNECTSCREEN_HPP
#define NET_MINECRAFT_CLIENT_GUI_SCREEN_MULTIPLAYER_DIRECTCONNECTSCREEN_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.client.gui.screen.multiplayer.DirectConnectScreen
 * Remapped: fnj
 */
namespace DirectConnectScreen {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("fnj", "net/minecraft/client/gui/screens/DirectJoinServerScreen", "net/minecraft/class_420", "net/minecraft/client/gui/screen/multiplayer/DirectConnectScreen", "net/minecraft/src/C_3555_"));
        }
        return cachedClass;
    };

    // getter for static private field net.minecraft.client.gui.screen.multiplayer.DirectConnectScreen#ENTER_IP_TEXT
    [[maybe_unused]] static jobject get_field_ENTER_IP_TEXT() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "ENTER_IP_LABEL", "field_26540", "ENTER_IP_TEXT", "f_95952_"), "Lwz;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.gui.screen.multiplayer.DirectConnectScreen#ENTER_IP_TEXT
    [[maybe_unused]] static void set_field_ENTER_IP_TEXT(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "ENTER_IP_LABEL", "field_26540", "ENTER_IP_TEXT", "f_95952_"), "Lwz;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for private field net.minecraft.client.gui.screen.multiplayer.DirectConnectScreen#selectServerButton
    static jobject get_field_selectServerButton(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "selectButton", "field_2462", "selectServerButton", "f_95953_"), "Lfim;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.gui.screen.multiplayer.DirectConnectScreen#selectServerButton
    static void set_field_selectServerButton(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "selectButton", "field_2462", "selectServerButton", "f_95953_"), "Lfim;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.gui.screen.multiplayer.DirectConnectScreen#serverEntry
    static jobject get_field_serverEntry(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "serverData", "field_2460", "serverEntry", "f_95954_"), "Lfzt;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.gui.screen.multiplayer.DirectConnectScreen#serverEntry
    static void set_field_serverEntry(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "serverData", "field_2460", "serverEntry", "f_95954_"), "Lfzt;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.gui.screen.multiplayer.DirectConnectScreen#addressField
    static jobject get_field_addressField(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("r", "ipEdit", "field_2463", "addressField", "f_95955_"), "Lfiv;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.gui.screen.multiplayer.DirectConnectScreen#addressField
    static void set_field_addressField(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("r", "ipEdit", "field_2463", "addressField", "f_95955_"), "Lfiv;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.gui.screen.multiplayer.DirectConnectScreen#callback
    static jobject get_field_callback(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("s", "callback", "field_19235", "callback", "f_95956_"), "Lit/unimi/dsi/fastutil/booleans/BooleanConsumer;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.gui.screen.multiplayer.DirectConnectScreen#callback
    static void set_field_callback(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("s", "callback", "field_19235", "callback", "f_95956_"), "Lit/unimi/dsi/fastutil/booleans/BooleanConsumer;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.gui.screen.multiplayer.DirectConnectScreen#parent
    static jobject get_field_parent(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("u", "lastScreen", "field_21790", "parent", "f_95957_"), "Lfod;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.gui.screen.multiplayer.DirectConnectScreen#parent
    static void set_field_parent(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("u", "lastScreen", "field_21790", "parent", "f_95957_"), "Lfod;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID_keyPressed() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "keyPressed", "method_25404", "keyPressed", "m_7933_"), "(III)Z");
    }

    static jboolean keyPressed(const jobject& obj, const jint& arg0, const jint& arg1, const jint& arg2) {
                
       const auto methodID = methodID_keyPressed();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0, arg1, arg2);
    };
    
    static jmethodID methodID_init() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("aT_", "init", "method_25426", "init", "m_7856_"), "()V");
    }

    static void init(const jobject& obj) {
                
       const auto methodID = methodID_init();
       MinecraftSDK::env->CallVoidMethod(obj, methodID);
    };
    
    static jmethodID methodID_setInitialFocus() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("aI_", "setInitialFocus", "method_56131", "setInitialFocus", "m_318615_"), "()V");
    }

    static void setInitialFocus(const jobject& obj) {
                
       const auto methodID = methodID_setInitialFocus();
       MinecraftSDK::env->CallVoidMethod(obj, methodID);
    };
    
    static jmethodID methodID_resize() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "resize", "method_25410", "resize", "m_6574_"), "(Lfgo;II)V");
    }

    static void resize(const jobject& obj, const jobject& arg0, const jint& arg1, const jint& arg2) {
                
       const auto methodID = methodID_resize();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1, arg2);
    };
    
    static jmethodID methodID_saveAndClose() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("m", "onSelect", "method_2167", "saveAndClose", "m_95986_"), "()V");
    }

    static void saveAndClose(const jobject& obj) {
                
       const auto methodID = methodID_saveAndClose();
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
    
    static jmethodID methodID_onAddressFieldChanged() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("C", "updateSelectButtonStatus", "method_2169", "onAddressFieldChanged", "m_95987_"), "()V");
    }

    static void onAddressFieldChanged(const jobject& obj) {
                
       const auto methodID = methodID_onAddressFieldChanged();
       MinecraftSDK::env->CallVoidMethod(obj, methodID);
    };
    
    static jmethodID methodID_render() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "render", "method_25394", "render", "m_88315_"), "(Lfhz;IIF)V");
    }

    static void render(const jobject& obj, const jobject& arg0, const jint& arg1, const jint& arg2, const jfloat& arg3) {
                
       const auto methodID = methodID_render();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1, arg2, arg3);
    };
    
};

#endif // NET_MINECRAFT_CLIENT_GUI_SCREEN_MULTIPLAYER_DIRECTCONNECTSCREEN_HPP