// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_NETWORK_PACKET_CUSTOMPAYLOAD$ID_HPP
#define NET_MINECRAFT_NETWORK_PACKET_CUSTOMPAYLOAD$ID_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.network.packet.CustomPayload$Id
 * Remapped: aaj$b
 */
namespace CustomPayload$Id {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("aaj$b", "net/minecraft/network/protocol/common/custom/CustomPacketPayload$Type", "net/minecraft/class_8710$class_9154", "net/minecraft/network/packet/CustomPayload$Id", "net/minecraft/src/C_290145_$C_313786_"));
        }
        return cachedClass;
    };

    // getter for default field net.minecraft.network.packet.CustomPayload$Id#id
    static jobject get_field_id(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "id", "comp_2242", "id", "f_314054_"), "Lakr;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static default field net.minecraft.network.packet.CustomPayload$Id#id
    static void set_field_id(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "id", "comp_2242", "id", "f_314054_"), "Lakr;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID__id() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "id", "comp_2242", "id", "f_314054_"), "()Lakr;");
    }

    static jobject _id(const jobject& obj) {
                
       const auto methodID = methodID__id();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_NETWORK_PACKET_CUSTOMPAYLOAD$ID_HPP