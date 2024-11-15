// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_CLIENT_SESSION_TELEMETRY_WORLDLOADTIMESEVENT_HPP
#define NET_MINECRAFT_CLIENT_SESSION_TELEMETRY_WORLDLOADTIMESEVENT_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.client.session.telemetry.WorldLoadTimesEvent
 * Remapped: gvx
 */
namespace WorldLoadTimesEvent {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("gvx", "net/minecraft/client/telemetry/events/WorldLoadTimesEvent", "net/minecraft/class_7981", "net/minecraft/client/session/telemetry/WorldLoadTimesEvent", "net/minecraft/src/C_260403_"));
        }
        return cachedClass;
    };

    // getter for private field net.minecraft.client.session.telemetry.WorldLoadTimesEvent#newWorld
    static jboolean get_field_newWorld(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "newWorld", "field_41519", "newWorld", "f_260580_"), "Z");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetBooleanField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.session.telemetry.WorldLoadTimesEvent#newWorld
    static void set_field_newWorld(const jobject &obj, const jboolean &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "newWorld", "field_41519", "newWorld", "f_260580_"), "Z");
        return MinecraftSDK::env->SetBooleanField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.session.telemetry.WorldLoadTimesEvent#worldLoadTime
    static jobject get_field_worldLoadTime(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "worldLoadDuration", "field_41520", "worldLoadTime", "f_260669_"), "Ljava/time/Duration;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.session.telemetry.WorldLoadTimesEvent#worldLoadTime
    static void set_field_worldLoadTime(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "worldLoadDuration", "field_41520", "worldLoadTime", "f_260669_"), "Ljava/time/Duration;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID_send() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "send", "method_47981", "send", "m_261125_"), "(Lgvn;)V");
    }

    static void send(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_send();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
};

#endif // NET_MINECRAFT_CLIENT_SESSION_TELEMETRY_WORLDLOADTIMESEVENT_HPP