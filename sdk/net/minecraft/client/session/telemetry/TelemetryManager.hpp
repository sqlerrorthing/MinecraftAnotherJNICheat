// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_CLIENT_SESSION_TELEMETRY_TELEMETRYMANAGER_HPP
#define NET_MINECRAFT_CLIENT_SESSION_TELEMETRY_TELEMETRYMANAGER_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.client.session.telemetry.TelemetryManager
 * Remapped: gvj
 */
namespace TelemetryManager {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("gvj", "net/minecraft/client/telemetry/ClientTelemetryManager", "net/minecraft/class_6628", "net/minecraft/client/session/telemetry/TelemetryManager", "net/minecraft/src/C_260427_"));
        }
        return cachedClass;
    };

    // getter for static private field net.minecraft.client.session.telemetry.TelemetryManager#NEXT_WORKER_ID
    [[maybe_unused]] static jobject get_field_NEXT_WORKER_ID() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "THREAD_COUNT", "field_34948", "NEXT_WORKER_ID", "f_260680_"), "Ljava/util/concurrent/atomic/AtomicInteger;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.session.telemetry.TelemetryManager#NEXT_WORKER_ID
    [[maybe_unused]] static void set_field_NEXT_WORKER_ID(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "THREAD_COUNT", "field_34948", "NEXT_WORKER_ID", "f_260680_"), "Ljava/util/concurrent/atomic/AtomicInteger;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.client.session.telemetry.TelemetryManager#EXECUTOR
    [[maybe_unused]] static jobject get_field_EXECUTOR() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "EXECUTOR", "field_34949", "EXECUTOR", "f_260581_"), "Ljava/util/concurrent/Executor;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.session.telemetry.TelemetryManager#EXECUTOR
    [[maybe_unused]] static void set_field_EXECUTOR(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "EXECUTOR", "field_34949", "EXECUTOR", "f_260581_"), "Ljava/util/concurrent/Executor;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for private field net.minecraft.client.session.telemetry.TelemetryManager#client
    static jobject get_field_client(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "minecraft", "field_47702", "client", "f_303225_"), "Lfgo;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.session.telemetry.TelemetryManager#client
    static void set_field_client(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "minecraft", "field_47702", "client", "f_303225_"), "Lfgo;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.session.telemetry.TelemetryManager#userApiService
    static jobject get_field_userApiService(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "userApiService", "field_41426", "userApiService", "f_260615_"), "Lcom/mojang/authlib/minecraft/UserApiService;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.session.telemetry.TelemetryManager#userApiService
    static void set_field_userApiService(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "userApiService", "field_41426", "userApiService", "f_260615_"), "Lcom/mojang/authlib/minecraft/UserApiService;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.session.telemetry.TelemetryManager#propertyMap
    static jobject get_field_propertyMap(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "deviceSessionProperties", "field_41427", "propertyMap", "f_260661_"), "Lgvr;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.session.telemetry.TelemetryManager#propertyMap
    static void set_field_propertyMap(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "deviceSessionProperties", "field_41427", "propertyMap", "f_260661_"), "Lgvr;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.session.telemetry.TelemetryManager#logDirectory
    static jobject get_field_logDirectory(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("f", "logDirectory", "field_41428", "logDirectory", "f_260682_"), "Ljava/nio/file/Path;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.session.telemetry.TelemetryManager#logDirectory
    static void set_field_logDirectory(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("f", "logDirectory", "field_41428", "logDirectory", "f_260682_"), "Ljava/nio/file/Path;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.session.telemetry.TelemetryManager#logManager
    static jobject get_field_logManager(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("g", "logManager", "field_41429", "logManager", "f_260616_"), "Ljava/util/concurrent/CompletableFuture;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.session.telemetry.TelemetryManager#logManager
    static void set_field_logManager(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("g", "logManager", "field_41429", "logManager", "f_260616_"), "Ljava/util/concurrent/CompletableFuture;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.session.telemetry.TelemetryManager#lazySenderSupplier
    static jobject get_field_lazySenderSupplier(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("h", "outsideSessionSender", "field_44831", "lazySenderSupplier", "f_285581_"), "Ljava/util/function/Supplier;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.session.telemetry.TelemetryManager#lazySenderSupplier
    static void set_field_lazySenderSupplier(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("h", "outsideSessionSender", "field_44831", "lazySenderSupplier", "f_285581_"), "Ljava/util/function/Supplier;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID_createWorldSession() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "createWorldSessionManager", "method_47706", "createWorldSession", "m_285995_"), "(ZLjava/time/Duration;Ljava/lang/String;)Lgvs;");
    }

    static jobject createWorldSession(const jobject& obj, const jboolean& arg0, const jobject& arg1, const jobject& arg2) {
                
       const auto methodID = methodID_createWorldSession();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1, arg2);
    };
    
    static jmethodID methodID_getSender() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getOutsideSessionSender", "method_51796", "getSender", "m_285963_"), "()Lgvn;");
    }

    static jobject getSender(const jobject& obj) {
                
       const auto methodID = methodID_getSender();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_computeSender() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "createEventSender", "method_47707", "computeSender", "m_261052_"), "()Lgvn;");
    }

    static jobject computeSender(const jobject& obj) {
                
       const auto methodID = methodID_computeSender();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_getLogManager() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "getLogDirectory", "method_47701", "getLogManager", "m_260914_"), "()Ljava/nio/file/Path;");
    }

    static jobject getLogManager(const jobject& obj) {
                
       const auto methodID = methodID_getLogManager();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_close() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("close", "close", "", "", "close"), "()V");
    }

    static void close(const jobject& obj) {
                
       const auto methodID = methodID_close();
       MinecraftSDK::env->CallVoidMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_CLIENT_SESSION_TELEMETRY_TELEMETRYMANAGER_HPP