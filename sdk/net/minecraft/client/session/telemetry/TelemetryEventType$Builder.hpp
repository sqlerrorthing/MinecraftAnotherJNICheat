// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_CLIENT_SESSION_TELEMETRY_TELEMETRYEVENTTYPE$BUILDER_HPP
#define NET_MINECRAFT_CLIENT_SESSION_TELEMETRY_TELEMETRYEVENTTYPE$BUILDER_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.client.session.telemetry.TelemetryEventType$Builder
 * Remapped: gvo$a
 */
namespace TelemetryEventType$Builder {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("gvo$a", "net/minecraft/client/telemetry/TelemetryEventType$Builder", "net/minecraft/class_7966$class_7967", "net/minecraft/client/session/telemetry/TelemetryEventType$Builder", "net/minecraft/src/C_260408_$C_260396_"));
        }
        return cachedClass;
    };

    // getter for private field net.minecraft.client.session.telemetry.TelemetryEventType$Builder#id
    static jobject get_field_id(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "id", "field_41448", "id", "f_260469_"), "Ljava/lang/String;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.session.telemetry.TelemetryEventType$Builder#id
    static void set_field_id(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "id", "field_41448", "id", "f_260469_"), "Ljava/lang/String;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.session.telemetry.TelemetryEventType$Builder#exportKey
    static jobject get_field_exportKey(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "exportKey", "field_41449", "exportKey", "f_260516_"), "Ljava/lang/String;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.session.telemetry.TelemetryEventType$Builder#exportKey
    static void set_field_exportKey(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "exportKey", "field_41449", "exportKey", "f_260516_"), "Ljava/lang/String;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.session.telemetry.TelemetryEventType$Builder#properties
    static jobject get_field_properties(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "properties", "field_41450", "properties", "f_260674_"), "Ljava/util/List;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.session.telemetry.TelemetryEventType$Builder#properties
    static void set_field_properties(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "properties", "field_41450", "properties", "f_260674_"), "Ljava/util/List;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.session.telemetry.TelemetryEventType$Builder#optional
    static jboolean get_field_optional(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "isOptIn", "field_41451", "optional", "f_260544_"), "Z");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetBooleanField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.session.telemetry.TelemetryEventType$Builder#optional
    static void set_field_optional(const jobject &obj, const jboolean &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "isOptIn", "field_41451", "optional", "f_260544_"), "Z");
        return MinecraftSDK::env->SetBooleanField(obj, fieldID, value);
    };

    static jmethodID methodID__properties() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "defineAll", "method_47735", "properties", "m_261244_"), "(Ljava/util/List;)Lgvo$a;");
    }

    static jobject _properties(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID__properties();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID___properties() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "define", "method_47734", "properties", "m_261219_"), "(Lgvq;)Lgvo$a;");
    }

    static jobject __properties(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID___properties();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID__optional() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "optIn", "method_47733", "optional", "m_260803_"), "()Lgvo$a;");
    }

    static jobject _optional(const jobject& obj) {
                
       const auto methodID = methodID__optional();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_build() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "register", "method_47736", "build", "m_260878_"), "()Lgvo;");
    }

    static jobject build(const jobject& obj) {
                
       const auto methodID = methodID_build();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_CLIENT_SESSION_TELEMETRY_TELEMETRYEVENTTYPE$BUILDER_HPP