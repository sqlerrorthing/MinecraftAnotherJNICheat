// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_ENTITY_MOB_ILLAGERENTITY$LONGDOORINTERACTGOAL_HPP
#define NET_MINECRAFT_ENTITY_MOB_ILLAGERENTITY$LONGDOORINTERACTGOAL_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.entity.mob.IllagerEntity$LongDoorInteractGoal
 * Remapped: cjk$b
 */
namespace IllagerEntity$LongDoorInteractGoal {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("cjk$b", "net/minecraft/world/entity/monster/AbstractIllager$RaiderOpenDoorGoal", "net/minecraft/class_1543$class_4258", "net/minecraft/entity/mob/IllagerEntity$LongDoorInteractGoal", "net/minecraft/src/C_978_$C_980_"));
        }
        return cachedClass;
    };

    static jmethodID methodID_canStart() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "canUse", "method_6264", "canStart", "m_8036_"), "()Z");
    }

    static jboolean canStart(const jobject& obj) {
                
       const auto methodID = methodID_canStart();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_ENTITY_MOB_ILLAGERENTITY$LONGDOORINTERACTGOAL_HPP