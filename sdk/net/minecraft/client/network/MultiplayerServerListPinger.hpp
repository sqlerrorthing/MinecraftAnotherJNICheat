// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_CLIENT_NETWORK_MULTIPLAYERSERVERLISTPINGER_HPP
#define NET_MINECRAFT_CLIENT_NETWORK_MULTIPLAYERSERVERLISTPINGER_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.client.network.MultiplayerServerListPinger
 * Remapped: fzv
 */
namespace MultiplayerServerListPinger {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("fzv", "net/minecraft/client/multiplayer/ServerStatusPinger", "net/minecraft/class_644", "net/minecraft/client/network/MultiplayerServerListPinger", "net/minecraft/src/C_3914_"));
        }
        return cachedClass;
    };

    // getter for static private field net.minecraft.client.network.MultiplayerServerListPinger#LOGGER
    [[maybe_unused]] static jobject get_field_LOGGER() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "LOGGER", "field_3771", "LOGGER", "f_105449_"), "Lorg/slf4j/Logger;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.network.MultiplayerServerListPinger#LOGGER
    [[maybe_unused]] static void set_field_LOGGER(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "LOGGER", "field_3771", "LOGGER", "f_105449_"), "Lorg/slf4j/Logger;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.client.network.MultiplayerServerListPinger#CANNOT_CONNECT_TEXT
    [[maybe_unused]] static jobject get_field_CANNOT_CONNECT_TEXT() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "CANT_CONNECT_MESSAGE", "field_33740", "CANNOT_CONNECT_TEXT", "f_171810_"), "Lwz;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.network.MultiplayerServerListPinger#CANNOT_CONNECT_TEXT
    [[maybe_unused]] static void set_field_CANNOT_CONNECT_TEXT(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "CANT_CONNECT_MESSAGE", "field_33740", "CANNOT_CONNECT_TEXT", "f_171810_"), "Lwz;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for private field net.minecraft.client.network.MultiplayerServerListPinger#clientConnections
    static jobject get_field_clientConnections(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "connections", "field_3769", "clientConnections", "f_105450_"), "Ljava/util/List;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.network.MultiplayerServerListPinger#clientConnections
    static void set_field_clientConnections(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "connections", "field_3769", "clientConnections", "f_105450_"), "Ljava/util/List;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID_add() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "pingServer", "method_3003", "add", "m_105459_"), "(Lfzt;Ljava/lang/Runnable;Ljava/lang/Runnable;)V");
    }

    static void add(const jobject& obj, const jobject& arg0, const jobject& arg1, const jobject& arg2) {
                
       const auto methodID = methodID_add();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1, arg2);
    };
    
    static jmethodID methodID_showError() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "onPingFailed", "method_36897", "showError", "m_171814_"), "(Lwz;Lfzt;)V");
    }

    static void showError(const jobject& obj, const jobject& arg0, const jobject& arg1) {
                
       const auto methodID = methodID_showError();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_ping() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "pingLegacyServer", "method_3001", "ping", "m_171811_"), "(Ljava/net/InetSocketAddress;Lgax;Lfzt;)V");
    }

    static void ping(const jobject& obj, const jobject& arg0, const jobject& arg1, const jobject& arg2) {
                
       const auto methodID = methodID_ping();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1, arg2);
    };
    
    static jmethodID methodID_createPlayerCountText() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "formatPlayerCount", "method_27647", "createPlayerCountText", "m_105466_"), "(II)Lwz;");
    }

    static jobject createPlayerCountText(const jint& arg0, const jint& arg1) {
       const auto clazz = self();
       const auto methodID = methodID_createPlayerCountText();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_tick() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "tick", "method_3000", "tick", "m_105453_"), "()V");
    }

    static void tick(const jobject& obj) {
                
       const auto methodID = methodID_tick();
       MinecraftSDK::env->CallVoidMethod(obj, methodID);
    };
    
    static jmethodID methodID_cancel() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "removeAll", "method_3004", "cancel", "m_105465_"), "()V");
    }

    static void cancel(const jobject& obj) {
                
       const auto methodID = methodID_cancel();
       MinecraftSDK::env->CallVoidMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_CLIENT_NETWORK_MULTIPLAYERSERVERLISTPINGER_HPP