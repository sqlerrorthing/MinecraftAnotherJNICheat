// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_CLIENT_SESSION_TELEMETRY_TELEMETRYEVENTPROPERTY$PROPERTYEXPORTER_HPP
#define NET_MINECRAFT_CLIENT_SESSION_TELEMETRY_TELEMETRYEVENTPROPERTY$PROPERTYEXPORTER_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.client.session.telemetry.TelemetryEventProperty$PropertyExporter
 * Remapped: gvq$a
 */
namespace TelemetryEventProperty$PropertyExporter {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("gvq$a", "net/minecraft/client/telemetry/TelemetryProperty$Exporter", "net/minecraft/class_7969$class_7970", "net/minecraft/client/session/telemetry/TelemetryEventProperty$PropertyExporter", "net/minecraft/src/C_260411_$C_260387_"));
        }
        return cachedClass;
    };

    static jmethodID methodID_apply() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("apply", "apply", "apply", "apply", "m_261109_"), "(Lcom/mojang/authlib/minecraft/TelemetryPropertyContainer;Ljava/lang/String;Ljava/lang/Object;)V");
    }

    static void apply(const jobject& obj, const jobject& arg0, const jobject& arg1, const jobject& arg2) {
                
       const auto methodID = methodID_apply();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1, arg2);
    };
    
};

#endif // NET_MINECRAFT_CLIENT_SESSION_TELEMETRY_TELEMETRYEVENTPROPERTY$PROPERTYEXPORTER_HPP