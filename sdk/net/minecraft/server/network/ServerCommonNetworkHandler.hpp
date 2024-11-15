// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_SERVER_NETWORK_SERVERCOMMONNETWORKHANDLER_HPP
#define NET_MINECRAFT_SERVER_NETWORK_SERVERCOMMONNETWORKHANDLER_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.server.network.ServerCommonNetworkHandler
 * Remapped: arr
 */
namespace ServerCommonNetworkHandler {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("arr", "net/minecraft/server/network/ServerCommonPacketListenerImpl", "net/minecraft/class_8609", "net/minecraft/server/network/ServerCommonNetworkHandler", "net/minecraft/src/C_290281_"));
        }
        return cachedClass;
    };

    // getter for static private field net.minecraft.server.network.ServerCommonNetworkHandler#LOGGER
    [[maybe_unused]] static jobject get_field_LOGGER() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("f", "LOGGER", "field_45014", "LOGGER", "f_291096_"), "Lorg/slf4j/Logger;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.server.network.ServerCommonNetworkHandler#LOGGER
    [[maybe_unused]] static void set_field_LOGGER(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("f", "LOGGER", "field_45014", "LOGGER", "f_291096_"), "Lorg/slf4j/Logger;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.server.network.ServerCommonNetworkHandler#KEEP_ALIVE_INTERVAL
    [[maybe_unused]] static jint get_field_KEEP_ALIVE_INTERVAL() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "LATENCY_CHECK_INTERVAL", "field_45011", "KEEP_ALIVE_INTERVAL", "f_290500_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.server.network.ServerCommonNetworkHandler#KEEP_ALIVE_INTERVAL
    [[maybe_unused]] static void set_field_KEEP_ALIVE_INTERVAL(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "LATENCY_CHECK_INTERVAL", "field_45011", "KEEP_ALIVE_INTERVAL", "f_290500_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.server.network.ServerCommonNetworkHandler#TRANSITION_TIMEOUT
    [[maybe_unused]] static jint get_field_TRANSITION_TIMEOUT() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("g", "CLOSED_LISTENER_TIMEOUT", "field_51342", "TRANSITION_TIMEOUT", "f_316947_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.server.network.ServerCommonNetworkHandler#TRANSITION_TIMEOUT
    [[maybe_unused]] static void set_field_TRANSITION_TIMEOUT(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("g", "CLOSED_LISTENER_TIMEOUT", "field_51342", "TRANSITION_TIMEOUT", "f_316947_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.server.network.ServerCommonNetworkHandler#TIMEOUT_TEXT
    [[maybe_unused]] static jobject get_field_TIMEOUT_TEXT() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("h", "TIMEOUT_DISCONNECTION_MESSAGE", "field_45015", "TIMEOUT_TEXT", "f_290625_"), "Lwz;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.server.network.ServerCommonNetworkHandler#TIMEOUT_TEXT
    [[maybe_unused]] static void set_field_TIMEOUT_TEXT(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("h", "TIMEOUT_DISCONNECTION_MESSAGE", "field_45015", "TIMEOUT_TEXT", "f_290625_"), "Lwz;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static default field net.minecraft.server.network.ServerCommonNetworkHandler#UNEXPECTED_QUERY_RESPONSE_TEXT
    [[maybe_unused]] static jobject get_field_UNEXPECTED_QUERY_RESPONSE_TEXT() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "DISCONNECT_UNEXPECTED_QUERY", "field_48273", "UNEXPECTED_QUERY_RESPONSE_TEXT", "f_315158_"), "Lwz;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static default field net.minecraft.server.network.ServerCommonNetworkHandler#UNEXPECTED_QUERY_RESPONSE_TEXT
    [[maybe_unused]] static void set_field_UNEXPECTED_QUERY_RESPONSE_TEXT(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "DISCONNECT_UNEXPECTED_QUERY", "field_48273", "UNEXPECTED_QUERY_RESPONSE_TEXT", "f_315158_"), "Lwz;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for protected field net.minecraft.server.network.ServerCommonNetworkHandler#server
    static jobject get_field_server(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "server", "field_45012", "server", "f_291389_"), "Lnet/minecraft/server/MinecraftServer;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static protected field net.minecraft.server.network.ServerCommonNetworkHandler#server
    static void set_field_server(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "server", "field_45012", "server", "f_291389_"), "Lnet/minecraft/server/MinecraftServer;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for protected field net.minecraft.server.network.ServerCommonNetworkHandler#connection
    static jobject get_field_connection(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "connection", "field_45013", "connection", "f_291338_"), "Lvt;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static protected field net.minecraft.server.network.ServerCommonNetworkHandler#connection
    static void set_field_connection(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "connection", "field_45013", "connection", "f_291338_"), "Lvt;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.server.network.ServerCommonNetworkHandler#transferred
    static jboolean get_field_transferred(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("i", "transferred", "field_48274", "transferred", "f_314604_"), "Z");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetBooleanField(obj, fieldID);
    };

    // setter for static private field net.minecraft.server.network.ServerCommonNetworkHandler#transferred
    static void set_field_transferred(const jobject &obj, const jboolean &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("i", "transferred", "field_48274", "transferred", "f_314604_"), "Z");
        return MinecraftSDK::env->SetBooleanField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.server.network.ServerCommonNetworkHandler#lastKeepAliveTime
    static jlong get_field_lastKeepAliveTime(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("j", "keepAliveTime", "field_45016", "lastKeepAliveTime", "f_290835_"), "J");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetLongField(obj, fieldID);
    };

    // setter for static private field net.minecraft.server.network.ServerCommonNetworkHandler#lastKeepAliveTime
    static void set_field_lastKeepAliveTime(const jobject &obj, const jlong &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("j", "keepAliveTime", "field_45016", "lastKeepAliveTime", "f_290835_"), "J");
        return MinecraftSDK::env->SetLongField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.server.network.ServerCommonNetworkHandler#waitingForKeepAlive
    static jboolean get_field_waitingForKeepAlive(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("k", "keepAlivePending", "field_45017", "waitingForKeepAlive", "f_291554_"), "Z");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetBooleanField(obj, fieldID);
    };

    // setter for static private field net.minecraft.server.network.ServerCommonNetworkHandler#waitingForKeepAlive
    static void set_field_waitingForKeepAlive(const jobject &obj, const jboolean &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("k", "keepAlivePending", "field_45017", "waitingForKeepAlive", "f_291554_"), "Z");
        return MinecraftSDK::env->SetBooleanField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.server.network.ServerCommonNetworkHandler#keepAliveId
    static jlong get_field_keepAliveId(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("l", "keepAliveChallenge", "field_45018", "keepAliveId", "f_291155_"), "J");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetLongField(obj, fieldID);
    };

    // setter for static private field net.minecraft.server.network.ServerCommonNetworkHandler#keepAliveId
    static void set_field_keepAliveId(const jobject &obj, const jlong &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("l", "keepAliveChallenge", "field_45018", "keepAliveId", "f_291155_"), "J");
        return MinecraftSDK::env->SetLongField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.server.network.ServerCommonNetworkHandler#transitionStartTime
    static jlong get_field_transitionStartTime(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("m", "closedListenerTime", "field_51343", "transitionStartTime", "f_313967_"), "J");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetLongField(obj, fieldID);
    };

    // setter for static private field net.minecraft.server.network.ServerCommonNetworkHandler#transitionStartTime
    static void set_field_transitionStartTime(const jobject &obj, const jlong &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("m", "closedListenerTime", "field_51343", "transitionStartTime", "f_313967_"), "J");
        return MinecraftSDK::env->SetLongField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.server.network.ServerCommonNetworkHandler#transitioning
    static jboolean get_field_transitioning(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("n", "closed", "field_51344", "transitioning", "f_315218_"), "Z");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetBooleanField(obj, fieldID);
    };

    // setter for static private field net.minecraft.server.network.ServerCommonNetworkHandler#transitioning
    static void set_field_transitioning(const jobject &obj, const jboolean &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("n", "closed", "field_51344", "transitioning", "f_315218_"), "Z");
        return MinecraftSDK::env->SetBooleanField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.server.network.ServerCommonNetworkHandler#latency
    static jint get_field_latency(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("o", "latency", "field_45019", "latency", "f_291042_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetIntField(obj, fieldID);
    };

    // setter for static private field net.minecraft.server.network.ServerCommonNetworkHandler#latency
    static void set_field_latency(const jobject &obj, const jint &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("o", "latency", "field_45019", "latency", "f_291042_"), "I");
        return MinecraftSDK::env->SetIntField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.server.network.ServerCommonNetworkHandler#flushDisabled
    static jboolean get_field_flushDisabled(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("p", "suspendFlushingOnServerThread", "field_45715", "flushDisabled", "f_290367_"), "Z");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetBooleanField(obj, fieldID);
    };

    // setter for static private field net.minecraft.server.network.ServerCommonNetworkHandler#flushDisabled
    static void set_field_flushDisabled(const jobject &obj, const jboolean &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("p", "suspendFlushingOnServerThread", "field_45715", "flushDisabled", "f_290367_"), "Z");
        return MinecraftSDK::env->SetBooleanField(obj, fieldID, value);
    };

    static jmethodID methodID_markTransitionTime() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("l", "close", "method_59512", "markTransitionTime", "m_318670_"), "()V");
    }

    static void markTransitionTime(const jobject& obj) {
                
       const auto methodID = methodID_markTransitionTime();
       MinecraftSDK::env->CallVoidMethod(obj, methodID);
    };
    
    static jmethodID methodID_onDisconnected() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "onDisconnect", "method_10839", "onDisconnected", "m_7026_"), "(Lvv;)V");
    }

    static void onDisconnected(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_onDisconnected();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_onKeepAlive() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "handleKeepAlive", "method_52393", "onKeepAlive", "m_295033_"), "(Laac;)V");
    }

    static void onKeepAlive(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_onKeepAlive();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_onPong() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "handlePong", "method_52394", "onPong", "m_293596_"), "(Laad;)V");
    }

    static void onPong(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_onPong();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_onCustomPayload() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "handleCustomPayload", "method_52392", "onCustomPayload", "m_293234_"), "(Laab;)V");
    }

    static void onCustomPayload(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_onCustomPayload();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_onResourcePackStatus() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "handleResourcePackResponse", "method_52395", "onResourcePackStatus", "m_293248_"), "(Laae;)V");
    }

    static void onResourcePackStatus(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_onResourcePackStatus();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_onCookieResponse() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "handleCookieResponse", "method_55851", "onCookieResponse", "m_320234_"), "(Labs;)V");
    }

    static void onCookieResponse(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_onCookieResponse();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_baseTick() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("e", "keepConnectionAlive", "method_52400", "baseTick", "m_295188_"), "()V");
    }

    static void baseTick(const jobject& obj) {
                
       const auto methodID = methodID_baseTick();
       MinecraftSDK::env->CallVoidMethod(obj, methodID);
    };
    
    static jmethodID methodID_checkTransitionTimeout() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "checkIfClosed", "method_59511", "checkTransitionTimeout", "m_319110_"), "(J)Z");
    }

    static jboolean checkTransitionTimeout(const jobject& obj, const jlong& arg0) {
                
       const auto methodID = methodID_checkTransitionTimeout();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_disableFlush() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("f", "suspendFlushing", "method_53046", "disableFlush", "m_295499_"), "()V");
    }

    static void disableFlush(const jobject& obj) {
                
       const auto methodID = methodID_disableFlush();
       MinecraftSDK::env->CallVoidMethod(obj, methodID);
    };
    
    static jmethodID methodID_enableFlush() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("g", "resumeFlushing", "method_53047", "enableFlush", "m_293169_"), "()V");
    }

    static void enableFlush(const jobject& obj) {
                
       const auto methodID = methodID_enableFlush();
       MinecraftSDK::env->CallVoidMethod(obj, methodID);
    };
    
    static jmethodID methodID_sendPacket() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "send", "method_14364", "sendPacket", "m_141995_"), "(Lzg;)V");
    }

    static void sendPacket(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_sendPacket();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_send() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "send", "method_52391", "send", "m_295553_"), "(Lzg;Lwg;)V");
    }

    static void send(const jobject& obj, const jobject& arg0, const jobject& arg1) {
                
       const auto methodID = methodID_send();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_disconnect() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "disconnect", "method_52396", "disconnect", "m_294716_"), "(Lwz;)V");
    }

    static void disconnect(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_disconnect();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID__disconnect() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "disconnect", "method_60673", "disconnect", "m_339179_"), "(Lvv;)V");
    }

    static void _disconnect(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID__disconnect();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_isHost() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("h", "isSingleplayerOwner", "method_52402", "isHost", "m_293330_"), "()Z");
    }

    static jboolean isHost(const jobject& obj) {
                
       const auto methodID = methodID_isHost();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID);
    };
    
    static jmethodID methodID_getProfile() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("i", "playerProfile", "method_52403", "getProfile", "m_293343_"), "()Lcom/mojang/authlib/GameProfile;");
    }

    static jobject getProfile(const jobject& obj) {
                
       const auto methodID = methodID_getProfile();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_getDebugProfile() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("j", "getOwner", "method_52404", "getDebugProfile", "m_295644_"), "()Lcom/mojang/authlib/GameProfile;");
    }

    static jobject getDebugProfile(const jobject& obj) {
                
       const auto methodID = methodID_getDebugProfile();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_getLatency() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("k", "latency", "method_52405", "getLatency", "m_293018_"), "()I");
    }

    static jint getLatency(const jobject& obj) {
                
       const auto methodID = methodID_getLatency();
       return MinecraftSDK::env->CallIntMethod(obj, methodID);
    };
    
    static jmethodID methodID_createClientData() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "createCookie", "method_53825", "createClientData", "m_295477_"), "(Laqh;)Larj;");
    }

    static jobject createClientData(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_createClientData();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
};

#endif // NET_MINECRAFT_SERVER_NETWORK_SERVERCOMMONNETWORKHANDLER_HPP