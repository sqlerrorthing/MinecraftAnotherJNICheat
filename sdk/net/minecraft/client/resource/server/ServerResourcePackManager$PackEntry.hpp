// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_CLIENT_RESOURCE_SERVER_SERVERRESOURCEPACKMANAGER$PACKENTRY_HPP
#define NET_MINECRAFT_CLIENT_RESOURCE_SERVER_SERVERRESOURCEPACKMANAGER$PACKENTRY_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.client.resource.server.ServerResourcePackManager$PackEntry
 * Remapped: gtg$e
 */
namespace ServerResourcePackManager$PackEntry {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("gtg$e", "net/minecraft/client/resources/server/ServerPackManager$ServerPackData", "net/minecraft/class_9044$class_9049", "net/minecraft/client/resource/server/ServerResourcePackManager$PackEntry", "net/minecraft/src/C_302187_$C_302181_"));
        }
        return cachedClass;
    };

    // getter for default field net.minecraft.client.resource.server.ServerResourcePackManager$PackEntry#id
    static jobject get_field_id(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "id", "field_47659", "id", "f_303673_"), "Ljava/util/UUID;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static default field net.minecraft.client.resource.server.ServerResourcePackManager$PackEntry#id
    static void set_field_id(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "id", "field_47659", "id", "f_303673_"), "Ljava/util/UUID;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for default field net.minecraft.client.resource.server.ServerResourcePackManager$PackEntry#url
    static jobject get_field_url(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "url", "field_47660", "url", "f_303202_"), "Ljava/net/URL;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static default field net.minecraft.client.resource.server.ServerResourcePackManager$PackEntry#url
    static void set_field_url(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "url", "field_47660", "url", "f_303202_"), "Ljava/net/URL;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for default field net.minecraft.client.resource.server.ServerResourcePackManager$PackEntry#hashCode
    static jobject get_field_hashCode(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "hash", "field_47661", "hashCode", "f_303122_"), "Lcom/google/common/hash/HashCode;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static default field net.minecraft.client.resource.server.ServerResourcePackManager$PackEntry#hashCode
    static void set_field_hashCode(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "hash", "field_47661", "hashCode", "f_303122_"), "Lcom/google/common/hash/HashCode;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for default field net.minecraft.client.resource.server.ServerResourcePackManager$PackEntry#path
    static jobject get_field_path(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "path", "field_47662", "path", "f_303540_"), "Ljava/nio/file/Path;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static default field net.minecraft.client.resource.server.ServerResourcePackManager$PackEntry#path
    static void set_field_path(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "path", "field_47662", "path", "f_303540_"), "Ljava/nio/file/Path;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for default field net.minecraft.client.resource.server.ServerResourcePackManager$PackEntry#discardReason
    static jobject get_field_discardReason(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "removalReason", "field_47663", "discardReason", "f_302652_"), "Lgtg$d;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static default field net.minecraft.client.resource.server.ServerResourcePackManager$PackEntry#discardReason
    static void set_field_discardReason(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "removalReason", "field_47663", "discardReason", "f_302652_"), "Lgtg$d;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for default field net.minecraft.client.resource.server.ServerResourcePackManager$PackEntry#loadStatus
    static jobject get_field_loadStatus(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("f", "downloadStatus", "field_47664", "loadStatus", "f_302455_"), "Lgtg$b;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static default field net.minecraft.client.resource.server.ServerResourcePackManager$PackEntry#loadStatus
    static void set_field_loadStatus(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("f", "downloadStatus", "field_47664", "loadStatus", "f_302455_"), "Lgtg$b;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for default field net.minecraft.client.resource.server.ServerResourcePackManager$PackEntry#status
    static jobject get_field_status(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("g", "activationStatus", "field_47665", "status", "f_302874_"), "Lgtg$a;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static default field net.minecraft.client.resource.server.ServerResourcePackManager$PackEntry#status
    static void set_field_status(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("g", "activationStatus", "field_47665", "status", "f_302874_"), "Lgtg$a;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for default field net.minecraft.client.resource.server.ServerResourcePackManager$PackEntry#accepted
    static jboolean get_field_accepted(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("h", "promptAccepted", "field_47666", "accepted", "f_302595_"), "Z");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetBooleanField(obj, fieldID);
    };

    // setter for static default field net.minecraft.client.resource.server.ServerResourcePackManager$PackEntry#accepted
    static void set_field_accepted(const jobject &obj, const jboolean &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("h", "promptAccepted", "field_47666", "accepted", "f_302595_"), "Z");
        return MinecraftSDK::env->SetBooleanField(obj, fieldID, value);
    };

    static jmethodID methodID_discard() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "setRemovalReasonIfNotSet", "method_55577", "discard", "m_306869_"), "(Lgtg$d;)V");
    }

    static void discard(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_discard();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_isDiscarded() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "isRemoved", "method_55576", "isDiscarded", "m_306607_"), "()Z");
    }

    static jboolean isDiscarded(const jobject& obj) {
                
       const auto methodID = methodID_isDiscarded();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_CLIENT_RESOURCE_SERVER_SERVERRESOURCEPACKMANAGER$PACKENTRY_HPP