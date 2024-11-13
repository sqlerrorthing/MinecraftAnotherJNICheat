// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_TEST_TIMEDTASKRUNNER_HPP
#define NET_MINECRAFT_TEST_TIMEDTASKRUNNER_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.test.TimedTaskRunner
 * Remapped: tb
 */
namespace TimedTaskRunner {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("tb", "net/minecraft/gametest/framework/GameTestSequence", "net/minecraft/class_4693", "net/minecraft/test/TimedTaskRunner", "net/minecraft/src/C_4894_"));
        }
        return cachedClass;
    };

    // getter for default field net.minecraft.test.TimedTaskRunner#test
    static jobject get_field_test(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "parent", "field_21457", "test", "f_127774_"), "Lsx;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static default field net.minecraft.test.TimedTaskRunner#test
    static void set_field_test(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "parent", "field_21457", "test", "f_127774_"), "Lsx;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.test.TimedTaskRunner#tasks
    static jobject get_field_tasks(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "events", "field_21458", "tasks", "f_127775_"), "Ljava/util/List;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.test.TimedTaskRunner#tasks
    static void set_field_tasks(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "events", "field_21458", "tasks", "f_127775_"), "Ljava/util/List;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.test.TimedTaskRunner#tick
    static jlong get_field_tick(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "lastTick", "field_21459", "tick", "f_127776_"), "J");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetLongField(obj, fieldID);
    };

    // setter for static private field net.minecraft.test.TimedTaskRunner#tick
    static void set_field_tick(const jobject &obj, const jlong &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "lastTick", "field_21459", "tick", "f_127776_"), "J");
        return MinecraftSDK::env->SetLongField(obj, fieldID, value);
    };

    static jmethodID methodID_createAndAdd() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "thenWaitUntil", "method_36079", "createAndAdd", "m_177552_"), "(Ljava/lang/Runnable;)Ltb;");
    }

    static jobject createAndAdd(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_createAndAdd();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID__createAndAdd() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "thenWaitUntil", "method_36078", "createAndAdd", "m_177549_"), "(JLjava/lang/Runnable;)Ltb;");
    }

    static jobject _createAndAdd(const jobject& obj, const jlong& arg0, const jobject& arg1) {
                
       const auto methodID = methodID__createAndAdd();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_expectMinDuration() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "thenIdle", "method_36076", "expectMinDuration", "m_177544_"), "(I)Ltb;");
    }

    static jobject expectMinDuration(const jobject& obj, const jint& arg0) {
                
       const auto methodID = methodID_expectMinDuration();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_createAndAddReported() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "thenExecute", "method_36085", "createAndAddReported", "m_177562_"), "(Ljava/lang/Runnable;)Ltb;");
    }

    static jobject createAndAddReported(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_createAndAddReported();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_expectMinDurationAndRun() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "thenExecuteAfter", "method_36077", "expectMinDurationAndRun", "m_177546_"), "(ILjava/lang/Runnable;)Ltb;");
    }

    static jobject expectMinDurationAndRun(const jobject& obj, const jint& arg0, const jobject& arg1) {
                
       const auto methodID = methodID_expectMinDurationAndRun();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_expectMinDurationOrRun() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "thenExecuteFor", "method_36084", "expectMinDurationOrRun", "m_177559_"), "(ILjava/lang/Runnable;)Ltb;");
    }

    static jobject expectMinDurationOrRun(const jobject& obj, const jint& arg0, const jobject& arg1) {
                
       const auto methodID = methodID_expectMinDurationOrRun();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_completeIfSuccessful() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "thenSucceed", "method_36075", "completeIfSuccessful", "m_177543_"), "()V");
    }

    static void completeIfSuccessful(const jobject& obj) {
                
       const auto methodID = methodID_completeIfSuccessful();
       MinecraftSDK::env->CallVoidMethod(obj, methodID);
    };
    
    static jmethodID methodID_fail() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "thenFail", "method_36080", "fail", "m_177554_"), "(Ljava/util/function/Supplier;)V");
    }

    static void fail(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_fail();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_createAndAddTrigger() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "thenTrigger", "method_36083", "createAndAddTrigger", "m_177558_"), "()Ltb$a;");
    }

    static jobject createAndAddTrigger(const jobject& obj) {
                
       const auto methodID = methodID_createAndAddTrigger();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_runSilently() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "tickAndContinue", "method_23643", "runSilently", "m_127777_"), "(J)V");
    }

    static void runSilently(const jobject& obj, const jlong& arg0) {
                
       const auto methodID = methodID_runSilently();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_runReported() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "tickAndFailIfNotComplete", "method_23644", "runReported", "m_127779_"), "(J)V");
    }

    static void runReported(const jobject& obj, const jlong& arg0) {
                
       const auto methodID = methodID_runReported();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_tryRun() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "executeWithoutFail", "method_36089", "tryRun", "m_177570_"), "(Ljava/lang/Runnable;)V");
    }

    static void tryRun(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_tryRun();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_runTasks() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "tick", "method_23645", "runTasks", "m_127781_"), "(J)V");
    }

    static void runTasks(const jobject& obj, const jlong& arg0) {
                
       const auto methodID = methodID_runTasks();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
};

#endif // NET_MINECRAFT_TEST_TIMEDTASKRUNNER_HPP