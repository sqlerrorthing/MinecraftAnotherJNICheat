// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_SCREEN_CARTOGRAPHYTABLESCREENHANDLER$3_HPP
#define NET_MINECRAFT_SCREEN_CARTOGRAPHYTABLESCREENHANDLER$3_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.screen.CartographyTableScreenHandler$3
 * Remapped: cqb$3
 */
namespace CartographyTableScreenHandler$3 {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("cqb$3", "net/minecraft/world/inventory/CartographyTableMenu$3", "net/minecraft/class_3910$3", "net/minecraft/screen/CartographyTableScreenHandler$3", "net/minecraft/src/C_1238_$C_1241_"));
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

#endif // NET_MINECRAFT_SCREEN_CARTOGRAPHYTABLESCREENHANDLER$3_HPP