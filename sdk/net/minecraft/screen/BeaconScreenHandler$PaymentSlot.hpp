// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_SCREEN_BEACONSCREENHANDLER$PAYMENTSLOT_HPP
#define NET_MINECRAFT_SCREEN_BEACONSCREENHANDLER$PAYMENTSLOT_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.screen.BeaconScreenHandler$PaymentSlot
 * Remapped: cpy$a
 */
namespace BeaconScreenHandler$PaymentSlot {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("cpy$a", "net/minecraft/world/inventory/BeaconMenu$PaymentSlot", "net/minecraft/class_1704$class_1705", "net/minecraft/screen/BeaconScreenHandler$PaymentSlot", "net/minecraft/src/C_1230_$C_1232_"));
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
    
    static jmethodID methodID_getMaxItemCount() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getMaxStackSize", "method_7675", "getMaxItemCount", "m_6641_"), "()I");
    }

    static jint getMaxItemCount(const jobject& obj) {
                
       const auto methodID = methodID_getMaxItemCount();
       return MinecraftSDK::env->CallIntMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_SCREEN_BEACONSCREENHANDLER$PAYMENTSLOT_HPP