// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_CLIENT_GUI_WIDGET_AXISGRIDWIDGET$ELEMENT_HPP
#define NET_MINECRAFT_CLIENT_GUI_WIDGET_AXISGRIDWIDGET$ELEMENT_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.client.gui.widget.AxisGridWidget$Element
 * Remapped: flw$a
 */
namespace AxisGridWidget$Element {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("flw$a", "net/minecraft/client/gui/layouts/EqualSpacingLayout$ChildContainer", "net/minecraft/class_7849$class_7850", "net/minecraft/client/gui/widget/AxisGridWidget$Element", "net/minecraft/src/C_290205_$C_290241_"));
        }
        return cachedClass;
    };

};

#endif // NET_MINECRAFT_CLIENT_GUI_WIDGET_AXISGRIDWIDGET$ELEMENT_HPP