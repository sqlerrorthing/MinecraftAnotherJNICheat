// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_ENTITY_MOB_BLAZEENTITY$SHOOTFIREBALLGOAL_HPP
#define NET_MINECRAFT_ENTITY_MOB_BLAZEENTITY$SHOOTFIREBALLGOAL_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.entity.mob.BlazeEntity$ShootFireballGoal
 * Remapped: cjm$a
 */
namespace BlazeEntity$ShootFireballGoal {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("cjm$a", "net/minecraft/world/entity/monster/Blaze$BlazeAttackGoal", "net/minecraft/class_1545$class_1546", "net/minecraft/entity/mob/BlazeEntity$ShootFireballGoal", "net/minecraft/src/C_985_$C_986_"));
        }
        return cachedClass;
    };

    // getter for private field net.minecraft.entity.mob.BlazeEntity$ShootFireballGoal#blaze
    static jobject get_field_blaze(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "blaze", "field_7219", "blaze", "f_32242_"), "Lcjm;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.entity.mob.BlazeEntity$ShootFireballGoal#blaze
    static void set_field_blaze(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "blaze", "field_7219", "blaze", "f_32242_"), "Lcjm;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.entity.mob.BlazeEntity$ShootFireballGoal#fireballsFired
    static jint get_field_fireballsFired(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "attackStep", "field_7218", "fireballsFired", "f_32243_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetIntField(obj, fieldID);
    };

    // setter for static private field net.minecraft.entity.mob.BlazeEntity$ShootFireballGoal#fireballsFired
    static void set_field_fireballsFired(const jobject &obj, const jint &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "attackStep", "field_7218", "fireballsFired", "f_32243_"), "I");
        return MinecraftSDK::env->SetIntField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.entity.mob.BlazeEntity$ShootFireballGoal#fireballCooldown
    static jint get_field_fireballCooldown(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "attackTime", "field_7217", "fireballCooldown", "f_32244_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetIntField(obj, fieldID);
    };

    // setter for static private field net.minecraft.entity.mob.BlazeEntity$ShootFireballGoal#fireballCooldown
    static void set_field_fireballCooldown(const jobject &obj, const jint &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "attackTime", "field_7217", "fireballCooldown", "f_32244_"), "I");
        return MinecraftSDK::env->SetIntField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.entity.mob.BlazeEntity$ShootFireballGoal#targetNotVisibleTicks
    static jint get_field_targetNotVisibleTicks(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "lastSeen", "field_19420", "targetNotVisibleTicks", "f_32245_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetIntField(obj, fieldID);
    };

    // setter for static private field net.minecraft.entity.mob.BlazeEntity$ShootFireballGoal#targetNotVisibleTicks
    static void set_field_targetNotVisibleTicks(const jobject &obj, const jint &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "lastSeen", "field_19420", "targetNotVisibleTicks", "f_32245_"), "I");
        return MinecraftSDK::env->SetIntField(obj, fieldID, value);
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
    
    static jmethodID methodID_stop() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("e", "stop", "method_6270", "stop", "m_8041_"), "()V");
    }

    static void stop(const jobject& obj) {
                
       const auto methodID = methodID_stop();
       MinecraftSDK::env->CallVoidMethod(obj, methodID);
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
    
    static jmethodID methodID_getFollowRange() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("h", "getFollowDistance", "method_6995", "getFollowRange", "m_32252_"), "()D");
    }

    static jdouble getFollowRange(const jobject& obj) {
                
       const auto methodID = methodID_getFollowRange();
       return MinecraftSDK::env->CallDoubleMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_ENTITY_MOB_BLAZEENTITY$SHOOTFIREBALLGOAL_HPP