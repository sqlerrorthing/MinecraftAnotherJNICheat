// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_SERVER_FILTER_TEXTFILTERER_HPP
#define NET_MINECRAFT_SERVER_FILTER_TEXTFILTERER_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.server.filter.TextFilterer
 * Remapped: asa
 */
namespace TextFilterer {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("asa", "net/minecraft/server/network/TextFilterClient", "net/minecraft/class_5514", "net/minecraft/server/filter/TextFilterer", "net/minecraft/src/C_42_"));
        }
        return cachedClass;
    };

    // getter for static private field net.minecraft.server.filter.TextFilterer#LOGGER
    [[maybe_unused]] static jobject get_field_LOGGER() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "LOGGER", "field_26823", "LOGGER", "f_10098_"), "Lorg/slf4j/Logger;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.server.filter.TextFilterer#LOGGER
    [[maybe_unused]] static void set_field_LOGGER(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "LOGGER", "field_26823", "LOGGER", "f_10098_"), "Lorg/slf4j/Logger;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.server.filter.TextFilterer#NEXT_WORKER_ID
    [[maybe_unused]] static jobject get_field_NEXT_WORKER_ID() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "WORKER_COUNT", "field_26824", "NEXT_WORKER_ID", "f_10099_"), "Ljava/util/concurrent/atomic/AtomicInteger;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.server.filter.TextFilterer#NEXT_WORKER_ID
    [[maybe_unused]] static void set_field_NEXT_WORKER_ID(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "WORKER_COUNT", "field_26824", "NEXT_WORKER_ID", "f_10099_"), "Ljava/util/concurrent/atomic/AtomicInteger;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.server.filter.TextFilterer#THREAD_FACTORY
    [[maybe_unused]] static jobject get_field_THREAD_FACTORY() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "THREAD_FACTORY", "field_26825", "THREAD_FACTORY", "f_10100_"), "Ljava/util/concurrent/ThreadFactory;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.server.filter.TextFilterer#THREAD_FACTORY
    [[maybe_unused]] static void set_field_THREAD_FACTORY(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "THREAD_FACTORY", "field_26825", "THREAD_FACTORY", "f_10100_"), "Ljava/util/concurrent/ThreadFactory;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.server.filter.TextFilterer#CHAT_ENDPOINT
    [[maybe_unused]] static jobject get_field_CHAT_ENDPOINT() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("d", "DEFAULT_ENDPOINT", "field_38055", "CHAT_ENDPOINT", "f_215270_"), "Ljava/lang/String;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.server.filter.TextFilterer#CHAT_ENDPOINT
    [[maybe_unused]] static void set_field_CHAT_ENDPOINT(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("d", "DEFAULT_ENDPOINT", "field_38055", "CHAT_ENDPOINT", "f_215270_"), "Ljava/lang/String;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for private field net.minecraft.server.filter.TextFilterer#chatEndpoint
    static jobject get_field_chatEndpoint(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "chatEndpoint", "field_26826", "chatEndpoint", "f_10101_"), "Ljava/net/URL;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.server.filter.TextFilterer#chatEndpoint
    static void set_field_chatEndpoint(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "chatEndpoint", "field_26826", "chatEndpoint", "f_10101_"), "Ljava/net/URL;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.server.filter.TextFilterer#messageEncoder
    static jobject get_field_messageEncoder(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("f", "chatEncoder", "field_38056", "messageEncoder", "f_215271_"), "Lasa$c;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.server.filter.TextFilterer#messageEncoder
    static void set_field_messageEncoder(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("f", "chatEncoder", "field_38056", "messageEncoder", "f_215271_"), "Lasa$c;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for default field net.minecraft.server.filter.TextFilterer#joinEndpoint
    static jobject get_field_joinEndpoint(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("g", "joinEndpoint", "field_26827", "joinEndpoint", "f_10102_"), "Ljava/net/URL;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static default field net.minecraft.server.filter.TextFilterer#joinEndpoint
    static void set_field_joinEndpoint(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("g", "joinEndpoint", "field_26827", "joinEndpoint", "f_10102_"), "Ljava/net/URL;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for default field net.minecraft.server.filter.TextFilterer#joinEncoder
    static jobject get_field_joinEncoder(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("h", "joinEncoder", "field_38057", "joinEncoder", "f_215272_"), "Lasa$b;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static default field net.minecraft.server.filter.TextFilterer#joinEncoder
    static void set_field_joinEncoder(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("h", "joinEncoder", "field_38057", "joinEncoder", "f_215272_"), "Lasa$b;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for default field net.minecraft.server.filter.TextFilterer#leaveEndpoint
    static jobject get_field_leaveEndpoint(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("i", "leaveEndpoint", "field_26828", "leaveEndpoint", "f_10103_"), "Ljava/net/URL;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static default field net.minecraft.server.filter.TextFilterer#leaveEndpoint
    static void set_field_leaveEndpoint(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("i", "leaveEndpoint", "field_26828", "leaveEndpoint", "f_10103_"), "Ljava/net/URL;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for default field net.minecraft.server.filter.TextFilterer#leaveEncoder
    static jobject get_field_leaveEncoder(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("j", "leaveEncoder", "field_38058", "leaveEncoder", "f_215273_"), "Lasa$b;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static default field net.minecraft.server.filter.TextFilterer#leaveEncoder
    static void set_field_leaveEncoder(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("j", "leaveEncoder", "field_38058", "leaveEncoder", "f_215273_"), "Lasa$b;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.server.filter.TextFilterer#apiKey
    static jobject get_field_apiKey(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("k", "authKey", "field_26829", "apiKey", "f_10104_"), "Ljava/lang/String;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.server.filter.TextFilterer#apiKey
    static void set_field_apiKey(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("k", "authKey", "field_26829", "apiKey", "f_10104_"), "Ljava/lang/String;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for default field net.minecraft.server.filter.TextFilterer#ignorer
    static jobject get_field_ignorer(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("l", "chatIgnoreStrategy", "field_26832", "ignorer", "f_10107_"), "Lasa$a;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static default field net.minecraft.server.filter.TextFilterer#ignorer
    static void set_field_ignorer(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("l", "chatIgnoreStrategy", "field_26832", "ignorer", "f_10107_"), "Lasa$a;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for default field net.minecraft.server.filter.TextFilterer#executor
    static jobject get_field_executor(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("m", "workerPool", "field_26833", "executor", "f_10108_"), "Ljava/util/concurrent/ExecutorService;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static default field net.minecraft.server.filter.TextFilterer#executor
    static void set_field_executor(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("m", "workerPool", "field_26833", "executor", "f_10108_"), "Ljava/util/concurrent/ExecutorService;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID_getEndpoint() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "getEndpoint", "method_41206", "getEndpoint", "m_212245_"), "(Ljava/net/URI;Lcom/google/gson/JsonObject;Ljava/lang/String;Ljava/lang/String;)Ljava/net/URL;");
    }

    static jobject getEndpoint(const jobject& arg0, const jobject& arg1, const jobject& arg2, const jobject& arg3) {
       const auto clazz = self();
       const auto methodID = methodID_getEndpoint();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0, arg1, arg2, arg3);
    };
    
    static jmethodID methodID_getValue() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "getEndpointFromConfig", "method_42111", "getValue", "m_215294_"), "(Lcom/google/gson/JsonObject;Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;");
    }

    static jobject getValue(const jobject& arg0, const jobject& arg1, const jobject& arg2) {
       const auto clazz = self();
       const auto methodID = methodID_getValue();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0, arg1, arg2);
    };
    
    static jmethodID methodID_load() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "createFromConfig", "method_33805", "load", "m_143736_"), "(Ljava/lang/String;)Lasa;");
    }

    static jobject load(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_load();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_sendJoinOrLeaveRequest() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "processJoinOrLeave", "method_31299", "sendJoinOrLeaveRequest", "m_215302_"), "(Lcom/mojang/authlib/GameProfile;Ljava/net/URL;Lasa$b;Ljava/util/concurrent/Executor;)V");
    }

    static void sendJoinOrLeaveRequest(const jobject& obj, const jobject& arg0, const jobject& arg1, const jobject& arg2, const jobject& arg3) {
                
       const auto methodID = methodID_sendJoinOrLeaveRequest();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1, arg2, arg3);
    };
    
    static jmethodID methodID_filterMessage() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "requestMessageProcessing", "method_31298", "filterMessage", "m_10136_"), "(Lcom/mojang/authlib/GameProfile;Ljava/lang/String;Lasa$a;Ljava/util/concurrent/Executor;)Ljava/util/concurrent/CompletableFuture;");
    }

    static jobject filterMessage(const jobject& obj, const jobject& arg0, const jobject& arg1, const jobject& arg2, const jobject& arg3) {
                
       const auto methodID = methodID_filterMessage();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1, arg2, arg3);
    };
    
    static jmethodID methodID_getMask() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "parseMask", "method_45066", "getMask", "m_243083_"), "(Ljava/lang/String;Lcom/google/gson/JsonArray;Lasa$a;)Lxd;");
    }

    static jobject getMask(const jobject& obj, const jobject& arg0, const jobject& arg1, const jobject& arg2) {
                
       const auto methodID = methodID_getMask();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1, arg2);
    };
    
    static jmethodID methodID_close() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("close", "close", "", "", "close"), "()V");
    }

    static void close(const jobject& obj) {
                
       const auto methodID = methodID_close();
       MinecraftSDK::env->CallVoidMethod(obj, methodID);
    };
    
    static jmethodID methodID_consumeFully() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "drainStream", "method_31300", "consumeFully", "m_10145_"), "(Ljava/io/InputStream;)V");
    }

    static void consumeFully(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_consumeFully();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_sendJsonRequest() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "processRequestResponse", "method_31295", "sendJsonRequest", "m_10127_"), "(Lcom/google/gson/JsonObject;Ljava/net/URL;)Lcom/google/gson/JsonObject;");
    }

    static jobject sendJsonRequest(const jobject& obj, const jobject& arg0, const jobject& arg1) {
                
       const auto methodID = methodID_sendJsonRequest();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_sendRequest() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "processRequest", "method_31304", "sendRequest", "m_10151_"), "(Lcom/google/gson/JsonObject;Ljava/net/URL;)V");
    }

    static void sendRequest(const jobject& obj, const jobject& arg0, const jobject& arg1) {
                
       const auto methodID = methodID_sendRequest();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_createConnection() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "makeRequest", "method_31306", "createConnection", "m_10156_"), "(Lcom/google/gson/JsonObject;Ljava/net/URL;)Ljava/net/HttpURLConnection;");
    }

    static jobject createConnection(const jobject& obj, const jobject& arg0, const jobject& arg1) {
                
       const auto methodID = methodID_createConnection();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_createFilterer() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "createContext", "method_31297", "createFilterer", "m_10134_"), "(Lcom/mojang/authlib/GameProfile;)Larz;");
    }

    static jobject createFilterer(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_createFilterer();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
};

#endif // NET_MINECRAFT_SERVER_FILTER_TEXTFILTERER_HPP