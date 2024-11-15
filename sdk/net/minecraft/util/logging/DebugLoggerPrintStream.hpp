// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_UTIL_LOGGING_DEBUGLOGGERPRINTSTREAM_HPP
#define NET_MINECRAFT_UTIL_LOGGING_DEBUGLOGGERPRINTSTREAM_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.util.logging.DebugLoggerPrintStream
 * Remapped: akw
 */
namespace DebugLoggerPrintStream {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("akw", "net/minecraft/server/DebugLoggedPrintStream", "net/minecraft/class_2980", "net/minecraft/util/logging/DebugLoggerPrintStream", "net/minecraft/src/C_5273_"));
        }
        return cachedClass;
    };

    // getter for static private field net.minecraft.util.logging.DebugLoggerPrintStream#LOGGER
    [[maybe_unused]] static jobject get_field_LOGGER() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "LOGGER", "field_36382", "LOGGER", "f_202580_"), "Lorg/slf4j/Logger;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.util.logging.DebugLoggerPrintStream#LOGGER
    [[maybe_unused]] static void set_field_LOGGER(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "LOGGER", "field_36382", "LOGGER", "f_202580_"), "Lorg/slf4j/Logger;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    static jmethodID methodID_log() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "logLine", "method_12870", "log", "m_6812_"), "(Ljava/lang/String;)V");
    }

    static void log(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_log();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
};

#endif // NET_MINECRAFT_UTIL_LOGGING_DEBUGLOGGERPRINTSTREAM_HPP