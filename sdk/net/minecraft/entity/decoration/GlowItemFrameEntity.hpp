// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_ENTITY_DECORATION_GLOWITEMFRAMEENTITY_HPP
#define NET_MINECRAFT_ENTITY_DECORATION_GLOWITEMFRAMEENTITY_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.entity.decoration.GlowItemFrameEntity
 * Remapped: ciy
 */
namespace GlowItemFrameEntity {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("ciy", "net/minecraft/world/entity/decoration/GlowItemFrame", "net/minecraft/class_5915", "net/minecraft/entity/decoration/GlowItemFrameEntity", "net/minecraft/src/C_141142_"));
        }
        return cachedClass;
    };

    static jmethodID methodID_getRemoveItemSound() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("v", "getRemoveItemSound", "method_34240", "getRemoveItemSound", "m_142544_"), "()Lavo;");
    }

    static jobject getRemoveItemSound(const jobject& obj) {
                
       const auto methodID = methodID_getRemoveItemSound();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_getBreakSound() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("w", "getBreakSound", "method_34241", "getBreakSound", "m_142543_"), "()Lavo;");
    }

    static jobject getBreakSound(const jobject& obj) {
                
       const auto methodID = methodID_getBreakSound();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_getPlaceSound() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("x", "getPlaceSound", "method_34242", "getPlaceSound", "m_142541_"), "()Lavo;");
    }

    static jobject getPlaceSound(const jobject& obj) {
                
       const auto methodID = methodID_getPlaceSound();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_getAddItemSound() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("y", "getAddItemSound", "method_34243", "getAddItemSound", "m_142546_"), "()Lavo;");
    }

    static jobject getAddItemSound(const jobject& obj) {
                
       const auto methodID = methodID_getAddItemSound();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_getRotateItemSound() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("z", "getRotateItemSound", "method_34244", "getRotateItemSound", "m_142545_"), "()Lavo;");
    }

    static jobject getRotateItemSound(const jobject& obj) {
                
       const auto methodID = methodID_getRotateItemSound();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_getAsItemStack() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("A", "getFrameItemStack", "method_33340", "getAsItemStack", "m_142590_"), "()Lcuq;");
    }

    static jobject getAsItemStack(const jobject& obj) {
                
       const auto methodID = methodID_getAsItemStack();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_ENTITY_DECORATION_GLOWITEMFRAMEENTITY_HPP