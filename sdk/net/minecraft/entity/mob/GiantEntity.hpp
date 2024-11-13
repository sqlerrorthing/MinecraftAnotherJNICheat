// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_ENTITY_MOB_GIANTENTITY_HPP
#define NET_MINECRAFT_ENTITY_MOB_GIANTENTITY_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.entity.mob.GiantEntity
 * Remapped: cjy
 */
namespace GiantEntity {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("cjy", "net/minecraft/world/entity/monster/Giant", "net/minecraft/class_1570", "net/minecraft/entity/mob/GiantEntity", "net/minecraft/src/C_1016_"));
        }
        return cachedClass;
    };

    static jmethodID methodID_createGiantAttributes() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("s", "createAttributes", "method_26914", "createGiantAttributes", "m_32796_"), "()Lbuv$a;");
    }

    static jobject createGiantAttributes() {
       const auto clazz = self();
       const auto methodID = methodID_createGiantAttributes();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID);
    };
    
    static jmethodID methodID_getPathfindingFavor() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getWalkTargetValue", "method_6144", "getPathfindingFavor", "m_5610_"), "(Ljd;Ldcz;)F");
    }

    static jfloat getPathfindingFavor(const jobject& obj, const jobject& arg0, const jobject& arg1) {
                
       const auto methodID = methodID_getPathfindingFavor();
       return MinecraftSDK::env->CallFloatMethod(obj, methodID, arg0, arg1);
    };
    
};

#endif // NET_MINECRAFT_ENTITY_MOB_GIANTENTITY_HPP