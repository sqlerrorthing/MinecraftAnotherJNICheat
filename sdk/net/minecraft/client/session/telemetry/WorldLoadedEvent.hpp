// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_CLIENT_SESSION_TELEMETRY_WORLDLOADEDEVENT_HPP
#define NET_MINECRAFT_CLIENT_SESSION_TELEMETRY_WORLDLOADEDEVENT_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.client.session.telemetry.WorldLoadedEvent
 * Remapped: gvw
 */
namespace WorldLoadedEvent {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("gvw", "net/minecraft/client/telemetry/events/WorldLoadEvent", "net/minecraft/class_7979", "net/minecraft/client/session/telemetry/WorldLoadedEvent", "net/minecraft/src/C_260410_"));
        }
        return cachedClass;
    };

    // getter for private field net.minecraft.client.session.telemetry.WorldLoadedEvent#sent
    static jboolean get_field_sent(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "eventSent", "field_41516", "sent", "f_260710_"), "Z");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetBooleanField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.session.telemetry.WorldLoadedEvent#sent
    static void set_field_sent(const jobject &obj, const jboolean &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "eventSent", "field_41516", "sent", "f_260710_"), "Z");
        return MinecraftSDK::env->SetBooleanField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.session.telemetry.WorldLoadedEvent#gameMode
    static jobject get_field_gameMode(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "gameMode", "field_41517", "gameMode", "f_260554_"), "Lgvq$b;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.session.telemetry.WorldLoadedEvent#gameMode
    static void set_field_gameMode(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "gameMode", "field_41517", "gameMode", "f_260554_"), "Lgvq$b;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.session.telemetry.WorldLoadedEvent#brand
    static jobject get_field_brand(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "serverBrand", "field_41518", "brand", "f_260599_"), "Ljava/lang/String;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.session.telemetry.WorldLoadedEvent#brand
    static void set_field_brand(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "serverBrand", "field_41518", "brand", "f_260599_"), "Ljava/lang/String;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.session.telemetry.WorldLoadedEvent#minigameName
    static jobject get_field_minigameName(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "minigameName", "field_44848", "minigameName", "f_285620_"), "Ljava/lang/String;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.session.telemetry.WorldLoadedEvent#minigameName
    static void set_field_minigameName(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "minigameName", "field_44848", "minigameName", "f_285620_"), "Ljava/lang/String;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID_putServerType() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "addProperties", "method_47792", "putServerType", "m_261131_"), "(Lgvr$a;)V");
    }

    static void putServerType(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_putServerType();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_getServerType() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getServerType", "method_47794", "getServerType", "m_261317_"), "()Lgvq$c;");
    }

    static jobject getServerType(const jobject& obj) {
                
       const auto methodID = methodID_getServerType();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_send() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "send", "method_47980", "send", "m_263210_"), "(Lgvn;)Z");
    }

    static jboolean send(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_send();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_setGameMode() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "setGameMode", "method_47791", "setGameMode", "m_260799_"), "(Ldct;Z)V");
    }

    static void setGameMode(const jobject& obj, const jobject& arg0, const jboolean& arg1) {
                
       const auto methodID = methodID_setGameMode();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_setBrand() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "setServerBrand", "method_47793", "setBrand", "m_261084_"), "(Ljava/lang/String;)V");
    }

    static void setBrand(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_setBrand();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
};

#endif // NET_MINECRAFT_CLIENT_SESSION_TELEMETRY_WORLDLOADEDEVENT_HPP