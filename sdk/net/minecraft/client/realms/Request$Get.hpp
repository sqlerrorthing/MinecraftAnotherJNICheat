// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_CLIENT_REALMS_REQUEST$GET_HPP
#define NET_MINECRAFT_CLIENT_REALMS_REQUEST$GET_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.client.realms.Request$Get
 * Remapped: fcb$b
 */
namespace Request$Get {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("fcb$b", "com/mojang/realmsclient/client/Request$Get", "net/minecraft/class_4346$class_4348", "net/minecraft/client/realms/Request$Get", "net/minecraft/src/C_3228_$C_3230_"));
        }
        return cachedClass;
    };

    static jmethodID methodID_doConnect() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("f", "doConnect", "method_21058", "doConnect", "m_7218_"), "()Lfcb$b;");
    }

    static jobject doConnect(const jobject& obj) {
                
       const auto methodID = methodID_doConnect();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_CLIENT_REALMS_REQUEST$GET_HPP