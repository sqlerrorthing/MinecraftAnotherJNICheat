// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_NETWORK_PACKET_S2C_CUSTOM_DEBUGHIVECUSTOMPAYLOAD_HPP
#define NET_MINECRAFT_NETWORK_PACKET_S2C_CUSTOM_DEBUGHIVECUSTOMPAYLOAD_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.network.packet.s2c.custom.DebugHiveCustomPayload
 * Remapped: aaq
 */
namespace DebugHiveCustomPayload {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("aaq", "net/minecraft/network/protocol/common/custom/HiveDebugPayload", "net/minecraft/class_8718", "net/minecraft/network/packet/s2c/custom/DebugHiveCustomPayload", "net/minecraft/src/C_290253_"));
        }
        return cachedClass;
    };

    // getter for private field net.minecraft.network.packet.s2c.custom.DebugHiveCustomPayload#hiveInfo
    static jobject get_field_hiveInfo(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "hiveInfo", "comp_1693", "hiveInfo", "f_291746_"), "Laaq$a;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.network.packet.s2c.custom.DebugHiveCustomPayload#hiveInfo
    static void set_field_hiveInfo(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "hiveInfo", "comp_1693", "hiveInfo", "f_291746_"), "Laaq$a;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for static public field net.minecraft.network.packet.s2c.custom.DebugHiveCustomPayload#CODEC
    [[maybe_unused]] static jobject get_field_CODEC() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "STREAM_CODEC", "field_48670", "CODEC", "f_315646_"), "Lyx;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.network.packet.s2c.custom.DebugHiveCustomPayload#CODEC
    [[maybe_unused]] static void set_field_CODEC(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "STREAM_CODEC", "field_48670", "CODEC", "f_315646_"), "Lyx;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.network.packet.s2c.custom.DebugHiveCustomPayload#ID
    [[maybe_unused]] static jobject get_field_ID() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "TYPE", "field_48671", "ID", "f_315265_"), "Laaj$b;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.network.packet.s2c.custom.DebugHiveCustomPayload#ID
    [[maybe_unused]] static void set_field_ID(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "TYPE", "field_48671", "ID", "f_315265_"), "Laaj$b;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    static jmethodID methodID_write() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "write", "method_56498", "write", "m_293604_"), "(Lvw;)V");
    }

    static void write(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_write();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_getId() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "type", "method_56479", "getId", "m_293297_"), "()Laaj$b;");
    }

    static jobject getId(const jobject& obj) {
                
       const auto methodID = methodID_getId();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID__hiveInfo() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "hiveInfo", "comp_1693", "hiveInfo", "f_291746_"), "()Laaq$a;");
    }

    static jobject _hiveInfo(const jobject& obj) {
                
       const auto methodID = methodID__hiveInfo();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_NETWORK_PACKET_S2C_CUSTOM_DEBUGHIVECUSTOMPAYLOAD_HPP