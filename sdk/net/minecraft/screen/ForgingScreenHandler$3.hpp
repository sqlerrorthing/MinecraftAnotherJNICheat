// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_SCREEN_FORGINGSCREENHANDLER$3_HPP
#define NET_MINECRAFT_SCREEN_FORGINGSCREENHANDLER$3_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.screen.ForgingScreenHandler$3
 * Remapped: cqx$3
 */
namespace ForgingScreenHandler$3 {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("cqx$3", "net/minecraft/world/inventory/ItemCombinerMenu$3", "net/minecraft/class_4861$3", "net/minecraft/screen/ForgingScreenHandler$3", "net/minecraft/src/C_1278_$C_265808_"));
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

#endif // NET_MINECRAFT_SCREEN_FORGINGSCREENHANDLER$3_HPP