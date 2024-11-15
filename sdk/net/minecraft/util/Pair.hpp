// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_UTIL_PAIR_HPP
#define NET_MINECRAFT_UTIL_PAIR_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.util.Pair
 * Remapped: azr
 */
namespace Pair {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("azr", "net/minecraft/util/Tuple", "net/minecraft/class_3545", "net/minecraft/util/Pair", "net/minecraft/src/C_202_"));
        }
        return cachedClass;
    };

    // getter for private field net.minecraft.util.Pair#left
    static jobject get_field_left(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "a", "field_15772", "left", "f_14413_"), "Ljava/lang/Object;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.util.Pair#left
    static void set_field_left(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "a", "field_15772", "left", "f_14413_"), "Ljava/lang/Object;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.util.Pair#right
    static jobject get_field_right(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "b", "field_15773", "right", "f_14414_"), "Ljava/lang/Object;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.util.Pair#right
    static void set_field_right(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "b", "field_15773", "right", "f_14414_"), "Ljava/lang/Object;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID_getLeft() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getA", "method_15442", "getLeft", "m_14418_"), "()Ljava/lang/Object;");
    }

    static jobject getLeft(const jobject& obj) {
                
       const auto methodID = methodID_getLeft();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_setLeft() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "setA", "method_34964", "setLeft", "m_145023_"), "(Ljava/lang/Object;)V");
    }

    static void setLeft(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_setLeft();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_getRight() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "getB", "method_15441", "getRight", "m_14419_"), "()Ljava/lang/Object;");
    }

    static jobject getRight(const jobject& obj) {
                
       const auto methodID = methodID_getRight();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_setRight() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "setB", "method_34965", "setRight", "m_145025_"), "(Ljava/lang/Object;)V");
    }

    static void setRight(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_setRight();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
};

#endif // NET_MINECRAFT_UTIL_PAIR_HPP