// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_CLIENT_NETWORK_SERVERINFO$SERVERTYPE_HPP
#define NET_MINECRAFT_CLIENT_NETWORK_SERVERINFO$SERVERTYPE_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.client.network.ServerInfo$ServerType
 * Remapped: fzt$c
 */
namespace ServerInfo$ServerType {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("fzt$c", "net/minecraft/client/multiplayer/ServerData$Type", "net/minecraft/class_642$class_8678", "net/minecraft/client/network/ServerInfo$ServerType", "net/minecraft/src/C_3908_$C_290092_"));
        }
        return cachedClass;
    };

    // getter for static public field net.minecraft.client.network.ServerInfo$ServerType#LAN
    [[maybe_unused]] static jobject get_field_LAN() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "LAN", "field_45609", "LAN", "LAN"), "Lfzt$c;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.client.network.ServerInfo$ServerType#LAN
    [[maybe_unused]] static void set_field_LAN(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "LAN", "field_45609", "LAN", "LAN"), "Lfzt$c;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.client.network.ServerInfo$ServerType#REALM
    [[maybe_unused]] static jobject get_field_REALM() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "REALM", "field_45610", "REALM", "REALM"), "Lfzt$c;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.client.network.ServerInfo$ServerType#REALM
    [[maybe_unused]] static void set_field_REALM(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "REALM", "field_45610", "REALM", "REALM"), "Lfzt$c;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.client.network.ServerInfo$ServerType#OTHER
    [[maybe_unused]] static jobject get_field_OTHER() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "OTHER", "field_45611", "OTHER", "OTHER"), "Lfzt$c;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.client.network.ServerInfo$ServerType#OTHER
    [[maybe_unused]] static void set_field_OTHER(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "OTHER", "field_45611", "OTHER", "OTHER"), "Lfzt$c;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    static jmethodID methodID_values() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("values", "values", "values", "values", "values"), "()[Lfzt$c;");
    }

    static jobject values() {
       const auto clazz = self();
       const auto methodID = methodID_values();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID);
    };
    
    static jmethodID methodID_valueOf() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("valueOf", "valueOf", "valueOf", "valueOf", "valueOf"), "(Ljava/lang/String;)Lfzt$c;");
    }

    static jobject valueOf(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_valueOf();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0);
    };
    
};

#endif // NET_MINECRAFT_CLIENT_NETWORK_SERVERINFO$SERVERTYPE_HPP