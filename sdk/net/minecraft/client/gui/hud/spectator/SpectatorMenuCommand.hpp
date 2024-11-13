// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_CLIENT_GUI_HUD_SPECTATOR_SPECTATORMENUCOMMAND_HPP
#define NET_MINECRAFT_CLIENT_GUI_HUD_SPECTATOR_SPECTATORMENUCOMMAND_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.client.gui.hud.spectator.SpectatorMenuCommand
 * Remapped: ftt
 */
namespace SpectatorMenuCommand {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("ftt", "net/minecraft/client/gui/spectator/SpectatorMenuItem", "net/minecraft/class_537", "net/minecraft/client/gui/hud/spectator/SpectatorMenuCommand", "net/minecraft/src/C_3781_"));
        }
        return cachedClass;
    };

    static jmethodID methodID_use() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "selectItem", "method_2783", "use", "m_7608_"), "(Lftr;)V");
    }

    static void use(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_use();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_getName() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("aU_", "getName", "method_16892", "getName", "m_7869_"), "()Lwz;");
    }

    static jobject getName(const jobject& obj) {
                
       const auto methodID = methodID_getName();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_renderIcon() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "renderIcon", "method_2784", "renderIcon", "m_6252_"), "(Lfhz;FI)V");
    }

    static void renderIcon(const jobject& obj, const jobject& arg0, const jfloat& arg1, const jint& arg2) {
                
       const auto methodID = methodID_renderIcon();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1, arg2);
    };
    
    static jmethodID methodID_isEnabled() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("aV_", "isEnabled", "method_16893", "isEnabled", "m_7304_"), "()Z");
    }

    static jboolean isEnabled(const jobject& obj) {
                
       const auto methodID = methodID_isEnabled();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_CLIENT_GUI_HUD_SPECTATOR_SPECTATORMENUCOMMAND_HPP