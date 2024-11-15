// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_CLIENT_REALMS_REALMSPERIODICCHECKERS_HPP
#define NET_MINECRAFT_CLIENT_REALMS_REALMSPERIODICCHECKERS_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.client.realms.RealmsPeriodicCheckers
 * Remapped: fdm
 */
namespace RealmsPeriodicCheckers {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("fdm", "com/mojang/realmsclient/gui/RealmsDataFetcher", "net/minecraft/class_7578", "net/minecraft/client/realms/RealmsPeriodicCheckers", "net/minecraft/src/C_3271_"));
        }
        return cachedClass;
    };

    // getter for public field net.minecraft.client.realms.RealmsPeriodicCheckers#runnerFactory
    static jobject get_field_runnerFactory(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "dataFetcher", "field_39682", "runnerFactory", "f_238549_"), "Lfev;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static public field net.minecraft.client.realms.RealmsPeriodicCheckers#runnerFactory
    static void set_field_runnerFactory(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "dataFetcher", "field_39682", "runnerFactory", "f_238549_"), "Lfev;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.realms.RealmsPeriodicCheckers#checkers
    static jobject get_field_checkers(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("i", "tasks", "field_46704", "checkers", "f_303701_"), "Ljava/util/List;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.realms.RealmsPeriodicCheckers#checkers
    static void set_field_checkers(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("i", "tasks", "field_46704", "checkers", "f_303701_"), "Ljava/util/List;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for public field net.minecraft.client.realms.RealmsPeriodicCheckers#notifications
    static jobject get_field_notifications(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "notificationsTask", "field_43035", "notifications", "f_273926_"), "Lfev$e;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static public field net.minecraft.client.realms.RealmsPeriodicCheckers#notifications
    static void set_field_notifications(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "notificationsTask", "field_43035", "notifications", "f_273926_"), "Lfev$e;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for public field net.minecraft.client.realms.RealmsPeriodicCheckers#serverList
    static jobject get_field_serverList(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "serverListUpdateTask", "field_39683", "serverList", "f_87797_"), "Lfev$e;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static public field net.minecraft.client.realms.RealmsPeriodicCheckers#serverList
    static void set_field_serverList(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "serverListUpdateTask", "field_39683", "serverList", "f_87797_"), "Lfev$e;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for public field net.minecraft.client.realms.RealmsPeriodicCheckers#pendingInvitesCount
    static jobject get_field_pendingInvitesCount(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "pendingInvitesTask", "field_39685", "pendingInvitesCount", "f_238709_"), "Lfev$e;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static public field net.minecraft.client.realms.RealmsPeriodicCheckers#pendingInvitesCount
    static void set_field_pendingInvitesCount(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "pendingInvitesTask", "field_39685", "pendingInvitesCount", "f_238709_"), "Lfev$e;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for public field net.minecraft.client.realms.RealmsPeriodicCheckers#trialAvailability
    static jobject get_field_trialAvailability(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "trialAvailabilityTask", "field_39686", "trialAvailability", "f_87799_"), "Lfev$e;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static public field net.minecraft.client.realms.RealmsPeriodicCheckers#trialAvailability
    static void set_field_trialAvailability(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "trialAvailabilityTask", "field_39686", "trialAvailability", "f_87799_"), "Lfev$e;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for public field net.minecraft.client.realms.RealmsPeriodicCheckers#news
    static jobject get_field_news(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("f", "newsTask", "field_39687", "news", "f_238681_"), "Lfev$e;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static public field net.minecraft.client.realms.RealmsPeriodicCheckers#news
    static void set_field_news(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("f", "newsTask", "field_39687", "news", "f_238681_"), "Lfev$e;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for public field net.minecraft.client.realms.RealmsPeriodicCheckers#onlinePlayers
    static jobject get_field_onlinePlayers(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("g", "onlinePlayersTask", "field_52122", "onlinePlayers", "f_337629_"), "Lfev$e;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static public field net.minecraft.client.realms.RealmsPeriodicCheckers#onlinePlayers
    static void set_field_onlinePlayers(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("g", "onlinePlayersTask", "field_52122", "onlinePlayers", "f_337629_"), "Lfev$e;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for public field net.minecraft.client.realms.RealmsPeriodicCheckers#newsUpdater
    static jobject get_field_newsUpdater(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("h", "newsManager", "field_39688", "newsUpdater", "f_238737_"), "Lfdn;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static public field net.minecraft.client.realms.RealmsPeriodicCheckers#newsUpdater
    static void set_field_newsUpdater(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("h", "newsManager", "field_39688", "newsUpdater", "f_238737_"), "Lfdn;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID_getCheckers() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getTasks", "method_54369", "getCheckers", "m_307413_"), "()Ljava/util/List;");
    }

    static jobject getCheckers(const jobject& obj) {
                
       const auto methodID = methodID_getCheckers();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_CLIENT_REALMS_REALMSPERIODICCHECKERS_HPP