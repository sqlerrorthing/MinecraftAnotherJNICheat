// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_ENTITY_TARGETER_HPP
#define NET_MINECRAFT_ENTITY_TARGETER_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.entity.Targeter
 * Remapped: bum
 */
namespace Targeter {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("bum", "net/minecraft/world/entity/Targeting", "net/minecraft/class_8152", "net/minecraft/entity/Targeter", "net/minecraft/src/C_271030_"));
        }
        return cachedClass;
    };

    static jmethodID methodID_getTarget() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("p", "getTarget", "method_5968", "getTarget", "m_5448_"), "()Lbtn;");
    }

    static jobject getTarget(const jobject& obj) {
                
       const auto methodID = methodID_getTarget();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_ENTITY_TARGETER_HPP