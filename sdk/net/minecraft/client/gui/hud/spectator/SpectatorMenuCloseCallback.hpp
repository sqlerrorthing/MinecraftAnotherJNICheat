// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_CLIENT_GUI_HUD_SPECTATOR_SPECTATORMENUCLOSECALLBACK_HPP
#define NET_MINECRAFT_CLIENT_GUI_HUD_SPECTATOR_SPECTATORMENUCLOSECALLBACK_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.client.gui.hud.spectator.SpectatorMenuCloseCallback
 * Remapped: ftu
 */
namespace SpectatorMenuCloseCallback {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("ftu", "net/minecraft/client/gui/spectator/SpectatorMenuListener", "net/minecraft/class_536", "net/minecraft/client/gui/hud/spectator/SpectatorMenuCloseCallback", "net/minecraft/src/C_3782_"));
        }
        return cachedClass;
    };

    static jmethodID methodID_close() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "onSpectatorMenuClosed", "method_2782", "close", "m_7613_"), "(Lftr;)V");
    }

    static void close(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_close();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
};

#endif // NET_MINECRAFT_CLIENT_GUI_HUD_SPECTATOR_SPECTATORMENUCLOSECALLBACK_HPP