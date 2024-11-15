// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_CLIENT_SESSION_REPORT_ABUSEREPORTCONTEXT_HPP
#define NET_MINECRAFT_CLIENT_SESSION_REPORT_ABUSEREPORTCONTEXT_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.client.session.report.AbuseReportContext
 * Remapped: gao
 */
namespace AbuseReportContext {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("gao", "net/minecraft/client/multiplayer/chat/report/ReportingContext", "net/minecraft/class_7574", "net/minecraft/client/session/report/AbuseReportContext", "net/minecraft/src/C_238495_"));
        }
        return cachedClass;
    };

    // getter for static private field net.minecraft.client.session.report.AbuseReportContext#MAX_LOGS
    [[maybe_unused]] static jint get_field_MAX_LOGS() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "LOG_CAPACITY", "field_39675", "MAX_LOGS", "f_238714_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.session.report.AbuseReportContext#MAX_LOGS
    [[maybe_unused]] static void set_field_MAX_LOGS(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "LOG_CAPACITY", "field_39675", "MAX_LOGS", "f_238714_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for private field net.minecraft.client.session.report.AbuseReportContext#sender
    static jobject get_field_sender(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "sender", "field_40819", "sender", "f_238706_"), "Lgaf;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.session.report.AbuseReportContext#sender
    static void set_field_sender(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "sender", "field_40819", "sender", "f_238706_"), "Lgaf;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.session.report.AbuseReportContext#environment
    static jobject get_field_environment(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "environment", "field_40820", "environment", "f_238644_"), "Lgal;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.session.report.AbuseReportContext#environment
    static void set_field_environment(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "environment", "field_40820", "environment", "f_238644_"), "Lgal;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.session.report.AbuseReportContext#chatLog
    static jobject get_field_chatLog(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "chatLog", "field_40821", "chatLog", "f_238743_"), "Lgaa;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.session.report.AbuseReportContext#chatLog
    static void set_field_chatLog(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "chatLog", "field_40821", "chatLog", "f_238743_"), "Lgaa;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.session.report.AbuseReportContext#draft
    static jobject get_field_draft(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "draftReport", "field_40822", "draft", "f_291668_"), "Lgak;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.session.report.AbuseReportContext#draft
    static void set_field_draft(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "draftReport", "field_40822", "draft", "f_291668_"), "Lgak;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID_create() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "create", "method_44599", "create", "m_239685_"), "(Lgal;Lcom/mojang/authlib/minecraft/UserApiService;)Lgao;");
    }

    static jobject create(const jobject& arg0, const jobject& arg1) {
       const auto clazz = self();
       const auto methodID = methodID_create();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_tryShowDraftScreen() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "draftReportHandled", "method_46552", "tryShowDraftScreen", "m_261157_"), "(Lfgo;Lfod;Ljava/lang/Runnable;Z)V");
    }

    static void tryShowDraftScreen(const jobject& obj, const jobject& arg0, const jobject& arg1, const jobject& arg2, const jboolean& arg3) {
                
       const auto methodID = methodID_tryShowDraftScreen();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1, arg2, arg3);
    };
    
    static jmethodID methodID_getSender() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "sender", "method_46550", "getSender", "m_240161_"), "()Lgaf;");
    }

    static jobject getSender(const jobject& obj) {
                
       const auto methodID = methodID_getSender();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_getChatLog() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "chatLog", "method_46555", "getChatLog", "m_239899_"), "()Lgaa;");
    }

    static jobject getChatLog(const jobject& obj) {
                
       const auto methodID = methodID_getChatLog();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_environmentEquals() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "matches", "method_44598", "environmentEquals", "m_239733_"), "(Lgal;)Z");
    }

    static jboolean environmentEquals(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_environmentEquals();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_setDraft() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "setReportDraft", "method_46553", "setDraft", "m_293837_"), "(Lgak;)V");
    }

    static void setDraft(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_setDraft();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_hasDraft() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "hasDraftReport", "method_46556", "hasDraft", "m_253142_"), "()Z");
    }

    static jboolean hasDraft(const jobject& obj) {
                
       const auto methodID = methodID_hasDraft();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID);
    };
    
    static jmethodID methodID_draftPlayerUuidEquals() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "hasDraftReportFor", "method_46554", "draftPlayerUuidEquals", "m_253247_"), "(Ljava/util/UUID;)Z");
    }

    static jboolean draftPlayerUuidEquals(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_draftPlayerUuidEquals();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0);
    };
    
};

#endif // NET_MINECRAFT_CLIENT_SESSION_REPORT_ABUSEREPORTCONTEXT_HPP