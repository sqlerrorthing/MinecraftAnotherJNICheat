// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_UTIL_UTIL$5_HPP
#define NET_MINECRAFT_UTIL_UTIL$5_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.util.Util$5
 * Remapped: ad$5
 */
namespace Util$5 {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("ad$5", "net/minecraft/Util$5", "net/minecraft/class_156$5", "net/minecraft/util/Util$5", "net/minecraft/src/C_5322_$C_5326_"));
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

#endif // NET_MINECRAFT_UTIL_UTIL$5_HPP