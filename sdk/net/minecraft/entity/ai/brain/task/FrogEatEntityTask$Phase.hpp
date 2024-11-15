// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_ENTITY_AI_BRAIN_TASK_FROGEATENTITYTASK$PHASE_HPP
#define NET_MINECRAFT_ENTITY_AI_BRAIN_TASK_FROGEATENTITYTASK$PHASE_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.entity.ai.brain.task.FrogEatEntityTask$Phase
 * Remapped: cha$a
 */
namespace FrogEatEntityTask$Phase {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("cha$a", "net/minecraft/world/entity/animal/frog/ShootTongue$State", "net/minecraft/class_7108$class_7109", "net/minecraft/entity/ai/brain/task/FrogEatEntityTask$Phase", "net/minecraft/src/C_213043_$C_213045_"));
        }
        return cachedClass;
    };

    // getter for static public field net.minecraft.entity.ai.brain.task.FrogEatEntityTask$Phase#MOVE_TO_TARGET
    [[maybe_unused]] static jobject get_field_MOVE_TO_TARGET() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "MOVE_TO_TARGET", "field_37492", "MOVE_TO_TARGET", "MOVE_TO_TARGET"), "Lcha$a;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.entity.ai.brain.task.FrogEatEntityTask$Phase#MOVE_TO_TARGET
    [[maybe_unused]] static void set_field_MOVE_TO_TARGET(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "MOVE_TO_TARGET", "field_37492", "MOVE_TO_TARGET", "MOVE_TO_TARGET"), "Lcha$a;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.entity.ai.brain.task.FrogEatEntityTask$Phase#CATCH_ANIMATION
    [[maybe_unused]] static jobject get_field_CATCH_ANIMATION() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "CATCH_ANIMATION", "field_38415", "CATCH_ANIMATION", "CATCH_ANIMATION"), "Lcha$a;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.entity.ai.brain.task.FrogEatEntityTask$Phase#CATCH_ANIMATION
    [[maybe_unused]] static void set_field_CATCH_ANIMATION(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "CATCH_ANIMATION", "field_38415", "CATCH_ANIMATION", "CATCH_ANIMATION"), "Lcha$a;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.entity.ai.brain.task.FrogEatEntityTask$Phase#EAT_ANIMATION
    [[maybe_unused]] static jobject get_field_EAT_ANIMATION() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "EAT_ANIMATION", "field_37493", "EAT_ANIMATION", "EAT_ANIMATION"), "Lcha$a;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.entity.ai.brain.task.FrogEatEntityTask$Phase#EAT_ANIMATION
    [[maybe_unused]] static void set_field_EAT_ANIMATION(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "EAT_ANIMATION", "field_37493", "EAT_ANIMATION", "EAT_ANIMATION"), "Lcha$a;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.entity.ai.brain.task.FrogEatEntityTask$Phase#DONE
    [[maybe_unused]] static jobject get_field_DONE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("d", "DONE", "field_37494", "DONE", "DONE"), "Lcha$a;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.entity.ai.brain.task.FrogEatEntityTask$Phase#DONE
    [[maybe_unused]] static void set_field_DONE(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("d", "DONE", "field_37494", "DONE", "DONE"), "Lcha$a;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    static jmethodID methodID_values() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("values", "values", "values", "values", "values"), "()[Lcha$a;");
    }

    static jobject values() {
       const auto clazz = self();
       const auto methodID = methodID_values();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID);
    };
    
    static jmethodID methodID_valueOf() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("valueOf", "valueOf", "valueOf", "valueOf", "valueOf"), "(Ljava/lang/String;)Lcha$a;");
    }

    static jobject valueOf(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_valueOf();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0);
    };
    
};

#endif // NET_MINECRAFT_ENTITY_AI_BRAIN_TASK_FROGEATENTITYTASK$PHASE_HPP