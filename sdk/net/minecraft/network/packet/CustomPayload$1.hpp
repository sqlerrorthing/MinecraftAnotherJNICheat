// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_NETWORK_PACKET_CUSTOMPAYLOAD$1_HPP
#define NET_MINECRAFT_NETWORK_PACKET_CUSTOMPAYLOAD$1_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.network.packet.CustomPayload$1
 * Remapped: aaj$1
 */
namespace CustomPayload$1 {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("aaj$1", "net/minecraft/network/protocol/common/custom/CustomPacketPayload$1", "net/minecraft/class_8710$1", "net/minecraft/network/packet/CustomPayload$1", "net/minecraft/src/C_290145_$C_313656_"));
        }
        return cachedClass;
    };

    static jmethodID methodID_getCodec() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "findCodec", "method_56487", "getCodec", "m_319999_"), "(Lakr;)Lyx;");
    }

    static jobject getCodec(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_getCodec();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_encode() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "writeCap", "method_56489", "encode", "m_325081_"), "(Lvw;Laaj$b;Laaj;)V");
    }

    static void encode(const jobject& obj, const jobject& arg0, const jobject& arg1, const jobject& arg2) {
                
       const auto methodID = methodID_encode();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1, arg2);
    };
    
    static jmethodID methodID__encode() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "encode", "method_56490", "encode", "m_318638_"), "(Lvw;Laaj;)V");
    }

    static void _encode(const jobject& obj, const jobject& arg0, const jobject& arg1) {
                
       const auto methodID = methodID__encode();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_decode() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "decode", "method_56488", "decode", "m_318688_"), "(Lvw;)Laaj;");
    }

    static jobject decode(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_decode();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
};

#endif // NET_MINECRAFT_NETWORK_PACKET_CUSTOMPAYLOAD$1_HPP