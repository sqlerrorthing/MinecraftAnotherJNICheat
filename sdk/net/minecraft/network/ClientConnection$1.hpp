// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_NETWORK_CLIENTCONNECTION$1_HPP
#define NET_MINECRAFT_NETWORK_CLIENTCONNECTION$1_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.network.ClientConnection$1
 * Remapped: vt$1
 */
namespace ClientConnection$1 {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("vt$1", "net/minecraft/network/Connection$1", "net/minecraft/class_2535$1", "net/minecraft/network/ClientConnection$1", "net/minecraft/src/C_4961_$C_4962_"));
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

#endif // NET_MINECRAFT_NETWORK_CLIENTCONNECTION$1_HPP