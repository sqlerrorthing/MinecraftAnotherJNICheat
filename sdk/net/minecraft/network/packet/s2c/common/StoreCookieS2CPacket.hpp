// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_NETWORK_PACKET_S2C_COMMON_STORECOOKIES2CPACKET_HPP
#define NET_MINECRAFT_NETWORK_PACKET_S2C_COMMON_STORECOOKIES2CPACKET_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.network.packet.s2c.common.StoreCookieS2CPacket
 * Remapped: zv
 */
namespace StoreCookieS2CPacket {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("zv", "net/minecraft/network/protocol/common/ClientboundStoreCookiePacket", "net/minecraft/class_9150", "net/minecraft/network/packet/s2c/common/StoreCookieS2CPacket", "net/minecraft/src/C_313735_"));
        }
        return cachedClass;
    };

    // getter for private field net.minecraft.network.packet.s2c.common.StoreCookieS2CPacket#key
    static jobject get_field_key(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "key", "comp_2238", "key", "f_314603_"), "Lakr;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.network.packet.s2c.common.StoreCookieS2CPacket#key
    static void set_field_key(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "key", "comp_2238", "key", "f_314603_"), "Lakr;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.network.packet.s2c.common.StoreCookieS2CPacket#payload
    static jbyte get_field_payload(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "payload", "comp_2239", "payload", "f_314170_"), "[B");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetByteField(obj, fieldID);
    };

    // setter for static private field net.minecraft.network.packet.s2c.common.StoreCookieS2CPacket#payload
    static void set_field_payload(const jobject &obj, const jbyte &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "payload", "comp_2239", "payload", "f_314170_"), "[B");
        return MinecraftSDK::env->SetByteField(obj, fieldID, value);
    };

    // getter for static public field net.minecraft.network.packet.s2c.common.StoreCookieS2CPacket#CODEC
    [[maybe_unused]] static jobject get_field_CODEC() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "STREAM_CODEC", "field_48627", "CODEC", "f_313911_"), "Lyx;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.network.packet.s2c.common.StoreCookieS2CPacket#CODEC
    [[maybe_unused]] static void set_field_CODEC(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "STREAM_CODEC", "field_48627", "CODEC", "f_313911_"), "Lyx;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.network.packet.s2c.common.StoreCookieS2CPacket#MAX_COOKIE_LENGTH
    [[maybe_unused]] static jint get_field_MAX_COOKIE_LENGTH() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("e", "MAX_PAYLOAD_SIZE", "field_48628", "MAX_COOKIE_LENGTH", "f_316243_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.network.packet.s2c.common.StoreCookieS2CPacket#MAX_COOKIE_LENGTH
    [[maybe_unused]] static void set_field_MAX_COOKIE_LENGTH(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("e", "MAX_PAYLOAD_SIZE", "field_48628", "MAX_COOKIE_LENGTH", "f_316243_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.network.packet.s2c.common.StoreCookieS2CPacket#COOKIE_PACKET_CODEC
    [[maybe_unused]] static jobject get_field_COOKIE_PACKET_CODEC() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "PAYLOAD_STREAM_CODEC", "field_49011", "COOKIE_PACKET_CODEC", "f_315070_"), "Lyx;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.network.packet.s2c.common.StoreCookieS2CPacket#COOKIE_PACKET_CODEC
    [[maybe_unused]] static void set_field_COOKIE_PACKET_CODEC(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "PAYLOAD_STREAM_CODEC", "field_49011", "COOKIE_PACKET_CODEC", "f_315070_"), "Lyx;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    static jmethodID methodID_write() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "write", "method_56467", "write", "m_319185_"), "(Lvw;)V");
    }

    static void write(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_write();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
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
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "handle", "method_56468", "apply", "m_5797_"), "(Lzm;)V");
    }

    static void apply(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_apply();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID__key() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "key", "comp_2238", "key", "f_314603_"), "()Lakr;");
    }

    static jobject _key(const jobject& obj) {
                
       const auto methodID = methodID__key();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID__payload() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("e", "payload", "comp_2239", "payload", "f_314170_"), "()[B");
    }

    static jbyte _payload(const jobject& obj) {
                
       const auto methodID = methodID__payload();
       return MinecraftSDK::env->CallByteMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_NETWORK_PACKET_S2C_COMMON_STORECOOKIES2CPACKET_HPP