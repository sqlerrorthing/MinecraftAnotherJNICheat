// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_CLIENT_GUI_SCREEN_WORLD_PRESETSSCREEN$SUPERFLATPRESETSLISTWIDGET_HPP
#define NET_MINECRAFT_CLIENT_GUI_SCREEN_WORLD_PRESETSSCREEN$SUPERFLATPRESETSLISTWIDGET_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.client.gui.screen.world.PresetsScreen$SuperflatPresetsListWidget
 * Remapped: fnz$a
 */
namespace PresetsScreen$SuperflatPresetsListWidget {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("fnz$a", "net/minecraft/client/gui/screens/PresetFlatWorldScreen$PresetsList", "net/minecraft/class_430$class_4196", "net/minecraft/client/gui/screen/world/PresetsScreen$SuperflatPresetsListWidget", "net/minecraft/src/C_3577_$C_3579_"));
        }
        return cachedClass;
    };

    static jmethodID methodID_setSelected() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "setSelected", "method_20103", "setSelected", "m_6987_"), "(Lfnz$a$a;)V");
    }

    static void setSelected(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_setSelected();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_keyPressed() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "keyPressed", "method_25404", "keyPressed", "m_7933_"), "(III)Z");
    }

    static jboolean keyPressed(const jobject& obj, const jint& arg0, const jint& arg1, const jint& arg2) {
                
       const auto methodID = methodID_keyPressed();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0, arg1, arg2);
    };
    
};

#endif // NET_MINECRAFT_CLIENT_GUI_SCREEN_WORLD_PRESETSSCREEN$SUPERFLATPRESETSLISTWIDGET_HPP