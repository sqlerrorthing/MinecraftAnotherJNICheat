// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_UTIL_UTIL$6_HPP
#define NET_MINECRAFT_UTIL_UTIL$6_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.util.Util$6
 * Remapped: ad$6
 */
namespace Util$6 {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("ad$6", "net/minecraft/Util$6", "net/minecraft/class_156$6", "net/minecraft/util/Util$6", "net/minecraft/src/C_5322_$C_5327_"));
        }
        return cachedClass;
    };

    static jmethodID methodID_getAsBoolean() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("getAsBoolean", "getAsBoolean", "", "", "getAsBoolean"), "()Z");
    }

    static jboolean getAsBoolean(const jobject& obj) {
                
       const auto methodID = methodID_getAsBoolean();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_UTIL_UTIL$6_HPP