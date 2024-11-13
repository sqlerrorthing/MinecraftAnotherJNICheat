// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_CLIENT_UTIL_BACKOFF$2_HPP
#define NET_MINECRAFT_CLIENT_UTIL_BACKOFF$2_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.client.util.Backoff$2
 * Remapped: few$2
 */
namespace Backoff$2 {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("few$2", "com/mojang/realmsclient/gui/task/RepeatedDelayStrategy$2", "net/minecraft/class_7587$2", "net/minecraft/client/util/Backoff$2", "net/minecraft/src/C_238449_$C_238471_"));
        }
        return cachedClass;
    };

    // getter for static private field net.minecraft.client.util.Backoff$2#LOGGER
    [[maybe_unused]] static jobject get_field_LOGGER() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "LOGGER", "field_39716", "LOGGER", "f_238635_"), "Lorg/slf4j/Logger;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.util.Backoff$2#LOGGER
    [[maybe_unused]] static void set_field_LOGGER(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "LOGGER", "field_39716", "LOGGER", "f_238635_"), "Lorg/slf4j/Logger;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for private field net.minecraft.client.util.Backoff$2#failureCount
    static jint get_field_failureCount(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "failureCount", "field_39717", "failureCount", "f_238730_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetIntField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.util.Backoff$2#failureCount
    static void set_field_failureCount(const jobject &obj, const jint &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "failureCount", "field_39717", "failureCount", "f_238730_"), "I");
        return MinecraftSDK::env->SetIntField(obj, fieldID, value);
    };

    static jmethodID methodID_success() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "delayCyclesAfterSuccess", "method_44643", "success", "m_239029_"), "()J");
    }

    static jlong success(const jobject& obj) {
                
       const auto methodID = methodID_success();
       return MinecraftSDK::env->CallLongMethod(obj, methodID);
    };
    
    static jmethodID methodID_fail() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "delayCyclesAfterFailure", "method_44645", "fail", "m_239153_"), "()J");
    }

    static jlong fail(const jobject& obj) {
                
       const auto methodID = methodID_fail();
       return MinecraftSDK::env->CallLongMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_CLIENT_UTIL_BACKOFF$2_HPP