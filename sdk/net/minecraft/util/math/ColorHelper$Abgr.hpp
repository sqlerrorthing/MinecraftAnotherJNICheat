// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_UTIL_MATH_COLORHELPER$ABGR_HPP
#define NET_MINECRAFT_UTIL_MATH_COLORHELPER$ABGR_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.util.math.ColorHelper$Abgr
 * Remapped: axy$a
 */
namespace ColorHelper$Abgr {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("axy$a", "net/minecraft/util/FastColor$ABGR32", "net/minecraft/class_5253$class_8045", "net/minecraft/util/math/ColorHelper$Abgr", "net/minecraft/src/C_174_$C_265822_"));
        }
        return cachedClass;
    };

    static jmethodID methodID_getAlpha() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "alpha", "method_48342", "getAlpha", "m_266503_"), "(I)I");
    }

    static jint getAlpha(const jint& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_getAlpha();
       return MinecraftSDK::env->CallStaticIntMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_getRed() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("b", "red", "method_48345", "getRed", "m_266313_"), "(I)I");
    }

    static jint getRed(const jint& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_getRed();
       return MinecraftSDK::env->CallStaticIntMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_getGreen() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("c", "green", "method_48346", "getGreen", "m_266446_"), "(I)I");
    }

    static jint getGreen(const jint& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_getGreen();
       return MinecraftSDK::env->CallStaticIntMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_getBlue() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("d", "blue", "method_48347", "getBlue", "m_266247_"), "(I)I");
    }

    static jint getBlue(const jint& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_getBlue();
       return MinecraftSDK::env->CallStaticIntMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_getBgr() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("e", "transparent", "method_48348", "getBgr", "m_266533_"), "(I)I");
    }

    static jint getBgr(const jint& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_getBgr();
       return MinecraftSDK::env->CallStaticIntMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_toOpaque() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("f", "opaque", "method_48548", "toOpaque", "m_267818_"), "(I)I");
    }

    static jint toOpaque(const jint& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_toOpaque();
       return MinecraftSDK::env->CallStaticIntMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_getAbgr() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "color", "method_48344", "getAbgr", "m_266248_"), "(IIII)I");
    }

    static jint getAbgr(const jint& arg0, const jint& arg1, const jint& arg2, const jint& arg3) {
       const auto clazz = self();
       const auto methodID = methodID_getAbgr();
       return MinecraftSDK::env->CallStaticIntMethod(clazz, methodID, arg0, arg1, arg2, arg3);
    };
    
    static jmethodID methodID_withAlpha() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "color", "method_48343", "withAlpha", "m_266498_"), "(II)I");
    }

    static jint withAlpha(const jint& arg0, const jint& arg1) {
       const auto clazz = self();
       const auto methodID = methodID_withAlpha();
       return MinecraftSDK::env->CallStaticIntMethod(clazz, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_toAbgr() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("g", "fromArgb32", "method_60675", "toAbgr", "m_340609_"), "(I)I");
    }

    static jint toAbgr(const jint& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_toAbgr();
       return MinecraftSDK::env->CallStaticIntMethod(clazz, methodID, arg0);
    };
    
};

#endif // NET_MINECRAFT_UTIL_MATH_COLORHELPER$ABGR_HPP