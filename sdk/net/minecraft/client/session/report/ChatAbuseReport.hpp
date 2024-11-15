// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_CLIENT_SESSION_REPORT_CHATABUSEREPORT_HPP
#define NET_MINECRAFT_CLIENT_SESSION_REPORT_CHATABUSEREPORT_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.client.session.report.ChatAbuseReport
 * Remapped: gah
 */
namespace ChatAbuseReport {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("gah", "net/minecraft/client/multiplayer/chat/report/ChatReport", "net/minecraft/class_7566", "net/minecraft/client/session/report/ChatAbuseReport", "net/minecraft/src/C_290279_"));
        }
        return cachedClass;
    };

    // getter for default field net.minecraft.client.session.report.ChatAbuseReport#selectedMessages
    static jobject get_field_selectedMessages(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("g", "reportedMessages", "field_46059", "selectedMessages", "f_290950_"), "Lit/unimi/dsi/fastutil/ints/IntSet;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static default field net.minecraft.client.session.report.ChatAbuseReport#selectedMessages
    static void set_field_selectedMessages(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("g", "reportedMessages", "field_46059", "selectedMessages", "f_290950_"), "Lit/unimi/dsi/fastutil/ints/IntSet;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID_toggleMessageSelection() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "toggleReported", "method_44569", "toggleMessageSelection", "m_295024_"), "(ILcom/mojang/authlib/minecraft/report/AbuseReportLimits;)V");
    }

    static void toggleMessageSelection(const jobject& obj, const jint& arg0, const jobject& arg1) {
                
       const auto methodID = methodID_toggleMessageSelection();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_copy() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "copy", "method_44585", "copy", "m_292702_"), "()Lgah;");
    }

    static jobject copy(const jobject& obj) {
                
       const auto methodID = methodID_copy();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_createReportScreen() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "createScreen", "method_53596", "createReportScreen", "m_293205_"), "(Lfod;Lgao;)Lfod;");
    }

    static jobject createReportScreen(const jobject& obj, const jobject& arg0, const jobject& arg1) {
                
       const auto methodID = methodID_createReportScreen();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1);
    };
    
};

#endif // NET_MINECRAFT_CLIENT_SESSION_REPORT_CHATABUSEREPORT_HPP