// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_NETWORK_PACKET_CUSTOMPAYLOAD$TYPE_HPP
#define NET_MINECRAFT_NETWORK_PACKET_CUSTOMPAYLOAD$TYPE_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.network.packet.CustomPayload$Type
 * Remapped: aaj$c
 */
namespace CustomPayload$Type {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("aaj$c", "net/minecraft/network/protocol/common/custom/CustomPacketPayload$TypeAndCodec", "net/minecraft/class_8710$class_9155", "net/minecraft/network/packet/CustomPayload$Type", "net/minecraft/src/C_290145_$C_313382_"));
        }
        return cachedClass;
    };

    // getter for private field net.minecraft.network.packet.CustomPayload$Type#id
    static jobject get_field_id(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "type", "comp_2243", "id", "f_317091_"), "Laaj$b;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.network.packet.CustomPayload$Type#id
    static void set_field_id(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "type", "comp_2243", "id", "f_317091_"), "Laaj$b;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.network.packet.CustomPayload$Type#codec
    static jobject get_field_codec(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "codec", "comp_2244", "codec", "f_314756_"), "Lyx;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.network.packet.CustomPayload$Type#codec
    static void set_field_codec(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "codec", "comp_2244", "codec", "f_314756_"), "Lyx;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID__id() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "type", "comp_2243", "id", "f_317091_"), "()Laaj$b;");
    }

    static jobject _id(const jobject& obj) {
                
       const auto methodID = methodID__id();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID__codec() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "codec", "comp_2244", "codec", "f_314756_"), "()Lyx;");
    }

    static jobject _codec(const jobject& obj) {
                
       const auto methodID = methodID__codec();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_NETWORK_PACKET_CUSTOMPAYLOAD$TYPE_HPP