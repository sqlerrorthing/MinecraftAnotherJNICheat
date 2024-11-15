// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_ENTITY_AI_BRAIN_TASK_BREEDTASK_HPP
#define NET_MINECRAFT_ENTITY_AI_BRAIN_TASK_BREEDTASK_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.entity.ai.brain.task.BreedTask
 * Remapped: bvb
 */
namespace BreedTask {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("bvb", "net/minecraft/world/entity/ai/behavior/AnimalMakeLove", "net/minecraft/class_4806", "net/minecraft/entity/ai/brain/task/BreedTask", "net/minecraft/src/C_564_"));
        }
        return cachedClass;
    };

    // getter for static private field net.minecraft.entity.ai.brain.task.BreedTask#MAX_RANGE
    [[maybe_unused]] static jint get_field_MAX_RANGE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "BREED_RANGE", "field_30104", "MAX_RANGE", "f_147376_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.entity.ai.brain.task.BreedTask#MAX_RANGE
    [[maybe_unused]] static void set_field_MAX_RANGE(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "BREED_RANGE", "field_30104", "MAX_RANGE", "f_147376_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.entity.ai.brain.task.BreedTask#MIN_BREED_TIME
    [[maybe_unused]] static jint get_field_MIN_BREED_TIME() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("d", "MIN_DURATION", "field_30105", "MIN_BREED_TIME", "f_147377_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.entity.ai.brain.task.BreedTask#MIN_BREED_TIME
    [[maybe_unused]] static void set_field_MIN_BREED_TIME(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("d", "MIN_DURATION", "field_30105", "MIN_BREED_TIME", "f_147377_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.entity.ai.brain.task.BreedTask#RUN_TIME
    [[maybe_unused]] static jint get_field_RUN_TIME() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("e", "MAX_DURATION", "field_30106", "RUN_TIME", "f_147378_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.entity.ai.brain.task.BreedTask#RUN_TIME
    [[maybe_unused]] static void set_field_RUN_TIME(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("e", "MAX_DURATION", "field_30106", "RUN_TIME", "f_147378_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for private field net.minecraft.entity.ai.brain.task.BreedTask#targetType
    static jobject get_field_targetType(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("f", "partnerType", "field_22283", "targetType", "f_22387_"), "Lbsx;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.entity.ai.brain.task.BreedTask#targetType
    static void set_field_targetType(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("f", "partnerType", "field_22283", "targetType", "f_22387_"), "Lbsx;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.entity.ai.brain.task.BreedTask#speed
    static jfloat get_field_speed(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("g", "speedModifier", "field_23129", "speed", "f_22388_"), "F");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetFloatField(obj, fieldID);
    };

    // setter for static private field net.minecraft.entity.ai.brain.task.BreedTask#speed
    static void set_field_speed(const jobject &obj, const jfloat &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("g", "speedModifier", "field_23129", "speed", "f_22388_"), "F");
        return MinecraftSDK::env->SetFloatField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.entity.ai.brain.task.BreedTask#approachDistance
    static jint get_field_approachDistance(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("h", "closeEnoughDistance", "field_48327", "approachDistance", "f_316615_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetIntField(obj, fieldID);
    };

    // setter for static private field net.minecraft.entity.ai.brain.task.BreedTask#approachDistance
    static void set_field_approachDistance(const jobject &obj, const jint &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("h", "closeEnoughDistance", "field_48327", "approachDistance", "f_316615_"), "I");
        return MinecraftSDK::env->SetIntField(obj, fieldID, value);
    };

    // getter for static private field net.minecraft.entity.ai.brain.task.BreedTask#DEFAULT_APPROACH_DISTANCE
    [[maybe_unused]] static jint get_field_DEFAULT_APPROACH_DISTANCE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("i", "DEFAULT_CLOSE_ENOUGH_DISTANCE", "field_48328", "DEFAULT_APPROACH_DISTANCE", "f_317016_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.entity.ai.brain.task.BreedTask#DEFAULT_APPROACH_DISTANCE
    [[maybe_unused]] static void set_field_DEFAULT_APPROACH_DISTANCE(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("i", "DEFAULT_CLOSE_ENOUGH_DISTANCE", "field_48328", "DEFAULT_APPROACH_DISTANCE", "f_317016_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for private field net.minecraft.entity.ai.brain.task.BreedTask#breedTime
    static jlong get_field_breedTime(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("j", "spawnChildAtTime", "field_22284", "breedTime", "f_22389_"), "J");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetLongField(obj, fieldID);
    };

    // setter for static private field net.minecraft.entity.ai.brain.task.BreedTask#breedTime
    static void set_field_breedTime(const jobject &obj, const jlong &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("j", "spawnChildAtTime", "field_22284", "breedTime", "f_22389_"), "J");
        return MinecraftSDK::env->SetLongField(obj, fieldID, value);
    };

    static jmethodID methodID_shouldRun() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "checkExtraStartConditions", "method_24543", "shouldRun", "m_6114_"), "(Laqu;Lcfe;)Z");
    }

    static jboolean shouldRun(const jobject& obj, const jobject& arg0, const jobject& arg1) {
                
       const auto methodID = methodID_shouldRun();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_run() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "start", "method_24544", "run", "m_6735_"), "(Laqu;Lcfe;J)V");
    }

    static void run(const jobject& obj, const jobject& arg0, const jobject& arg1, const jlong& arg2) {
                
       const auto methodID = methodID_run();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1, arg2);
    };
    
    static jmethodID methodID_shouldKeepRunning() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "canStillUse", "method_24547", "shouldKeepRunning", "m_6737_"), "(Laqu;Lcfe;J)Z");
    }

    static jboolean shouldKeepRunning(const jobject& obj, const jobject& arg0, const jobject& arg1, const jlong& arg2) {
                
       const auto methodID = methodID_shouldKeepRunning();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0, arg1, arg2);
    };
    
    static jmethodID methodID_keepRunning() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "tick", "method_24549", "keepRunning", "m_6725_"), "(Laqu;Lcfe;J)V");
    }

    static void keepRunning(const jobject& obj, const jobject& arg0, const jobject& arg1, const jlong& arg2) {
                
       const auto methodID = methodID_keepRunning();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1, arg2);
    };
    
    static jmethodID methodID_finishRunning() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("d", "stop", "method_24550", "finishRunning", "m_6732_"), "(Laqu;Lcfe;J)V");
    }

    static void finishRunning(const jobject& obj, const jobject& arg0, const jobject& arg1, const jlong& arg2) {
                
       const auto methodID = methodID_finishRunning();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1, arg2);
    };
    
    static jmethodID methodID_getBreedTarget() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getBreedTarget", "method_24542", "getBreedTarget", "m_22409_"), "(Lcfe;)Lcfe;");
    }

    static jobject getBreedTarget(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_getBreedTarget();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_hasBreedTarget() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "hasBreedTargetOfRightType", "method_24546", "hasBreedTarget", "m_22421_"), "(Lcfe;)Z");
    }

    static jboolean hasBreedTarget(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_hasBreedTarget();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_findBreedTarget() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "findValidBreedPartner", "method_24548", "findBreedTarget", "m_22431_"), "(Lcfe;)Ljava/util/Optional;");
    }

    static jobject findBreedTarget(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_findBreedTarget();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
};

#endif // NET_MINECRAFT_ENTITY_AI_BRAIN_TASK_BREEDTASK_HPP