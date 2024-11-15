// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_NETWORK_PACKET_C2S_QUERY_QUERYREQUESTC2SPACKET_HPP
#define NET_MINECRAFT_NETWORK_PACKET_C2S_QUERY_QUERYREQUESTC2SPACKET_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.network.packet.c2s.query.QueryRequestC2SPacket
 * Remapped: ajs
 */
namespace QueryRequestC2SPacket {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("ajs", "net/minecraft/network/protocol/status/ServerboundStatusRequestPacket", "net/minecraft/class_2937", "net/minecraft/network/packet/c2s/query/QueryRequestC2SPacket", "net/minecraft/src/C_5224_"));
        }
        return cachedClass;
    };

    // getter for static public field net.minecraft.network.packet.c2s.query.QueryRequestC2SPacket#INSTANCE
    [[maybe_unused]] static jobject get_field_INSTANCE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "INSTANCE", "field_48259", "INSTANCE", "f_315857_"), "Lajs;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.network.packet.c2s.query.QueryRequestC2SPacket#INSTANCE
    [[maybe_unused]] static void set_field_INSTANCE(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "INSTANCE", "field_48259", "INSTANCE", "f_315857_"), "Lajs;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.network.packet.c2s.query.QueryRequestC2SPacket#CODEC
    [[maybe_unused]] static jobject get_field_CODEC() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "STREAM_CODEC", "field_48260", "CODEC", "f_314883_"), "Lyx;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.network.packet.c2s.query.QueryRequestC2SPacket#CODEC
    [[maybe_unused]] static void set_field_CODEC(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "STREAM_CODEC", "field_48260", "CODEC", "f_314883_"), "Lyx;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    static jmethodID methodID_getPacketId() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "type", "method_55846", "getPacketId", "m_5779_"), "()Lzi;");
    }

    static jobject getPacketId(const jobject& obj) {
                
       const auto methodID = methodID_getPacketId();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_apply() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "handle", "method_12701", "apply", "m_5797_"), "(Lajr;)V");
    }

    static void apply(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_apply();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
};

#endif // NET_MINECRAFT_NETWORK_PACKET_C2S_QUERY_QUERYREQUESTC2SPACKET_HPP