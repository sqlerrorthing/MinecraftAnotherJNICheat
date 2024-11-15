// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_UTIL_LANGUAGE$1_HPP
#define NET_MINECRAFT_UTIL_LANGUAGE$1_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.util.Language$1
 * Remapped: tw$1
 */
namespace Language$1 {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("tw$1", "net/minecraft/locale/Language$1", "net/minecraft/class_2477$1", "net/minecraft/util/Language$1", "net/minecraft/src/C_4907_$C_4908_"));
        }
        return cachedClass;
    };

    static jmethodID methodID_get() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getOrDefault", "method_4679", "get", "m_118919_"), "(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;");
    }

    static jobject get(const jobject& obj, const jobject& arg0, const jobject& arg1) {
                
       const auto methodID = methodID_get();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_hasTranslation() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "has", "method_4678", "hasTranslation", "m_6722_"), "(Ljava/lang/String;)Z");
    }

    static jboolean hasTranslation(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_hasTranslation();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_isRightToLeft() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "isDefaultRightToLeft", "method_29428", "isRightToLeft", "m_6627_"), "()Z");
    }

    static jboolean isRightToLeft(const jobject& obj) {
                
       const auto methodID = methodID_isRightToLeft();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID);
    };
    
    static jmethodID methodID_reorder() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getVisualOrder", "method_30934", "reorder", "m_5536_"), "(Lxe;)Laya;");
    }

    static jobject reorder(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_reorder();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
};

#endif // NET_MINECRAFT_UTIL_LANGUAGE$1_HPP