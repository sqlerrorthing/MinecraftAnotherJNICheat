// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_SERVER_DEDICATED_GUI_DEDICATEDSERVERGUI$2_HPP
#define NET_MINECRAFT_SERVER_DEDICATED_GUI_DEDICATEDSERVERGUI$2_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.server.dedicated.gui.DedicatedServerGui$2
 * Remapped: apt$2
 */
namespace DedicatedServerGui$2 {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("apt$2", "net/minecraft/server/gui/MinecraftServerGui$2", "net/minecraft/class_3182$2", "net/minecraft/server/dedicated/gui/DedicatedServerGui$2", "net/minecraft/src/C_5416_$C_5418_"));
        }
        return cachedClass;
    };

    static jmethodID methodID_focusGained() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("focusGained", "focusGained", "focusGained", "focusGained", "focusGained"), "(Ljava/awt/event/FocusEvent;)V");
    }

    static void focusGained(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_focusGained();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
};

#endif // NET_MINECRAFT_SERVER_DEDICATED_GUI_DEDICATEDSERVERGUI$2_HPP