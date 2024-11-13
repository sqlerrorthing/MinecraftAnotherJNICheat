// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_SERVER_NETWORK_SERVERPLAYERCONFIGURATIONTASK_HPP
#define NET_MINECRAFT_SERVER_NETWORK_SERVERPLAYERCONFIGURATIONTASK_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.server.network.ServerPlayerConfigurationTask
 * Remapped: ark
 */
namespace ServerPlayerConfigurationTask {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("ark", "net/minecraft/server/network/ConfigurationTask", "net/minecraft/class_8605", "net/minecraft/server/network/ServerPlayerConfigurationTask", "net/minecraft/src/C_290125_"));
        }
        return cachedClass;
    };

    static jmethodID methodID_sendPacket() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "start", "method_52376", "sendPacket", "m_293075_"), "(Ljava/util/function/Consumer;)V");
    }

    static void sendPacket(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_sendPacket();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_getKey() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "type", "method_52375", "getKey", "m_293172_"), "()Lark$a;");
    }

    static jobject getKey(const jobject& obj) {
                
       const auto methodID = methodID_getKey();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_SERVER_NETWORK_SERVERPLAYERCONFIGURATIONTASK_HPP