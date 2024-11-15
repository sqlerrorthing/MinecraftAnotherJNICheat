// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_ENTITY_AI_BRAIN_TASK_MEETVILLAGERTASK_HPP
#define NET_MINECRAFT_ENTITY_AI_BRAIN_TASK_MEETVILLAGERTASK_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.entity.ai.brain.task.MeetVillagerTask
 * Remapped: bxs
 */
namespace MeetVillagerTask {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("bxs", "net/minecraft/world/entity/ai/behavior/SocializeAtBell", "net/minecraft/class_4124", "net/minecraft/entity/ai/brain/task/MeetVillagerTask", "net/minecraft/src/C_632_"));
        }
        return cachedClass;
    };

    // getter for static private field net.minecraft.entity.ai.brain.task.MeetVillagerTask#WALK_SPEED
    [[maybe_unused]] static jfloat get_field_WALK_SPEED() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "SPEED_MODIFIER", "field_30176", "WALK_SPEED", "f_147969_"), "F");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticFloatField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.entity.ai.brain.task.MeetVillagerTask#WALK_SPEED
    [[maybe_unused]] static void set_field_WALK_SPEED(const jfloat &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "SPEED_MODIFIER", "field_30176", "WALK_SPEED", "f_147969_"), "F");
        return MinecraftSDK::env->SetStaticFloatField(clazz, fieldID, value);
    };

    static jmethodID methodID_create() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "create", "method_47111", "create", "m_257875_"), "()Lbws;");
    }

    static jobject create() {
       const auto clazz = self();
       const auto methodID = methodID_create();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID);
    };
    
};

#endif // NET_MINECRAFT_ENTITY_AI_BRAIN_TASK_MEETVILLAGERTASK_HPP