// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_UTIL_URLS_HPP
#define NET_MINECRAFT_UTIL_URLS_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.util.Urls
 * Remapped: axj
 */
namespace Urls {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("axj", "net/minecraft/util/CommonLinks", "net/minecraft/class_8216", "net/minecraft/util/Urls", "net/minecraft/src/C_276131_"));
        }
        return cachedClass;
    };

    // getter for static public field net.minecraft.util.Urls#GDPR
    [[maybe_unused]] static jobject get_field_GDPR() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "GDPR", "field_43117", "GDPR", "f_276156_"), "Ljava/net/URI;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.util.Urls#GDPR
    [[maybe_unused]] static void set_field_GDPR(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "GDPR", "field_43117", "GDPR", "f_276156_"), "Ljava/net/URI;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.util.Urls#EULA
    [[maybe_unused]] static jobject get_field_EULA() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "EULA", "field_43118", "EULA", "f_276140_"), "Ljava/net/URI;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.util.Urls#EULA
    [[maybe_unused]] static void set_field_EULA(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "EULA", "field_43118", "EULA", "f_276140_"), "Ljava/net/URI;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.util.Urls#PRIVACY_STATEMENT
    [[maybe_unused]] static jobject get_field_PRIVACY_STATEMENT() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "PRIVACY_STATEMENT", "field_45074", "PRIVACY_STATEMENT", "f_291224_"), "Ljava/net/URI;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.util.Urls#PRIVACY_STATEMENT
    [[maybe_unused]] static void set_field_PRIVACY_STATEMENT(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "PRIVACY_STATEMENT", "field_45074", "PRIVACY_STATEMENT", "f_291224_"), "Ljava/net/URI;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.util.Urls#JAVA_ATTRIBUTION
    [[maybe_unused]] static jobject get_field_JAVA_ATTRIBUTION() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("d", "ATTRIBUTION", "field_43119", "JAVA_ATTRIBUTION", "f_276141_"), "Ljava/net/URI;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.util.Urls#JAVA_ATTRIBUTION
    [[maybe_unused]] static void set_field_JAVA_ATTRIBUTION(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("d", "ATTRIBUTION", "field_43119", "JAVA_ATTRIBUTION", "f_276141_"), "Ljava/net/URI;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.util.Urls#JAVA_LICENSES
    [[maybe_unused]] static jobject get_field_JAVA_LICENSES() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("e", "LICENSES", "field_43120", "JAVA_LICENSES", "f_276152_"), "Ljava/net/URI;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.util.Urls#JAVA_LICENSES
    [[maybe_unused]] static void set_field_JAVA_LICENSES(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("e", "LICENSES", "field_43120", "JAVA_LICENSES", "f_276152_"), "Ljava/net/URI;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.util.Urls#BUY_JAVA
    [[maybe_unused]] static jobject get_field_BUY_JAVA() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("f", "BUY_MINECRAFT_JAVA", "field_43121", "BUY_JAVA", "f_276151_"), "Ljava/net/URI;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.util.Urls#BUY_JAVA
    [[maybe_unused]] static void set_field_BUY_JAVA(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("f", "BUY_MINECRAFT_JAVA", "field_43121", "BUY_JAVA", "f_276151_"), "Ljava/net/URI;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.util.Urls#JAVA_ACCOUNT_SETTINGS
    [[maybe_unused]] static jobject get_field_JAVA_ACCOUNT_SETTINGS() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("g", "ACCOUNT_SETTINGS", "field_43122", "JAVA_ACCOUNT_SETTINGS", "f_276144_"), "Ljava/net/URI;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.util.Urls#JAVA_ACCOUNT_SETTINGS
    [[maybe_unused]] static void set_field_JAVA_ACCOUNT_SETTINGS(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("g", "ACCOUNT_SETTINGS", "field_43122", "JAVA_ACCOUNT_SETTINGS", "f_276144_"), "Ljava/net/URI;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.util.Urls#SNAPSHOT_FEEDBACK
    [[maybe_unused]] static jobject get_field_SNAPSHOT_FEEDBACK() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("h", "SNAPSHOT_FEEDBACK", "field_43123", "SNAPSHOT_FEEDBACK", "f_276142_"), "Ljava/net/URI;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.util.Urls#SNAPSHOT_FEEDBACK
    [[maybe_unused]] static void set_field_SNAPSHOT_FEEDBACK(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("h", "SNAPSHOT_FEEDBACK", "field_43123", "SNAPSHOT_FEEDBACK", "f_276142_"), "Ljava/net/URI;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.util.Urls#JAVA_FEEDBACK
    [[maybe_unused]] static jobject get_field_JAVA_FEEDBACK() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("i", "RELEASE_FEEDBACK", "field_43124", "JAVA_FEEDBACK", "f_276150_"), "Ljava/net/URI;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.util.Urls#JAVA_FEEDBACK
    [[maybe_unused]] static void set_field_JAVA_FEEDBACK(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("i", "RELEASE_FEEDBACK", "field_43124", "JAVA_FEEDBACK", "f_276150_"), "Ljava/net/URI;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.util.Urls#SNAPSHOT_BUGS
    [[maybe_unused]] static jobject get_field_SNAPSHOT_BUGS() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("j", "SNAPSHOT_BUGS_FEEDBACK", "field_43125", "SNAPSHOT_BUGS", "f_276147_"), "Ljava/net/URI;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.util.Urls#SNAPSHOT_BUGS
    [[maybe_unused]] static void set_field_SNAPSHOT_BUGS(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("j", "SNAPSHOT_BUGS_FEEDBACK", "field_43125", "SNAPSHOT_BUGS", "f_276147_"), "Ljava/net/URI;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.util.Urls#MINECRAFT_SUPPORT
    [[maybe_unused]] static jobject get_field_MINECRAFT_SUPPORT() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("k", "GENERAL_HELP", "field_46769", "MINECRAFT_SUPPORT", "f_302193_"), "Ljava/net/URI;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.util.Urls#MINECRAFT_SUPPORT
    [[maybe_unused]] static void set_field_MINECRAFT_SUPPORT(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("k", "GENERAL_HELP", "field_46769", "MINECRAFT_SUPPORT", "f_302193_"), "Ljava/net/URI;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.util.Urls#JAVA_ACCESSIBILITY
    [[maybe_unused]] static jobject get_field_JAVA_ACCESSIBILITY() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("l", "ACCESSIBILITY_HELP", "field_43126", "JAVA_ACCESSIBILITY", "f_276157_"), "Ljava/net/URI;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.util.Urls#JAVA_ACCESSIBILITY
    [[maybe_unused]] static void set_field_JAVA_ACCESSIBILITY(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("l", "ACCESSIBILITY_HELP", "field_43126", "JAVA_ACCESSIBILITY", "f_276157_"), "Ljava/net/URI;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.util.Urls#ABOUT_JAVA_REPORTING
    [[maybe_unused]] static jobject get_field_ABOUT_JAVA_REPORTING() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("m", "REPORTING_HELP", "field_43127", "ABOUT_JAVA_REPORTING", "f_276160_"), "Ljava/net/URI;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.util.Urls#ABOUT_JAVA_REPORTING
    [[maybe_unused]] static void set_field_ABOUT_JAVA_REPORTING(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("m", "REPORTING_HELP", "field_43127", "ABOUT_JAVA_REPORTING", "f_276160_"), "Ljava/net/URI;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.util.Urls#JAVA_MODERATION
    [[maybe_unused]] static jobject get_field_JAVA_MODERATION() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("n", "SUSPENSION_HELP", "field_43128", "JAVA_MODERATION", "f_276139_"), "Ljava/net/URI;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.util.Urls#JAVA_MODERATION
    [[maybe_unused]] static void set_field_JAVA_MODERATION(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("n", "SUSPENSION_HELP", "field_43128", "JAVA_MODERATION", "f_276139_"), "Ljava/net/URI;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.util.Urls#JAVA_BLOCKING
    [[maybe_unused]] static jobject get_field_JAVA_BLOCKING() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("o", "BLOCKING_HELP", "field_43129", "JAVA_BLOCKING", "f_276158_"), "Ljava/net/URI;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.util.Urls#JAVA_BLOCKING
    [[maybe_unused]] static void set_field_JAVA_BLOCKING(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("o", "BLOCKING_HELP", "field_43129", "JAVA_BLOCKING", "f_276158_"), "Ljava/net/URI;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.util.Urls#MINECRAFT_SYMLINKS
    [[maybe_unused]] static jobject get_field_MINECRAFT_SYMLINKS() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("p", "SYMLINK_HELP", "field_44949", "MINECRAFT_SYMLINKS", "f_289836_"), "Ljava/net/URI;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.util.Urls#MINECRAFT_SYMLINKS
    [[maybe_unused]] static void set_field_MINECRAFT_SYMLINKS(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("p", "SYMLINK_HELP", "field_44949", "MINECRAFT_SYMLINKS", "f_289836_"), "Ljava/net/URI;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.util.Urls#JAVA_REALMS_TRIAL
    [[maybe_unused]] static jobject get_field_JAVA_REALMS_TRIAL() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("q", "START_REALMS_TRIAL", "field_43130", "JAVA_REALMS_TRIAL", "f_276149_"), "Ljava/net/URI;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.util.Urls#JAVA_REALMS_TRIAL
    [[maybe_unused]] static void set_field_JAVA_REALMS_TRIAL(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("q", "START_REALMS_TRIAL", "field_43130", "JAVA_REALMS_TRIAL", "f_276149_"), "Ljava/net/URI;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.util.Urls#BUY_JAVA_REALMS
    [[maybe_unused]] static jobject get_field_BUY_JAVA_REALMS() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("r", "BUY_REALMS", "field_43131", "BUY_JAVA_REALMS", "f_276145_"), "Ljava/net/URI;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.util.Urls#BUY_JAVA_REALMS
    [[maybe_unused]] static void set_field_BUY_JAVA_REALMS(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("r", "BUY_REALMS", "field_43131", "BUY_JAVA_REALMS", "f_276145_"), "Ljava/net/URI;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.util.Urls#REALMS_TERMS
    [[maybe_unused]] static jobject get_field_REALMS_TERMS() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("s", "REALMS_TERMS", "field_43132", "REALMS_TERMS", "f_276134_"), "Ljava/net/URI;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.util.Urls#REALMS_TERMS
    [[maybe_unused]] static void set_field_REALMS_TERMS(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("s", "REALMS_TERMS", "field_43132", "REALMS_TERMS", "f_276134_"), "Ljava/net/URI;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.util.Urls#REALMS_CONTENT_CREATOR
    [[maybe_unused]] static jobject get_field_REALMS_CONTENT_CREATOR() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("t", "REALMS_CONTENT_CREATION", "field_43133", "REALMS_CONTENT_CREATOR", "f_276159_"), "Ljava/net/URI;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.util.Urls#REALMS_CONTENT_CREATOR
    [[maybe_unused]] static void set_field_REALMS_CONTENT_CREATOR(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("t", "REALMS_CONTENT_CREATION", "field_43133", "REALMS_CONTENT_CREATOR", "f_276159_"), "Ljava/net/URI;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    static jmethodID methodID_getExtendJavaRealmsUrl() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "extendRealms", "method_49720", "getExtendJavaRealmsUrl", "m_276218_"), "(Ljava/lang/String;Ljava/util/UUID;Z)Ljava/lang/String;");
    }

    static jobject getExtendJavaRealmsUrl(const jobject& arg0, const jobject& arg1, const jboolean& arg2) {
       const auto clazz = self();
       const auto methodID = methodID_getExtendJavaRealmsUrl();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0, arg1, arg2);
    };
    
    static jmethodID methodID__getExtendJavaRealmsUrl() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "extendRealms", "method_49719", "getExtendJavaRealmsUrl", "m_276215_"), "(Ljava/lang/String;Ljava/util/UUID;)Ljava/lang/String;");
    }

    static jobject _getExtendJavaRealmsUrl(const jobject& arg0, const jobject& arg1) {
       const auto clazz = self();
       const auto methodID = methodID__getExtendJavaRealmsUrl();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0, arg1);
    };
    
};

#endif // NET_MINECRAFT_UTIL_URLS_HPP