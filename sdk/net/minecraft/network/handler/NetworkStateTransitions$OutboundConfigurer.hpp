// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_NETWORK_HANDLER_NETWORKSTATETRANSITIONS$OUTBOUNDCONFIGURER_HPP
#define NET_MINECRAFT_NETWORK_HANDLER_NETWORKSTATETRANSITIONS$OUTBOUNDCONFIGURER_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.network.handler.NetworkStateTransitions$OutboundConfigurer
 * Remapped: wo$c
 */
namespace NetworkStateTransitions$OutboundConfigurer {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("wo$c", "net/minecraft/network/UnconfiguredPipelineHandler$Outbound", "net/minecraft/class_9130$class_9133", "net/minecraft/network/handler/NetworkStateTransitions$OutboundConfigurer", "net/minecraft/src/C_313668_$C_313310_"));
        }
        return cachedClass;
    };

    static jmethodID methodID_write() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("write", "write", "write", "write", "write"), "(Lio/netty/channel/ChannelHandlerContext;Ljava/lang/Object;Lio/netty/channel/ChannelPromise;)V");
    }

    static void write(const jobject& obj, const jobject& arg0, const jobject& arg1, const jobject& arg2) {
                
       const auto methodID = methodID_write();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1, arg2);
    };
    
};

#endif // NET_MINECRAFT_NETWORK_HANDLER_NETWORKSTATETRANSITIONS$OUTBOUNDCONFIGURER_HPP