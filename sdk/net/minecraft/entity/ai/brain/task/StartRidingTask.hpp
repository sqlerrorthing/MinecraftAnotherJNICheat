// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_ENTITY_AI_BRAIN_TASK_STARTRIDINGTASK_HPP
#define NET_MINECRAFT_ENTITY_AI_BRAIN_TASK_STARTRIDINGTASK_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.entity.ai.brain.task.StartRidingTask
 * Remapped: bwp
 */
namespace StartRidingTask {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("bwp", "net/minecraft/world/entity/ai/behavior/Mount", "net/minecraft/class_4817", "net/minecraft/entity/ai/brain/task/StartRidingTask", "net/minecraft/src/C_605_"));
        }
        return cachedClass;
    };

    // getter for static private field net.minecraft.entity.ai.brain.task.StartRidingTask#COMPLETION_RANGE
    [[maybe_unused]] static jint get_field_COMPLETION_RANGE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "CLOSE_ENOUGH_TO_START_RIDING_DIST", "field_30149", "COMPLETION_RANGE", "f_147698_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.entity.ai.brain.task.StartRidingTask#COMPLETION_RANGE
    [[maybe_unused]] static void set_field_COMPLETION_RANGE(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "CLOSE_ENOUGH_TO_START_RIDING_DIST", "field_30149", "COMPLETION_RANGE", "f_147698_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    static jmethodID methodID_create() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "create", "method_46991", "create", "m_257518_"), "(F)Lbvi;");
    }

    static jobject create(const jfloat& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_create();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0);
    };
    
};

#endif // NET_MINECRAFT_ENTITY_AI_BRAIN_TASK_STARTRIDINGTASK_HPP