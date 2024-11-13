// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_ENTITY_AI_BRAIN_SCHEDULEBUILDER$ACTIVITYENTRY_HPP
#define NET_MINECRAFT_ENTITY_AI_BRAIN_SCHEDULEBUILDER$ACTIVITYENTRY_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.entity.ai.brain.ScheduleBuilder$ActivityEntry
 * Remapped: coq$a
 */
namespace ScheduleBuilder$ActivityEntry {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("coq$a", "net/minecraft/world/entity/schedule/ScheduleBuilder$ActivityTransition", "net/minecraft/class_4171$class_4172", "net/minecraft/entity/ai/brain/ScheduleBuilder$ActivityEntry", "net/minecraft/src/C_1198_$C_1199_"));
        }
        return cachedClass;
    };

    // getter for private field net.minecraft.entity.ai.brain.ScheduleBuilder$ActivityEntry#startTime
    static jint get_field_startTime(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "time", "field_18610", "startTime", "f_38048_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetIntField(obj, fieldID);
    };

    // setter for static private field net.minecraft.entity.ai.brain.ScheduleBuilder$ActivityEntry#startTime
    static void set_field_startTime(const jobject &obj, const jint &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "time", "field_18610", "startTime", "f_38048_"), "I");
        return MinecraftSDK::env->SetIntField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.entity.ai.brain.ScheduleBuilder$ActivityEntry#activity
    static jobject get_field_activity(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "activity", "field_18611", "activity", "f_38049_"), "Lcom;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.entity.ai.brain.ScheduleBuilder$ActivityEntry#activity
    static void set_field_activity(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "activity", "field_18611", "activity", "f_38049_"), "Lcom;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID_getStartTime() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getTime", "method_19224", "getStartTime", "m_38053_"), "()I");
    }

    static jint getStartTime(const jobject& obj) {
                
       const auto methodID = methodID_getStartTime();
       return MinecraftSDK::env->CallIntMethod(obj, methodID);
    };
    
    static jmethodID methodID_getActivity() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "getActivity", "method_19225", "getActivity", "m_38054_"), "()Lcom;");
    }

    static jobject getActivity(const jobject& obj) {
                
       const auto methodID = methodID_getActivity();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_ENTITY_AI_BRAIN_SCHEDULEBUILDER$ACTIVITYENTRY_HPP