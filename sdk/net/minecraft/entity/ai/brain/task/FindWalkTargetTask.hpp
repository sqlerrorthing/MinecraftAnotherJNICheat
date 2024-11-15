// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_ENTITY_AI_BRAIN_TASK_FINDWALKTARGETTASK_HPP
#define NET_MINECRAFT_ENTITY_AI_BRAIN_TASK_FINDWALKTARGETTASK_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.entity.ai.brain.task.FindWalkTargetTask
 * Remapped: byl
 */
namespace FindWalkTargetTask {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("byl", "net/minecraft/world/entity/ai/behavior/VillageBoundRandomStroll", "net/minecraft/class_4117", "net/minecraft/entity/ai/brain/task/FindWalkTargetTask", "net/minecraft/src/C_648_"));
        }
        return cachedClass;
    };

    // getter for static private field net.minecraft.entity.ai.brain.task.FindWalkTargetTask#DEFAULT_HORIZONTAL_RANGE
    [[maybe_unused]] static jint get_field_DEFAULT_HORIZONTAL_RANGE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "MAX_XZ_DIST", "field_30186", "DEFAULT_HORIZONTAL_RANGE", "f_148037_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.entity.ai.brain.task.FindWalkTargetTask#DEFAULT_HORIZONTAL_RANGE
    [[maybe_unused]] static void set_field_DEFAULT_HORIZONTAL_RANGE(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "MAX_XZ_DIST", "field_30186", "DEFAULT_HORIZONTAL_RANGE", "f_148037_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.entity.ai.brain.task.FindWalkTargetTask#DEFAULT_VERTICAL_RANGE
    [[maybe_unused]] static jint get_field_DEFAULT_VERTICAL_RANGE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "MAX_Y_DIST", "field_30187", "DEFAULT_VERTICAL_RANGE", "f_148038_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.entity.ai.brain.task.FindWalkTargetTask#DEFAULT_VERTICAL_RANGE
    [[maybe_unused]] static void set_field_DEFAULT_VERTICAL_RANGE(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "MAX_Y_DIST", "field_30187", "DEFAULT_VERTICAL_RANGE", "f_148038_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    static jmethodID methodID_create() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "create", "method_47191", "create", "m_257910_"), "(F)Lbws;");
    }

    static jobject create(const jfloat& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_create();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID__create() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "create", "method_47192", "create", "m_258010_"), "(FII)Lbws;");
    }

    static jobject _create(const jfloat& arg0, const jint& arg1, const jint& arg2) {
       const auto clazz = self();
       const auto methodID = methodID__create();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0, arg1, arg2);
    };
    
};

#endif // NET_MINECRAFT_ENTITY_AI_BRAIN_TASK_FINDWALKTARGETTASK_HPP