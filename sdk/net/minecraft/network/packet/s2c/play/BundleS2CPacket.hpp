// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_NETWORK_PACKET_S2C_PLAY_BUNDLES2CPACKET_HPP
#define NET_MINECRAFT_NETWORK_PACKET_S2C_PLAY_BUNDLES2CPACKET_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.network.packet.s2c.play.BundleS2CPacket
 * Remapped: acg
 */
namespace BundleS2CPacket {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("acg", "net/minecraft/network/protocol/game/ClientboundBundlePacket", "net/minecraft/class_8042", "net/minecraft/network/packet/s2c/play/BundleS2CPacket", "net/minecraft/src/C_263635_"));
        }
        return cachedClass;
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
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "handle", "method_48329", "apply", "m_5797_"), "(Labu;)V");
    }

    static void apply(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_apply();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
};

#endif // NET_MINECRAFT_NETWORK_PACKET_S2C_PLAY_BUNDLES2CPACKET_HPP