// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_CLIENT_GUI_SCREEN_INGAME_LECTERNSCREEN$1_HPP
#define NET_MINECRAFT_CLIENT_GUI_SCREEN_INGAME_LECTERNSCREEN$1_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.client.gui.screen.ingame.LecternScreen$1
 * Remapped: fpw$1
 */
namespace LecternScreen$1 {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("fpw$1", "net/minecraft/client/gui/screens/inventory/LecternScreen$1", "net/minecraft/class_3935$1", "net/minecraft/client/gui/screen/ingame/LecternScreen$1", "net/minecraft/src/C_3669_$C_3670_"));
        }
        return cachedClass;
    };

    static jmethodID methodID_onSlotUpdate() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "slotChanged", "method_7635", "onSlotUpdate", "m_7934_"), "(Lcpu;ILcuq;)V");
    }

    static void onSlotUpdate(const jobject& obj, const jobject& arg0, const jint& arg1, const jobject& arg2) {
                
       const auto methodID = methodID_onSlotUpdate();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1, arg2);
    };
    
    static jmethodID methodID_onPropertyUpdate() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "dataChanged", "method_7633", "onPropertyUpdate", "m_142153_"), "(Lcpu;II)V");
    }

    static void onPropertyUpdate(const jobject& obj, const jobject& arg0, const jint& arg1, const jint& arg2) {
                
       const auto methodID = methodID_onPropertyUpdate();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1, arg2);
    };
    
};

#endif // NET_MINECRAFT_CLIENT_GUI_SCREEN_INGAME_LECTERNSCREEN$1_HPP