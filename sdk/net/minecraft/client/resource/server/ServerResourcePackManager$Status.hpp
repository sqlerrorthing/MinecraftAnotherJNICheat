// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_CLIENT_RESOURCE_SERVER_SERVERRESOURCEPACKMANAGER$STATUS_HPP
#define NET_MINECRAFT_CLIENT_RESOURCE_SERVER_SERVERRESOURCEPACKMANAGER$STATUS_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.client.resource.server.ServerResourcePackManager$Status
 * Remapped: gtg$a
 */
namespace ServerResourcePackManager$Status {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("gtg$a", "net/minecraft/client/resources/server/ServerPackManager$ActivationStatus", "net/minecraft/class_9044$class_9045", "net/minecraft/client/resource/server/ServerResourcePackManager$Status", "net/minecraft/src/C_302187_$C_301997_"));
        }
        return cachedClass;
    };

    // getter for static public field net.minecraft.client.resource.server.ServerResourcePackManager$Status#INACTIVE
    [[maybe_unused]] static jobject get_field_INACTIVE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "INACTIVE", "field_47639", "INACTIVE", "INACTIVE"), "Lgtg$a;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.client.resource.server.ServerResourcePackManager$Status#INACTIVE
    [[maybe_unused]] static void set_field_INACTIVE(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "INACTIVE", "field_47639", "INACTIVE", "INACTIVE"), "Lgtg$a;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.client.resource.server.ServerResourcePackManager$Status#PENDING
    [[maybe_unused]] static jobject get_field_PENDING() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "PENDING", "field_47640", "PENDING", "PENDING"), "Lgtg$a;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.client.resource.server.ServerResourcePackManager$Status#PENDING
    [[maybe_unused]] static void set_field_PENDING(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "PENDING", "field_47640", "PENDING", "PENDING"), "Lgtg$a;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.client.resource.server.ServerResourcePackManager$Status#ACTIVE
    [[maybe_unused]] static jobject get_field_ACTIVE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "ACTIVE", "field_47641", "ACTIVE", "ACTIVE"), "Lgtg$a;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.client.resource.server.ServerResourcePackManager$Status#ACTIVE
    [[maybe_unused]] static void set_field_ACTIVE(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "ACTIVE", "field_47641", "ACTIVE", "ACTIVE"), "Lgtg$a;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    static jmethodID methodID_values() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("values", "values", "values", "values", "values"), "()[Lgtg$a;");
    }

    static jobject values() {
       const auto clazz = self();
       const auto methodID = methodID_values();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID);
    };
    
    static jmethodID methodID_valueOf() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("valueOf", "valueOf", "valueOf", "valueOf", "valueOf"), "(Ljava/lang/String;)Lgtg$a;");
    }

    static jobject valueOf(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_valueOf();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0);
    };
    
};

#endif // NET_MINECRAFT_CLIENT_RESOURCE_SERVER_SERVERRESOURCEPACKMANAGER$STATUS_HPP