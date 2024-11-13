// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_CLIENT_NETWORK_MULTIPLAYERSERVERLISTPINGER$1_HPP
#define NET_MINECRAFT_CLIENT_NETWORK_MULTIPLAYERSERVERLISTPINGER$1_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.client.network.MultiplayerServerListPinger$1
 * Remapped: fzv$1
 */
namespace MultiplayerServerListPinger$1 {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("fzv$1", "net/minecraft/client/multiplayer/ServerStatusPinger$1", "net/minecraft/class_644$1", "net/minecraft/client/network/MultiplayerServerListPinger$1", "net/minecraft/src/C_3914_$C_3915_"));
        }
        return cachedClass;
    };

    // getter for private field net.minecraft.client.network.MultiplayerServerListPinger$1#sentQuery
    static jboolean get_field_sentQuery(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("h", "success", "field_3775", "sentQuery", "f_105475_"), "Z");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetBooleanField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.network.MultiplayerServerListPinger$1#sentQuery
    static void set_field_sentQuery(const jobject &obj, const jboolean &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("h", "success", "field_3775", "sentQuery", "f_105475_"), "Z");
        return MinecraftSDK::env->SetBooleanField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.network.MultiplayerServerListPinger$1#received
    static jboolean get_field_received(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("i", "receivedPing", "field_3773", "received", "f_105476_"), "Z");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetBooleanField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.network.MultiplayerServerListPinger$1#received
    static void set_field_received(const jobject &obj, const jboolean &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("i", "receivedPing", "field_3773", "received", "f_105476_"), "Z");
        return MinecraftSDK::env->SetBooleanField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.network.MultiplayerServerListPinger$1#startTime
    static jlong get_field_startTime(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("j", "pingStart", "field_3772", "startTime", "f_105477_"), "J");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetLongField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.network.MultiplayerServerListPinger$1#startTime
    static void set_field_startTime(const jobject &obj, const jlong &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("j", "pingStart", "field_3772", "startTime", "f_105477_"), "J");
        return MinecraftSDK::env->SetLongField(obj, fieldID, value);
    };

    static jmethodID methodID_onResponse() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "handleStatusResponse", "method_12667", "onResponse", "m_6440_"), "(Lajp;)V");
    }

    static void onResponse(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_onResponse();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_onPingResult() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "handlePongResponse", "method_12666", "onPingResult", "m_105486_"), "(Lajj;)V");
    }

    static void onPingResult(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_onPingResult();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
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

#endif // NET_MINECRAFT_CLIENT_NETWORK_MULTIPLAYERSERVERLISTPINGER$1_HPP