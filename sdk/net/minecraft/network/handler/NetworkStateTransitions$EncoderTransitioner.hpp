// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_NETWORK_HANDLER_NETWORKSTATETRANSITIONS$ENCODERTRANSITIONER_HPP
#define NET_MINECRAFT_NETWORK_HANDLER_NETWORKSTATETRANSITIONS$ENCODERTRANSITIONER_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.network.handler.NetworkStateTransitions$EncoderTransitioner
 * Remapped: wo$d
 */
namespace NetworkStateTransitions$EncoderTransitioner {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("wo$d", "net/minecraft/network/UnconfiguredPipelineHandler$OutboundConfigurationTask", "net/minecraft/class_9130$class_9134", "net/minecraft/network/handler/NetworkStateTransitions$EncoderTransitioner", "net/minecraft/src/C_313668_$C_313869_"));
        }
        return cachedClass;
    };

    static jmethodID methodID_run() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("run", "run", "run", "run", "m_322180_"), "(Lio/netty/channel/ChannelHandlerContext;)V");
    }

    static void run(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_run();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_andThen() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("andThen", "andThen", "", "", "m_322612_"), "(Lwo$d;)Lwo$d;");
    }

    static jobject andThen(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_andThen();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
};

#endif // NET_MINECRAFT_NETWORK_HANDLER_NETWORKSTATETRANSITIONS$ENCODERTRANSITIONER_HPP