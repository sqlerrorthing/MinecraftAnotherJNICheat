// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_SCREEN_HORSESCREENHANDLER$1_HPP
#define NET_MINECRAFT_SCREEN_HORSESCREENHANDLER$1_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.screen.HorseScreenHandler$1
 * Remapped: cqv$1
 */
namespace HorseScreenHandler$1 {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("cqv$1", "net/minecraft/world/inventory/HorseInventoryMenu$1", "net/minecraft/class_1724$1", "net/minecraft/screen/HorseScreenHandler$1", "net/minecraft/src/C_1271_$C_1272_"));
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
    
    static jmethodID methodID_isEnabled() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("d", "isActive", "method_7682", "isEnabled", "m_6659_"), "()Z");
    }

    static jboolean isEnabled(const jobject& obj) {
                
       const auto methodID = methodID_isEnabled();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_SCREEN_HORSESCREENHANDLER$1_HPP