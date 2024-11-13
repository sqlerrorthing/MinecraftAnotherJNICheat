// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_SERVER_BANNEDPLAYERENTRY_HPP
#define NET_MINECRAFT_SERVER_BANNEDPLAYERENTRY_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.server.BannedPlayerEntry
 * Remapped: auz
 */
namespace BannedPlayerEntry {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("auz", "net/minecraft/server/players/UserBanListEntry", "net/minecraft/class_3336", "net/minecraft/server/BannedPlayerEntry", "net/minecraft/src/C_110_"));
        }
        return cachedClass;
    };

    static jmethodID methodID_write() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "serialize", "method_24896", "write", "m_6009_"), "(Lcom/google/gson/JsonObject;)V");
    }

    static void write(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_write();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_toText() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("e", "getDisplayName", "method_14504", "toText", "m_8003_"), "()Lwz;");
    }

    static jobject toText(const jobject& obj) {
                
       const auto methodID = methodID_toText();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_profileFromJson() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("b", "createGameProfile", "method_14651", "profileFromJson", "m_11445_"), "(Lcom/google/gson/JsonObject;)Lcom/mojang/authlib/GameProfile;");
    }

    static jobject profileFromJson(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_profileFromJson();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0);
    };
    
};

#endif // NET_MINECRAFT_SERVER_BANNEDPLAYERENTRY_HPP