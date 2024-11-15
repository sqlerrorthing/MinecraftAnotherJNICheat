// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_CLIENT_REALMS_GUI_SCREEN_REALMSMAINSCREEN$SNAPSHOTENTRY_HPP
#define NET_MINECRAFT_CLIENT_REALMS_GUI_SCREEN_REALMSMAINSCREEN$SNAPSHOTENTRY_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.client.realms.gui.screen.RealmsMainScreen$SnapshotEntry
 * Remapped: fbt$a
 */
namespace RealmsMainScreen$SnapshotEntry {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("fbt$a", "com/mojang/realmsclient/RealmsMainScreen$AvailableSnapshotEntry", "net/minecraft/class_4325$class_8840", "net/minecraft/client/realms/gui/screen/RealmsMainScreen$SnapshotEntry", "net/minecraft/src/C_3197_$C_302059_"));
        }
        return cachedClass;
    };

    // getter for static private field net.minecraft.client.realms.gui.screen.RealmsMainScreen$SnapshotEntry#START_TEXT
    [[maybe_unused]] static jobject get_field_START_TEXT() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("f", "START_SNAPSHOT_REALM", "field_46676", "START_TEXT", "f_302194_"), "Lwz;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.realms.gui.screen.RealmsMainScreen$SnapshotEntry#START_TEXT
    [[maybe_unused]] static void set_field_START_TEXT(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("f", "START_SNAPSHOT_REALM", "field_46676", "START_TEXT", "f_302194_"), "Lwz;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.client.realms.gui.screen.RealmsMainScreen$SnapshotEntry#field_46677
    [[maybe_unused]] static jint get_field_field_46677() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("g", "TEXT_PADDING", "field_46677", "field_46677", "f_302397_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.realms.gui.screen.RealmsMainScreen$SnapshotEntry#field_46677
    [[maybe_unused]] static void set_field_field_46677(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("g", "TEXT_PADDING", "field_46677", "field_46677", "f_302397_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for private field net.minecraft.client.realms.gui.screen.RealmsMainScreen$SnapshotEntry#tooltip
    static jobject get_field_tooltip(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("h", "tooltip", "field_46678", "tooltip", "f_302574_"), "Lfka;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.realms.gui.screen.RealmsMainScreen$SnapshotEntry#tooltip
    static void set_field_tooltip(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("h", "tooltip", "field_46678", "tooltip", "f_302574_"), "Lfka;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.realms.gui.screen.RealmsMainScreen$SnapshotEntry#server
    static jobject get_field_server(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("i", "parent", "field_46679", "server", "f_302888_"), "Lfcp;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.realms.gui.screen.RealmsMainScreen$SnapshotEntry#server
    static void set_field_server(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("i", "parent", "field_46679", "server", "f_302888_"), "Lfcp;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID_render() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "render", "method_25343", "render", "m_6311_"), "(Lfhz;IIIIIIIZF)V");
    }

    static void render(const jobject& obj, const jobject& arg0, const jint& arg1, const jint& arg2, const jint& arg3, const jint& arg4, const jint& arg5, const jint& arg6, const jint& arg7, const jboolean& arg8, const jfloat& arg9) {
                
       const auto methodID = methodID_render();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9);
    };
    
    static jmethodID methodID_mouseClicked() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "mouseClicked", "method_25402", "mouseClicked", "m_6375_"), "(DDI)Z");
    }

    static jboolean mouseClicked(const jobject& obj, const jdouble& arg0, const jdouble& arg1, const jint& arg2) {
                
       const auto methodID = methodID_mouseClicked();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0, arg1, arg2);
    };
    
    static jmethodID methodID_keyPressed() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "keyPressed", "method_25404", "keyPressed", "m_7933_"), "(III)Z");
    }

    static jboolean keyPressed(const jobject& obj, const jint& arg0, const jint& arg1, const jint& arg2) {
                
       const auto methodID = methodID_keyPressed();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0, arg1, arg2);
    };
    
    static jmethodID methodID_showPopup() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "addSnapshotRealm", "method_54344", "showPopup", "m_305349_"), "()V");
    }

    static void showPopup(const jobject& obj) {
                
       const auto methodID = methodID_showPopup();
       MinecraftSDK::env->CallVoidMethod(obj, methodID);
    };
    
    static jmethodID methodID_getNarration() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getNarration", "method_37006", "getNarration", "m_142172_"), "()Lwz;");
    }

    static jobject getNarration(const jobject& obj) {
                
       const auto methodID = methodID_getNarration();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_CLIENT_REALMS_GUI_SCREEN_REALMSMAINSCREEN$SNAPSHOTENTRY_HPP