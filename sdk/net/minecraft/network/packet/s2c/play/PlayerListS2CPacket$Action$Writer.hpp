// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_NETWORK_PACKET_S2C_PLAY_PLAYERLISTS2CPACKET$ACTION$WRITER_HPP
#define NET_MINECRAFT_NETWORK_PACKET_S2C_PLAY_PLAYERLISTS2CPACKET$ACTION$WRITER_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.network.packet.s2c.play.PlayerListS2CPacket$Action$Writer
 * Remapped: aea$a$b
 */
namespace PlayerListS2CPacket$Action$Writer {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("aea$a$b", "net/minecraft/network/protocol/game/ClientboundPlayerInfoUpdatePacket$Action$Writer", "net/minecraft/class_2703$class_5893$class_7830", "net/minecraft/network/packet/s2c/play/PlayerListS2CPacket$Action$Writer", "net/minecraft/src/C_243593_$C_243543_$C_243656_"));
        }
        return cachedClass;
    };

    static jmethodID methodID_write() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("write", "write", "write", "write", "m_247205_"), "(Lwk;Laea$b;)V");
    }

    static void write(const jobject& obj, const jobject& arg0, const jobject& arg1) {
                
       const auto methodID = methodID_write();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1);
    };
    
};

#endif // NET_MINECRAFT_NETWORK_PACKET_S2C_PLAY_PLAYERLISTS2CPACKET$ACTION$WRITER_HPP