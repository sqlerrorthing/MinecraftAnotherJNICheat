// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_NETWORK_PACKET_S2C_COMMON_RESOURCEPACKSENDS2CPACKET_HPP
#define NET_MINECRAFT_NETWORK_PACKET_S2C_COMMON_RESOURCEPACKSENDS2CPACKET_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.network.packet.s2c.common.ResourcePackSendS2CPacket
 * Remapped: zt
 */
namespace ResourcePackSendS2CPacket {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("zt", "net/minecraft/network/protocol/common/ClientboundResourcePackPushPacket", "net/minecraft/class_2720", "net/minecraft/network/packet/s2c/common/ResourcePackSendS2CPacket", "net/minecraft/src/C_302038_"));
        }
        return cachedClass;
    };

    // getter for private field net.minecraft.network.packet.s2c.common.ResourcePackSendS2CPacket#id
    static jobject get_field_id(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "id", "comp_2158", "id", "f_303323_"), "Ljava/util/UUID;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.network.packet.s2c.common.ResourcePackSendS2CPacket#id
    static void set_field_id(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "id", "comp_2158", "id", "f_303323_"), "Ljava/util/UUID;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.network.packet.s2c.common.ResourcePackSendS2CPacket#url
    static jobject get_field_url(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "url", "comp_2159", "url", "f_302762_"), "Ljava/lang/String;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.network.packet.s2c.common.ResourcePackSendS2CPacket#url
    static void set_field_url(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "url", "comp_2159", "url", "f_302762_"), "Ljava/lang/String;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.network.packet.s2c.common.ResourcePackSendS2CPacket#hash
    static jobject get_field_hash(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "hash", "comp_2160", "hash", "f_302355_"), "Ljava/lang/String;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.network.packet.s2c.common.ResourcePackSendS2CPacket#hash
    static void set_field_hash(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "hash", "comp_2160", "hash", "f_302355_"), "Ljava/lang/String;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.network.packet.s2c.common.ResourcePackSendS2CPacket#required
    static jboolean get_field_required(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("f", "required", "comp_2161", "required", "f_302925_"), "Z");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetBooleanField(obj, fieldID);
    };

    // setter for static private field net.minecraft.network.packet.s2c.common.ResourcePackSendS2CPacket#required
    static void set_field_required(const jobject &obj, const jboolean &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("f", "required", "comp_2161", "required", "f_302925_"), "Z");
        return MinecraftSDK::env->SetBooleanField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.network.packet.s2c.common.ResourcePackSendS2CPacket#prompt
    static jobject get_field_prompt(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("g", "prompt", "comp_2162", "prompt", "f_303164_"), "Ljava/util/Optional;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.network.packet.s2c.common.ResourcePackSendS2CPacket#prompt
    static void set_field_prompt(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("g", "prompt", "comp_2162", "prompt", "f_303164_"), "Ljava/util/Optional;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for static public field net.minecraft.network.packet.s2c.common.ResourcePackSendS2CPacket#MAX_HASH_LENGTH
    [[maybe_unused]] static jint get_field_MAX_HASH_LENGTH() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "MAX_HASH_LENGTH", "field_33340", "MAX_HASH_LENGTH", "f_302560_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.network.packet.s2c.common.ResourcePackSendS2CPacket#MAX_HASH_LENGTH
    [[maybe_unused]] static void set_field_MAX_HASH_LENGTH(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "MAX_HASH_LENGTH", "field_33340", "MAX_HASH_LENGTH", "f_302560_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.network.packet.s2c.common.ResourcePackSendS2CPacket#CODEC
    [[maybe_unused]] static jobject get_field_CODEC() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "STREAM_CODEC", "field_48626", "CODEC", "f_314484_"), "Lyx;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.network.packet.s2c.common.ResourcePackSendS2CPacket#CODEC
    [[maybe_unused]] static void set_field_CODEC(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "STREAM_CODEC", "field_48626", "CODEC", "f_314484_"), "Lyx;");
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
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "handle", "method_11774", "apply", "m_5797_"), "(Lzm;)V");
    }

    static void apply(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_apply();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID__id() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "id", "comp_2158", "id", "f_303323_"), "()Ljava/util/UUID;");
    }

    static jobject _id(const jobject& obj) {
                
       const auto methodID = methodID__id();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID__url() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("e", "url", "comp_2159", "url", "f_302762_"), "()Ljava/lang/String;");
    }

    static jobject _url(const jobject& obj) {
                
       const auto methodID = methodID__url();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID__hash() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("f", "hash", "comp_2160", "hash", "f_302355_"), "()Ljava/lang/String;");
    }

    static jobject _hash(const jobject& obj) {
                
       const auto methodID = methodID__hash();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID__required() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("g", "required", "comp_2161", "required", "f_302925_"), "()Z");
    }

    static jboolean _required(const jobject& obj) {
                
       const auto methodID = methodID__required();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID);
    };
    
    static jmethodID methodID__prompt() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("h", "prompt", "comp_2162", "prompt", "f_303164_"), "()Ljava/util/Optional;");
    }

    static jobject _prompt(const jobject& obj) {
                
       const auto methodID = methodID__prompt();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_NETWORK_PACKET_S2C_COMMON_RESOURCEPACKSENDS2CPACKET_HPP