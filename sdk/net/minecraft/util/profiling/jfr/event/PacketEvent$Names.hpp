// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_UTIL_PROFILING_JFR_EVENT_PACKETEVENT$NAMES_HPP
#define NET_MINECRAFT_UTIL_PROFILING_JFR_EVENT_PACKETEVENT$NAMES_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.util.profiling.jfr.event.PacketEvent$Names
 * Remapped: bnr$a
 */
namespace PacketEvent$Names {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("bnr$a", "net/minecraft/util/profiling/jfr/event/PacketEvent$Fields", "net/minecraft/class_6509$class_6510", "net/minecraft/util/profiling/jfr/event/PacketEvent$Names", "net/minecraft/src/C_182814_$C_182815_"));
        }
        return cachedClass;
    };

    // getter for static public field net.minecraft.util.profiling.jfr.event.PacketEvent$Names#REMOTE_ADDRESS
    [[maybe_unused]] static jobject get_field_REMOTE_ADDRESS() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "REMOTE_ADDRESS", "field_34419", "REMOTE_ADDRESS", "f_185423_"), "Ljava/lang/String;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.util.profiling.jfr.event.PacketEvent$Names#REMOTE_ADDRESS
    [[maybe_unused]] static void set_field_REMOTE_ADDRESS(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "REMOTE_ADDRESS", "field_34419", "REMOTE_ADDRESS", "f_185423_"), "Ljava/lang/String;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.util.profiling.jfr.event.PacketEvent$Names#PROTOCOL_ID
    [[maybe_unused]] static jobject get_field_PROTOCOL_ID() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "PROTOCOL_ID", "field_35579", "PROTOCOL_ID", "f_185424_"), "Ljava/lang/String;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.util.profiling.jfr.event.PacketEvent$Names#PROTOCOL_ID
    [[maybe_unused]] static void set_field_PROTOCOL_ID(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "PROTOCOL_ID", "field_35579", "PROTOCOL_ID", "f_185424_"), "Ljava/lang/String;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.util.profiling.jfr.event.PacketEvent$Names#PACKET_DIRECTION
    [[maybe_unused]] static jobject get_field_PACKET_DIRECTION() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "PACKET_DIRECTION", "field_48318", "PACKET_DIRECTION", "f_315933_"), "Ljava/lang/String;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.util.profiling.jfr.event.PacketEvent$Names#PACKET_DIRECTION
    [[maybe_unused]] static void set_field_PACKET_DIRECTION(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "PACKET_DIRECTION", "field_48318", "PACKET_DIRECTION", "f_315933_"), "Ljava/lang/String;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.util.profiling.jfr.event.PacketEvent$Names#PACKET_ID
    [[maybe_unused]] static jobject get_field_PACKET_ID() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("d", "PACKET_ID", "field_35580", "PACKET_ID", "f_185425_"), "Ljava/lang/String;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.util.profiling.jfr.event.PacketEvent$Names#PACKET_ID
    [[maybe_unused]] static void set_field_PACKET_ID(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("d", "PACKET_ID", "field_35580", "PACKET_ID", "f_185425_"), "Ljava/lang/String;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.util.profiling.jfr.event.PacketEvent$Names#BYTES
    [[maybe_unused]] static jobject get_field_BYTES() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("e", "BYTES", "field_34421", "BYTES", "f_185426_"), "Ljava/lang/String;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.util.profiling.jfr.event.PacketEvent$Names#BYTES
    [[maybe_unused]] static void set_field_BYTES(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("e", "BYTES", "field_34421", "BYTES", "f_185426_"), "Ljava/lang/String;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

};

#endif // NET_MINECRAFT_UTIL_PROFILING_JFR_EVENT_PACKETEVENT$NAMES_HPP