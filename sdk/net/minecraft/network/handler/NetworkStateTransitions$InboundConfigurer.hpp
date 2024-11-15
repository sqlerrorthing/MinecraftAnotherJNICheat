// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_NETWORK_HANDLER_NETWORKSTATETRANSITIONS$INBOUNDCONFIGURER_HPP
#define NET_MINECRAFT_NETWORK_HANDLER_NETWORKSTATETRANSITIONS$INBOUNDCONFIGURER_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.network.handler.NetworkStateTransitions$InboundConfigurer
 * Remapped: wo$a
 */
namespace NetworkStateTransitions$InboundConfigurer {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("wo$a", "net/minecraft/network/UnconfiguredPipelineHandler$Inbound", "net/minecraft/class_9130$class_9131", "net/minecraft/network/handler/NetworkStateTransitions$InboundConfigurer", "net/minecraft/src/C_313668_$C_313752_"));
        }
        return cachedClass;
    };

    static jmethodID methodID_channelRead() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("channelRead", "channelRead", "channelRead", "channelRead", "channelRead"), "(Lio/netty/channel/ChannelHandlerContext;Ljava/lang/Object;)V");
    }

    static void channelRead(const jobject& obj, const jobject& arg0, const jobject& arg1) {
                
       const auto methodID = methodID_channelRead();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1);
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

#endif // NET_MINECRAFT_NETWORK_HANDLER_NETWORKSTATETRANSITIONS$INBOUNDCONFIGURER_HPP