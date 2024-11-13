// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_CLIENT_GUI_SCREEN_OVERLAY_HPP
#define NET_MINECRAFT_CLIENT_GUI_SCREEN_OVERLAY_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.client.gui.screen.Overlay
 * Remapped: fnx
 */
namespace Overlay {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("fnx", "net/minecraft/client/gui/screens/Overlay", "net/minecraft/class_4071", "net/minecraft/client/gui/screen/Overlay", "net/minecraft/src/C_3573_"));
        }
        return cachedClass;
    };

    static jmethodID methodID_pausesGame() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "isPauseScreen", "method_18640", "pausesGame", "m_7859_"), "()Z");
    }

    static jboolean pausesGame(const jobject& obj) {
                
       const auto methodID = methodID_pausesGame();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_CLIENT_GUI_SCREEN_OVERLAY_HPP