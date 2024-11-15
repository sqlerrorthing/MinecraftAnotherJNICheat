// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_ENTITY_MOB_EVOKERENTITY$SUMMONVEXGOAL_HPP
#define NET_MINECRAFT_ENTITY_MOB_EVOKERENTITY$SUMMONVEXGOAL_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.entity.mob.EvokerEntity$SummonVexGoal
 * Remapped: cjw$c
 */
namespace EvokerEntity$SummonVexGoal {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("cjw$c", "net/minecraft/world/entity/monster/Evoker$EvokerSummonSpellGoal", "net/minecraft/class_1564$class_1567", "net/minecraft/entity/mob/EvokerEntity$SummonVexGoal", "net/minecraft/src/C_1005_$C_1009_"));
        }
        return cachedClass;
    };

    // getter for private field net.minecraft.entity.mob.EvokerEntity$SummonVexGoal#closeVexPredicate
    static jobject get_field_closeVexPredicate(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "vexCountTargeting", "field_18129", "closeVexPredicate", "f_32692_"), "Lcef;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.entity.mob.EvokerEntity$SummonVexGoal#closeVexPredicate
    static void set_field_closeVexPredicate(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "vexCountTargeting", "field_18129", "closeVexPredicate", "f_32692_"), "Lcef;");
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
    
    static jmethodID methodID_getSpellTicks() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("h", "getCastingTime", "method_7149", "getSpellTicks", "m_8089_"), "()I");
    }

    static jint getSpellTicks(const jobject& obj) {
                
       const auto methodID = methodID_getSpellTicks();
       return MinecraftSDK::env->CallIntMethod(obj, methodID);
    };
    
    static jmethodID methodID_startTimeDelay() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("i", "getCastingInterval", "method_7151", "startTimeDelay", "m_8067_"), "()I");
    }

    static jint startTimeDelay(const jobject& obj) {
                
       const auto methodID = methodID_startTimeDelay();
       return MinecraftSDK::env->CallIntMethod(obj, methodID);
    };
    
    static jmethodID methodID_castSpell() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("k", "performSpellCasting", "method_7148", "castSpell", "m_8130_"), "()V");
    }

    static void castSpell(const jobject& obj) {
                
       const auto methodID = methodID_castSpell();
       MinecraftSDK::env->CallVoidMethod(obj, methodID);
    };
    
    static jmethodID methodID_getSoundPrepare() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("l", "getSpellPrepareSound", "method_7150", "getSoundPrepare", "m_7030_"), "()Lavo;");
    }

    static jobject getSoundPrepare(const jobject& obj) {
                
       const auto methodID = methodID_getSoundPrepare();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_getSpell() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("m", "getSpell", "method_7147", "getSpell", "m_7269_"), "()Lckn$a;");
    }

    static jobject getSpell(const jobject& obj) {
                
       const auto methodID = methodID_getSpell();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_ENTITY_MOB_EVOKERENTITY$SUMMONVEXGOAL_HPP