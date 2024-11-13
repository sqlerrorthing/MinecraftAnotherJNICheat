// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_NETWORK_PACKET_S2C_CUSTOM_DEBUGBEECUSTOMPAYLOAD_HPP
#define NET_MINECRAFT_NETWORK_PACKET_S2C_CUSTOM_DEBUGBEECUSTOMPAYLOAD_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.network.packet.s2c.custom.DebugBeeCustomPayload
 * Remapped: aaf
 */
namespace DebugBeeCustomPayload {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("aaf", "net/minecraft/network/protocol/common/custom/BeeDebugPayload", "net/minecraft/class_8707", "net/minecraft/network/packet/s2c/custom/DebugBeeCustomPayload", "net/minecraft/src/C_290228_"));
        }
        return cachedClass;
    };

    // getter for private field net.minecraft.network.packet.s2c.custom.DebugBeeCustomPayload#beeInfo
    static jobject get_field_beeInfo(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "beeInfo", "comp_1648", "beeInfo", "f_291784_"), "Laaf$a;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.network.packet.s2c.custom.DebugBeeCustomPayload#beeInfo
    static void set_field_beeInfo(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "beeInfo", "comp_1648", "beeInfo", "f_291784_"), "Laaf$a;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for static public field net.minecraft.network.packet.s2c.custom.DebugBeeCustomPayload#CODEC
    [[maybe_unused]] static jobject get_field_CODEC() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "STREAM_CODEC", "field_48650", "CODEC", "f_315531_"), "Lyx;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.network.packet.s2c.custom.DebugBeeCustomPayload#CODEC
    [[maybe_unused]] static void set_field_CODEC(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "STREAM_CODEC", "field_48650", "CODEC", "f_315531_"), "Lyx;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.network.packet.s2c.custom.DebugBeeCustomPayload#ID
    [[maybe_unused]] static jobject get_field_ID() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "TYPE", "field_48651", "ID", "f_314812_"), "Laaj$b;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.network.packet.s2c.custom.DebugBeeCustomPayload#ID
    [[maybe_unused]] static void set_field_ID(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "TYPE", "field_48651", "ID", "f_314812_"), "Laaj$b;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    static jmethodID methodID_write() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "write", "method_53028", "write", "m_293110_"), "(Lvw;)V");
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
    
    static jmethodID methodID__beeInfo() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "beeInfo", "comp_1648", "beeInfo", "f_291784_"), "()Laaf$a;");
    }

    static jobject _beeInfo(const jobject& obj) {
                
       const auto methodID = methodID__beeInfo();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_NETWORK_PACKET_S2C_CUSTOM_DEBUGBEECUSTOMPAYLOAD_HPP