// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_BLOCK_CHESTBLOCK$3_HPP
#define NET_MINECRAFT_BLOCK_CHESTBLOCK$3_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.block.ChestBlock$3
 * Remapped: dhb$3
 */
namespace ChestBlock$3 {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("dhb$3", "net/minecraft/world/level/block/ChestBlock$3", "net/minecraft/class_2281$3", "net/minecraft/block/ChestBlock$3", "net/minecraft/src/C_1728_$C_1732_"));
        }
        return cachedClass;
    };

    static jmethodID methodID_getFromBoth() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "acceptDouble", "method_23899", "getFromBoth", "m_6959_"), "(Ldqo;Ldqo;)Lit/unimi/dsi/fastutil/floats/Float2FloatFunction;");
    }

    static jobject getFromBoth(const jobject& obj, const jobject& arg0, const jobject& arg1) {
                
       const auto methodID = methodID_getFromBoth();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_getFrom() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "acceptSingle", "method_23898", "getFrom", "m_7693_"), "(Ldqo;)Lit/unimi/dsi/fastutil/floats/Float2FloatFunction;");
    }

    static jobject getFrom(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_getFrom();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_getFallback() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "acceptNone", "method_24172", "getFallback", "m_6502_"), "()Lit/unimi/dsi/fastutil/floats/Float2FloatFunction;");
    }

    static jobject getFallback(const jobject& obj) {
                
       const auto methodID = methodID_getFallback();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_BLOCK_CHESTBLOCK$3_HPP