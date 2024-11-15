// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_NETWORK_PACKET_BUNDLEPACKET_HPP
#define NET_MINECRAFT_NETWORK_PACKET_BUNDLEPACKET_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.network.packet.BundlePacket
 * Remapped: ze
 */
namespace BundlePacket {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("ze", "net/minecraft/network/protocol/BundlePacket", "net/minecraft/class_8038", "net/minecraft/network/packet/BundlePacket", "net/minecraft/src/C_263646_"));
        }
        return cachedClass;
    };

    // getter for private field net.minecraft.network.packet.BundlePacket#packets
    static jobject get_field_packets(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "packets", "field_41876", "packets", "f_263700_"), "Ljava/lang/Iterable;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.network.packet.BundlePacket#packets
    static void set_field_packets(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "packets", "field_41876", "packets", "f_263700_"), "Ljava/lang/Iterable;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID_getPackets() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "subPackets", "method_48324", "getPackets", "m_264216_"), "()Ljava/lang/Iterable;");
    }

    static jobject getPackets(const jobject& obj) {
                
       const auto methodID = methodID_getPackets();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_getPacketId() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "type", "method_55846", "getPacketId", "m_5779_"), "()Lzi;");
    }

    static jobject getPacketId(const jobject& obj) {
                
       const auto methodID = methodID_getPacketId();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_NETWORK_PACKET_BUNDLEPACKET_HPP