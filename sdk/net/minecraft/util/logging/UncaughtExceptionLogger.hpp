// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_UTIL_LOGGING_UNCAUGHTEXCEPTIONLOGGER_HPP
#define NET_MINECRAFT_UTIL_LOGGING_UNCAUGHTEXCEPTIONLOGGER_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.util.logging.UncaughtExceptionLogger
 * Remapped: r
 */
namespace UncaughtExceptionLogger {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("r", "net/minecraft/DefaultUncaughtExceptionHandler", "net/minecraft/class_140", "net/minecraft/util/logging/UncaughtExceptionLogger", "net/minecraft/src/C_5018_"));
        }
        return cachedClass;
    };

    // getter for private field net.minecraft.util.logging.UncaughtExceptionLogger#logger
    static jobject get_field_logger(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "logger", "field_1113", "logger", "f_131075_"), "Lorg/slf4j/Logger;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.util.logging.UncaughtExceptionLogger#logger
    static void set_field_logger(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "logger", "field_1113", "logger", "f_131075_"), "Lorg/slf4j/Logger;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID_uncaughtException() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("uncaughtException", "uncaughtException", "uncaughtException", "uncaughtException", "uncaughtException"), "(Ljava/lang/Thread;Ljava/lang/Throwable;)V");
    }

    static void uncaughtException(const jobject& obj, const jobject& arg0, const jobject& arg1) {
                
       const auto methodID = methodID_uncaughtException();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1);
    };
    
};

#endif // NET_MINECRAFT_UTIL_LOGGING_UNCAUGHTEXCEPTIONLOGGER_HPP