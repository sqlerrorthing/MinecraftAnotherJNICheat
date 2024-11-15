// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_UTIL_NAMEABLE_HPP
#define NET_MINECRAFT_UTIL_NAMEABLE_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.util.Nameable
 * Remapped: bqw
 */
namespace Nameable {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("bqw", "net/minecraft/world/Nameable", "net/minecraft/class_1275", "net/minecraft/util/Nameable", "net/minecraft/src/C_475_"));
        }
        return cachedClass;
    };

    static jmethodID methodID_getName() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("ah", "getName", "method_5477", "getName", "m_7755_"), "()Lwz;");
    }

    static jobject getName(const jobject& obj) {
                
       const auto methodID = methodID_getName();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_hasCustomName() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("ai", "hasCustomName", "method_16914", "hasCustomName", "m_8077_"), "()Z");
    }

    static jboolean hasCustomName(const jobject& obj) {
                
       const auto methodID = methodID_hasCustomName();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID);
    };
    
    static jmethodID methodID_getDisplayName() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("S_", "getDisplayName", "method_5476", "getDisplayName", "m_5446_"), "()Lwz;");
    }

    static jobject getDisplayName(const jobject& obj) {
                
       const auto methodID = methodID_getDisplayName();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_getCustomName() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("aj", "getCustomName", "method_5797", "getCustomName", "m_7770_"), "()Lwz;");
    }

    static jobject getCustomName(const jobject& obj) {
                
       const auto methodID = methodID_getCustomName();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_UTIL_NAMEABLE_HPP