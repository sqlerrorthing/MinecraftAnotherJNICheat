// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_CLIENT_GUI_SCREEN_INGAME_ABSTRACTCOMMANDBLOCKSCREEN$1_HPP
#define NET_MINECRAFT_CLIENT_GUI_SCREEN_INGAME_ABSTRACTCOMMANDBLOCKSCREEN$1_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.client.gui.screen.ingame.AbstractCommandBlockScreen$1
 * Remapped: fos$1
 */
namespace AbstractCommandBlockScreen$1 {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("fos$1", "net/minecraft/client/gui/screens/inventory/AbstractCommandBlockEditScreen$1", "net/minecraft/class_463$1", "net/minecraft/client/gui/screen/ingame/AbstractCommandBlockScreen$1", "net/minecraft/src/C_3622_$C_3623_"));
        }
        return cachedClass;
    };

    static jmethodID methodID_getNarrationMessage() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("aQ_", "createNarrationMessage", "method_25360", "getNarrationMessage", "m_5646_"), "()Lxn;");
    }

    static jobject getNarrationMessage(const jobject& obj) {
                
       const auto methodID = methodID_getNarrationMessage();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_CLIENT_GUI_SCREEN_INGAME_ABSTRACTCOMMANDBLOCKSCREEN$1_HPP