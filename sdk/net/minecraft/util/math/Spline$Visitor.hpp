// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_UTIL_MATH_SPLINE$VISITOR_HPP
#define NET_MINECRAFT_UTIL_MATH_SPLINE$VISITOR_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.util.math.Spline$Visitor
 * Remapped: axp$d
 */
namespace Spline$Visitor {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("axp$d", "net/minecraft/util/CubicSpline$CoordinateVisitor", "net/minecraft/class_6492$class_7073", "net/minecraft/util/math/Spline$Visitor", "net/minecraft/src/C_182769_$C_211139_"));
        }
        return cachedClass;
    };

    static jmethodID methodID_visit() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("visit", "visit", "visit", "visit", "m_216122_"), "(Ljava/lang/Object;)Ljava/lang/Object;");
    }

    static jobject visit(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_visit();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
};

#endif // NET_MINECRAFT_UTIL_MATH_SPLINE$VISITOR_HPP