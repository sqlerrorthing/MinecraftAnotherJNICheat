// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_BLOCK_ENTITYSHAPECONTEXT$1_HPP
#define NET_MINECRAFT_BLOCK_ENTITYSHAPECONTEXT$1_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.block.EntityShapeContext$1
 * Remapped: exm$1
 */
namespace EntityShapeContext$1 {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("exm$1", "net/minecraft/world/phys/shapes/EntityCollisionContext$1", "net/minecraft/class_3727$1", "net/minecraft/block/EntityShapeContext$1", "net/minecraft/src/C_3058_$C_3059_"));
        }
        return cachedClass;
    };

    static jmethodID methodID_isAbove() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "isAbove", "method_16192", "isAbove", "m_6513_"), "(Lexv;Ljd;Z)Z");
    }

    static jboolean isAbove(const jobject& obj, const jobject& arg0, const jobject& arg1, const jboolean& arg2) {
                
       const auto methodID = methodID_isAbove();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0, arg1, arg2);
    };
    
};

#endif // NET_MINECRAFT_BLOCK_ENTITYSHAPECONTEXT$1_HPP