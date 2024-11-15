// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_CLIENT_REALMS_REALMSNEWSUPDATER_HPP
#define NET_MINECRAFT_CLIENT_REALMS_REALMSNEWSUPDATER_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.client.realms.RealmsNewsUpdater
 * Remapped: fdn
 */
namespace RealmsNewsUpdater {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("fdn", "com/mojang/realmsclient/gui/RealmsNewsManager", "net/minecraft/class_7579", "net/minecraft/client/realms/RealmsNewsUpdater", "net/minecraft/src/C_238479_"));
        }
        return cachedClass;
    };

    // getter for private field net.minecraft.client.realms.RealmsNewsUpdater#persistence
    static jobject get_field_persistence(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "newsLocalStorage", "field_39689", "persistence", "f_238804_"), "Lffb;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.realms.RealmsNewsUpdater#persistence
    static void set_field_persistence(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "newsLocalStorage", "field_39689", "persistence", "f_238804_"), "Lffb;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.realms.RealmsNewsUpdater#hasUnreadNews
    static jboolean get_field_hasUnreadNews(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "hasUnreadNews", "field_39690", "hasUnreadNews", "f_238831_"), "Z");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetBooleanField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.realms.RealmsNewsUpdater#hasUnreadNews
    static void set_field_hasUnreadNews(const jobject &obj, const jboolean &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "hasUnreadNews", "field_39690", "hasUnreadNews", "f_238831_"), "Z");
        return MinecraftSDK::env->SetBooleanField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.realms.RealmsNewsUpdater#newsLink
    static jobject get_field_newsLink(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "newsLink", "field_39691", "newsLink", "f_238573_"), "Ljava/lang/String;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.realms.RealmsNewsUpdater#newsLink
    static void set_field_newsLink(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "newsLink", "field_39691", "newsLink", "f_238573_"), "Ljava/lang/String;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID__hasUnreadNews() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "hasUnreadNews", "method_44618", "hasUnreadNews", "m_239499_"), "()Z");
    }

    static jboolean _hasUnreadNews(const jobject& obj) {
                
       const auto methodID = methodID__hasUnreadNews();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID);
    };
    
    static jmethodID methodID_getNewsLink() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "newsLink", "method_44620", "getNewsLink", "m_240058_"), "()Ljava/lang/String;");
    }

    static jobject getNewsLink(const jobject& obj) {
                
       const auto methodID = methodID_getNewsLink();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_updateNews() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "updateUnreadNews", "method_44619", "updateNews", "m_239190_"), "(Lfcn;)V");
    }

    static void updateNews(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_updateNews();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_checkLinkUpdated() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "updateNewsStorage", "method_44621", "checkLinkUpdated", "m_240152_"), "(Lfcn;)Lffb$a;");
    }

    static jobject checkLinkUpdated(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_checkLinkUpdated();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
};

#endif // NET_MINECRAFT_CLIENT_REALMS_REALMSNEWSUPDATER_HPP