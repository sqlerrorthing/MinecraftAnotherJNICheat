// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_UTIL_MATH_LONGJUMPUTIL_HPP
#define NET_MINECRAFT_UTIL_MATH_LONGJUMPUTIL_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.util.math.LongJumpUtil
 * Remapped: bwl
 */
namespace LongJumpUtil {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("bwl", "net/minecraft/world/entity/ai/behavior/LongJumpUtil", "net/minecraft/class_8946", "net/minecraft/util/math/LongJumpUtil", "net/minecraft/src/C_302048_"));
        }
        return cachedClass;
    };

    static jmethodID methodID_getJumpingVelocity() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "calculateJumpVectorForAngle", "method_54990", "getJumpingVelocity", "m_305962_"), "(Lbtp;Lexc;FIZ)Ljava/util/Optional;");
    }

    static jobject getJumpingVelocity(const jobject& arg0, const jobject& arg1, const jfloat& arg2, const jint& arg3, const jboolean& arg4) {
       const auto clazz = self();
       const auto methodID = methodID_getJumpingVelocity();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0, arg1, arg2, arg3, arg4);
    };
    
    static jmethodID methodID_isPathClear() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "isClearTransition", "method_54989", "isPathClear", "m_305158_"), "(Lbtp;Lbsu;Lexc;Lexc;)Z");
    }

    static jboolean isPathClear(const jobject& arg0, const jobject& arg1, const jobject& arg2, const jobject& arg3) {
       const auto clazz = self();
       const auto methodID = methodID_isPathClear();
       return MinecraftSDK::env->CallStaticBooleanMethod(clazz, methodID, arg0, arg1, arg2, arg3);
    };
    
};

#endif // NET_MINECRAFT_UTIL_MATH_LONGJUMPUTIL_HPP