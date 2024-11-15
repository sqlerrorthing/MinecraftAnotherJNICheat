// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_CLIENT_SESSION_REPORT_LOG_RECEIVEDMESSAGE$CHATMESSAGE_HPP
#define NET_MINECRAFT_CLIENT_SESSION_REPORT_LOG_RECEIVEDMESSAGE$CHATMESSAGE_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.client.session.report.log.ReceivedMessage$ChatMessage
 * Remapped: gad$a
 */
namespace ReceivedMessage$ChatMessage {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("gad$a", "net/minecraft/client/multiplayer/chat/LoggedChatMessage$Player", "net/minecraft/class_7557$class_7558", "net/minecraft/client/session/report/log/ReceivedMessage$ChatMessage", "net/minecraft/src/C_241572_$C_241577_"));
        }
        return cachedClass;
    };

    // getter for private field net.minecraft.client.session.report.log.ReceivedMessage$ChatMessage#profile
    static jobject get_field_profile(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "profile", "comp_868", "profile", "f_241668_"), "Lcom/mojang/authlib/GameProfile;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.session.report.log.ReceivedMessage$ChatMessage#profile
    static void set_field_profile(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "profile", "comp_868", "profile", "f_241668_"), "Lcom/mojang/authlib/GameProfile;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.session.report.log.ReceivedMessage$ChatMessage#message
    static jobject get_field_message(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "message", "comp_870", "message", "f_241690_"), "Lxp;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.session.report.log.ReceivedMessage$ChatMessage#message
    static void set_field_message(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "message", "comp_870", "message", "f_241690_"), "Lxp;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.session.report.log.ReceivedMessage$ChatMessage#trustStatus
    static jobject get_field_trustStatus(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "trustLevel", "comp_905", "trustStatus", "f_241609_"), "Lgab;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.session.report.log.ReceivedMessage$ChatMessage#trustStatus
    static void set_field_trustStatus(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "trustLevel", "comp_905", "trustStatus", "f_241609_"), "Lgab;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for static public field net.minecraft.client.session.report.log.ReceivedMessage$ChatMessage#CHAT_MESSAGE_CODEC
    [[maybe_unused]] static jobject get_field_CHAT_MESSAGE_CODEC() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "CODEC", "field_40809", "CHAT_MESSAGE_CODEC", "f_252425_"), "Lcom/mojang/serialization/MapCodec;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.client.session.report.log.ReceivedMessage$ChatMessage#CHAT_MESSAGE_CODEC
    [[maybe_unused]] static void set_field_CHAT_MESSAGE_CODEC(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "CODEC", "field_40809", "CHAT_MESSAGE_CODEC", "f_252425_"), "Lcom/mojang/serialization/MapCodec;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.client.session.report.log.ReceivedMessage$ChatMessage#DATE_TIME_FORMATTER
    [[maybe_unused]] static jobject get_field_DATE_TIME_FORMATTER() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("f", "TIME_FORMATTER", "field_39637", "DATE_TIME_FORMATTER", "f_241693_"), "Ljava/time/format/DateTimeFormatter;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.session.report.log.ReceivedMessage$ChatMessage#DATE_TIME_FORMATTER
    [[maybe_unused]] static void set_field_DATE_TIME_FORMATTER(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("f", "TIME_FORMATTER", "field_39637", "DATE_TIME_FORMATTER", "f_241693_"), "Ljava/time/format/DateTimeFormatter;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    static jmethodID methodID_getContent() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "toContentComponent", "method_44551", "getContent", "m_241831_"), "()Lwz;");
    }

    static jobject getContent(const jobject& obj) {
                
       const auto methodID = methodID_getContent();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_getNarration() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "toNarrationComponent", "method_44555", "getNarration", "m_241813_"), "()Lwz;");
    }

    static jobject getNarration(const jobject& obj) {
                
       const auto methodID = methodID_getNarration();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_getHeadingText() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("d", "toHeadingComponent", "method_44556", "getHeadingText", "m_241865_"), "()Lwz;");
    }

    static jobject getHeadingText(const jobject& obj) {
                
       const auto methodID = methodID_getHeadingText();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_getFormattedTimestamp() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("i", "getTimeComponent", "method_44558", "getFormattedTimestamp", "m_241827_"), "()Lwz;");
    }

    static jobject getFormattedTimestamp(const jobject& obj) {
                
       const auto methodID = methodID_getFormattedTimestamp();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_isSentFrom() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "canReport", "method_44553", "isSentFrom", "m_241866_"), "(Ljava/util/UUID;)Z");
    }

    static jboolean isSentFrom(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_isSentFrom();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_getSenderUuid() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("e", "profileId", "method_44557", "getSenderUuid", "m_241803_"), "()Ljava/util/UUID;");
    }

    static jobject getSenderUuid(const jobject& obj) {
                
       const auto methodID = methodID_getSenderUuid();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_getType() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "type", "method_46538", "getType", "m_252883_"), "()Lgac$a;");
    }

    static jobject getType(const jobject& obj) {
                
       const auto methodID = methodID_getType();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID__profile() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("f", "profile", "comp_868", "profile", "f_241668_"), "()Lcom/mojang/authlib/GameProfile;");
    }

    static jobject _profile(const jobject& obj) {
                
       const auto methodID = methodID__profile();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID__message() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("g", "message", "comp_870", "message", "f_241690_"), "()Lxp;");
    }

    static jobject _message(const jobject& obj) {
                
       const auto methodID = methodID__message();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID__trustStatus() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("h", "trustLevel", "comp_905", "trustStatus", "f_241609_"), "()Lgab;");
    }

    static jobject _trustStatus(const jobject& obj) {
                
       const auto methodID = methodID__trustStatus();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_CLIENT_SESSION_REPORT_LOG_RECEIVEDMESSAGE$CHATMESSAGE_HPP