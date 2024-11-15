// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_CLIENT_GUI_WIDGET_OPTIONLISTWIDGET$OPTIONWIDGETENTRY_HPP
#define NET_MINECRAFT_CLIENT_GUI_WIDGET_OPTIONLISTWIDGET$OPTIONWIDGETENTRY_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.client.gui.widget.OptionListWidget$OptionWidgetEntry
 * Remapped: fjj$b
 */
namespace OptionListWidget$OptionWidgetEntry {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("fjj$b", "net/minecraft/client/gui/components/OptionsList$OptionEntry", "net/minecraft/class_353$class_9379", "net/minecraft/client/gui/widget/OptionListWidget$OptionWidgetEntry", "net/minecraft/src/C_3477_$C_313431_"));
        }
        return cachedClass;
    };

    // getter for default field net.minecraft.client.gui.widget.OptionListWidget$OptionWidgetEntry#optionWidgets
    static jobject get_field_optionWidgets(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "options", "field_49893", "optionWidgets", "f_315275_"), "Ljava/util/Map;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static default field net.minecraft.client.gui.widget.OptionListWidget$OptionWidgetEntry#optionWidgets
    static void set_field_optionWidgets(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "options", "field_49893", "optionWidgets", "f_315275_"), "Ljava/util/Map;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID_create() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "big", "method_58229", "create", "m_324394_"), "(Lfgs;Lfgr;Lfrh;)Lfjj$b;");
    }

    static jobject create(const jobject& arg0, const jobject& arg1, const jobject& arg2) {
       const auto clazz = self();
       const auto methodID = methodID_create();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0, arg1, arg2);
    };
    
    static jmethodID methodID__create() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "small", "method_58228", "create", "m_319849_"), "(Lfgs;Lfgr;Lfgr;Lfrh;)Lfjj$b;");
    }

    static jobject _create(const jobject& arg0, const jobject& arg1, const jobject& arg2, const jobject& arg3) {
       const auto clazz = self();
       const auto methodID = methodID__create();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0, arg1, arg2, arg3);
    };
    
};

#endif // NET_MINECRAFT_CLIENT_GUI_WIDGET_OPTIONLISTWIDGET$OPTIONWIDGETENTRY_HPP