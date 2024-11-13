// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_NETWORK_PACKET_S2C_CONFIG_DYNAMICREGISTRIESS2CPACKET_HPP
#define NET_MINECRAFT_NETWORK_PACKET_S2C_CONFIG_DYNAMICREGISTRIESS2CPACKET_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.network.packet.s2c.config.DynamicRegistriesS2CPacket
 * Remapped: abe
 */
namespace DynamicRegistriesS2CPacket {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("abe", "net/minecraft/network/protocol/configuration/ClientboundRegistryDataPacket", "net/minecraft/class_8734", "net/minecraft/network/packet/s2c/config/DynamicRegistriesS2CPacket", "net/minecraft/src/C_290258_"));
        }
        return cachedClass;
    };

    // getter for private field net.minecraft.network.packet.s2c.config.DynamicRegistriesS2CPacket#registry
    static jobject get_field_registry(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "registry", "comp_2258", "registry", "f_316367_"), "Lakq;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.network.packet.s2c.config.DynamicRegistriesS2CPacket#registry
    static void set_field_registry(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "registry", "comp_2258", "registry", "f_316367_"), "Lakq;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.network.packet.s2c.config.DynamicRegistriesS2CPacket#entries
    static jobject get_field_entries(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "entries", "comp_2259", "entries", "f_315072_"), "Ljava/util/List;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.network.packet.s2c.config.DynamicRegistriesS2CPacket#entries
    static void set_field_entries(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "entries", "comp_2259", "entries", "f_315072_"), "Ljava/util/List;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for static private field net.minecraft.network.packet.s2c.config.DynamicRegistriesS2CPacket#REGISTRY_KEY_CODEC
    [[maybe_unused]] static jobject get_field_REGISTRY_KEY_CODEC() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("d", "REGISTRY_KEY_STREAM_CODEC", "field_48777", "REGISTRY_KEY_CODEC", "f_315798_"), "Lyx;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.network.packet.s2c.config.DynamicRegistriesS2CPacket#REGISTRY_KEY_CODEC
    [[maybe_unused]] static void set_field_REGISTRY_KEY_CODEC(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("d", "REGISTRY_KEY_STREAM_CODEC", "field_48777", "REGISTRY_KEY_CODEC", "f_315798_"), "Lyx;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.network.packet.s2c.config.DynamicRegistriesS2CPacket#CODEC
    [[maybe_unused]] static jobject get_field_CODEC() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "STREAM_CODEC", "field_48692", "CODEC", "f_316830_"), "Lyx;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.network.packet.s2c.config.DynamicRegistriesS2CPacket#CODEC
    [[maybe_unused]] static void set_field_CODEC(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "STREAM_CODEC", "field_48692", "CODEC", "f_316830_"), "Lyx;");
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
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "handle", "method_53042", "apply", "m_5797_"), "(Labc;)V");
    }

    static void apply(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_apply();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID__registry() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "registry", "comp_2258", "registry", "f_316367_"), "()Lakq;");
    }

    static jobject _registry(const jobject& obj) {
                
       const auto methodID = methodID__registry();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID__entries() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("e", "entries", "comp_2259", "entries", "f_315072_"), "()Ljava/util/List;");
    }

    static jobject _entries(const jobject& obj) {
                
       const auto methodID = methodID__entries();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_NETWORK_PACKET_S2C_CONFIG_DYNAMICREGISTRIESS2CPACKET_HPP