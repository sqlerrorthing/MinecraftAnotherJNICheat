// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_CLIENT_RESOURCE_SERVER_SERVERRESOURCEPACKMANAGER$DISCARDREASON_HPP
#define NET_MINECRAFT_CLIENT_RESOURCE_SERVER_SERVERRESOURCEPACKMANAGER$DISCARDREASON_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.client.resource.server.ServerResourcePackManager$DiscardReason
 * Remapped: gtg$d
 */
namespace ServerResourcePackManager$DiscardReason {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("gtg$d", "net/minecraft/client/resources/server/ServerPackManager$RemovalReason", "net/minecraft/class_9044$class_9048", "net/minecraft/client/resource/server/ServerResourcePackManager$DiscardReason", "net/minecraft/src/C_302187_$C_301942_"));
        }
        return cachedClass;
    };

    // getter for static public field net.minecraft.client.resource.server.ServerResourcePackManager$DiscardReason#DOWNLOAD_FAILED
    [[maybe_unused]] static jobject get_field_DOWNLOAD_FAILED() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "DOWNLOAD_FAILED", "field_47651", "DOWNLOAD_FAILED", "DOWNLOAD_FAILED"), "Lgtg$d;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.client.resource.server.ServerResourcePackManager$DiscardReason#DOWNLOAD_FAILED
    [[maybe_unused]] static void set_field_DOWNLOAD_FAILED(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "DOWNLOAD_FAILED", "field_47651", "DOWNLOAD_FAILED", "DOWNLOAD_FAILED"), "Lgtg$d;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.client.resource.server.ServerResourcePackManager$DiscardReason#ACTIVATION_FAILED
    [[maybe_unused]] static jobject get_field_ACTIVATION_FAILED() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "ACTIVATION_FAILED", "field_47652", "ACTIVATION_FAILED", "ACTIVATION_FAILED"), "Lgtg$d;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.client.resource.server.ServerResourcePackManager$DiscardReason#ACTIVATION_FAILED
    [[maybe_unused]] static void set_field_ACTIVATION_FAILED(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "ACTIVATION_FAILED", "field_47652", "ACTIVATION_FAILED", "ACTIVATION_FAILED"), "Lgtg$d;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.client.resource.server.ServerResourcePackManager$DiscardReason#DECLINED
    [[maybe_unused]] static jobject get_field_DECLINED() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "DECLINED", "field_47653", "DECLINED", "DECLINED"), "Lgtg$d;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.client.resource.server.ServerResourcePackManager$DiscardReason#DECLINED
    [[maybe_unused]] static void set_field_DECLINED(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "DECLINED", "field_47653", "DECLINED", "DECLINED"), "Lgtg$d;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.client.resource.server.ServerResourcePackManager$DiscardReason#DISCARDED
    [[maybe_unused]] static jobject get_field_DISCARDED() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("d", "DISCARDED", "field_47654", "DISCARDED", "DISCARDED"), "Lgtg$d;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.client.resource.server.ServerResourcePackManager$DiscardReason#DISCARDED
    [[maybe_unused]] static void set_field_DISCARDED(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("d", "DISCARDED", "field_47654", "DISCARDED", "DISCARDED"), "Lgtg$d;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.client.resource.server.ServerResourcePackManager$DiscardReason#SERVER_REMOVED
    [[maybe_unused]] static jobject get_field_SERVER_REMOVED() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("e", "SERVER_REMOVED", "field_47655", "SERVER_REMOVED", "SERVER_REMOVED"), "Lgtg$d;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.client.resource.server.ServerResourcePackManager$DiscardReason#SERVER_REMOVED
    [[maybe_unused]] static void set_field_SERVER_REMOVED(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("e", "SERVER_REMOVED", "field_47655", "SERVER_REMOVED", "SERVER_REMOVED"), "Lgtg$d;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.client.resource.server.ServerResourcePackManager$DiscardReason#SERVER_REPLACED
    [[maybe_unused]] static jobject get_field_SERVER_REPLACED() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("f", "SERVER_REPLACED", "field_47656", "SERVER_REPLACED", "SERVER_REPLACED"), "Lgtg$d;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.client.resource.server.ServerResourcePackManager$DiscardReason#SERVER_REPLACED
    [[maybe_unused]] static void set_field_SERVER_REPLACED(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("f", "SERVER_REPLACED", "field_47656", "SERVER_REPLACED", "SERVER_REPLACED"), "Lgtg$d;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for default field net.minecraft.client.resource.server.ServerResourcePackManager$DiscardReason#state
    static jobject get_field_state(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("g", "serverResponse", "field_47657", "state", "f_303257_"), "Lgte$a;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static default field net.minecraft.client.resource.server.ServerResourcePackManager$DiscardReason#state
    static void set_field_state(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("g", "serverResponse", "field_47657", "state", "f_303257_"), "Lgte$a;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID_values() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("values", "values", "values", "values", "values"), "()[Lgtg$d;");
    }

    static jobject values() {
       const auto clazz = self();
       const auto methodID = methodID_values();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID);
    };
    
    static jmethodID methodID_valueOf() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("valueOf", "valueOf", "valueOf", "valueOf", "valueOf"), "(Ljava/lang/String;)Lgtg$d;");
    }

    static jobject valueOf(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_valueOf();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0);
    };
    
};

#endif // NET_MINECRAFT_CLIENT_RESOURCE_SERVER_SERVERRESOURCEPACKMANAGER$DISCARDREASON_HPP