// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_UTIL_APISERVICES_HPP
#define NET_MINECRAFT_UTIL_APISERVICES_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.util.ApiServices
 * Remapped: alm
 */
namespace ApiServices {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("alm", "net/minecraft/server/Services", "net/minecraft/class_7497", "net/minecraft/util/ApiServices", "net/minecraft/src/C_212929_"));
        }
        return cachedClass;
    };

    // getter for private field net.minecraft.util.ApiServices#sessionService
    static jobject get_field_sessionService(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "sessionService", "comp_837", "sessionService", "f_214333_"), "Lcom/mojang/authlib/minecraft/MinecraftSessionService;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.util.ApiServices#sessionService
    static void set_field_sessionService(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "sessionService", "comp_837", "sessionService", "f_214333_"), "Lcom/mojang/authlib/minecraft/MinecraftSessionService;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.util.ApiServices#servicesKeySet
    static jobject get_field_servicesKeySet(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "servicesKeySet", "comp_838", "servicesKeySet", "f_283795_"), "Lcom/mojang/authlib/yggdrasil/ServicesKeySet;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.util.ApiServices#servicesKeySet
    static void set_field_servicesKeySet(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "servicesKeySet", "comp_838", "servicesKeySet", "f_283795_"), "Lcom/mojang/authlib/yggdrasil/ServicesKeySet;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.util.ApiServices#profileRepository
    static jobject get_field_profileRepository(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "profileRepository", "comp_839", "profileRepository", "f_214335_"), "Lcom/mojang/authlib/GameProfileRepository;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.util.ApiServices#profileRepository
    static void set_field_profileRepository(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "profileRepository", "comp_839", "profileRepository", "f_214335_"), "Lcom/mojang/authlib/GameProfileRepository;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.util.ApiServices#userCache
    static jobject get_field_userCache(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "profileCache", "comp_840", "userCache", "f_214336_"), "Laun;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.util.ApiServices#userCache
    static void set_field_userCache(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "profileCache", "comp_840", "userCache", "f_214336_"), "Laun;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for static private field net.minecraft.util.ApiServices#USER_CACHE_FILE_NAME
    [[maybe_unused]] static jobject get_field_USER_CACHE_FILE_NAME() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("e", "USERID_CACHE_FILE", "field_39392", "USER_CACHE_FILE_NAME", "f_214337_"), "Ljava/lang/String;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.util.ApiServices#USER_CACHE_FILE_NAME
    [[maybe_unused]] static void set_field_USER_CACHE_FILE_NAME(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("e", "USERID_CACHE_FILE", "field_39392", "USER_CACHE_FILE_NAME", "f_214337_"), "Ljava/lang/String;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    static jmethodID methodID_create() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "create", "method_44143", "create", "m_214344_"), "(Lcom/mojang/authlib/yggdrasil/YggdrasilAuthenticationService;Ljava/io/File;)Lalm;");
    }

    static jobject create(const jobject& arg0, const jobject& arg1) {
       const auto clazz = self();
       const auto methodID = methodID_create();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_serviceSignatureVerifier() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "profileKeySignatureValidator", "method_51467", "serviceSignatureVerifier", "m_284133_"), "()Lazb;");
    }

    static jobject serviceSignatureVerifier(const jobject& obj) {
                
       const auto methodID = methodID_serviceSignatureVerifier();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_providesProfileKeys() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "canValidateProfileKeys", "method_55595", "providesProfileKeys", "m_305993_"), "()Z");
    }

    static jboolean providesProfileKeys(const jobject& obj) {
                
       const auto methodID = methodID_providesProfileKeys();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID);
    };
    
    static jmethodID methodID__sessionService() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "sessionService", "comp_837", "sessionService", "f_214333_"), "()Lcom/mojang/authlib/minecraft/MinecraftSessionService;");
    }

    static jobject _sessionService(const jobject& obj) {
                
       const auto methodID = methodID__sessionService();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID__servicesKeySet() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("d", "servicesKeySet", "comp_838", "servicesKeySet", "f_283795_"), "()Lcom/mojang/authlib/yggdrasil/ServicesKeySet;");
    }

    static jobject _servicesKeySet(const jobject& obj) {
                
       const auto methodID = methodID__servicesKeySet();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID__profileRepository() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("e", "profileRepository", "comp_839", "profileRepository", "f_214335_"), "()Lcom/mojang/authlib/GameProfileRepository;");
    }

    static jobject _profileRepository(const jobject& obj) {
                
       const auto methodID = methodID__profileRepository();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID__userCache() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("f", "profileCache", "comp_840", "userCache", "f_214336_"), "()Laun;");
    }

    static jobject _userCache(const jobject& obj) {
                
       const auto methodID = methodID__userCache();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_UTIL_APISERVICES_HPP