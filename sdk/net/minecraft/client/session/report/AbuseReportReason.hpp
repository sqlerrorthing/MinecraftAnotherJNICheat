// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_CLIENT_SESSION_REPORT_ABUSEREPORTREASON_HPP
#define NET_MINECRAFT_CLIENT_SESSION_REPORT_ABUSEREPORTREASON_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.client.session.report.AbuseReportReason
 * Remapped: gam
 */
namespace AbuseReportReason {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("gam", "net/minecraft/client/multiplayer/chat/report/ReportReason", "net/minecraft/class_7573", "net/minecraft/client/session/report/AbuseReportReason", "net/minecraft/src/C_238466_"));
        }
        return cachedClass;
    };

    // getter for static public field net.minecraft.client.session.report.AbuseReportReason#GENERIC
    [[maybe_unused]] static jobject get_field_GENERIC() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "GENERIC", "field_46063", "GENERIC", "GENERIC"), "Lgam;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.client.session.report.AbuseReportReason#GENERIC
    [[maybe_unused]] static void set_field_GENERIC(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "GENERIC", "field_46063", "GENERIC", "GENERIC"), "Lgam;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.client.session.report.AbuseReportReason#HATE_SPEECH
    [[maybe_unused]] static jobject get_field_HATE_SPEECH() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "HATE_SPEECH", "field_39659", "HATE_SPEECH", "HATE_SPEECH"), "Lgam;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.client.session.report.AbuseReportReason#HATE_SPEECH
    [[maybe_unused]] static void set_field_HATE_SPEECH(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "HATE_SPEECH", "field_39659", "HATE_SPEECH", "HATE_SPEECH"), "Lgam;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.client.session.report.AbuseReportReason#HARASSMENT_OR_BULLYING
    [[maybe_unused]] static jobject get_field_HARASSMENT_OR_BULLYING() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "HARASSMENT_OR_BULLYING", "field_39664", "HARASSMENT_OR_BULLYING", "HARASSMENT_OR_BULLYING"), "Lgam;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.client.session.report.AbuseReportReason#HARASSMENT_OR_BULLYING
    [[maybe_unused]] static void set_field_HARASSMENT_OR_BULLYING(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "HARASSMENT_OR_BULLYING", "field_39664", "HARASSMENT_OR_BULLYING", "HARASSMENT_OR_BULLYING"), "Lgam;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.client.session.report.AbuseReportReason#SELF_HARM_OR_SUICIDE
    [[maybe_unused]] static jobject get_field_SELF_HARM_OR_SUICIDE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("d", "SELF_HARM_OR_SUICIDE", "field_39667", "SELF_HARM_OR_SUICIDE", "SELF_HARM_OR_SUICIDE"), "Lgam;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.client.session.report.AbuseReportReason#SELF_HARM_OR_SUICIDE
    [[maybe_unused]] static void set_field_SELF_HARM_OR_SUICIDE(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("d", "SELF_HARM_OR_SUICIDE", "field_39667", "SELF_HARM_OR_SUICIDE", "SELF_HARM_OR_SUICIDE"), "Lgam;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.client.session.report.AbuseReportReason#IMMINENT_HARM
    [[maybe_unused]] static jobject get_field_IMMINENT_HARM() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("e", "IMMINENT_HARM", "field_39662", "IMMINENT_HARM", "IMMINENT_HARM"), "Lgam;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.client.session.report.AbuseReportReason#IMMINENT_HARM
    [[maybe_unused]] static void set_field_IMMINENT_HARM(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("e", "IMMINENT_HARM", "field_39662", "IMMINENT_HARM", "IMMINENT_HARM"), "Lgam;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.client.session.report.AbuseReportReason#DEFAMATION_IMPERSONATION_FALSE_INFORMATION
    [[maybe_unused]] static jobject get_field_DEFAMATION_IMPERSONATION_FALSE_INFORMATION() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("f", "DEFAMATION_IMPERSONATION_FALSE_INFORMATION", "field_39666", "DEFAMATION_IMPERSONATION_FALSE_INFORMATION", "DEFAMATION_IMPERSONATION_FALSE_INFORMATION"), "Lgam;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.client.session.report.AbuseReportReason#DEFAMATION_IMPERSONATION_FALSE_INFORMATION
    [[maybe_unused]] static void set_field_DEFAMATION_IMPERSONATION_FALSE_INFORMATION(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("f", "DEFAMATION_IMPERSONATION_FALSE_INFORMATION", "field_39666", "DEFAMATION_IMPERSONATION_FALSE_INFORMATION", "DEFAMATION_IMPERSONATION_FALSE_INFORMATION"), "Lgam;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.client.session.report.AbuseReportReason#ALCOHOL_TOBACCO_DRUGS
    [[maybe_unused]] static jobject get_field_ALCOHOL_TOBACCO_DRUGS() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("g", "ALCOHOL_TOBACCO_DRUGS", "field_39670", "ALCOHOL_TOBACCO_DRUGS", "ALCOHOL_TOBACCO_DRUGS"), "Lgam;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.client.session.report.AbuseReportReason#ALCOHOL_TOBACCO_DRUGS
    [[maybe_unused]] static void set_field_ALCOHOL_TOBACCO_DRUGS(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("g", "ALCOHOL_TOBACCO_DRUGS", "field_39670", "ALCOHOL_TOBACCO_DRUGS", "ALCOHOL_TOBACCO_DRUGS"), "Lgam;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.client.session.report.AbuseReportReason#CHILD_SEXUAL_EXPLOITATION_OR_ABUSE
    [[maybe_unused]] static jobject get_field_CHILD_SEXUAL_EXPLOITATION_OR_ABUSE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("h", "CHILD_SEXUAL_EXPLOITATION_OR_ABUSE", "field_39661", "CHILD_SEXUAL_EXPLOITATION_OR_ABUSE", "CHILD_SEXUAL_EXPLOITATION_OR_ABUSE"), "Lgam;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.client.session.report.AbuseReportReason#CHILD_SEXUAL_EXPLOITATION_OR_ABUSE
    [[maybe_unused]] static void set_field_CHILD_SEXUAL_EXPLOITATION_OR_ABUSE(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("h", "CHILD_SEXUAL_EXPLOITATION_OR_ABUSE", "field_39661", "CHILD_SEXUAL_EXPLOITATION_OR_ABUSE", "CHILD_SEXUAL_EXPLOITATION_OR_ABUSE"), "Lgam;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.client.session.report.AbuseReportReason#TERRORISM_OR_VIOLENT_EXTREMISM
    [[maybe_unused]] static jobject get_field_TERRORISM_OR_VIOLENT_EXTREMISM() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("i", "TERRORISM_OR_VIOLENT_EXTREMISM", "field_39660", "TERRORISM_OR_VIOLENT_EXTREMISM", "TERRORISM_OR_VIOLENT_EXTREMISM"), "Lgam;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.client.session.report.AbuseReportReason#TERRORISM_OR_VIOLENT_EXTREMISM
    [[maybe_unused]] static void set_field_TERRORISM_OR_VIOLENT_EXTREMISM(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("i", "TERRORISM_OR_VIOLENT_EXTREMISM", "field_39660", "TERRORISM_OR_VIOLENT_EXTREMISM", "TERRORISM_OR_VIOLENT_EXTREMISM"), "Lgam;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.client.session.report.AbuseReportReason#NON_CONSENSUAL_INTIMATE_IMAGERY
    [[maybe_unused]] static jobject get_field_NON_CONSENSUAL_INTIMATE_IMAGERY() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("j", "NON_CONSENSUAL_INTIMATE_IMAGERY", "field_39663", "NON_CONSENSUAL_INTIMATE_IMAGERY", "NON_CONSENSUAL_INTIMATE_IMAGERY"), "Lgam;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.client.session.report.AbuseReportReason#NON_CONSENSUAL_INTIMATE_IMAGERY
    [[maybe_unused]] static void set_field_NON_CONSENSUAL_INTIMATE_IMAGERY(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("j", "NON_CONSENSUAL_INTIMATE_IMAGERY", "field_39663", "NON_CONSENSUAL_INTIMATE_IMAGERY", "NON_CONSENSUAL_INTIMATE_IMAGERY"), "Lgam;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for private field net.minecraft.client.session.report.AbuseReportReason#id
    static jobject get_field_id(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("k", "backendName", "field_39671", "id", "f_238735_"), "Ljava/lang/String;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.session.report.AbuseReportReason#id
    static void set_field_id(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("k", "backendName", "field_39671", "id", "f_238735_"), "Ljava/lang/String;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.session.report.AbuseReportReason#text
    static jobject get_field_text(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("l", "title", "field_39672", "text", "f_238806_"), "Lwz;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.session.report.AbuseReportReason#text
    static void set_field_text(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("l", "title", "field_39672", "text", "f_238806_"), "Lwz;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.session.report.AbuseReportReason#description
    static jobject get_field_description(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("m", "description", "field_39673", "description", "f_238818_"), "Lwz;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.session.report.AbuseReportReason#description
    static void set_field_description(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("m", "description", "field_39673", "description", "f_238818_"), "Lwz;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID_values() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("values", "values", "values", "values", "values"), "()[Lgam;");
    }

    static jobject values() {
       const auto clazz = self();
       const auto methodID = methodID_values();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID);
    };
    
    static jmethodID methodID_valueOf() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("valueOf", "valueOf", "valueOf", "valueOf", "valueOf"), "(Ljava/lang/String;)Lgam;");
    }

    static jobject valueOf(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_valueOf();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_getId() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "backendName", "method_44594", "getId", "m_239892_"), "()Ljava/lang/String;");
    }

    static jobject getId(const jobject& obj) {
                
       const auto methodID = methodID_getId();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_getText() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "title", "method_44595", "getText", "m_239342_"), "()Lwz;");
    }

    static jobject getText(const jobject& obj) {
                
       const auto methodID = methodID_getText();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_getDescription() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "description", "method_44596", "getDescription", "m_240151_"), "()Lwz;");
    }

    static jobject getDescription(const jobject& obj) {
                
       const auto methodID = methodID_getDescription();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_CLIENT_SESSION_REPORT_ABUSEREPORTREASON_HPP