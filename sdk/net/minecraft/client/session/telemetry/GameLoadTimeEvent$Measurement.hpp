// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_CLIENT_SESSION_TELEMETRY_GAMELOADTIMEEVENT$MEASUREMENT_HPP
#define NET_MINECRAFT_CLIENT_SESSION_TELEMETRY_GAMELOADTIMEEVENT$MEASUREMENT_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.client.session.telemetry.GameLoadTimeEvent$Measurement
 * Remapped: gvu$a
 */
namespace GameLoadTimeEvent$Measurement {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("gvu$a", "net/minecraft/client/telemetry/events/GameLoadTimesEvent$Measurement", "net/minecraft/class_8561$class_8562", "net/minecraft/client/session/telemetry/GameLoadTimeEvent$Measurement", "net/minecraft/src/C_285545_$C_285531_"));
        }
        return cachedClass;
    };

    // getter for private field net.minecraft.client.session.telemetry.GameLoadTimeEvent$Measurement#millis
    static jint get_field_millis(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "millis", "comp_1531", "millis", "f_285578_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetIntField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.session.telemetry.GameLoadTimeEvent$Measurement#millis
    static void set_field_millis(const jobject &obj, const jint &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "millis", "comp_1531", "millis", "f_285578_"), "I");
        return MinecraftSDK::env->SetIntField(obj, fieldID, value);
    };

    // getter for static public field net.minecraft.client.session.telemetry.GameLoadTimeEvent$Measurement#CODEC
    [[maybe_unused]] static jobject get_field_CODEC() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "CODEC", "field_44847", "CODEC", "f_285618_"), "Lcom/mojang/serialization/Codec;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.client.session.telemetry.GameLoadTimeEvent$Measurement#CODEC
    [[maybe_unused]] static void set_field_CODEC(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "CODEC", "field_44847", "CODEC", "f_285618_"), "Lcom/mojang/serialization/Codec;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    static jmethodID methodID__millis() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "millis", "comp_1531", "millis", "f_285578_"), "()I");
    }

    static jint _millis(const jobject& obj) {
                
       const auto methodID = methodID__millis();
       return MinecraftSDK::env->CallIntMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_CLIENT_SESSION_TELEMETRY_GAMELOADTIMEEVENT$MEASUREMENT_HPP