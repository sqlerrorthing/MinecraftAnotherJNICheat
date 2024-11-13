// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_SCREEN_SCREENHANDLERLISTENER_HPP
#define NET_MINECRAFT_SCREEN_SCREENHANDLERLISTENER_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.screen.ScreenHandlerListener
 * Remapped: cqh
 */
namespace ScreenHandlerListener {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("cqh", "net/minecraft/world/inventory/ContainerListener", "net/minecraft/class_1712", "net/minecraft/screen/ScreenHandlerListener", "net/minecraft/src/C_1250_"));
        }
        return cachedClass;
    };

    static jmethodID methodID_onSlotUpdate() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "slotChanged", "method_7635", "onSlotUpdate", "m_7934_"), "(Lcpu;ILcuq;)V");
    }

    static void onSlotUpdate(const jobject& obj, const jobject& arg0, const jint& arg1, const jobject& arg2) {
                
       const auto methodID = methodID_onSlotUpdate();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1, arg2);
    };
    
    static jmethodID methodID_onPropertyUpdate() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "dataChanged", "method_7633", "onPropertyUpdate", "m_142153_"), "(Lcpu;II)V");
    }

    static void onPropertyUpdate(const jobject& obj, const jobject& arg0, const jint& arg1, const jint& arg2) {
                
       const auto methodID = methodID_onPropertyUpdate();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1, arg2);
    };
    
};

#endif // NET_MINECRAFT_SCREEN_SCREENHANDLERLISTENER_HPP