// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_ENTITY_MOB_PHANTOMENTITY$MOVEMENTGOAL_HPP
#define NET_MINECRAFT_ENTITY_MOB_PHANTOMENTITY$MOVEMENTGOAL_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.entity.mob.PhantomEntity$MovementGoal
 * Remapped: ckf$h
 */
namespace PhantomEntity$MovementGoal {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("ckf$h", "net/minecraft/world/entity/monster/Phantom$PhantomMoveTargetGoal", "net/minecraft/class_1593$class_1601", "net/minecraft/entity/mob/PhantomEntity$MovementGoal", "net/minecraft/src/C_1030_$C_1039_"));
        }
        return cachedClass;
    };

    static jmethodID methodID_isNearTarget() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("h", "touchingTarget", "method_7104", "isNearTarget", "m_33246_"), "()Z");
    }

    static jboolean isNearTarget(const jobject& obj) {
                
       const auto methodID = methodID_isNearTarget();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_ENTITY_MOB_PHANTOMENTITY$MOVEMENTGOAL_HPP