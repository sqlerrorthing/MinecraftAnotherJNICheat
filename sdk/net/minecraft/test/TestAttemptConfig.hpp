// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_TEST_TESTATTEMPTCONFIG_HPP
#define NET_MINECRAFT_TEST_TESTATTEMPTCONFIG_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.test.TestAttemptConfig
 * Remapped: tk
 */
namespace TestAttemptConfig {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("tk", "net/minecraft/gametest/framework/RetryOptions", "net/minecraft/class_9118", "net/minecraft/test/TestAttemptConfig", "net/minecraft/src/C_313404_"));
        }
        return cachedClass;
    };

    // getter for private field net.minecraft.test.TestAttemptConfig#numberOfTries
    static jint get_field_numberOfTries(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "numberOfTries", "comp_2213", "numberOfTries", "f_316969_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetIntField(obj, fieldID);
    };

    // setter for static private field net.minecraft.test.TestAttemptConfig#numberOfTries
    static void set_field_numberOfTries(const jobject &obj, const jint &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "numberOfTries", "comp_2213", "numberOfTries", "f_316969_"), "I");
        return MinecraftSDK::env->SetIntField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.test.TestAttemptConfig#haltOnFailure
    static jboolean get_field_haltOnFailure(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "haltOnFailure", "comp_2214", "haltOnFailure", "f_316596_"), "Z");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetBooleanField(obj, fieldID);
    };

    // setter for static private field net.minecraft.test.TestAttemptConfig#haltOnFailure
    static void set_field_haltOnFailure(const jobject &obj, const jboolean &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "haltOnFailure", "comp_2214", "haltOnFailure", "f_316596_"), "Z");
        return MinecraftSDK::env->SetBooleanField(obj, fieldID, value);
    };

    // getter for static private field net.minecraft.test.TestAttemptConfig#ONCE
    [[maybe_unused]] static jobject get_field_ONCE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "NO_RETRIES", "field_48496", "ONCE", "f_316318_"), "Ltk;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.test.TestAttemptConfig#ONCE
    [[maybe_unused]] static void set_field_ONCE(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "NO_RETRIES", "field_48496", "ONCE", "f_316318_"), "Ltk;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    static jmethodID methodID_once() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "noRetries", "method_56245", "once", "m_321305_"), "()Ltk;");
    }

    static jobject once() {
       const auto clazz = self();
       const auto methodID = methodID_once();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID);
    };
    
    static jmethodID methodID_isDisabled() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "unlimitedTries", "method_56247", "isDisabled", "m_319667_"), "()Z");
    }

    static jboolean isDisabled(const jobject& obj) {
                
       const auto methodID = methodID_isDisabled();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID);
    };
    
    static jmethodID methodID_shouldTestAgain() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "hasTriesLeft", "method_56246", "shouldTestAgain", "m_320775_"), "(II)Z");
    }

    static jboolean shouldTestAgain(const jobject& obj, const jint& arg0, const jint& arg1) {
                
       const auto methodID = methodID_shouldTestAgain();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_needsMultipleAttempts() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "hasRetries", "method_56248", "needsMultipleAttempts", "m_319078_"), "()Z");
    }

    static jboolean needsMultipleAttempts(const jobject& obj) {
                
       const auto methodID = methodID_needsMultipleAttempts();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID);
    };
    
    static jmethodID methodID__numberOfTries() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("d", "numberOfTries", "comp_2213", "numberOfTries", "f_316969_"), "()I");
    }

    static jint _numberOfTries(const jobject& obj) {
                
       const auto methodID = methodID__numberOfTries();
       return MinecraftSDK::env->CallIntMethod(obj, methodID);
    };
    
    static jmethodID methodID__haltOnFailure() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("e", "haltOnFailure", "comp_2214", "haltOnFailure", "f_316596_"), "()Z");
    }

    static jboolean _haltOnFailure(const jobject& obj) {
                
       const auto methodID = methodID__haltOnFailure();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_TEST_TESTATTEMPTCONFIG_HPP