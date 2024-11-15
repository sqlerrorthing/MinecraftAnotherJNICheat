// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_SERVER_OPERATORLIST_HPP
#define NET_MINECRAFT_SERVER_OPERATORLIST_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.server.OperatorList
 * Remapped: aus
 */
namespace OperatorList {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("aus", "net/minecraft/server/players/ServerOpList", "net/minecraft/class_3326", "net/minecraft/server/OperatorList", "net/minecraft/src/C_104_"));
        }
        return cachedClass;
    };

    static jmethodID methodID_fromJson() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "createEntry", "method_14642", "fromJson", "m_6666_"), "(Lcom/google/gson/JsonObject;)Lauv;");
    }

    static jobject fromJson(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_fromJson();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_getNames() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getUserList", "method_14636", "getNames", "m_5875_"), "()[Ljava/lang/String;");
    }

    static jobject getNames(const jobject& obj) {
                
       const auto methodID = methodID_getNames();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_canBypassPlayerLimit() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "canBypassPlayerLimit", "method_14620", "canBypassPlayerLimit", "m_11351_"), "(Lcom/mojang/authlib/GameProfile;)Z");
    }

    static jboolean canBypassPlayerLimit(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_canBypassPlayerLimit();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_toString() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "getKeyForUser", "method_14619", "toString", "m_5981_"), "(Lcom/mojang/authlib/GameProfile;)Ljava/lang/String;");
    }

    static jobject toString(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_toString();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
};

#endif // NET_MINECRAFT_SERVER_OPERATORLIST_HPP