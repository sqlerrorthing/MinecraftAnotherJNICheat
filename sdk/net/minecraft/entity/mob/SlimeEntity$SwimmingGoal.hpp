// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_ENTITY_MOB_SLIMEENTITY$SWIMMINGGOAL_HPP
#define NET_MINECRAFT_ENTITY_MOB_SLIMEENTITY$SWIMMINGGOAL_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.entity.mob.SlimeEntity$SwimmingGoal
 * Remapped: ckm$b
 */
namespace SlimeEntity$SwimmingGoal {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("ckm$b", "net/minecraft/world/entity/monster/Slime$SlimeFloatGoal", "net/minecraft/class_1621$class_1623", "net/minecraft/entity/mob/SlimeEntity$SwimmingGoal", "net/minecraft/src/C_1059_$C_1061_"));
        }
        return cachedClass;
    };

    // getter for private field net.minecraft.entity.mob.SlimeEntity$SwimmingGoal#slime
    static jobject get_field_slime(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "slime", "field_7394", "slime", "f_33653_"), "Lckm;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.entity.mob.SlimeEntity$SwimmingGoal#slime
    static void set_field_slime(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "slime", "field_7394", "slime", "f_33653_"), "Lckm;");
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
    
    static jmethodID methodID_shouldRunEveryTick() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("V_", "requiresUpdateEveryTick", "method_38846", "shouldRunEveryTick", "m_183429_"), "()Z");
    }

    static jboolean shouldRunEveryTick(const jobject& obj) {
                
       const auto methodID = methodID_shouldRunEveryTick();
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

#endif // NET_MINECRAFT_ENTITY_MOB_SLIMEENTITY$SWIMMINGGOAL_HPP