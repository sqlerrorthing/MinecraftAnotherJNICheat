// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_CLIENT_GUI_SCREEN_INGAME_JIGSAWBLOCKSCREEN$1_HPP
#define NET_MINECRAFT_CLIENT_GUI_SCREEN_INGAME_JIGSAWBLOCKSCREEN$1_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.client.gui.screen.ingame.JigsawBlockScreen$1
 * Remapped: fpv$1
 */
namespace JigsawBlockScreen$1 {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("fpv$1", "net/minecraft/client/gui/screens/inventory/JigsawBlockEditScreen$1", "net/minecraft/class_3742$1", "net/minecraft/client/gui/screen/ingame/JigsawBlockScreen$1", "net/minecraft/src/C_3666_$C_3667_"));
        }
        return cachedClass;
    };

    static jmethodID methodID_updateMessage() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "updateMessage", "method_25346", "updateMessage", "m_5695_"), "()V");
    }

    static void updateMessage(const jobject& obj) {
                
       const auto methodID = methodID_updateMessage();
       MinecraftSDK::env->CallVoidMethod(obj, methodID);
    };
    
    static jmethodID methodID_applyValue() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "applyValue", "method_25344", "applyValue", "m_5697_"), "()V");
    }

    static void applyValue(const jobject& obj) {
                
       const auto methodID = methodID_applyValue();
       MinecraftSDK::env->CallVoidMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_CLIENT_GUI_SCREEN_INGAME_JIGSAWBLOCKSCREEN$1_HPP