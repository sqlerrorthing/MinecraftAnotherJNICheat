// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_ENTITY_MOB_VEXENTITY$TRACKOWNERTARGETGOAL_HPP
#define NET_MINECRAFT_ENTITY_MOB_VEXENTITY$TRACKOWNERTARGETGOAL_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.entity.mob.VexEntity$TrackOwnerTargetGoal
 * Remapped: ckr$b
 */
namespace VexEntity$TrackOwnerTargetGoal {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("ckr$b", "net/minecraft/world/entity/monster/Vex$VexCopyOwnerTargetGoal", "net/minecraft/class_1634$class_1636", "net/minecraft/entity/mob/VexEntity$TrackOwnerTargetGoal", "net/minecraft/src/C_1080_$C_1082_"));
        }
        return cachedClass;
    };

    // getter for private field net.minecraft.entity.mob.VexEntity$TrackOwnerTargetGoal#targetPredicate
    static jobject get_field_targetPredicate(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "copyOwnerTargeting", "field_18132", "targetPredicate", "f_34053_"), "Lcef;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.entity.mob.VexEntity$TrackOwnerTargetGoal#targetPredicate
    static void set_field_targetPredicate(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "copyOwnerTargeting", "field_18132", "targetPredicate", "f_34053_"), "Lcef;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID_canStart() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "canUse", "method_6264", "canStart", "m_8036_"), "()Z");
    }

    static jboolean canStart(const jobject& obj) {
                
       const auto methodID = methodID_canStart();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID);
    };
    
    static jmethodID methodID_start() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("d", "start", "method_6269", "start", "m_8056_"), "()V");
    }

    static void start(const jobject& obj) {
                
       const auto methodID = methodID_start();
       MinecraftSDK::env->CallVoidMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_ENTITY_MOB_VEXENTITY$TRACKOWNERTARGETGOAL_HPP