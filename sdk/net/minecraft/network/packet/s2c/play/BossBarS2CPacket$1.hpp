// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_NETWORK_PACKET_S2C_PLAY_BOSSBARS2CPACKET$1_HPP
#define NET_MINECRAFT_NETWORK_PACKET_S2C_PLAY_BOSSBARS2CPACKET$1_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.network.packet.s2c.play.BossBarS2CPacket$1
 * Remapped: ace$1
 */
namespace BossBarS2CPacket$1 {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("ace$1", "net/minecraft/network/protocol/game/ClientboundBossEventPacket$1", "net/minecraft/class_2629$1", "net/minecraft/network/packet/s2c/play/BossBarS2CPacket$1", "net/minecraft/src/C_5044_$C_5045_"));
        }
        return cachedClass;
    };

    static jmethodID methodID_getType() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getType", "method_34105", "getType", "m_142659_"), "()Lace$d;");
    }

    static jobject getType(const jobject& obj) {
                
       const auto methodID = methodID_getType();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_accept() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "dispatch", "method_34106", "accept", "m_142282_"), "(Ljava/util/UUID;Lace$b;)V");
    }

    static void accept(const jobject& obj, const jobject& arg0, const jobject& arg1) {
                
       const auto methodID = methodID_accept();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_toPacket() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "write", "method_34107", "toPacket", "m_142264_"), "(Lwk;)V");
    }

    static void toPacket(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_toPacket();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
};

#endif // NET_MINECRAFT_NETWORK_PACKET_S2C_PLAY_BOSSBARS2CPACKET$1_HPP