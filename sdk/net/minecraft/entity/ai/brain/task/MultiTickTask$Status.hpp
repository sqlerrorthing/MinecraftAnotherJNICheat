// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_ENTITY_AI_BRAIN_TASK_MULTITICKTASK$STATUS_HPP
#define NET_MINECRAFT_ENTITY_AI_BRAIN_TASK_MULTITICKTASK$STATUS_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.entity.ai.brain.task.MultiTickTask$Status
 * Remapped: bvh$a
 */
namespace MultiTickTask$Status {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("bvh$a", "net/minecraft/world/entity/ai/behavior/Behavior$Status", "net/minecraft/class_4097$class_4098", "net/minecraft/entity/ai/brain/task/MultiTickTask$Status", "net/minecraft/src/C_569_$C_570_"));
        }
        return cachedClass;
    };

    // getter for static public field net.minecraft.entity.ai.brain.task.MultiTickTask$Status#STOPPED
    [[maybe_unused]] static jobject get_field_STOPPED() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "STOPPED", "field_18337", "STOPPED", "STOPPED"), "Lbvh$a;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.entity.ai.brain.task.MultiTickTask$Status#STOPPED
    [[maybe_unused]] static void set_field_STOPPED(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "STOPPED", "field_18337", "STOPPED", "STOPPED"), "Lbvh$a;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.entity.ai.brain.task.MultiTickTask$Status#RUNNING
    [[maybe_unused]] static jobject get_field_RUNNING() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "RUNNING", "field_18338", "RUNNING", "RUNNING"), "Lbvh$a;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.entity.ai.brain.task.MultiTickTask$Status#RUNNING
    [[maybe_unused]] static void set_field_RUNNING(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "RUNNING", "field_18338", "RUNNING", "RUNNING"), "Lbvh$a;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    static jmethodID methodID_values() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("values", "values", "values", "values", "values"), "()[Lbvh$a;");
    }

    static jobject values() {
       const auto clazz = self();
       const auto methodID = methodID_values();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID);
    };
    
    static jmethodID methodID_valueOf() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("valueOf", "valueOf", "valueOf", "valueOf", "valueOf"), "(Ljava/lang/String;)Lbvh$a;");
    }

    static jobject valueOf(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_valueOf();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0);
    };
    
};

#endif // NET_MINECRAFT_ENTITY_AI_BRAIN_TASK_MULTITICKTASK$STATUS_HPP