// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_ENTITY_MOB_GUARDIANENTITY$GUARDIANMOVECONTROL_HPP
#define NET_MINECRAFT_ENTITY_MOB_GUARDIANENTITY$GUARDIANMOVECONTROL_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.entity.mob.GuardianEntity$GuardianMoveControl
 * Remapped: cjz$c
 */
namespace GuardianEntity$GuardianMoveControl {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("cjz$c", "net/minecraft/world/entity/monster/Guardian$GuardianMoveControl", "net/minecraft/class_1577$class_1580", "net/minecraft/entity/mob/GuardianEntity$GuardianMoveControl", "net/minecraft/src/C_1017_$C_1020_"));
        }
        return cachedClass;
    };

    // getter for private field net.minecraft.entity.mob.GuardianEntity$GuardianMoveControl#guardian
    static jobject get_field_guardian(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("l", "guardian", "field_7295", "guardian", "f_32884_"), "Lcjz;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.entity.mob.GuardianEntity$GuardianMoveControl#guardian
    static void set_field_guardian(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("l", "guardian", "field_7295", "guardian", "f_32884_"), "Lcjz;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID_tick() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "tick", "method_6240", "tick", "m_8126_"), "()V");
    }

    static void tick(const jobject& obj) {
                
       const auto methodID = methodID_tick();
       MinecraftSDK::env->CallVoidMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_ENTITY_MOB_GUARDIANENTITY$GUARDIANMOVECONTROL_HPP