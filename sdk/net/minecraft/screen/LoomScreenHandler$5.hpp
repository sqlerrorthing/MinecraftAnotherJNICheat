// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_SCREEN_LOOMSCREENHANDLER$5_HPP
#define NET_MINECRAFT_SCREEN_LOOMSCREENHANDLER$5_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.screen.LoomScreenHandler$5
 * Remapped: cra$5
 */
namespace LoomScreenHandler$5 {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("cra$5", "net/minecraft/world/inventory/LoomMenu$5", "net/minecraft/class_1726$5", "net/minecraft/screen/LoomScreenHandler$5", "net/minecraft/src/C_1283_$C_1288_"));
        }
        return cachedClass;
    };

    static jmethodID methodID_canInsert() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "mayPlace", "method_7680", "canInsert", "m_5857_"), "(Lcuq;)Z");
    }

    static jboolean canInsert(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_canInsert();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0);
    };
    
};

#endif // NET_MINECRAFT_SCREEN_LOOMSCREENHANDLER$5_HPP