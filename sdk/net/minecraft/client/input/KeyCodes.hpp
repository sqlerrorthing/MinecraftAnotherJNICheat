// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_CLIENT_INPUT_KEYCODES_HPP
#define NET_MINECRAFT_CLIENT_INPUT_KEYCODES_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.client.input.KeyCodes
 * Remapped: fmn
 */
namespace KeyCodes {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("fmn", "net/minecraft/client/gui/navigation/CommonInputs", "net/minecraft/class_8494", "net/minecraft/client/input/KeyCodes", "net/minecraft/src/C_278370_"));
        }
        return cachedClass;
    };

    static jmethodID methodID_isToggle() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "selected", "method_51255", "isToggle", "m_278691_"), "(I)Z");
    }

    static jboolean isToggle(const jint& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_isToggle();
       return MinecraftSDK::env->CallStaticBooleanMethod(clazz, methodID, arg0);
    };
    
};

#endif // NET_MINECRAFT_CLIENT_INPUT_KEYCODES_HPP