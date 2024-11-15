// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_ENTITY_AI_BRAIN_TASK_GOTOIFNEARBYTASK_HPP
#define NET_MINECRAFT_ENTITY_AI_BRAIN_TASK_GOTOIFNEARBYTASK_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.entity.ai.brain.task.GoToIfNearbyTask
 * Remapped: bxy
 */
namespace GoToIfNearbyTask {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("bxy", "net/minecraft/world/entity/ai/behavior/StrollAroundPoi", "net/minecraft/class_4116", "net/minecraft/entity/ai/brain/task/GoToIfNearbyTask", "net/minecraft/src/C_639_"));
        }
        return cachedClass;
    };

    // getter for static private field net.minecraft.entity.ai.brain.task.GoToIfNearbyTask#UPDATE_INTERVAL
    [[maybe_unused]] static jint get_field_UPDATE_INTERVAL() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "MIN_TIME_BETWEEN_STROLLS", "field_30179", "UPDATE_INTERVAL", "f_147993_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.entity.ai.brain.task.GoToIfNearbyTask#UPDATE_INTERVAL
    [[maybe_unused]] static void set_field_UPDATE_INTERVAL(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "MIN_TIME_BETWEEN_STROLLS", "field_30179", "UPDATE_INTERVAL", "f_147993_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.entity.ai.brain.task.GoToIfNearbyTask#HORIZONTAL_RANGE
    [[maybe_unused]] static jint get_field_HORIZONTAL_RANGE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "STROLL_MAX_XZ_DIST", "field_30180", "HORIZONTAL_RANGE", "f_147994_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.entity.ai.brain.task.GoToIfNearbyTask#HORIZONTAL_RANGE
    [[maybe_unused]] static void set_field_HORIZONTAL_RANGE(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "STROLL_MAX_XZ_DIST", "field_30180", "HORIZONTAL_RANGE", "f_147994_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.entity.ai.brain.task.GoToIfNearbyTask#VERTICAL_RANGE
    [[maybe_unused]] static jint get_field_VERTICAL_RANGE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "STROLL_MAX_Y_DIST", "field_30181", "VERTICAL_RANGE", "f_147995_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.entity.ai.brain.task.GoToIfNearbyTask#VERTICAL_RANGE
    [[maybe_unused]] static void set_field_VERTICAL_RANGE(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "STROLL_MAX_Y_DIST", "field_30181", "VERTICAL_RANGE", "f_147995_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    static jmethodID methodID_create() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "create", "method_47153", "create", "m_257894_"), "(Lccs;FI)Lbws;");
    }

    static jobject create(const jobject& arg0, const jfloat& arg1, const jint& arg2) {
       const auto clazz = self();
       const auto methodID = methodID_create();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0, arg1, arg2);
    };
    
};

#endif // NET_MINECRAFT_ENTITY_AI_BRAIN_TASK_GOTOIFNEARBYTASK_HPP