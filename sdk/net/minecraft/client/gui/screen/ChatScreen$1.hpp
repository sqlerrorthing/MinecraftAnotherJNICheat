// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_CLIENT_GUI_SCREEN_CHATSCREEN$1_HPP
#define NET_MINECRAFT_CLIENT_GUI_SCREEN_CHATSCREEN$1_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.client.gui.screen.ChatScreen$1
 * Remapped: fmz$1
 */
namespace ChatScreen$1 {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("fmz$1", "net/minecraft/client/gui/screens/ChatScreen$1", "net/minecraft/class_408$1", "net/minecraft/client/gui/screen/ChatScreen$1", "net/minecraft/src/C_3538_$C_3539_"));
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

#endif // NET_MINECRAFT_CLIENT_GUI_SCREEN_CHATSCREEN$1_HPP