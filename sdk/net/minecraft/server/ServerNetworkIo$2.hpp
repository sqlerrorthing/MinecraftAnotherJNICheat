// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_SERVER_SERVERNETWORKIO$2_HPP
#define NET_MINECRAFT_SERVER_SERVERNETWORKIO$2_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.server.ServerNetworkIo$2
 * Remapped: art$2
 */
namespace ServerNetworkIo$2 {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("art$2", "net/minecraft/server/network/ServerConnectionListener$2", "net/minecraft/class_3242$2", "net/minecraft/server/ServerNetworkIo$2", "net/minecraft/src/C_28_$C_30_"));
        }
        return cachedClass;
    };

    static jmethodID methodID_initChannel() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("initChannel", "initChannel", "initChannel", "initChannel", "initChannel"), "(Lio/netty/channel/Channel;)V");
    }

    static void initChannel(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_initChannel();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
};

#endif // NET_MINECRAFT_SERVER_SERVERNETWORKIO$2_HPP