// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_NETWORK_PACKET_LOGINPACKETS_HPP
#define NET_MINECRAFT_NETWORK_PACKET_LOGINPACKETS_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.network.packet.LoginPackets
 * Remapped: aiu
 */
namespace LoginPackets {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("aiu", "net/minecraft/network/protocol/login/LoginPacketTypes", "net/minecraft/class_9098", "net/minecraft/network/packet/LoginPackets", "net/minecraft/src/C_313457_"));
        }
        return cachedClass;
    };

    // getter for static public field net.minecraft.network.packet.LoginPackets#CUSTOM_QUERY
    [[maybe_unused]] static jobject get_field_CUSTOM_QUERY() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "CLIENTBOUND_CUSTOM_QUERY", "field_48238", "CUSTOM_QUERY", "f_315838_"), "Lzi;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.network.packet.LoginPackets#CUSTOM_QUERY
    [[maybe_unused]] static void set_field_CUSTOM_QUERY(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "CLIENTBOUND_CUSTOM_QUERY", "field_48238", "CUSTOM_QUERY", "f_315838_"), "Lzi;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.network.packet.LoginPackets#GAME_PROFILE
    [[maybe_unused]] static jobject get_field_GAME_PROFILE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "CLIENTBOUND_GAME_PROFILE", "field_48239", "GAME_PROFILE", "f_314987_"), "Lzi;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.network.packet.LoginPackets#GAME_PROFILE
    [[maybe_unused]] static void set_field_GAME_PROFILE(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "CLIENTBOUND_GAME_PROFILE", "field_48239", "GAME_PROFILE", "f_314987_"), "Lzi;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.network.packet.LoginPackets#HELLO_S2C
    [[maybe_unused]] static jobject get_field_HELLO_S2C() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "CLIENTBOUND_HELLO", "field_48240", "HELLO_S2C", "f_314646_"), "Lzi;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.network.packet.LoginPackets#HELLO_S2C
    [[maybe_unused]] static void set_field_HELLO_S2C(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "CLIENTBOUND_HELLO", "field_48240", "HELLO_S2C", "f_314646_"), "Lzi;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.network.packet.LoginPackets#LOGIN_COMPRESSION
    [[maybe_unused]] static jobject get_field_LOGIN_COMPRESSION() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("d", "CLIENTBOUND_LOGIN_COMPRESSION", "field_48241", "LOGIN_COMPRESSION", "f_315271_"), "Lzi;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.network.packet.LoginPackets#LOGIN_COMPRESSION
    [[maybe_unused]] static void set_field_LOGIN_COMPRESSION(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("d", "CLIENTBOUND_LOGIN_COMPRESSION", "field_48241", "LOGIN_COMPRESSION", "f_315271_"), "Lzi;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.network.packet.LoginPackets#LOGIN_DISCONNECT
    [[maybe_unused]] static jobject get_field_LOGIN_DISCONNECT() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("e", "CLIENTBOUND_LOGIN_DISCONNECT", "field_48242", "LOGIN_DISCONNECT", "f_314916_"), "Lzi;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.network.packet.LoginPackets#LOGIN_DISCONNECT
    [[maybe_unused]] static void set_field_LOGIN_DISCONNECT(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("e", "CLIENTBOUND_LOGIN_DISCONNECT", "field_48242", "LOGIN_DISCONNECT", "f_314916_"), "Lzi;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.network.packet.LoginPackets#CUSTOM_QUERY_ANSWER
    [[maybe_unused]] static jobject get_field_CUSTOM_QUERY_ANSWER() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("f", "SERVERBOUND_CUSTOM_QUERY_ANSWER", "field_48243", "CUSTOM_QUERY_ANSWER", "f_316432_"), "Lzi;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.network.packet.LoginPackets#CUSTOM_QUERY_ANSWER
    [[maybe_unused]] static void set_field_CUSTOM_QUERY_ANSWER(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("f", "SERVERBOUND_CUSTOM_QUERY_ANSWER", "field_48243", "CUSTOM_QUERY_ANSWER", "f_316432_"), "Lzi;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.network.packet.LoginPackets#HELLO_C2S
    [[maybe_unused]] static jobject get_field_HELLO_C2S() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("g", "SERVERBOUND_HELLO", "field_48244", "HELLO_C2S", "f_315312_"), "Lzi;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.network.packet.LoginPackets#HELLO_C2S
    [[maybe_unused]] static void set_field_HELLO_C2S(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("g", "SERVERBOUND_HELLO", "field_48244", "HELLO_C2S", "f_315312_"), "Lzi;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.network.packet.LoginPackets#KEY
    [[maybe_unused]] static jobject get_field_KEY() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("h", "SERVERBOUND_KEY", "field_48245", "KEY", "f_314023_"), "Lzi;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.network.packet.LoginPackets#KEY
    [[maybe_unused]] static void set_field_KEY(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("h", "SERVERBOUND_KEY", "field_48245", "KEY", "f_314023_"), "Lzi;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.network.packet.LoginPackets#LOGIN_ACKNOWLEDGED
    [[maybe_unused]] static jobject get_field_LOGIN_ACKNOWLEDGED() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("i", "SERVERBOUND_LOGIN_ACKNOWLEDGED", "field_48246", "LOGIN_ACKNOWLEDGED", "f_314277_"), "Lzi;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.network.packet.LoginPackets#LOGIN_ACKNOWLEDGED
    [[maybe_unused]] static void set_field_LOGIN_ACKNOWLEDGED(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("i", "SERVERBOUND_LOGIN_ACKNOWLEDGED", "field_48246", "LOGIN_ACKNOWLEDGED", "f_314277_"), "Lzi;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    static jmethodID methodID_s2c() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "createClientbound", "method_56016", "s2c", "m_323487_"), "(Ljava/lang/String;)Lzi;");
    }

    static jobject s2c(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_s2c();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_c2s() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("b", "createServerbound", "method_56017", "c2s", "m_319378_"), "(Ljava/lang/String;)Lzi;");
    }

    static jobject c2s(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_c2s();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0);
    };
    
};

#endif // NET_MINECRAFT_NETWORK_PACKET_LOGINPACKETS_HPP