// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_CLIENT_GUI_WIDGET_ALWAYSSELECTEDENTRYLISTWIDGET$ENTRY_HPP
#define NET_MINECRAFT_CLIENT_GUI_WIDGET_ALWAYSSELECTEDENTRYLISTWIDGET$ENTRY_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.client.gui.widget.AlwaysSelectedEntryListWidget$Entry
 * Remapped: fji$a
 */
namespace AlwaysSelectedEntryListWidget$Entry {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("fji$a", "net/minecraft/client/gui/components/ObjectSelectionList$Entry", "net/minecraft/class_4280$class_4281", "net/minecraft/client/gui/widget/AlwaysSelectedEntryListWidget$Entry", "net/minecraft/src/C_3474_$C_3475_"));
        }
        return cachedClass;
    };

    static jmethodID methodID_getNarration() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getNarration", "method_37006", "getNarration", "m_142172_"), "()Lwz;");
    }

    static jobject getNarration(const jobject& obj) {
                
       const auto methodID = methodID_getNarration();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_mouseClicked() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "mouseClicked", "method_25402", "mouseClicked", "m_6375_"), "(DDI)Z");
    }

    static jboolean mouseClicked(const jobject& obj, const jdouble& arg0, const jdouble& arg1, const jint& arg2) {
                
       const auto methodID = methodID_mouseClicked();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0, arg1, arg2);
    };
    
    static jmethodID methodID_appendNarrations() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "updateNarration", "method_37020", "appendNarrations", "m_142291_"), "(Lfmi;)V");
    }

    static void appendNarrations(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_appendNarrations();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
};

#endif // NET_MINECRAFT_CLIENT_GUI_WIDGET_ALWAYSSELECTEDENTRYLISTWIDGET$ENTRY_HPP