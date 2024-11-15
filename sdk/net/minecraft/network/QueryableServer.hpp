// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_NETWORK_QUERYABLESERVER_HPP
#define NET_MINECRAFT_NETWORK_QUERYABLESERVER_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.network.QueryableServer
 * Remapped: alh
 */
namespace QueryableServer {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("alh", "net/minecraft/server/ServerInfo", "net/minecraft/class_8599", "net/minecraft/network/QueryableServer", "net/minecraft/src/C_290189_"));
        }
        return cachedClass;
    };

    static jmethodID methodID_getServerMotd() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("af", "getMotd", "method_3818", "getServerMotd", "m_129916_"), "()Ljava/lang/String;");
    }

    static jobject getServerMotd(const jobject& obj) {
                
       const auto methodID = methodID_getServerMotd();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_getVersion() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("L", "getServerVersion", "method_3827", "getVersion", "m_129786_"), "()Ljava/lang/String;");
    }

    static jobject getVersion(const jobject& obj) {
                
       const auto methodID = methodID_getVersion();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_getCurrentPlayerCount() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("M", "getPlayerCount", "method_3788", "getCurrentPlayerCount", "m_129787_"), "()I");
    }

    static jint getCurrentPlayerCount(const jobject& obj) {
                
       const auto methodID = methodID_getCurrentPlayerCount();
       return MinecraftSDK::env->CallIntMethod(obj, methodID);
    };
    
    static jmethodID methodID_getMaxPlayerCount() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("N", "getMaxPlayers", "method_3802", "getMaxPlayerCount", "m_129788_"), "()I");
    }

    static jint getMaxPlayerCount(const jobject& obj) {
                
       const auto methodID = methodID_getMaxPlayerCount();
       return MinecraftSDK::env->CallIntMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_NETWORK_QUERYABLESERVER_HPP