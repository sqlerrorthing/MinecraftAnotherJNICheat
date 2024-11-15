// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_ENTITY_AI_BRAIN_TASK_PREPARERAMTASK_HPP
#define NET_MINECRAFT_ENTITY_AI_BRAIN_TASK_PREPARERAMTASK_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.entity.ai.brain.task.PrepareRamTask
 * Remapped: bww
 */
namespace PrepareRamTask {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("bww", "net/minecraft/world/entity/ai/behavior/PrepareRamNearestTarget", "net/minecraft/class_6336", "net/minecraft/entity/ai/brain/task/PrepareRamTask", "net/minecraft/src/C_141084_"));
        }
        return cachedClass;
    };

    // getter for static public field net.minecraft.entity.ai.brain.task.PrepareRamTask#RUN_TIME
    [[maybe_unused]] static jint get_field_RUN_TIME() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "TIME_OUT_DURATION", "field_33461", "RUN_TIME", "f_147713_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.entity.ai.brain.task.PrepareRamTask#RUN_TIME
    [[maybe_unused]] static void set_field_RUN_TIME(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "TIME_OUT_DURATION", "field_33461", "RUN_TIME", "f_147713_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for private field net.minecraft.entity.ai.brain.task.PrepareRamTask#cooldownFactory
    static jobject get_field_cooldownFactory(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "getCooldownOnFail", "field_33462", "cooldownFactory", "f_147714_"), "Ljava/util/function/ToIntFunction;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.entity.ai.brain.task.PrepareRamTask#cooldownFactory
    static void set_field_cooldownFactory(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "getCooldownOnFail", "field_33462", "cooldownFactory", "f_147714_"), "Ljava/util/function/ToIntFunction;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.entity.ai.brain.task.PrepareRamTask#minRamDistance
    static jint get_field_minRamDistance(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "minRamDistance", "field_33463", "minRamDistance", "f_147715_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetIntField(obj, fieldID);
    };

    // setter for static private field net.minecraft.entity.ai.brain.task.PrepareRamTask#minRamDistance
    static void set_field_minRamDistance(const jobject &obj, const jint &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "minRamDistance", "field_33463", "minRamDistance", "f_147715_"), "I");
        return MinecraftSDK::env->SetIntField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.entity.ai.brain.task.PrepareRamTask#maxRamDistance
    static jint get_field_maxRamDistance(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("f", "maxRamDistance", "field_33464", "maxRamDistance", "f_147716_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetIntField(obj, fieldID);
    };

    // setter for static private field net.minecraft.entity.ai.brain.task.PrepareRamTask#maxRamDistance
    static void set_field_maxRamDistance(const jobject &obj, const jint &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("f", "maxRamDistance", "field_33464", "maxRamDistance", "f_147716_"), "I");
        return MinecraftSDK::env->SetIntField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.entity.ai.brain.task.PrepareRamTask#speed
    static jfloat get_field_speed(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("g", "walkSpeed", "field_33465", "speed", "f_147717_"), "F");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetFloatField(obj, fieldID);
    };

    // setter for static private field net.minecraft.entity.ai.brain.task.PrepareRamTask#speed
    static void set_field_speed(const jobject &obj, const jfloat &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("g", "walkSpeed", "field_33465", "speed", "f_147717_"), "F");
        return MinecraftSDK::env->SetFloatField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.entity.ai.brain.task.PrepareRamTask#targetPredicate
    static jobject get_field_targetPredicate(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("h", "ramTargeting", "field_33466", "targetPredicate", "f_147718_"), "Lcef;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.entity.ai.brain.task.PrepareRamTask#targetPredicate
    static void set_field_targetPredicate(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("h", "ramTargeting", "field_33466", "targetPredicate", "f_147718_"), "Lcef;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.entity.ai.brain.task.PrepareRamTask#prepareTime
    static jint get_field_prepareTime(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("i", "ramPrepareTime", "field_33467", "prepareTime", "f_147719_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetIntField(obj, fieldID);
    };

    // setter for static private field net.minecraft.entity.ai.brain.task.PrepareRamTask#prepareTime
    static void set_field_prepareTime(const jobject &obj, const jint &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("i", "ramPrepareTime", "field_33467", "prepareTime", "f_147719_"), "I");
        return MinecraftSDK::env->SetIntField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.entity.ai.brain.task.PrepareRamTask#soundFactory
    static jobject get_field_soundFactory(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("j", "getPrepareRamSound", "field_33468", "soundFactory", "f_147720_"), "Ljava/util/function/Function;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.entity.ai.brain.task.PrepareRamTask#soundFactory
    static void set_field_soundFactory(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("j", "getPrepareRamSound", "field_33468", "soundFactory", "f_147720_"), "Ljava/util/function/Function;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.entity.ai.brain.task.PrepareRamTask#prepareStartTime
    static jobject get_field_prepareStartTime(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("k", "reachedRamPositionTimestamp", "field_33469", "prepareStartTime", "f_147721_"), "Ljava/util/Optional;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.entity.ai.brain.task.PrepareRamTask#prepareStartTime
    static void set_field_prepareStartTime(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("k", "reachedRamPositionTimestamp", "field_33469", "prepareStartTime", "f_147721_"), "Ljava/util/Optional;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.entity.ai.brain.task.PrepareRamTask#ram
    static jobject get_field_ram(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("l", "ramCandidate", "field_33470", "ram", "f_147722_"), "Ljava/util/Optional;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.entity.ai.brain.task.PrepareRamTask#ram
    static void set_field_ram(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("l", "ramCandidate", "field_33470", "ram", "f_147722_"), "Ljava/util/Optional;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID_run() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "start", "method_36260", "run", "m_6735_"), "(Laqu;Lbtw;J)V");
    }

    static void run(const jobject& obj, const jobject& arg0, const jobject& arg1, const jlong& arg2) {
                
       const auto methodID = methodID_run();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1, arg2);
    };
    
    static jmethodID methodID_finishRunning() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "stop", "method_36267", "finishRunning", "m_6732_"), "(Laqu;Lbtw;J)V");
    }

    static void finishRunning(const jobject& obj, const jobject& arg0, const jobject& arg1, const jlong& arg2) {
                
       const auto methodID = methodID_finishRunning();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1, arg2);
    };
    
    static jmethodID methodID_shouldKeepRunning() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "canStillUse", "method_36269", "shouldKeepRunning", "m_6737_"), "(Laqu;Lbtw;J)Z");
    }

    static jboolean shouldKeepRunning(const jobject& obj, const jobject& arg0, const jobject& arg1, const jlong& arg2) {
                
       const auto methodID = methodID_shouldKeepRunning();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0, arg1, arg2);
    };
    
    static jmethodID methodID_keepRunning() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("d", "tick", "method_36271", "keepRunning", "m_6725_"), "(Laqu;Lbtw;J)V");
    }

    static void keepRunning(const jobject& obj, const jobject& arg0, const jobject& arg1, const jlong& arg2) {
                
       const auto methodID = methodID_keepRunning();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1, arg2);
    };
    
    static jmethodID methodID_calculateRamTarget() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getEdgeOfBlock", "method_36266", "calculateRamTarget", "m_147754_"), "(Ljd;Ljd;)Lexc;");
    }

    static jobject calculateRamTarget(const jobject& obj, const jobject& arg0, const jobject& arg1) {
                
       const auto methodID = methodID_calculateRamTarget();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_findRamStart() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "calculateRammingStartPosition", "method_36262", "findRamStart", "m_147742_"), "(Lbtw;Lbtn;)Ljava/util/Optional;");
    }

    static jobject findRamStart(const jobject& obj, const jobject& arg0, const jobject& arg1) {
                
       const auto methodID = methodID_findRamStart();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_canReach() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "isWalkableBlock", "method_36263", "canReach", "m_147745_"), "(Lbtw;Ljd;)Z");
    }

    static jboolean canReach(const jobject& obj, const jobject& arg0, const jobject& arg1) {
                
       const auto methodID = methodID_canReach();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_findRam() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "chooseRamPosition", "method_36268", "findRam", "m_147765_"), "(Lbtw;Lbtn;)V");
    }

    static void findRam(const jobject& obj, const jobject& arg0, const jobject& arg1) {
                
       const auto methodID = methodID_findRam();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1);
    };
    
};

#endif // NET_MINECRAFT_ENTITY_AI_BRAIN_TASK_PREPARERAMTASK_HPP