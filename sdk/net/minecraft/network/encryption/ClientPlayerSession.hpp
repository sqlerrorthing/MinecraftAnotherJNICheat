// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_NETWORK_ENCRYPTION_CLIENTPLAYERSESSION_HPP
#define NET_MINECRAFT_NETWORK_ENCRYPTION_CLIENTPLAYERSESSION_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.network.encryption.ClientPlayerSession
 * Remapped: xk
 */
namespace ClientPlayerSession {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("xk", "net/minecraft/network/chat/LocalChatSession", "net/minecraft/class_7818", "net/minecraft/network/encryption/ClientPlayerSession", "net/minecraft/src/C_243480_"));
        }
        return cachedClass;
    };

    // getter for private field net.minecraft.network.encryption.ClientPlayerSession#sessionId
    static jobject get_field_sessionId(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "sessionId", "comp_1077", "sessionId", "f_244284_"), "Ljava/util/UUID;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.network.encryption.ClientPlayerSession#sessionId
    static void set_field_sessionId(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "sessionId", "comp_1077", "sessionId", "f_244284_"), "Ljava/util/UUID;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.network.encryption.ClientPlayerSession#keyPair
    static jobject get_field_keyPair(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "keyPair", "comp_1078", "keyPair", "f_243926_"), "Lcmz;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.network.encryption.ClientPlayerSession#keyPair
    static void set_field_keyPair(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "keyPair", "comp_1078", "keyPair", "f_243926_"), "Lcmz;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID_create() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "create", "method_46273", "create", "m_245157_"), "(Lcmz;)Lxk;");
    }

    static jobject create(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_create();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_createPacker() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "createMessageEncoder", "method_46274", "createPacker", "m_247507_"), "(Ljava/util/UUID;)Lxt$c;");
    }

    static jobject createPacker(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_createPacker();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_toPublicSession() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "asRemote", "method_46275", "toPublicSession", "m_245584_"), "()Lxq;");
    }

    static jobject toPublicSession(const jobject& obj) {
                
       const auto methodID = methodID_toPublicSession();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID__sessionId() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "sessionId", "comp_1077", "sessionId", "f_244284_"), "()Ljava/util/UUID;");
    }

    static jobject _sessionId(const jobject& obj) {
                
       const auto methodID = methodID__sessionId();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID__keyPair() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "keyPair", "comp_1078", "keyPair", "f_243926_"), "()Lcmz;");
    }

    static jobject _keyPair(const jobject& obj) {
                
       const auto methodID = methodID__keyPair();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_NETWORK_ENCRYPTION_CLIENTPLAYERSESSION_HPP