// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_CLIENT_GUI_WIDGET_ALWAYSSELECTEDENTRYLISTWIDGET_HPP
#define NET_MINECRAFT_CLIENT_GUI_WIDGET_ALWAYSSELECTEDENTRYLISTWIDGET_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.client.gui.widget.AlwaysSelectedEntryListWidget
 * Remapped: fji
 */
namespace AlwaysSelectedEntryListWidget {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("fji", "net/minecraft/client/gui/components/ObjectSelectionList", "net/minecraft/class_4280", "net/minecraft/client/gui/widget/AlwaysSelectedEntryListWidget", "net/minecraft/src/C_3474_"));
        }
        return cachedClass;
    };

    // getter for static private field net.minecraft.client.gui.widget.AlwaysSelectedEntryListWidget#SELECTION_USAGE_TEXT
    [[maybe_unused]] static jobject get_field_SELECTION_USAGE_TEXT() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "USAGE_NARRATION", "field_33783", "SELECTION_USAGE_TEXT", "f_169039_"), "Lwz;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.gui.widget.AlwaysSelectedEntryListWidget#SELECTION_USAGE_TEXT
    [[maybe_unused]] static void set_field_SELECTION_USAGE_TEXT(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "USAGE_NARRATION", "field_33783", "SELECTION_USAGE_TEXT", "f_169039_"), "Lwz;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    static jmethodID methodID_getNavigationPath() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "nextFocusPath", "method_48205", "getNavigationPath", "m_264064_"), "(Lfmo;)Lfhw;");
    }

    static jobject getNavigationPath(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_getNavigationPath();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_appendClickableNarrations() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "updateWidgetNarration", "method_47399", "appendClickableNarrations", "m_168797_"), "(Lfmi;)V");
    }

    static void appendClickableNarrations(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_appendClickableNarrations();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
};

#endif // NET_MINECRAFT_CLIENT_GUI_WIDGET_ALWAYSSELECTEDENTRYLISTWIDGET_HPP