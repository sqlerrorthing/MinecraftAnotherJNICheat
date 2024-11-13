// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_ENTITY_AI_BRAIN_TASK_MULTITICKTASK_HPP
#define NET_MINECRAFT_ENTITY_AI_BRAIN_TASK_MULTITICKTASK_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.entity.ai.brain.task.MultiTickTask
 * Remapped: bvh
 */
namespace MultiTickTask {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("bvh", "net/minecraft/world/entity/ai/behavior/Behavior", "net/minecraft/class_4097", "net/minecraft/entity/ai/brain/task/MultiTickTask", "net/minecraft/src/C_569_"));
        }
        return cachedClass;
    };

    // getter for static public field net.minecraft.entity.ai.brain.task.MultiTickTask#DEFAULT_RUN_TIME
    [[maybe_unused]] static jint get_field_DEFAULT_RUN_TIME() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "DEFAULT_DURATION", "field_30112", "DEFAULT_RUN_TIME", "f_147431_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.entity.ai.brain.task.MultiTickTask#DEFAULT_RUN_TIME
    [[maybe_unused]] static void set_field_DEFAULT_RUN_TIME(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "DEFAULT_DURATION", "field_30112", "DEFAULT_RUN_TIME", "f_147431_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for protected field net.minecraft.entity.ai.brain.task.MultiTickTask#requiredMemoryStates
    static jobject get_field_requiredMemoryStates(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "entryCondition", "field_19291", "requiredMemoryStates", "f_22522_"), "Ljava/util/Map;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static protected field net.minecraft.entity.ai.brain.task.MultiTickTask#requiredMemoryStates
    static void set_field_requiredMemoryStates(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "entryCondition", "field_19291", "requiredMemoryStates", "f_22522_"), "Ljava/util/Map;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.entity.ai.brain.task.MultiTickTask#status
    static jobject get_field_status(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "status", "field_18333", "status", "f_22523_"), "Lbvh$a;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.entity.ai.brain.task.MultiTickTask#status
    static void set_field_status(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "status", "field_18333", "status", "f_22523_"), "Lbvh$a;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.entity.ai.brain.task.MultiTickTask#endTime
    static jlong get_field_endTime(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "endTimestamp", "field_18334", "endTime", "f_22524_"), "J");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetLongField(obj, fieldID);
    };

    // setter for static private field net.minecraft.entity.ai.brain.task.MultiTickTask#endTime
    static void set_field_endTime(const jobject &obj, const jlong &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "endTimestamp", "field_18334", "endTime", "f_22524_"), "J");
        return MinecraftSDK::env->SetLongField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.entity.ai.brain.task.MultiTickTask#minRunTime
    static jint get_field_minRunTime(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "minDuration", "field_18335", "minRunTime", "f_22525_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetIntField(obj, fieldID);
    };

    // setter for static private field net.minecraft.entity.ai.brain.task.MultiTickTask#minRunTime
    static void set_field_minRunTime(const jobject &obj, const jint &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "minDuration", "field_18335", "minRunTime", "f_22525_"), "I");
        return MinecraftSDK::env->SetIntField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.entity.ai.brain.task.MultiTickTask#maxRunTime
    static jint get_field_maxRunTime(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("f", "maxDuration", "field_18336", "maxRunTime", "f_22526_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetIntField(obj, fieldID);
    };

    // setter for static private field net.minecraft.entity.ai.brain.task.MultiTickTask#maxRunTime
    static void set_field_maxRunTime(const jobject &obj, const jint &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("f", "maxDuration", "field_18336", "maxRunTime", "f_22526_"), "I");
        return MinecraftSDK::env->SetIntField(obj, fieldID, value);
    };

    static jmethodID methodID_getStatus() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getStatus", "method_18921", "getStatus", "m_22536_"), "()Lbvh$a;");
    }

    static jobject getStatus(const jobject& obj) {
                
       const auto methodID = methodID_getStatus();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_tryStarting() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("e", "tryStart", "method_18922", "tryStarting", "m_22554_"), "(Laqu;Lbtn;J)Z");
    }

    static jboolean tryStarting(const jobject& obj, const jobject& arg0, const jobject& arg1, const jlong& arg2) {
                
       const auto methodID = methodID_tryStarting();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0, arg1, arg2);
    };
    
    static jmethodID methodID_run() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("d", "start", "method_18920", "run", "m_6735_"), "(Laqu;Lbtn;J)V");
    }

    static void run(const jobject& obj, const jobject& arg0, const jobject& arg1, const jlong& arg2) {
                
       const auto methodID = methodID_run();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1, arg2);
    };
    
    static jmethodID methodID_tick() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("f", "tickOrStop", "method_18923", "tick", "m_22558_"), "(Laqu;Lbtn;J)V");
    }

    static void tick(const jobject& obj, const jobject& arg0, const jobject& arg1, const jlong& arg2) {
                
       const auto methodID = methodID_tick();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1, arg2);
    };
    
    static jmethodID methodID_keepRunning() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "tick", "method_18924", "keepRunning", "m_6725_"), "(Laqu;Lbtn;J)V");
    }

    static void keepRunning(const jobject& obj, const jobject& arg0, const jobject& arg1, const jlong& arg2) {
                
       const auto methodID = methodID_keepRunning();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1, arg2);
    };
    
    static jmethodID methodID_stop() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("g", "doStop", "method_18925", "stop", "m_22562_"), "(Laqu;Lbtn;J)V");
    }

    static void stop(const jobject& obj, const jobject& arg0, const jobject& arg1, const jlong& arg2) {
                
       const auto methodID = methodID_stop();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1, arg2);
    };
    
    static jmethodID methodID_finishRunning() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "stop", "method_18926", "finishRunning", "m_6732_"), "(Laqu;Lbtn;J)V");
    }

    static void finishRunning(const jobject& obj, const jobject& arg0, const jobject& arg1, const jlong& arg2) {
                
       const auto methodID = methodID_finishRunning();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1, arg2);
    };
    
    static jmethodID methodID_shouldKeepRunning() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "canStillUse", "method_18927", "shouldKeepRunning", "m_6737_"), "(Laqu;Lbtn;J)Z");
    }

    static jboolean shouldKeepRunning(const jobject& obj, const jobject& arg0, const jobject& arg1, const jlong& arg2) {
                
       const auto methodID = methodID_shouldKeepRunning();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0, arg1, arg2);
    };
    
    static jmethodID methodID_isTimeLimitExceeded() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "timedOut", "method_18915", "isTimeLimitExceeded", "m_7773_"), "(J)Z");
    }

    static jboolean isTimeLimitExceeded(const jobject& obj, const jlong& arg0) {
                
       const auto methodID = methodID_isTimeLimitExceeded();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_shouldRun() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "checkExtraStartConditions", "method_18919", "shouldRun", "m_6114_"), "(Laqu;Lbtn;)Z");
    }

    static jboolean shouldRun(const jobject& obj, const jobject& arg0, const jobject& arg1) {
                
       const auto methodID = methodID_shouldRun();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_getName() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "debugString", "method_46910", "getName", "m_22566_"), "()Ljava/lang/String;");
    }

    static jobject getName(const jobject& obj) {
                
       const auto methodID = methodID_getName();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_hasRequiredMemoryState() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "hasRequiredMemories", "method_19546", "hasRequiredMemoryState", "m_22543_"), "(Lbtn;)Z");
    }

    static jboolean hasRequiredMemoryState(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_hasRequiredMemoryState();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0);
    };
    
};

#endif // NET_MINECRAFT_ENTITY_AI_BRAIN_TASK_MULTITICKTASK_HPP