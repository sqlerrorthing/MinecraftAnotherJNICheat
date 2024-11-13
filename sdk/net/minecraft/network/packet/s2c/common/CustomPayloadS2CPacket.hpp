// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_NETWORK_PACKET_S2C_COMMON_CUSTOMPAYLOADS2CPACKET_HPP
#define NET_MINECRAFT_NETWORK_PACKET_S2C_COMMON_CUSTOMPAYLOADS2CPACKET_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.network.packet.s2c.common.CustomPayloadS2CPacket
 * Remapped: zn
 */
namespace CustomPayloadS2CPacket {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("zn", "net/minecraft/network/protocol/common/ClientboundCustomPayloadPacket", "net/minecraft/class_2658", "net/minecraft/network/packet/s2c/common/CustomPayloadS2CPacket", "net/minecraft/src/C_290073_"));
        }
        return cachedClass;
    };

    // getter for private field net.minecraft.network.packet.s2c.common.CustomPayloadS2CPacket#payload
    static jobject get_field_payload(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "payload", "comp_1646", "payload", "f_291001_"), "Laaj;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.network.packet.s2c.common.CustomPayloadS2CPacket#payload
    static void set_field_payload(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "payload", "comp_1646", "payload", "f_291001_"), "Laaj;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for static private field net.minecraft.network.packet.s2c.common.CustomPayloadS2CPacket#MAX_PAYLOAD_SIZE
    [[maybe_unused]] static jint get_field_MAX_PAYLOAD_SIZE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("d", "MAX_PAYLOAD_SIZE", "field_33326", "MAX_PAYLOAD_SIZE", "f_290501_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.network.packet.s2c.common.CustomPayloadS2CPacket#MAX_PAYLOAD_SIZE
    [[maybe_unused]] static void set_field_MAX_PAYLOAD_SIZE(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("d", "MAX_PAYLOAD_SIZE", "field_33326", "MAX_PAYLOAD_SIZE", "f_290501_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.network.packet.s2c.common.CustomPayloadS2CPacket#PLAY_CODEC
    [[maybe_unused]] static jobject get_field_PLAY_CODEC() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "GAMEPLAY_STREAM_CODEC", "field_48620", "PLAY_CODEC", "f_314159_"), "Lyx;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.network.packet.s2c.common.CustomPayloadS2CPacket#PLAY_CODEC
    [[maybe_unused]] static void set_field_PLAY_CODEC(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "GAMEPLAY_STREAM_CODEC", "field_48620", "PLAY_CODEC", "f_314159_"), "Lyx;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.network.packet.s2c.common.CustomPayloadS2CPacket#CONFIGURATION_CODEC
    [[maybe_unused]] static jobject get_field_CONFIGURATION_CODEC() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "CONFIG_STREAM_CODEC", "field_48621", "CONFIGURATION_CODEC", "f_316069_"), "Lyx;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.network.packet.s2c.common.CustomPayloadS2CPacket#CONFIGURATION_CODEC
    [[maybe_unused]] static void set_field_CONFIGURATION_CODEC(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "CONFIG_STREAM_CODEC", "field_48621", "CONFIGURATION_CODEC", "f_316069_"), "Lyx;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    static jmethodID methodID_getPacketId() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "type", "method_55846", "getPacketId", "m_5779_"), "()Lzi;");
    }

    static jobject getPacketId(const jobject& obj) {
                
       const auto methodID = methodID_getPacketId();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_apply() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "handle", "method_53024", "apply", "m_5797_"), "(Lzm;)V");
    }

    static void apply(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_apply();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID__payload() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "payload", "comp_1646", "payload", "f_291001_"), "()Laaj;");
    }

    static jobject _payload(const jobject& obj) {
                
       const auto methodID = methodID__payload();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_NETWORK_PACKET_S2C_COMMON_CUSTOMPAYLOADS2CPACKET_HPP