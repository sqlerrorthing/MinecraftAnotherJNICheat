// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_CLIENT_SESSION_REPORT_ABUSEREPORT$REPORTWITHID_HPP
#define NET_MINECRAFT_CLIENT_SESSION_REPORT_ABUSEREPORT$REPORTWITHID_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.client.session.report.AbuseReport$ReportWithId
 * Remapped: gak$c
 */
namespace AbuseReport$ReportWithId {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("gak$c", "net/minecraft/client/multiplayer/chat/report/Report$Result", "net/minecraft/class_7855$class_7568", "net/minecraft/client/session/report/AbuseReport$ReportWithId", "net/minecraft/src/C_290302_$C_290061_"));
        }
        return cachedClass;
    };

    // getter for private field net.minecraft.client.session.report.AbuseReport$ReportWithId#id
    static jobject get_field_id(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "id", "comp_878", "id", "f_291826_"), "Ljava/util/UUID;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.session.report.AbuseReport$ReportWithId#id
    static void set_field_id(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "id", "comp_878", "id", "f_291826_"), "Ljava/util/UUID;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.session.report.AbuseReport$ReportWithId#reportType
    static jobject get_field_reportType(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "reportType", "comp_1910", "reportType", "f_290853_"), "Lgan;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.session.report.AbuseReport$ReportWithId#reportType
    static void set_field_reportType(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "reportType", "comp_1910", "reportType", "f_290853_"), "Lgan;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.session.report.AbuseReport$ReportWithId#report
    static jobject get_field_report(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "report", "comp_879", "report", "f_291496_"), "Lcom/mojang/authlib/minecraft/report/AbuseReport;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.session.report.AbuseReport$ReportWithId#report
    static void set_field_report(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "report", "comp_879", "report", "f_291496_"), "Lcom/mojang/authlib/minecraft/report/AbuseReport;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID__id() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "id", "comp_878", "id", "f_291826_"), "()Ljava/util/UUID;");
    }

    static jobject _id(const jobject& obj) {
                
       const auto methodID = methodID__id();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID__reportType() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "reportType", "comp_1910", "reportType", "f_290853_"), "()Lgan;");
    }

    static jobject _reportType(const jobject& obj) {
                
       const auto methodID = methodID__reportType();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID__report() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "report", "comp_879", "report", "f_291496_"), "()Lcom/mojang/authlib/minecraft/report/AbuseReport;");
    }

    static jobject _report(const jobject& obj) {
                
       const auto methodID = methodID__report();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_CLIENT_SESSION_REPORT_ABUSEREPORT$REPORTWITHID_HPP