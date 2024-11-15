// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_SERVER_NETWORK_SERVERHANDSHAKENETWORKHANDLER_HPP
#define NET_MINECRAFT_SERVER_NETWORK_SERVERHANDSHAKENETWORKHANDLER_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.server.network.ServerHandshakeNetworkHandler
 * Remapped: arv
 */
namespace ServerHandshakeNetworkHandler {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("arv", "net/minecraft/server/network/ServerHandshakePacketListenerImpl", "net/minecraft/class_3246", "net/minecraft/server/network/ServerHandshakeNetworkHandler", "net/minecraft/src/C_33_"));
        }
        return cachedClass;
    };

    // getter for static private field net.minecraft.server.network.ServerHandshakeNetworkHandler#IGNORING_STATUS_REQUEST_MESSAGE
    [[maybe_unused]] static jobject get_field_IGNORING_STATUS_REQUEST_MESSAGE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "IGNORE_STATUS_REASON", "field_24457", "IGNORING_STATUS_REQUEST_MESSAGE", "f_9964_"), "Lwz;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.server.network.ServerHandshakeNetworkHandler#IGNORING_STATUS_REQUEST_MESSAGE
    [[maybe_unused]] static void set_field_IGNORING_STATUS_REQUEST_MESSAGE(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "IGNORE_STATUS_REASON", "field_24457", "IGNORING_STATUS_REQUEST_MESSAGE", "f_9964_"), "Lwz;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for private field net.minecraft.server.network.ServerHandshakeNetworkHandler#server
    static jobject get_field_server(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "server", "field_14154", "server", "f_9965_"), "Lnet/minecraft/server/MinecraftServer;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.server.network.ServerHandshakeNetworkHandler#server
    static void set_field_server(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "server", "field_14154", "server", "f_9965_"), "Lnet/minecraft/server/MinecraftServer;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.server.network.ServerHandshakeNetworkHandler#connection
    static jobject get_field_connection(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "connection", "field_14153", "connection", "f_9966_"), "Lvt;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.server.network.ServerHandshakeNetworkHandler#connection
    static void set_field_connection(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "connection", "field_14153", "connection", "f_9966_"), "Lvt;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID_onHandshake() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "handleIntention", "method_12576", "onHandshake", "m_7322_"), "(Laij;)V");
    }

    static void onHandshake(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_onHandshake();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_login() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "beginLogin", "method_56048", "login", "m_323404_"), "(Laij;Z)V");
    }

    static void login(const jobject& obj, const jobject& arg0, const jboolean& arg1) {
                
       const auto methodID = methodID_login();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_onDisconnected() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "onDisconnect", "method_10839", "onDisconnected", "m_7026_"), "(Lvv;)V");
    }

    static void onDisconnected(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_onDisconnected();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_isConnectionOpen() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "isAcceptingMessages", "method_48106", "isConnectionOpen", "m_6198_"), "()Z");
    }

    static jboolean isConnectionOpen(const jobject& obj) {
                
       const auto methodID = methodID_isConnectionOpen();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_SERVER_NETWORK_SERVERHANDSHAKENETWORKHANDLER_HPP