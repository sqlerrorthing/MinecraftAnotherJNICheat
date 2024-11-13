// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_CLIENT_GUI_WIDGET_OPTIONSLIDERWIDGET_HPP
#define NET_MINECRAFT_CLIENT_GUI_WIDGET_OPTIONSLIDERWIDGET_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.client.gui.widget.OptionSliderWidget
 * Remapped: fif
 */
namespace OptionSliderWidget {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("fif", "net/minecraft/client/gui/components/AbstractOptionSliderButton", "net/minecraft/class_4892", "net/minecraft/client/gui/widget/OptionSliderWidget", "net/minecraft/src/C_3442_"));
        }
        return cachedClass;
    };

    // getter for protected field net.minecraft.client.gui.widget.OptionSliderWidget#options
    static jobject get_field_options(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "options", "field_22738", "options", "f_93377_"), "Lfgs;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static protected field net.minecraft.client.gui.widget.OptionSliderWidget#options
    static void set_field_options(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "options", "field_22738", "options", "f_93377_"), "Lfgs;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

};

#endif // NET_MINECRAFT_CLIENT_GUI_WIDGET_OPTIONSLIDERWIDGET_HPP