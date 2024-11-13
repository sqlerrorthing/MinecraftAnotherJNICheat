// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_ENTITY_AI_BRAIN_TASK_RINGBELLTASK_HPP
#define NET_MINECRAFT_ENTITY_AI_BRAIN_TASK_RINGBELLTASK_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.entity.ai.brain.task.RingBellTask
 * Remapped: bxd
 */
namespace RingBellTask {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("bxd", "net/minecraft/world/entity/ai/behavior/RingBell", "net/minecraft/class_4251", "net/minecraft/entity/ai/brain/task/RingBellTask", "net/minecraft/src/C_617_"));
        }
        return cachedClass;
    };

    // getter for static private field net.minecraft.entity.ai.brain.task.RingBellTask#RUN_CHANCE
    [[maybe_unused]] static jfloat get_field_RUN_CHANCE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "BELL_RING_CHANCE", "field_30160", "RUN_CHANCE", "f_147863_"), "F");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticFloatField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.entity.ai.brain.task.RingBellTask#RUN_CHANCE
    [[maybe_unused]] static void set_field_RUN_CHANCE(const jfloat &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "BELL_RING_CHANCE", "field_30160", "RUN_CHANCE", "f_147863_"), "F");
        return MinecraftSDK::env->SetStaticFloatField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.entity.ai.brain.task.RingBellTask#MAX_DISTANCE
    [[maybe_unused]] static jint get_field_MAX_DISTANCE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "RING_BELL_FROM_DISTANCE", "field_30159", "MAX_DISTANCE", "f_147862_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.entity.ai.brain.task.RingBellTask#MAX_DISTANCE
    [[maybe_unused]] static void set_field_MAX_DISTANCE(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "RING_BELL_FROM_DISTANCE", "field_30159", "MAX_DISTANCE", "f_147862_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    static jmethodID methodID_create() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "create", "method_47044", "create", "m_257471_"), "()Lbvi;");
    }

    static jobject create() {
       const auto clazz = self();
       const auto methodID = methodID_create();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID);
    };
    
};

#endif // NET_MINECRAFT_ENTITY_AI_BRAIN_TASK_RINGBELLTASK_HPP