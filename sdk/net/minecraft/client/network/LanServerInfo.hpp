// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_CLIENT_NETWORK_LANSERVERINFO_HPP
#define NET_MINECRAFT_CLIENT_NETWORK_LANSERVERINFO_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.client.network.LanServerInfo
 * Remapped: gup
 */
namespace LanServerInfo {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("gup", "net/minecraft/client/server/LanServer", "net/minecraft/class_1131", "net/minecraft/client/network/LanServerInfo", "net/minecraft/src/C_4586_"));
        }
        return cachedClass;
    };

    // getter for private field net.minecraft.client.network.LanServerInfo#motd
    static jobject get_field_motd(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "motd", "field_5515", "motd", "f_120072_"), "Ljava/lang/String;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.network.LanServerInfo#motd
    static void set_field_motd(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "motd", "field_5515", "motd", "f_120072_"), "Ljava/lang/String;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.network.LanServerInfo#addressPort
    static jobject get_field_addressPort(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "address", "field_5517", "addressPort", "f_120073_"), "Ljava/lang/String;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.network.LanServerInfo#addressPort
    static void set_field_addressPort(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "address", "field_5517", "addressPort", "f_120073_"), "Ljava/lang/String;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.network.LanServerInfo#lastTimeMillis
    static jlong get_field_lastTimeMillis(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "pingTime", "field_5516", "lastTimeMillis", "f_120074_"), "J");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetLongField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.network.LanServerInfo#lastTimeMillis
    static void set_field_lastTimeMillis(const jobject &obj, const jlong &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "pingTime", "field_5516", "lastTimeMillis", "f_120074_"), "J");
        return MinecraftSDK::env->SetLongField(obj, fieldID, value);
    };

    static jmethodID methodID_getMotd() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getMotd", "method_4813", "getMotd", "m_120078_"), "()Ljava/lang/String;");
    }

    static jobject getMotd(const jobject& obj) {
                
       const auto methodID = methodID_getMotd();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_getAddressPort() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "getAddress", "method_4812", "getAddressPort", "m_120079_"), "()Ljava/lang/String;");
    }

    static jobject getAddressPort(const jobject& obj) {
                
       const auto methodID = methodID_getAddressPort();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_updateLastTime() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "updatePingTime", "method_4814", "updateLastTime", "m_120080_"), "()V");
    }

    static void updateLastTime(const jobject& obj) {
                
       const auto methodID = methodID_updateLastTime();
       MinecraftSDK::env->CallVoidMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_CLIENT_NETWORK_LANSERVERINFO_HPP