// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_CLIENT_SESSION_TELEMETRY_TELEMETRYEVENTPROPERTY$GAMEMODE_HPP
#define NET_MINECRAFT_CLIENT_SESSION_TELEMETRY_TELEMETRYEVENTPROPERTY$GAMEMODE_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.client.session.telemetry.TelemetryEventProperty$GameMode
 * Remapped: gvq$b
 */
namespace TelemetryEventProperty$GameMode {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("gvq$b", "net/minecraft/client/telemetry/TelemetryProperty$GameMode", "net/minecraft/class_7969$class_7971", "net/minecraft/client/session/telemetry/TelemetryEventProperty$GameMode", "net/minecraft/src/C_260411_$C_260378_"));
        }
        return cachedClass;
    };

    // getter for static public field net.minecraft.client.session.telemetry.TelemetryEventProperty$GameMode#SURVIVAL
    [[maybe_unused]] static jobject get_field_SURVIVAL() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "SURVIVAL", "field_41481", "SURVIVAL", "SURVIVAL"), "Lgvq$b;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.client.session.telemetry.TelemetryEventProperty$GameMode#SURVIVAL
    [[maybe_unused]] static void set_field_SURVIVAL(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "SURVIVAL", "field_41481", "SURVIVAL", "SURVIVAL"), "Lgvq$b;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.client.session.telemetry.TelemetryEventProperty$GameMode#CREATIVE
    [[maybe_unused]] static jobject get_field_CREATIVE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "CREATIVE", "field_41482", "CREATIVE", "CREATIVE"), "Lgvq$b;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.client.session.telemetry.TelemetryEventProperty$GameMode#CREATIVE
    [[maybe_unused]] static void set_field_CREATIVE(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "CREATIVE", "field_41482", "CREATIVE", "CREATIVE"), "Lgvq$b;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.client.session.telemetry.TelemetryEventProperty$GameMode#ADVENTURE
    [[maybe_unused]] static jobject get_field_ADVENTURE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "ADVENTURE", "field_41483", "ADVENTURE", "ADVENTURE"), "Lgvq$b;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.client.session.telemetry.TelemetryEventProperty$GameMode#ADVENTURE
    [[maybe_unused]] static void set_field_ADVENTURE(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "ADVENTURE", "field_41483", "ADVENTURE", "ADVENTURE"), "Lgvq$b;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.client.session.telemetry.TelemetryEventProperty$GameMode#SPECTATOR
    [[maybe_unused]] static jobject get_field_SPECTATOR() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("d", "SPECTATOR", "field_41484", "SPECTATOR", "SPECTATOR"), "Lgvq$b;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.client.session.telemetry.TelemetryEventProperty$GameMode#SPECTATOR
    [[maybe_unused]] static void set_field_SPECTATOR(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("d", "SPECTATOR", "field_41484", "SPECTATOR", "SPECTATOR"), "Lgvq$b;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.client.session.telemetry.TelemetryEventProperty$GameMode#HARDCORE
    [[maybe_unused]] static jobject get_field_HARDCORE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("e", "HARDCORE", "field_41485", "HARDCORE", "HARDCORE"), "Lgvq$b;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.client.session.telemetry.TelemetryEventProperty$GameMode#HARDCORE
    [[maybe_unused]] static void set_field_HARDCORE(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("e", "HARDCORE", "field_41485", "HARDCORE", "HARDCORE"), "Lgvq$b;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.client.session.telemetry.TelemetryEventProperty$GameMode#CODEC
    [[maybe_unused]] static jobject get_field_CODEC() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("f", "CODEC", "field_41486", "CODEC", "f_260532_"), "Lcom/mojang/serialization/Codec;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.client.session.telemetry.TelemetryEventProperty$GameMode#CODEC
    [[maybe_unused]] static void set_field_CODEC(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("f", "CODEC", "field_41486", "CODEC", "f_260532_"), "Lcom/mojang/serialization/Codec;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for private field net.minecraft.client.session.telemetry.TelemetryEventProperty$GameMode#id
    static jobject get_field_id(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("g", "key", "field_41487", "id", "f_260535_"), "Ljava/lang/String;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.session.telemetry.TelemetryEventProperty$GameMode#id
    static void set_field_id(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("g", "key", "field_41487", "id", "f_260535_"), "Ljava/lang/String;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.session.telemetry.TelemetryEventProperty$GameMode#rawId
    static jint get_field_rawId(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("h", "id", "field_41488", "rawId", "f_260720_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetIntField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.session.telemetry.TelemetryEventProperty$GameMode#rawId
    static void set_field_rawId(const jobject &obj, const jint &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("h", "id", "field_41488", "rawId", "f_260720_"), "I");
        return MinecraftSDK::env->SetIntField(obj, fieldID, value);
    };

    static jmethodID methodID_values() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("values", "values", "values", "values", "values"), "()[Lgvq$b;");
    }

    static jobject values() {
       const auto clazz = self();
       const auto methodID = methodID_values();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID);
    };
    
    static jmethodID methodID_valueOf() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("valueOf", "valueOf", "valueOf", "valueOf", "valueOf"), "(Ljava/lang/String;)Lgvq$b;");
    }

    static jobject valueOf(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_valueOf();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_getRawId() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "id", "method_47756", "getRawId", "m_261006_"), "()I");
    }

    static jint getRawId(const jobject& obj) {
                
       const auto methodID = methodID_getRawId();
       return MinecraftSDK::env->CallIntMethod(obj, methodID);
    };
    
    static jmethodID methodID_asString() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "getSerializedName", "method_15434", "asString", "m_7912_"), "()Ljava/lang/String;");
    }

    static jobject asString(const jobject& obj) {
                
       const auto methodID = methodID_asString();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_CLIENT_SESSION_TELEMETRY_TELEMETRYEVENTPROPERTY$GAMEMODE_HPP