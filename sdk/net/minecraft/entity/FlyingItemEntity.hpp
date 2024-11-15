// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_ENTITY_FLYINGITEMENTITY_HPP
#define NET_MINECRAFT_ENTITY_FLYINGITEMENTITY_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.entity.FlyingItemEntity
 * Remapped: cnm
 */
namespace FlyingItemEntity {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("cnm", "net/minecraft/world/entity/projectile/ItemSupplier", "net/minecraft/class_3856", "net/minecraft/entity/FlyingItemEntity", "net/minecraft/src/C_1164_"));
        }
        return cachedClass;
    };

    static jmethodID methodID_getStack() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("p", "getItem", "method_7495", "getStack", "m_7846_"), "()Lcuq;");
    }

    static jobject getStack(const jobject& obj) {
                
       const auto methodID = methodID_getStack();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_ENTITY_FLYINGITEMENTITY_HPP