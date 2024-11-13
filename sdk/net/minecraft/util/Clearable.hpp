// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_UTIL_CLEARABLE_HPP
#define NET_MINECRAFT_UTIL_CLEARABLE_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.util.Clearable
 * Remapped: bqi
 */
namespace Clearable {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("bqi", "net/minecraft/world/Clearable", "net/minecraft/class_3829", "net/minecraft/util/Clearable", "net/minecraft/src/C_462_"));
        }
        return cachedClass;
    };

    static jmethodID methodID_clear() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "clearContent", "method_5448", "clear", "m_6211_"), "()V");
    }

    static void clear(const jobject& obj) {
                
       const auto methodID = methodID_clear();
       MinecraftSDK::env->CallVoidMethod(obj, methodID);
    };
    
    static jmethodID methodID__clear() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a_", "tryClear", "method_16825", "clear", "m_18908_"), "(Ljava/lang/Object;)V");
    }

    static void _clear(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID__clear();
       MinecraftSDK::env->CallStaticVoidMethod(clazz, methodID, arg0);
    };
    
};

#endif // NET_MINECRAFT_UTIL_CLEARABLE_HPP