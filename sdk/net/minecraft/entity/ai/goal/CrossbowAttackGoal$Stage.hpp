// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_ENTITY_AI_GOAL_CROSSBOWATTACKGOAL$STAGE_HPP
#define NET_MINECRAFT_ENTITY_AI_GOAL_CROSSBOWATTACKGOAL$STAGE_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.entity.ai.goal.CrossbowAttackGoal$Stage
 * Remapped: cbn$a
 */
namespace CrossbowAttackGoal$Stage {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("cbn$a", "net/minecraft/world/entity/ai/goal/RangedCrossbowAttackGoal$CrossbowState", "net/minecraft/class_1383$class_3744", "net/minecraft/entity/ai/goal/CrossbowAttackGoal$Stage", "net/minecraft/src/C_719_$C_720_"));
        }
        return cachedClass;
    };

    // getter for static public field net.minecraft.entity.ai.goal.CrossbowAttackGoal$Stage#UNCHARGED
    [[maybe_unused]] static jobject get_field_UNCHARGED() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "UNCHARGED", "field_16534", "UNCHARGED", "UNCHARGED"), "Lcbn$a;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.entity.ai.goal.CrossbowAttackGoal$Stage#UNCHARGED
    [[maybe_unused]] static void set_field_UNCHARGED(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "UNCHARGED", "field_16534", "UNCHARGED", "UNCHARGED"), "Lcbn$a;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.entity.ai.goal.CrossbowAttackGoal$Stage#CHARGING
    [[maybe_unused]] static jobject get_field_CHARGING() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "CHARGING", "field_16530", "CHARGING", "CHARGING"), "Lcbn$a;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.entity.ai.goal.CrossbowAttackGoal$Stage#CHARGING
    [[maybe_unused]] static void set_field_CHARGING(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "CHARGING", "field_16530", "CHARGING", "CHARGING"), "Lcbn$a;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.entity.ai.goal.CrossbowAttackGoal$Stage#CHARGED
    [[maybe_unused]] static jobject get_field_CHARGED() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "CHARGED", "field_16532", "CHARGED", "CHARGED"), "Lcbn$a;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.entity.ai.goal.CrossbowAttackGoal$Stage#CHARGED
    [[maybe_unused]] static void set_field_CHARGED(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "CHARGED", "field_16532", "CHARGED", "CHARGED"), "Lcbn$a;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.entity.ai.goal.CrossbowAttackGoal$Stage#READY_TO_ATTACK
    [[maybe_unused]] static jobject get_field_READY_TO_ATTACK() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("d", "READY_TO_ATTACK", "field_16533", "READY_TO_ATTACK", "READY_TO_ATTACK"), "Lcbn$a;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.entity.ai.goal.CrossbowAttackGoal$Stage#READY_TO_ATTACK
    [[maybe_unused]] static void set_field_READY_TO_ATTACK(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("d", "READY_TO_ATTACK", "field_16533", "READY_TO_ATTACK", "READY_TO_ATTACK"), "Lcbn$a;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    static jmethodID methodID_values() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("values", "values", "values", "values", "values"), "()[Lcbn$a;");
    }

    static jobject values() {
       const auto clazz = self();
       const auto methodID = methodID_values();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID);
    };
    
    static jmethodID methodID_valueOf() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("valueOf", "valueOf", "valueOf", "valueOf", "valueOf"), "(Ljava/lang/String;)Lcbn$a;");
    }

    static jobject valueOf(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_valueOf();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0);
    };
    
};

#endif // NET_MINECRAFT_ENTITY_AI_GOAL_CROSSBOWATTACKGOAL$STAGE_HPP