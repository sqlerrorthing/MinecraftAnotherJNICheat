// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_UTIL_MATH_SPLINE$FIXEDFLOATFUNCTION_HPP
#define NET_MINECRAFT_UTIL_MATH_SPLINE$FIXEDFLOATFUNCTION_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.util.math.Spline$FixedFloatFunction
 * Remapped: axp$c
 */
namespace Spline$FixedFloatFunction {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("axp$c", "net/minecraft/util/CubicSpline$Constant", "net/minecraft/class_6492$class_6494", "net/minecraft/util/math/Spline$FixedFloatFunction", "net/minecraft/src/C_182769_$C_182772_"));
        }
        return cachedClass;
    };

    // getter for private field net.minecraft.util.math.Spline$FixedFloatFunction#value
    static jfloat get_field_value(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "value", "comp_228", "value", "f_184308_"), "F");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetFloatField(obj, fieldID);
    };

    // setter for static private field net.minecraft.util.math.Spline$FixedFloatFunction#value
    static void set_field_value(const jobject &obj, const jfloat &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "value", "comp_228", "value", "f_184308_"), "F");
        return MinecraftSDK::env->SetFloatField(obj, fieldID, value);
    };

    static jmethodID methodID_apply() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "apply", "method_41296", "apply", "m_183321_"), "(Ljava/lang/Object;)F");
    }

    static jfloat apply(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_apply();
       return MinecraftSDK::env->CallFloatMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_getDebugString() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "parityString", "method_39225", "getDebugString", "m_183628_"), "()Ljava/lang/String;");
    }

    static jobject getDebugString(const jobject& obj) {
                
       const auto methodID = methodID_getDebugString();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_min() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "minValue", "comp_532", "min", "m_213850_"), "()F");
    }

    static jfloat min(const jobject& obj) {
                
       const auto methodID = methodID_min();
       return MinecraftSDK::env->CallFloatMethod(obj, methodID);
    };
    
    static jmethodID methodID_max() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "maxValue", "comp_533", "max", "m_213849_"), "()F");
    }

    static jfloat max(const jobject& obj) {
                
       const auto methodID = methodID_max();
       return MinecraftSDK::env->CallFloatMethod(obj, methodID);
    };
    
    static jmethodID methodID__apply() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "mapAll", "method_41187", "apply", "m_211396_"), "(Laxp$d;)Laxp;");
    }

    static jobject _apply(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID__apply();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID__value() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("d", "value", "comp_228", "value", "f_184308_"), "()F");
    }

    static jfloat _value(const jobject& obj) {
                
       const auto methodID = methodID__value();
       return MinecraftSDK::env->CallFloatMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_UTIL_MATH_SPLINE$FIXEDFLOATFUNCTION_HPP