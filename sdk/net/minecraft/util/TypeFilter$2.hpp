// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_UTIL_TYPEFILTER$2_HPP
#define NET_MINECRAFT_UTIL_TYPEFILTER$2_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.util.TypeFilter$2
 * Remapped: dxn$2
 */
namespace TypeFilter$2 {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("dxn$2", "net/minecraft/world/level/entity/EntityTypeTest$2", "net/minecraft/class_5575$2", "net/minecraft/util/TypeFilter$2", "net/minecraft/src/C_141287_$C_302081_"));
        }
        return cachedClass;
    };

    static jmethodID methodID_downcast() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "tryCast", "method_31796", "downcast", "m_141992_"), "(Ljava/lang/Object;)Ljava/lang/Object;");
    }

    static jobject downcast(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_downcast();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_getBaseClass() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getBaseClass", "method_31794", "getBaseClass", "m_142225_"), "()Ljava/lang/Class;");
    }

    static jobject getBaseClass(const jobject& obj) {
                
       const auto methodID = methodID_getBaseClass();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_UTIL_TYPEFILTER$2_HPP