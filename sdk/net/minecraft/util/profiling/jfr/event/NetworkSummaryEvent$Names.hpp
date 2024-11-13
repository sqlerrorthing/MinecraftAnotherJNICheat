// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_UTIL_PROFILING_JFR_EVENT_NETWORKSUMMARYEVENT$NAMES_HPP
#define NET_MINECRAFT_UTIL_PROFILING_JFR_EVENT_NETWORKSUMMARYEVENT$NAMES_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.util.profiling.jfr.event.NetworkSummaryEvent$Names
 * Remapped: net/minecraft/util/profiling/jfr/event/NetworkSummaryEvent$a
 */
namespace NetworkSummaryEvent$Names {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("net/minecraft/util/profiling/jfr/event/NetworkSummaryEvent$a", "net/minecraft/util/profiling/jfr/event/NetworkSummaryEvent$Fields", "net/minecraft/util/profiling/jfr/event/NetworkSummaryEvent$class_6778", "net/minecraft/util/profiling/jfr/event/NetworkSummaryEvent$Names", "net/minecraft/util/profiling/jfr/event/NetworkSummaryEvent$C_183110_"));
        }
        return cachedClass;
    };

    // getter for static public field net.minecraft.util.profiling.jfr.event.NetworkSummaryEvent$Names#REMOTE_ADDRESS
    [[maybe_unused]] static jobject get_field_REMOTE_ADDRESS() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "REMOTE_ADDRESS", "field_35642", "REMOTE_ADDRESS", "f_195563_"), "Ljava/lang/String;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.util.profiling.jfr.event.NetworkSummaryEvent$Names#REMOTE_ADDRESS
    [[maybe_unused]] static void set_field_REMOTE_ADDRESS(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "REMOTE_ADDRESS", "field_35642", "REMOTE_ADDRESS", "f_195563_"), "Ljava/lang/String;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.util.profiling.jfr.event.NetworkSummaryEvent$Names#SENT_BYTES
    [[maybe_unused]] static jobject get_field_SENT_BYTES() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "SENT_BYTES", "field_35643", "SENT_BYTES", "f_195564_"), "Ljava/lang/String;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.util.profiling.jfr.event.NetworkSummaryEvent$Names#SENT_BYTES
    [[maybe_unused]] static void set_field_SENT_BYTES(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "SENT_BYTES", "field_35643", "SENT_BYTES", "f_195564_"), "Ljava/lang/String;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.util.profiling.jfr.event.NetworkSummaryEvent$Names#SENT_PACKETS
    [[maybe_unused]] static jobject get_field_SENT_PACKETS() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("d", "SENT_PACKETS", "field_35645", "SENT_PACKETS", "f_195566_"), "Ljava/lang/String;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.util.profiling.jfr.event.NetworkSummaryEvent$Names#SENT_PACKETS
    [[maybe_unused]] static void set_field_SENT_PACKETS(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("d", "SENT_PACKETS", "field_35645", "SENT_PACKETS", "f_195566_"), "Ljava/lang/String;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.util.profiling.jfr.event.NetworkSummaryEvent$Names#RECEIVED_BYTES
    [[maybe_unused]] static jobject get_field_RECEIVED_BYTES() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "RECEIVED_BYTES", "field_35644", "RECEIVED_BYTES", "f_195565_"), "Ljava/lang/String;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.util.profiling.jfr.event.NetworkSummaryEvent$Names#RECEIVED_BYTES
    [[maybe_unused]] static void set_field_RECEIVED_BYTES(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "RECEIVED_BYTES", "field_35644", "RECEIVED_BYTES", "f_195565_"), "Ljava/lang/String;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.util.profiling.jfr.event.NetworkSummaryEvent$Names#RECEIVED_PACKETS
    [[maybe_unused]] static jobject get_field_RECEIVED_PACKETS() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("e", "RECEIVED_PACKETS", "field_35646", "RECEIVED_PACKETS", "f_195567_"), "Ljava/lang/String;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.util.profiling.jfr.event.NetworkSummaryEvent$Names#RECEIVED_PACKETS
    [[maybe_unused]] static void set_field_RECEIVED_PACKETS(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("e", "RECEIVED_PACKETS", "field_35646", "RECEIVED_PACKETS", "f_195567_"), "Ljava/lang/String;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

};

#endif // NET_MINECRAFT_UTIL_PROFILING_JFR_EVENT_NETWORKSUMMARYEVENT$NAMES_HPP