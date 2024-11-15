// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_ENTITY_AI_BRAIN_TASK_LEAPINGCHARGETASK_HPP
#define NET_MINECRAFT_ENTITY_AI_BRAIN_TASK_LEAPINGCHARGETASK_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.entity.ai.brain.task.LeapingChargeTask
 * Remapped: bwi
 */
namespace LeapingChargeTask {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("bwi", "net/minecraft/world/entity/ai/behavior/LongJumpMidJump", "net/minecraft/class_6029", "net/minecraft/entity/ai/brain/task/LeapingChargeTask", "net/minecraft/src/C_141081_"));
        }
        return cachedClass;
    };

    // getter for static public field net.minecraft.entity.ai.brain.task.LeapingChargeTask#RUN_TIME
    [[maybe_unused]] static jint get_field_RUN_TIME() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "TIME_OUT_DURATION", "field_30132", "RUN_TIME", "f_147592_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.entity.ai.brain.task.LeapingChargeTask#RUN_TIME
    [[maybe_unused]] static void set_field_RUN_TIME(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "TIME_OUT_DURATION", "field_30132", "RUN_TIME", "f_147592_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for private field net.minecraft.entity.ai.brain.task.LeapingChargeTask#cooldownRange
    static jobject get_field_cooldownRange(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "timeBetweenLongJumps", "field_30133", "cooldownRange", "f_147593_"), "Lbqc;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.entity.ai.brain.task.LeapingChargeTask#cooldownRange
    static void set_field_cooldownRange(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "timeBetweenLongJumps", "field_30133", "cooldownRange", "f_147593_"), "Lbqc;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.entity.ai.brain.task.LeapingChargeTask#sound
    static jobject get_field_sound(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "landingSound", "field_33459", "sound", "f_147594_"), "Lavo;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.entity.ai.brain.task.LeapingChargeTask#sound
    static void set_field_sound(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "landingSound", "field_33459", "sound", "f_147594_"), "Lavo;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID_shouldKeepRunning() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "canStillUse", "method_35073", "shouldKeepRunning", "m_6737_"), "(Laqu;Lbtp;J)Z");
    }

    static jboolean shouldKeepRunning(const jobject& obj, const jobject& arg0, const jobject& arg1, const jlong& arg2) {
                
       const auto methodID = methodID_shouldKeepRunning();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0, arg1, arg2);
    };
    
    static jmethodID methodID_run() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "start", "method_35074", "run", "m_6735_"), "(Laqu;Lbtp;J)V");
    }

    static void run(const jobject& obj, const jobject& arg0, const jobject& arg1, const jlong& arg2) {
                
       const auto methodID = methodID_run();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1, arg2);
    };
    
    static jmethodID methodID_finishRunning() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "stop", "method_35075", "finishRunning", "m_6732_"), "(Laqu;Lbtp;J)V");
    }

    static void finishRunning(const jobject& obj, const jobject& arg0, const jobject& arg1, const jlong& arg2) {
                
       const auto methodID = methodID_finishRunning();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1, arg2);
    };
    
};

#endif // NET_MINECRAFT_ENTITY_AI_BRAIN_TASK_LEAPINGCHARGETASK_HPP