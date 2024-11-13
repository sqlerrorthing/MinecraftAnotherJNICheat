// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_CLIENT_SESSION_TELEMETRY_WORLDSESSION_HPP
#define NET_MINECRAFT_CLIENT_SESSION_TELEMETRY_WORLDSESSION_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.client.session.telemetry.WorldSession
 * Remapped: gvs
 */
namespace WorldSession {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("gvs", "net/minecraft/client/telemetry/WorldSessionTelemetryManager", "net/minecraft/class_7975", "net/minecraft/client/session/telemetry/WorldSession", "net/minecraft/src/C_260381_"));
        }
        return cachedClass;
    };

    // getter for private field net.minecraft.client.session.telemetry.WorldSession#sessionId
    static jobject get_field_sessionId(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "worldSessionId", "field_41499", "sessionId", "f_260685_"), "Ljava/util/UUID;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.session.telemetry.WorldSession#sessionId
    static void set_field_sessionId(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "worldSessionId", "field_41499", "sessionId", "f_260685_"), "Ljava/util/UUID;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.session.telemetry.WorldSession#sender
    static jobject get_field_sender(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "eventSender", "field_41500", "sender", "f_260450_"), "Lgvn;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.session.telemetry.WorldSession#sender
    static void set_field_sender(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "eventSender", "field_41500", "sender", "f_260450_"), "Lgvn;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.session.telemetry.WorldSession#worldLoadedEvent
    static jobject get_field_worldLoadedEvent(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "worldLoadEvent", "field_41501", "worldLoadedEvent", "f_260570_"), "Lgvw;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.session.telemetry.WorldSession#worldLoadedEvent
    static void set_field_worldLoadedEvent(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "worldLoadEvent", "field_41501", "worldLoadedEvent", "f_260570_"), "Lgvw;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.session.telemetry.WorldSession#worldUnloadedEvent
    static jobject get_field_worldUnloadedEvent(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "worldUnloadEvent", "field_41502", "worldUnloadedEvent", "f_260593_"), "Lgvy;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.session.telemetry.WorldSession#worldUnloadedEvent
    static void set_field_worldUnloadedEvent(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "worldUnloadEvent", "field_41502", "worldUnloadedEvent", "f_260593_"), "Lgvy;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.session.telemetry.WorldSession#performanceMetricsEvent
    static jobject get_field_performanceMetricsEvent(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "performanceMetricsEvent", "field_41503", "performanceMetricsEvent", "f_260578_"), "Lgvv;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.session.telemetry.WorldSession#performanceMetricsEvent
    static void set_field_performanceMetricsEvent(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "performanceMetricsEvent", "field_41503", "performanceMetricsEvent", "f_260578_"), "Lgvv;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.session.telemetry.WorldSession#worldLoadTimesEvent
    static jobject get_field_worldLoadTimesEvent(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("f", "worldLoadTimesEvent", "field_41504", "worldLoadTimesEvent", "f_260533_"), "Lgvx;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.session.telemetry.WorldSession#worldLoadTimesEvent
    static void set_field_worldLoadTimesEvent(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("f", "worldLoadTimesEvent", "field_41504", "worldLoadTimesEvent", "f_260533_"), "Lgvx;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID_tick() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "tick", "method_47770", "tick", "m_261056_"), "()V");
    }

    static void tick(const jobject& obj) {
                
       const auto methodID = methodID_tick();
       MinecraftSDK::env->CallVoidMethod(obj, methodID);
    };
    
    static jmethodID methodID_setGameMode() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "onPlayerInfoReceived", "method_47772", "setGameMode", "m_260888_"), "(Ldct;Z)V");
    }

    static void setGameMode(const jobject& obj, const jobject& arg0, const jboolean& arg1) {
                
       const auto methodID = methodID_setGameMode();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_setBrand() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "onServerBrandReceived", "method_47774", "setBrand", "m_260918_"), "(Ljava/lang/String;)V");
    }

    static void setBrand(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_setBrand();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_setTick() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "setTime", "method_47771", "setTick", "m_261206_"), "(J)V");
    }

    static void setTick(const jobject& obj, const jlong& arg0) {
                
       const auto methodID = methodID_setTick();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_onLoad() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "worldSessionStart", "method_47775", "onLoad", "m_261141_"), "()V");
    }

    static void onLoad(const jobject& obj) {
                
       const auto methodID = methodID_onLoad();
       MinecraftSDK::env->CallVoidMethod(obj, methodID);
    };
    
    static jmethodID methodID_onUnload() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "onDisconnect", "method_47776", "onUnload", "m_261027_"), "()V");
    }

    static void onUnload(const jobject& obj) {
                
       const auto methodID = methodID_onUnload();
       MinecraftSDK::env->CallVoidMethod(obj, methodID);
    };
    
    static jmethodID methodID_onAdvancementMade() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "onAdvancementDone", "method_51802", "onAdvancementMade", "m_286034_"), "(Ldcw;Lag;)V");
    }

    static void onAdvancementMade(const jobject& obj, const jobject& arg0, const jobject& arg1) {
                
       const auto methodID = methodID_onAdvancementMade();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1);
    };
    
};

#endif // NET_MINECRAFT_CLIENT_SESSION_TELEMETRY_WORLDSESSION_HPP