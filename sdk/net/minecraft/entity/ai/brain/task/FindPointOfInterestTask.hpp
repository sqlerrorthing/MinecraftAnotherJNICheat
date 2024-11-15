// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_ENTITY_AI_BRAIN_TASK_FINDPOINTOFINTERESTTASK_HPP
#define NET_MINECRAFT_ENTITY_AI_BRAIN_TASK_FINDPOINTOFINTERESTTASK_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.entity.ai.brain.task.FindPointOfInterestTask
 * Remapped: bva
 */
namespace FindPointOfInterestTask {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("bva", "net/minecraft/world/entity/ai/behavior/AcquirePoi", "net/minecraft/class_4096", "net/minecraft/entity/ai/brain/task/FindPointOfInterestTask", "net/minecraft/src/C_562_"));
        }
        return cachedClass;
    };

    // getter for static public field net.minecraft.entity.ai.brain.task.FindPointOfInterestTask#POI_SORTING_RADIUS
    [[maybe_unused]] static jint get_field_POI_SORTING_RADIUS() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "SCAN_RANGE", "field_30098", "POI_SORTING_RADIUS", "f_147363_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.entity.ai.brain.task.FindPointOfInterestTask#POI_SORTING_RADIUS
    [[maybe_unused]] static void set_field_POI_SORTING_RADIUS(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "SCAN_RANGE", "field_30098", "POI_SORTING_RADIUS", "f_147363_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    static jmethodID methodID_create() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "create", "method_46884", "create", "m_257613_"), "(Ljava/util/function/Predicate;Lccs;ZLjava/util/Optional;)Lbvi;");
    }

    static jobject create(const jobject& arg0, const jobject& arg1, const jboolean& arg2, const jobject& arg3) {
       const auto clazz = self();
       const auto methodID = methodID_create();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0, arg1, arg2, arg3);
    };
    
    static jmethodID methodID__create() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "create", "method_46883", "create", "m_258026_"), "(Ljava/util/function/Predicate;Lccs;Lccs;ZLjava/util/Optional;)Lbvi;");
    }

    static jobject _create(const jobject& arg0, const jobject& arg1, const jobject& arg2, const jboolean& arg3, const jobject& arg4) {
       const auto clazz = self();
       const auto methodID = methodID__create();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0, arg1, arg2, arg3, arg4);
    };
    
    static jmethodID methodID_findPathToPoi() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "findPathToPois", "method_43965", "findPathToPoi", "m_217097_"), "(Lbtp;Ljava/util/Set;)Leps;");
    }

    static jobject findPathToPoi(const jobject& arg0, const jobject& arg1) {
       const auto clazz = self();
       const auto methodID = methodID_findPathToPoi();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0, arg1);
    };
    
};

#endif // NET_MINECRAFT_ENTITY_AI_BRAIN_TASK_FINDPOINTOFINTERESTTASK_HPP