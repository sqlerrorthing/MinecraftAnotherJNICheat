// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_ENTITY_AI_BRAIN_TASK_FINDPOINTOFINTERESTTASK$RETRYMARKER_HPP
#define NET_MINECRAFT_ENTITY_AI_BRAIN_TASK_FINDPOINTOFINTERESTTASK$RETRYMARKER_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.entity.ai.brain.task.FindPointOfInterestTask$RetryMarker
 * Remapped: bva$a
 */
namespace FindPointOfInterestTask$RetryMarker {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("bva$a", "net/minecraft/world/entity/ai/behavior/AcquirePoi$JitteredLinearRetry", "net/minecraft/class_4096$class_5397", "net/minecraft/entity/ai/brain/task/FindPointOfInterestTask$RetryMarker", "net/minecraft/src/C_562_$C_563_"));
        }
        return cachedClass;
    };

    // getter for static private field net.minecraft.entity.ai.brain.task.FindPointOfInterestTask$RetryMarker#MIN_DELAY
    [[maybe_unused]] static jint get_field_MIN_DELAY() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "MIN_INTERVAL_INCREASE", "field_30101", "MIN_DELAY", "f_147373_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.entity.ai.brain.task.FindPointOfInterestTask$RetryMarker#MIN_DELAY
    [[maybe_unused]] static void set_field_MIN_DELAY(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "MIN_INTERVAL_INCREASE", "field_30101", "MIN_DELAY", "f_147373_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.entity.ai.brain.task.FindPointOfInterestTask$RetryMarker#MAX_EXTRA_DELAY
    [[maybe_unused]] static jint get_field_MAX_EXTRA_DELAY() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "MAX_INTERVAL_INCREASE", "field_30102", "MAX_EXTRA_DELAY", "f_147374_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.entity.ai.brain.task.FindPointOfInterestTask$RetryMarker#MAX_EXTRA_DELAY
    [[maybe_unused]] static void set_field_MAX_EXTRA_DELAY(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "MAX_INTERVAL_INCREASE", "field_30102", "MAX_EXTRA_DELAY", "f_147374_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.entity.ai.brain.task.FindPointOfInterestTask$RetryMarker#ATTEMPT_DURATION
    [[maybe_unused]] static jint get_field_ATTEMPT_DURATION() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "MAX_RETRY_PATHFINDING_INTERVAL", "field_30103", "ATTEMPT_DURATION", "f_147375_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.entity.ai.brain.task.FindPointOfInterestTask$RetryMarker#ATTEMPT_DURATION
    [[maybe_unused]] static void set_field_ATTEMPT_DURATION(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "MAX_RETRY_PATHFINDING_INTERVAL", "field_30103", "ATTEMPT_DURATION", "f_147375_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for private field net.minecraft.entity.ai.brain.task.FindPointOfInterestTask$RetryMarker#random
    static jobject get_field_random(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "random", "field_25600", "random", "f_22373_"), "Layw;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.entity.ai.brain.task.FindPointOfInterestTask$RetryMarker#random
    static void set_field_random(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "random", "field_25600", "random", "f_22373_"), "Layw;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.entity.ai.brain.task.FindPointOfInterestTask$RetryMarker#previousAttemptAt
    static jlong get_field_previousAttemptAt(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "previousAttemptTimestamp", "field_25601", "previousAttemptAt", "f_22374_"), "J");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetLongField(obj, fieldID);
    };

    // setter for static private field net.minecraft.entity.ai.brain.task.FindPointOfInterestTask$RetryMarker#previousAttemptAt
    static void set_field_previousAttemptAt(const jobject &obj, const jlong &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "previousAttemptTimestamp", "field_25601", "previousAttemptAt", "f_22374_"), "J");
        return MinecraftSDK::env->SetLongField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.entity.ai.brain.task.FindPointOfInterestTask$RetryMarker#nextScheduledAttemptAt
    static jlong get_field_nextScheduledAttemptAt(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("f", "nextScheduledAttemptTimestamp", "field_25602", "nextScheduledAttemptAt", "f_22375_"), "J");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetLongField(obj, fieldID);
    };

    // setter for static private field net.minecraft.entity.ai.brain.task.FindPointOfInterestTask$RetryMarker#nextScheduledAttemptAt
    static void set_field_nextScheduledAttemptAt(const jobject &obj, const jlong &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("f", "nextScheduledAttemptTimestamp", "field_25602", "nextScheduledAttemptAt", "f_22375_"), "J");
        return MinecraftSDK::env->SetLongField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.entity.ai.brain.task.FindPointOfInterestTask$RetryMarker#currentDelay
    static jint get_field_currentDelay(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("g", "currentDelay", "field_25603", "currentDelay", "f_22376_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetIntField(obj, fieldID);
    };

    // setter for static private field net.minecraft.entity.ai.brain.task.FindPointOfInterestTask$RetryMarker#currentDelay
    static void set_field_currentDelay(const jobject &obj, const jint &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("g", "currentDelay", "field_25603", "currentDelay", "f_22376_"), "I");
        return MinecraftSDK::env->SetIntField(obj, fieldID, value);
    };

    static jmethodID methodID_setAttemptTime() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "markAttempt", "method_29926", "setAttemptTime", "m_22380_"), "(J)V");
    }

    static void setAttemptTime(const jobject& obj, const jlong& arg0) {
                
       const auto methodID = methodID_setAttemptTime();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_isAttempting() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "isStillValid", "method_29927", "isAttempting", "m_22382_"), "(J)Z");
    }

    static jboolean isAttempting(const jobject& obj, const jlong& arg0) {
                
       const auto methodID = methodID_isAttempting();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_shouldRetry() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "shouldRetry", "method_29928", "shouldRetry", "m_22384_"), "(J)Z");
    }

    static jboolean shouldRetry(const jobject& obj, const jlong& arg0) {
                
       const auto methodID = methodID_shouldRetry();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0);
    };
    
};

#endif // NET_MINECRAFT_ENTITY_AI_BRAIN_TASK_FINDPOINTOFINTERESTTASK$RETRYMARKER_HPP