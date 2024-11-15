// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_NETWORK_PACKET_S2C_PLAY_BOSSBARS2CPACKET$TYPE_HPP
#define NET_MINECRAFT_NETWORK_PACKET_S2C_PLAY_BOSSBARS2CPACKET$TYPE_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.network.packet.s2c.play.BossBarS2CPacket$Type
 * Remapped: ace$d
 */
namespace BossBarS2CPacket$Type {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("ace$d", "net/minecraft/network/protocol/game/ClientboundBossEventPacket$OperationType", "net/minecraft/class_2629$class_5883", "net/minecraft/network/packet/s2c/play/BossBarS2CPacket$Type", "net/minecraft/src/C_5044_$C_141846_"));
        }
        return cachedClass;
    };

    // getter for static public field net.minecraft.network.packet.s2c.play.BossBarS2CPacket$Type#ADD
    [[maybe_unused]] static jobject get_field_ADD() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "ADD", "field_29107", "ADD", "ADD"), "Lace$d;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.network.packet.s2c.play.BossBarS2CPacket$Type#ADD
    [[maybe_unused]] static void set_field_ADD(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "ADD", "field_29107", "ADD", "ADD"), "Lace$d;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.network.packet.s2c.play.BossBarS2CPacket$Type#REMOVE
    [[maybe_unused]] static jobject get_field_REMOVE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "REMOVE", "field_29108", "REMOVE", "REMOVE"), "Lace$d;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.network.packet.s2c.play.BossBarS2CPacket$Type#REMOVE
    [[maybe_unused]] static void set_field_REMOVE(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "REMOVE", "field_29108", "REMOVE", "REMOVE"), "Lace$d;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.network.packet.s2c.play.BossBarS2CPacket$Type#UPDATE_PROGRESS
    [[maybe_unused]] static jobject get_field_UPDATE_PROGRESS() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "UPDATE_PROGRESS", "field_29109", "UPDATE_PROGRESS", "UPDATE_PROGRESS"), "Lace$d;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.network.packet.s2c.play.BossBarS2CPacket$Type#UPDATE_PROGRESS
    [[maybe_unused]] static void set_field_UPDATE_PROGRESS(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "UPDATE_PROGRESS", "field_29109", "UPDATE_PROGRESS", "UPDATE_PROGRESS"), "Lace$d;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.network.packet.s2c.play.BossBarS2CPacket$Type#UPDATE_NAME
    [[maybe_unused]] static jobject get_field_UPDATE_NAME() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("d", "UPDATE_NAME", "field_29110", "UPDATE_NAME", "UPDATE_NAME"), "Lace$d;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.network.packet.s2c.play.BossBarS2CPacket$Type#UPDATE_NAME
    [[maybe_unused]] static void set_field_UPDATE_NAME(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("d", "UPDATE_NAME", "field_29110", "UPDATE_NAME", "UPDATE_NAME"), "Lace$d;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.network.packet.s2c.play.BossBarS2CPacket$Type#UPDATE_STYLE
    [[maybe_unused]] static jobject get_field_UPDATE_STYLE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("e", "UPDATE_STYLE", "field_29111", "UPDATE_STYLE", "UPDATE_STYLE"), "Lace$d;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.network.packet.s2c.play.BossBarS2CPacket$Type#UPDATE_STYLE
    [[maybe_unused]] static void set_field_UPDATE_STYLE(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("e", "UPDATE_STYLE", "field_29111", "UPDATE_STYLE", "UPDATE_STYLE"), "Lace$d;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.network.packet.s2c.play.BossBarS2CPacket$Type#UPDATE_PROPERTIES
    [[maybe_unused]] static jobject get_field_UPDATE_PROPERTIES() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("f", "UPDATE_PROPERTIES", "field_29112", "UPDATE_PROPERTIES", "UPDATE_PROPERTIES"), "Lace$d;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.network.packet.s2c.play.BossBarS2CPacket$Type#UPDATE_PROPERTIES
    [[maybe_unused]] static void set_field_UPDATE_PROPERTIES(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("f", "UPDATE_PROPERTIES", "field_29112", "UPDATE_PROPERTIES", "UPDATE_PROPERTIES"), "Lace$d;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for default field net.minecraft.network.packet.s2c.play.BossBarS2CPacket$Type#parser
    static jobject get_field_parser(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("g", "reader", "field_29113", "parser", "f_178710_"), "Lyy;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static default field net.minecraft.network.packet.s2c.play.BossBarS2CPacket$Type#parser
    static void set_field_parser(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("g", "reader", "field_29113", "parser", "f_178710_"), "Lyy;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID_values() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("values", "values", "values", "values", "values"), "()[Lace$d;");
    }

    static jobject values() {
       const auto clazz = self();
       const auto methodID = methodID_values();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID);
    };
    
    static jmethodID methodID_valueOf() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("valueOf", "valueOf", "valueOf", "valueOf", "valueOf"), "(Ljava/lang/String;)Lace$d;");
    }

    static jobject valueOf(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_valueOf();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0);
    };
    
};

#endif // NET_MINECRAFT_NETWORK_PACKET_S2C_PLAY_BOSSBARS2CPACKET$TYPE_HPP