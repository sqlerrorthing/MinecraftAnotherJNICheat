// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_UTIL_MATH_POSITION_HPP
#define NET_MINECRAFT_UTIL_MATH_POSITION_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.util.math.Position
 * Remapped: jw
 */
namespace Position {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("jw", "net/minecraft/core/Position", "net/minecraft/class_2374", "net/minecraft/util/math/Position", "net/minecraft/src/C_4703_"));
        }
        return cachedClass;
    };

    static jmethodID methodID_getX() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "x", "method_10216", "getX", "m_7096_"), "()D");
    }

    static jdouble getX(const jobject& obj) {
                
       const auto methodID = methodID_getX();
       return MinecraftSDK::env->CallDoubleMethod(obj, methodID);
    };
    
    static jmethodID methodID_getY() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "y", "method_10214", "getY", "m_7098_"), "()D");
    }

    static jdouble getY(const jobject& obj) {
                
       const auto methodID = methodID_getY();
       return MinecraftSDK::env->CallDoubleMethod(obj, methodID);
    };
    
    static jmethodID methodID_getZ() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "z", "method_10215", "getZ", "m_7094_"), "()D");
    }

    static jdouble getZ(const jobject& obj) {
                
       const auto methodID = methodID_getZ();
       return MinecraftSDK::env->CallDoubleMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_UTIL_MATH_POSITION_HPP