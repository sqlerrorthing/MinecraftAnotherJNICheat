// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_CLIENT_UTIL_BACKOFF$1_HPP
#define NET_MINECRAFT_CLIENT_UTIL_BACKOFF$1_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.client.util.Backoff$1
 * Remapped: few$1
 */
namespace Backoff$1 {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("few$1", "com/mojang/realmsclient/gui/task/RepeatedDelayStrategy$1", "net/minecraft/class_7587$1", "net/minecraft/client/util/Backoff$1", "net/minecraft/src/C_238449_$C_238482_"));
        }
        return cachedClass;
    };

    static jmethodID methodID_success() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "delayCyclesAfterSuccess", "method_44643", "success", "m_239029_"), "()J");
    }

    static jlong success(const jobject& obj) {
                
       const auto methodID = methodID_success();
       return MinecraftSDK::env->CallLongMethod(obj, methodID);
    };
    
    static jmethodID methodID_fail() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "delayCyclesAfterFailure", "method_44645", "fail", "m_239153_"), "()J");
    }

    static jlong fail(const jobject& obj) {
                
       const auto methodID = methodID_fail();
       return MinecraftSDK::env->CallLongMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_CLIENT_UTIL_BACKOFF$1_HPP