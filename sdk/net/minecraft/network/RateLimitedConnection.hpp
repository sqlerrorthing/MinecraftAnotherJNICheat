// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_NETWORK_RATELIMITEDCONNECTION_HPP
#define NET_MINECRAFT_NETWORK_RATELIMITEDCONNECTION_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.network.RateLimitedConnection
 * Remapped: wj
 */
namespace RateLimitedConnection {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("wj", "net/minecraft/network/RateKickingConnection", "net/minecraft/class_5472", "net/minecraft/network/RateLimitedConnection", "net/minecraft/src/C_4987_"));
        }
        return cachedClass;
    };

    // getter for static private field net.minecraft.network.RateLimitedConnection#LOGGER
    [[maybe_unused]] static jobject get_field_LOGGER() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("h", "LOGGER", "field_26342", "LOGGER", "f_130553_"), "Lorg/slf4j/Logger;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.network.RateLimitedConnection#LOGGER
    [[maybe_unused]] static void set_field_LOGGER(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("h", "LOGGER", "field_26342", "LOGGER", "f_130553_"), "Lorg/slf4j/Logger;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.network.RateLimitedConnection#RATE_LIMIT_EXCEEDED_MESSAGE
    [[maybe_unused]] static jobject get_field_RATE_LIMIT_EXCEEDED_MESSAGE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("i", "EXCEED_REASON", "field_26343", "RATE_LIMIT_EXCEEDED_MESSAGE", "f_130554_"), "Lwz;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.network.RateLimitedConnection#RATE_LIMIT_EXCEEDED_MESSAGE
    [[maybe_unused]] static void set_field_RATE_LIMIT_EXCEEDED_MESSAGE(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("i", "EXCEED_REASON", "field_26343", "RATE_LIMIT_EXCEEDED_MESSAGE", "f_130554_"), "Lwz;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for private field net.minecraft.network.RateLimitedConnection#rateLimit
    static jint get_field_rateLimit(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("j", "rateLimitPacketsPerSecond", "field_26344", "rateLimit", "f_130555_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetIntField(obj, fieldID);
    };

    // setter for static private field net.minecraft.network.RateLimitedConnection#rateLimit
    static void set_field_rateLimit(const jobject &obj, const jint &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("j", "rateLimitPacketsPerSecond", "field_26344", "rateLimit", "f_130555_"), "I");
        return MinecraftSDK::env->SetIntField(obj, fieldID, value);
    };

    static jmethodID methodID_updateStats() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "tickSecond", "method_30615", "updateStats", "m_7073_"), "()V");
    }

    static void updateStats(const jobject& obj) {
                
       const auto methodID = methodID_updateStats();
       MinecraftSDK::env->CallVoidMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_NETWORK_RATELIMITEDCONNECTION_HPP