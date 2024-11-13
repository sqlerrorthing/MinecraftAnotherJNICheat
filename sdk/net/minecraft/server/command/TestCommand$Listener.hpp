// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_SERVER_COMMAND_TESTCOMMAND$LISTENER_HPP
#define NET_MINECRAFT_SERVER_COMMAND_TESTCOMMAND$LISTENER_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.server.command.TestCommand$Listener
 * Remapped: tp$c
 */
namespace TestCommand$Listener {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("tp$c", "net/minecraft/gametest/framework/TestCommand$TestSummaryDisplayer", "net/minecraft/class_4527$class_4528", "net/minecraft/server/command/TestCommand$Listener", "net/minecraft/src/C_4902_$C_4903_"));
        }
        return cachedClass;
    };

    // getter for private field net.minecraft.server.command.TestCommand$Listener#world
    static jobject get_field_world(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "level", "comp_2216", "world", "f_128058_"), "Laqu;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.server.command.TestCommand$Listener#world
    static void set_field_world(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "level", "comp_2216", "world", "f_128058_"), "Laqu;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.server.command.TestCommand$Listener#tests
    static jobject get_field_tests(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "tracker", "comp_2217", "tests", "f_128059_"), "Lti;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.server.command.TestCommand$Listener#tests
    static void set_field_tests(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "tracker", "comp_2217", "tests", "f_128059_"), "Lti;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID_onStarted() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "testStructureLoaded", "method_22188", "onStarted", "m_8073_"), "(Lsx;)V");
    }

    static void onStarted(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_onStarted();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_onPassed() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "testPassed", "method_33317", "onPassed", "m_142378_"), "(Lsx;Lta;)V");
    }

    static void onPassed(const jobject& obj, const jobject& arg0, const jobject& arg1) {
                
       const auto methodID = methodID_onPassed();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_onFailed() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "testFailed", "method_22190", "onFailed", "m_8066_"), "(Lsx;Lta;)V");
    }

    static void onFailed(const jobject& obj, const jobject& arg0, const jobject& arg1) {
                
       const auto methodID = methodID_onFailed();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_onRetry() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "testAddedForRerun", "method_56216", "onRetry", "m_177684_"), "(Lsx;Lsx;Lta;)V");
    }

    static void onRetry(const jobject& obj, const jobject& arg0, const jobject& arg1, const jobject& arg2) {
                
       const auto methodID = methodID_onRetry();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1, arg2);
    };
    
    static jmethodID methodID_onFinished() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "showTestSummaryIfAllDone", "method_56304", "onFinished", "m_323141_"), "(Laqu;Lti;)V");
    }

    static void onFinished(const jobject& arg0, const jobject& arg1) {
       const auto clazz = self();
       const auto methodID = methodID_onFinished();
       MinecraftSDK::env->CallStaticVoidMethod(clazz, methodID, arg0, arg1);
    };
    
    static jmethodID methodID__world() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "level", "comp_2216", "world", "f_128058_"), "()Laqu;");
    }

    static jobject _world(const jobject& obj) {
                
       const auto methodID = methodID__world();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID__tests() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "tracker", "comp_2217", "tests", "f_128059_"), "()Lti;");
    }

    static jobject _tests(const jobject& obj) {
                
       const auto methodID = methodID__tests();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_SERVER_COMMAND_TESTCOMMAND$LISTENER_HPP