// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_ENTITY_MOB_VEXENTITY$LOOKATTARGETGOAL_HPP
#define NET_MINECRAFT_ENTITY_MOB_VEXENTITY$LOOKATTARGETGOAL_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.entity.mob.VexEntity$LookAtTargetGoal
 * Remapped: ckr$d
 */
namespace VexEntity$LookAtTargetGoal {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("ckr$d", "net/minecraft/world/entity/monster/Vex$VexRandomMoveGoal", "net/minecraft/class_1634$class_1638", "net/minecraft/entity/mob/VexEntity$LookAtTargetGoal", "net/minecraft/src/C_1080_$C_1084_"));
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
    
    static jmethodID methodID_shouldContinue() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "canContinueToUse", "method_6266", "shouldContinue", "m_8045_"), "()Z");
    }

    static jboolean shouldContinue(const jobject& obj) {
                
       const auto methodID = methodID_shouldContinue();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID);
    };
    
    static jmethodID methodID_tick() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "tick", "method_6268", "tick", "m_8037_"), "()V");
    }

    static void tick(const jobject& obj) {
                
       const auto methodID = methodID_tick();
       MinecraftSDK::env->CallVoidMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_ENTITY_MOB_VEXENTITY$LOOKATTARGETGOAL_HPP