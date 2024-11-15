// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_SCREEN_PLAYERSCREENHANDLER$1_HPP
#define NET_MINECRAFT_SCREEN_PLAYERSCREENHANDLER$1_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.screen.PlayerScreenHandler$1
 * Remapped: cqw$1
 */
namespace PlayerScreenHandler$1 {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("cqw$1", "net/minecraft/world/inventory/InventoryMenu$1", "net/minecraft/class_1723$1", "net/minecraft/screen/PlayerScreenHandler$1", "net/minecraft/src/C_1274_$C_1275_"));
        }
        return cachedClass;
    };

    static jmethodID methodID_setStack() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "setByPlayer", "method_48931", "setStack", "m_269206_"), "(Lcuq;Lcuq;)V");
    }

    static void setStack(const jobject& obj, const jobject& arg0, const jobject& arg1) {
                
       const auto methodID = methodID_setStack();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_getBackgroundSprite() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "getNoItemIcon", "method_7679", "getBackgroundSprite", "m_7543_"), "()Lcom/mojang/datafixers/util/Pair;");
    }

    static jobject getBackgroundSprite(const jobject& obj) {
                
       const auto methodID = methodID_getBackgroundSprite();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_SCREEN_PLAYERSCREENHANDLER$1_HPP