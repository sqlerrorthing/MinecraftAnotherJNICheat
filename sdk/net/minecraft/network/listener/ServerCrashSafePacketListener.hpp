// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_NETWORK_LISTENER_SERVERCRASHSAFEPACKETLISTENER_HPP
#define NET_MINECRAFT_NETWORK_LISTENER_SERVERCRASHSAFEPACKETLISTENER_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.network.listener.ServerCrashSafePacketListener
 * Remapped: agj
 */
namespace ServerCrashSafePacketListener {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("agj", "net/minecraft/network/protocol/game/ServerPacketListener", "net/minecraft/class_6857", "net/minecraft/network/listener/ServerCrashSafePacketListener", "net/minecraft/src/C_201415_"));
        }
        return cachedClass;
    };

    // getter for static public field net.minecraft.network.listener.ServerCrashSafePacketListener#LOGGER
    [[maybe_unused]] static jobject get_field_LOGGER() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "LOGGER", "field_51479", "LOGGER", "f_315882_"), "Lorg/slf4j/Logger;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.network.listener.ServerCrashSafePacketListener#LOGGER
    [[maybe_unused]] static void set_field_LOGGER(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "LOGGER", "field_51479", "LOGGER", "f_315882_"), "Lorg/slf4j/Logger;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    static jmethodID methodID_onPacketException() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "onPacketError", "method_59807", "onPacketException", "m_322364_"), "(Lzg;Ljava/lang/Exception;)V");
    }

    static void onPacketException(const jobject& obj, const jobject& arg0, const jobject& arg1) {
                
       const auto methodID = methodID_onPacketException();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1);
    };
    
};

#endif // NET_MINECRAFT_NETWORK_LISTENER_SERVERCRASHSAFEPACKETLISTENER_HPP