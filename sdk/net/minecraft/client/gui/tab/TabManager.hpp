// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_CLIENT_GUI_TAB_TABMANAGER_HPP
#define NET_MINECRAFT_CLIENT_GUI_TAB_TABMANAGER_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.client.gui.tab.TabManager
 * Remapped: fkp
 */
namespace TabManager {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("fkp", "net/minecraft/client/gui/components/tabs/TabManager", "net/minecraft/class_8088", "net/minecraft/client/gui/tab/TabManager", "net/minecraft/src/C_267345_"));
        }
        return cachedClass;
    };

    // getter for private field net.minecraft.client.gui.tab.TabManager#tabLoadConsumer
    static jobject get_field_tabLoadConsumer(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "addWidget", "field_42141", "tabLoadConsumer", "f_267431_"), "Ljava/util/function/Consumer;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.gui.tab.TabManager#tabLoadConsumer
    static void set_field_tabLoadConsumer(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "addWidget", "field_42141", "tabLoadConsumer", "f_267431_"), "Ljava/util/function/Consumer;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.gui.tab.TabManager#tabUnloadConsumer
    static jobject get_field_tabUnloadConsumer(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "removeWidget", "field_42142", "tabUnloadConsumer", "f_267452_"), "Ljava/util/function/Consumer;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.gui.tab.TabManager#tabUnloadConsumer
    static void set_field_tabUnloadConsumer(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "removeWidget", "field_42142", "tabUnloadConsumer", "f_267452_"), "Ljava/util/function/Consumer;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.gui.tab.TabManager#currentTab
    static jobject get_field_currentTab(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "currentTab", "field_42143", "currentTab", "f_267400_"), "Lfko;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.gui.tab.TabManager#currentTab
    static void set_field_currentTab(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "currentTab", "field_42143", "currentTab", "f_267400_"), "Lfko;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.gui.tab.TabManager#tabArea
    static jobject get_field_tabArea(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "tabArea", "field_42144", "tabArea", "f_267478_"), "Lfms;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.gui.tab.TabManager#tabArea
    static void set_field_tabArea(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "tabArea", "field_42144", "tabArea", "f_267478_"), "Lfms;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID_setTabArea() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "setTabArea", "method_48616", "setTabArea", "m_267817_"), "(Lfms;)V");
    }

    static void setTabArea(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_setTabArea();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_setCurrentTab() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "setCurrentTab", "method_48615", "setCurrentTab", "m_276088_"), "(Lfko;Z)V");
    }

    static void setCurrentTab(const jobject& obj, const jobject& arg0, const jboolean& arg1) {
                
       const auto methodID = methodID_setCurrentTab();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_getCurrentTab() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getCurrentTab", "method_48614", "getCurrentTab", "m_267695_"), "()Lfko;");
    }

    static jobject getCurrentTab(const jobject& obj) {
                
       const auto methodID = methodID_getCurrentTab();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_CLIENT_GUI_TAB_TABMANAGER_HPP