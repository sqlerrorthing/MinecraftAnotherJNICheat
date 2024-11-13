// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_CLIENT_RESOURCE_LANGUAGE_LANGUAGEMANAGER_HPP
#define NET_MINECRAFT_CLIENT_RESOURCE_LANGUAGE_LANGUAGEMANAGER_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.client.resource.language.LanguageManager
 * Remapped: grt
 */
namespace LanguageManager {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("grt", "net/minecraft/client/resources/language/LanguageManager", "net/minecraft/class_1076", "net/minecraft/client/resource/language/LanguageManager", "net/minecraft/src/C_4515_"));
        }
        return cachedClass;
    };

    // getter for static private field net.minecraft.client.resource.language.LanguageManager#LOGGER
    [[maybe_unused]] static jobject get_field_LOGGER() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "LOGGER", "field_5325", "LOGGER", "f_118964_"), "Lorg/slf4j/Logger;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.resource.language.LanguageManager#LOGGER
    [[maybe_unused]] static void set_field_LOGGER(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "LOGGER", "field_5325", "LOGGER", "f_118964_"), "Lorg/slf4j/Logger;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.client.resource.language.LanguageManager#ENGLISH_US
    [[maybe_unused]] static jobject get_field_ENGLISH_US() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "DEFAULT_LANGUAGE", "field_25291", "ENGLISH_US", "f_118965_"), "Lgrs;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.resource.language.LanguageManager#ENGLISH_US
    [[maybe_unused]] static void set_field_ENGLISH_US(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "DEFAULT_LANGUAGE", "field_25291", "ENGLISH_US", "f_118965_"), "Lgrs;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for private field net.minecraft.client.resource.language.LanguageManager#languageDefs
    static jobject get_field_languageDefs(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "languages", "field_5324", "languageDefs", "f_118966_"), "Ljava/util/Map;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.resource.language.LanguageManager#languageDefs
    static void set_field_languageDefs(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "languages", "field_5324", "languageDefs", "f_118966_"), "Ljava/util/Map;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.resource.language.LanguageManager#currentLanguageCode
    static jobject get_field_currentLanguageCode(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "currentCode", "field_5323", "currentLanguageCode", "f_118967_"), "Ljava/lang/String;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.resource.language.LanguageManager#currentLanguageCode
    static void set_field_currentLanguageCode(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "currentCode", "field_5323", "currentLanguageCode", "f_118967_"), "Ljava/lang/String;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.resource.language.LanguageManager#reloadCallback
    static jobject get_field_reloadCallback(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "reloadCallback", "field_51830", "reloadCallback", "f_337104_"), "Ljava/util/function/Consumer;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.resource.language.LanguageManager#reloadCallback
    static void set_field_reloadCallback(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "reloadCallback", "field_51830", "reloadCallback", "f_337104_"), "Ljava/util/function/Consumer;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID_loadAvailableLanguages() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "extractLanguages", "method_29393", "loadAvailableLanguages", "m_118981_"), "(Ljava/util/stream/Stream;)Ljava/util/Map;");
    }

    static jobject loadAvailableLanguages(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_loadAvailableLanguages();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_reload() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "onResourceManagerReload", "method_14491", "reload", "m_6213_"), "(Laue;)V");
    }

    static void reload(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_reload();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_setLanguage() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "setSelected", "method_4667", "setLanguage", "m_264110_"), "(Ljava/lang/String;)V");
    }

    static void setLanguage(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_setLanguage();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_getLanguage() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getSelected", "method_4669", "getLanguage", "m_264236_"), "()Ljava/lang/String;");
    }

    static jobject getLanguage(const jobject& obj) {
                
       const auto methodID = methodID_getLanguage();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_getAllLanguages() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "getLanguages", "method_4665", "getAllLanguages", "m_264450_"), "()Ljava/util/SortedMap;");
    }

    static jobject getAllLanguages(const jobject& obj) {
                
       const auto methodID = methodID_getAllLanguages();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID__getLanguage() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "getLanguage", "method_4668", "getLanguage", "m_118976_"), "(Ljava/lang/String;)Lgrs;");
    }

    static jobject _getLanguage(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID__getLanguage();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
};

#endif // NET_MINECRAFT_CLIENT_RESOURCE_LANGUAGE_LANGUAGEMANAGER_HPP