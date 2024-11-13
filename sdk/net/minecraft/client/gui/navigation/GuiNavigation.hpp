// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_CLIENT_GUI_NAVIGATION_GUINAVIGATION_HPP
#define NET_MINECRAFT_CLIENT_GUI_NAVIGATION_GUINAVIGATION_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.client.gui.navigation.GuiNavigation
 * Remapped: fmo
 */
namespace GuiNavigation {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("fmo", "net/minecraft/client/gui/navigation/FocusNavigationEvent", "net/minecraft/class_8023", "net/minecraft/client/gui/navigation/GuiNavigation", "net/minecraft/src/C_263643_"));
        }
        return cachedClass;
    };

    static jmethodID methodID_getDirection() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getVerticalDirectionForInitialFocus", "method_48231", "getDirection", "m_264101_"), "()Lfmq;");
    }

    static jobject getDirection(const jobject& obj) {
                
       const auto methodID = methodID_getDirection();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_CLIENT_GUI_NAVIGATION_GUINAVIGATION_HPP