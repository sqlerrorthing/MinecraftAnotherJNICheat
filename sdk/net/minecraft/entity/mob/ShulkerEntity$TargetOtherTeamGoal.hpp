// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_ENTITY_MOB_SHULKERENTITY$TARGETOTHERTEAMGOAL_HPP
#define NET_MINECRAFT_ENTITY_MOB_SHULKERENTITY$TARGETOTHERTEAMGOAL_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.entity.mob.ShulkerEntity$TargetOtherTeamGoal
 * Remapped: ckj$c
 */
namespace ShulkerEntity$TargetOtherTeamGoal {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("ckj$c", "net/minecraft/world/entity/monster/Shulker$ShulkerDefenseAttackGoal", "net/minecraft/class_1606$class_1609", "net/minecraft/entity/mob/ShulkerEntity$TargetOtherTeamGoal", "net/minecraft/src/C_1048_$C_1052_"));
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
    
    static jmethodID methodID_getSearchBox() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getTargetSearchArea", "method_6321", "getSearchBox", "m_7255_"), "(D)Lewx;");
    }

    static jobject getSearchBox(const jobject& obj, const jdouble& arg0) {
                
       const auto methodID = methodID_getSearchBox();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
};

#endif // NET_MINECRAFT_ENTITY_MOB_SHULKERENTITY$TARGETOTHERTEAMGOAL_HPP