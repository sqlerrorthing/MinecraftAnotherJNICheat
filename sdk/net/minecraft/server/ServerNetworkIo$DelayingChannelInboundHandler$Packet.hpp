// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_SERVER_SERVERNETWORKIO$DELAYINGCHANNELINBOUNDHANDLER$PACKET_HPP
#define NET_MINECRAFT_SERVER_SERVERNETWORKIO$DELAYINGCHANNELINBOUNDHANDLER$PACKET_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.server.ServerNetworkIo$DelayingChannelInboundHandler$Packet
 * Remapped: art$a$a
 */
namespace ServerNetworkIo$DelayingChannelInboundHandler$Packet {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("art$a$a", "net/minecraft/server/network/ServerConnectionListener$LatencySimulator$DelayedMessage", "net/minecraft/class_3242$class_5980$class_5981", "net/minecraft/server/ServerNetworkIo$DelayingChannelInboundHandler$Packet", "net/minecraft/src/C_28_$C_140958_$C_140959_"));
        }
        return cachedClass;
    };

    // getter for public field net.minecraft.server.ServerNetworkIo$DelayingChannelInboundHandler$Packet#context
    static jobject get_field_context(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "ctx", "field_29776", "context", "f_143603_"), "Lio/netty/channel/ChannelHandlerContext;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static public field net.minecraft.server.ServerNetworkIo$DelayingChannelInboundHandler$Packet#context
    static void set_field_context(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "ctx", "field_29776", "context", "f_143603_"), "Lio/netty/channel/ChannelHandlerContext;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for public field net.minecraft.server.ServerNetworkIo$DelayingChannelInboundHandler$Packet#message
    static jobject get_field_message(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "msg", "field_29777", "message", "f_143604_"), "Ljava/lang/Object;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static public field net.minecraft.server.ServerNetworkIo$DelayingChannelInboundHandler$Packet#message
    static void set_field_message(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "msg", "field_29777", "message", "f_143604_"), "Ljava/lang/Object;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

};

#endif // NET_MINECRAFT_SERVER_SERVERNETWORKIO$DELAYINGCHANNELINBOUNDHANDLER$PACKET_HPP