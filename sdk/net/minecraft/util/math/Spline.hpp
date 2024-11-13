// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_UTIL_MATH_SPLINE_HPP
#define NET_MINECRAFT_UTIL_MATH_SPLINE_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.util.math.Spline
 * Remapped: axp
 */
namespace Spline {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("axp", "net/minecraft/util/CubicSpline", "net/minecraft/class_6492", "net/minecraft/util/math/Spline", "net/minecraft/src/C_182769_"));
        }
        return cachedClass;
    };

    static jmethodID methodID_getDebugString() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "parityString", "method_39225", "getDebugString", "m_183628_"), "()Ljava/lang/String;");
    }

    static jobject getDebugString(const jobject& obj) {
                
       const auto methodID = methodID_getDebugString();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_apply() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "mapAll", "method_41187", "apply", "m_211396_"), "(Laxp$d;)Laxp;");
    }

    static jobject apply(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_apply();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_createCodec() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "codec", "method_39232", "createCodec", "m_184262_"), "(Lcom/mojang/serialization/Codec;)Lcom/mojang/serialization/Codec;");
    }

    static jobject createCodec(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_createCodec();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_fixedFloatFunction() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "constant", "method_39427", "fixedFloatFunction", "m_184239_"), "(F)Laxp;");
    }

    static jobject fixedFloatFunction(const jfloat& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_fixedFloatFunction();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_builder() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "builder", "method_37918", "builder", "m_184252_"), "(Lazq;)Laxp$b;");
    }

    static jobject builder(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_builder();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID__builder() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "builder", "method_39502", "builder", "m_184254_"), "(Lazq;Lazq;)Laxp$b;");
    }

    static jobject _builder(const jobject& arg0, const jobject& arg1) {
       const auto clazz = self();
       const auto methodID = methodID__builder();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0, arg1);
    };
    
};

#endif // NET_MINECRAFT_UTIL_MATH_SPLINE_HPP