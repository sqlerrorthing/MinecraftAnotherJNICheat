// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_NETWORK_PACKET_STATUSPACKETS_HPP
#define NET_MINECRAFT_NETWORK_PACKET_STATUSPACKETS_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.network.packet.StatusPackets
 * Remapped: ajt
 */
namespace StatusPackets {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("ajt", "net/minecraft/network/protocol/status/StatusPacketTypes", "net/minecraft/class_9102", "net/minecraft/network/packet/StatusPackets", "net/minecraft/src/C_313729_"));
        }
        return cachedClass;
    };

    // getter for static public field net.minecraft.network.packet.StatusPackets#STATUS_RESPONSE
    [[maybe_unused]] static jobject get_field_STATUS_RESPONSE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "CLIENTBOUND_STATUS_RESPONSE", "field_48261", "STATUS_RESPONSE", "f_315020_"), "Lzi;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.network.packet.StatusPackets#STATUS_RESPONSE
    [[maybe_unused]] static void set_field_STATUS_RESPONSE(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "CLIENTBOUND_STATUS_RESPONSE", "field_48261", "STATUS_RESPONSE", "f_315020_"), "Lzi;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.network.packet.StatusPackets#STATUS_REQUEST
    [[maybe_unused]] static jobject get_field_STATUS_REQUEST() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "SERVERBOUND_STATUS_REQUEST", "field_48262", "STATUS_REQUEST", "f_316223_"), "Lzi;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.network.packet.StatusPackets#STATUS_REQUEST
    [[maybe_unused]] static void set_field_STATUS_REQUEST(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "SERVERBOUND_STATUS_REQUEST", "field_48262", "STATUS_REQUEST", "f_316223_"), "Lzi;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    static jmethodID methodID_s2c() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "createClientbound", "method_56027", "s2c", "m_321129_"), "(Ljava/lang/String;)Lzi;");
    }

    static jobject s2c(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_s2c();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_c2s() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("b", "createServerbound", "method_56028", "c2s", "m_324075_"), "(Ljava/lang/String;)Lzi;");
    }

    static jobject c2s(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_c2s();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0);
    };
    
};

#endif // NET_MINECRAFT_NETWORK_PACKET_STATUSPACKETS_HPP