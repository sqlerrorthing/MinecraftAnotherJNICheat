// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_CLIENT_NETWORK_REDIRECTRESOLVER_HPP
#define NET_MINECRAFT_CLIENT_NETWORK_REDIRECTRESOLVER_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.client.network.RedirectResolver
 * Remapped: gba
 */
namespace RedirectResolver {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("gba", "net/minecraft/client/multiplayer/resolver/ServerRedirectHandler", "net/minecraft/class_6371", "net/minecraft/client/network/RedirectResolver", "net/minecraft/src/C_141681_"));
        }
        return cachedClass;
    };

    // getter for static public field net.minecraft.client.network.RedirectResolver#LOGGER
    [[maybe_unused]] static jobject get_field_LOGGER() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "LOGGER", "field_33749", "LOGGER", "f_171892_"), "Lorg/slf4j/Logger;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.client.network.RedirectResolver#LOGGER
    [[maybe_unused]] static void set_field_LOGGER(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "LOGGER", "field_33749", "LOGGER", "f_171892_"), "Lorg/slf4j/Logger;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.client.network.RedirectResolver#INVALID
    [[maybe_unused]] static jobject get_field_INVALID() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "EMPTY", "field_33750", "INVALID", "f_171893_"), "Lgba;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.client.network.RedirectResolver#INVALID
    [[maybe_unused]] static void set_field_INVALID(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "EMPTY", "field_33750", "INVALID", "f_171893_"), "Lgba;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    static jmethodID methodID_lookupRedirect() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("lookupRedirect", "lookupRedirect", "lookupRedirect", "lookupRedirect", "m_171901_"), "(Lgax;)Ljava/util/Optional;");
    }

    static jobject lookupRedirect(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_lookupRedirect();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_createSrv() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("createDnsSrvRedirectHandler", "createDnsSrvRedirectHandler", "method_36909", "createSrv", "m_171895_"), "()Lgba;");
    }

    static jobject createSrv() {
       const auto clazz = self();
       const auto methodID = methodID_createSrv();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID);
    };
    
};

#endif // NET_MINECRAFT_CLIENT_NETWORK_REDIRECTRESOLVER_HPP