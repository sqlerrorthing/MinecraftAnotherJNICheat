// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_CLIENT_REALMS_DTO_REALMSNOTIFICATION$URLBUTTON_HPP
#define NET_MINECRAFT_CLIENT_REALMS_DTO_REALMSNOTIFICATION$URLBUTTON_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.client.realms.dto.RealmsNotification$UrlButton
 * Remapped: fco$b
 */
namespace RealmsNotification$UrlButton {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("fco$b", "com/mojang/realmsclient/dto/RealmsNotification$UrlButton", "net/minecraft/class_8204$class_8815", "net/minecraft/client/realms/dto/RealmsNotification$UrlButton", "net/minecraft/src/C_273792_$C_301915_"));
        }
        return cachedClass;
    };

    // getter for default field net.minecraft.client.realms.dto.RealmsNotification$UrlButton#url
    static jobject get_field_url(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "url", "comp_1974", "url", "f_303755_"), "Ljava/lang/String;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static default field net.minecraft.client.realms.dto.RealmsNotification$UrlButton#url
    static void set_field_url(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "url", "comp_1974", "url", "f_303755_"), "Ljava/lang/String;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for default field net.minecraft.client.realms.dto.RealmsNotification$UrlButton#urlText
    static jobject get_field_urlText(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "urlText", "comp_1975", "urlText", "f_302705_"), "Lfct;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static default field net.minecraft.client.realms.dto.RealmsNotification$UrlButton#urlText
    static void set_field_urlText(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "urlText", "comp_1975", "urlText", "f_302705_"), "Lfct;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for static private field net.minecraft.client.realms.dto.RealmsNotification$UrlButton#URL_KEY
    [[maybe_unused]] static jobject get_field_URL_KEY() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "URL", "field_46548", "URL_KEY", "f_303560_"), "Ljava/lang/String;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.realms.dto.RealmsNotification$UrlButton#URL_KEY
    [[maybe_unused]] static void set_field_URL_KEY(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "URL", "field_46548", "URL_KEY", "f_303560_"), "Ljava/lang/String;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.client.realms.dto.RealmsNotification$UrlButton#URL_TEXT_KEY
    [[maybe_unused]] static jobject get_field_URL_TEXT_KEY() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("d", "URL_TEXT", "field_46549", "URL_TEXT_KEY", "f_303091_"), "Ljava/lang/String;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.realms.dto.RealmsNotification$UrlButton#URL_TEXT_KEY
    [[maybe_unused]] static void set_field_URL_TEXT_KEY(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("d", "URL_TEXT", "field_46549", "URL_TEXT_KEY", "f_303091_"), "Ljava/lang/String;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    static jmethodID methodID_fromJson() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "parse", "method_54113", "fromJson", "m_305558_"), "(Lcom/google/gson/JsonObject;)Lfco$b;");
    }

    static jobject fromJson(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_fromJson();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID__url() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "url", "comp_1974", "url", "f_303755_"), "()Ljava/lang/String;");
    }

    static jobject _url(const jobject& obj) {
                
       const auto methodID = methodID__url();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID__urlText() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "urlText", "comp_1975", "urlText", "f_302705_"), "()Lfct;");
    }

    static jobject _urlText(const jobject& obj) {
                
       const auto methodID = methodID__urlText();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_CLIENT_REALMS_DTO_REALMSNOTIFICATION$URLBUTTON_HPP