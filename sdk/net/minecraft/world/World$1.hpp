// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_WORLD_WORLD$1_HPP
#define NET_MINECRAFT_WORLD_WORLD$1_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.world.World$1
 * Remapped: dcw$1
 */
namespace World$1 {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("dcw$1", "net/minecraft/world/level/Level$1", "net/minecraft/class_1937$1", "net/minecraft/world/World$1", "net/minecraft/src/C_1596_$C_1597_"));
        }
        return cachedClass;
    };

    static jmethodID methodID_getCenterX() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getCenterX", "method_11964", "getCenterX", "m_6347_"), "()D");
    }

    static jdouble getCenterX(const jobject& obj) {
                
       const auto methodID = methodID_getCenterX();
       return MinecraftSDK::env->CallDoubleMethod(obj, methodID);
    };
    
    static jmethodID methodID_getCenterZ() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "getCenterZ", "method_11980", "getCenterZ", "m_6345_"), "()D");
    }

    static jdouble getCenterZ(const jobject& obj) {
                
       const auto methodID = methodID_getCenterZ();
       return MinecraftSDK::env->CallDoubleMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_WORLD_WORLD$1_HPP