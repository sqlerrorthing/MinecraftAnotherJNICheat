// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_SCREEN_LOOMSCREENHANDLER$2_HPP
#define NET_MINECRAFT_SCREEN_LOOMSCREENHANDLER$2_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.screen.LoomScreenHandler$2
 * Remapped: cra$2
 */
namespace LoomScreenHandler$2 {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("cra$2", "net/minecraft/world/inventory/LoomMenu$2", "net/minecraft/class_1726$2", "net/minecraft/screen/LoomScreenHandler$2", "net/minecraft/src/C_1283_$C_1285_"));
        }
        return cachedClass;
    };

    static jmethodID methodID_markDirty() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("e", "setChanged", "method_5431", "markDirty", "m_6596_"), "()V");
    }

    static void markDirty(const jobject& obj) {
                
       const auto methodID = methodID_markDirty();
       MinecraftSDK::env->CallVoidMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_SCREEN_LOOMSCREENHANDLER$2_HPP