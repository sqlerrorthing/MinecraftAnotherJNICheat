// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_CLIENT_NETWORK_CLIENTCOMMONNETWORKHANDLER$QUEUEDPACKET_HPP
#define NET_MINECRAFT_CLIENT_NETWORK_CLIENTCOMMONNETWORKHANDLER$QUEUEDPACKET_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.client.network.ClientCommonNetworkHandler$QueuedPacket
 * Remapped: fzc$a
 */
namespace ClientCommonNetworkHandler$QueuedPacket {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("fzc$a", "net/minecraft/client/multiplayer/ClientCommonPacketListenerImpl$DeferredPacket", "net/minecraft/class_8673$class_8137", "net/minecraft/client/network/ClientCommonNetworkHandler$QueuedPacket", "net/minecraft/src/C_290116_$C_290156_"));
        }
        return cachedClass;
    };

    // getter for default field net.minecraft.client.network.ClientCommonNetworkHandler$QueuedPacket#packet
    static jobject get_field_packet(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "packet", "comp_1264", "packet", "f_291164_"), "Lzg;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static default field net.minecraft.client.network.ClientCommonNetworkHandler$QueuedPacket#packet
    static void set_field_packet(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "packet", "comp_1264", "packet", "f_291164_"), "Lzg;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.network.ClientCommonNetworkHandler$QueuedPacket#sendCondition
    static jobject get_field_sendCondition(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "sendCondition", "comp_1265", "sendCondition", "f_291727_"), "Ljava/util/function/BooleanSupplier;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.network.ClientCommonNetworkHandler$QueuedPacket#sendCondition
    static void set_field_sendCondition(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "sendCondition", "comp_1265", "sendCondition", "f_291727_"), "Ljava/util/function/BooleanSupplier;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.network.ClientCommonNetworkHandler$QueuedPacket#expirationTime
    static jlong get_field_expirationTime(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "expirationTime", "comp_1266", "expirationTime", "f_291012_"), "J");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetLongField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.network.ClientCommonNetworkHandler$QueuedPacket#expirationTime
    static void set_field_expirationTime(const jobject &obj, const jlong &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "expirationTime", "comp_1266", "expirationTime", "f_291012_"), "J");
        return MinecraftSDK::env->SetLongField(obj, fieldID, value);
    };

    static jmethodID methodID__packet() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "packet", "comp_1264", "packet", "f_291164_"), "()Lzg;");
    }

    static jobject _packet(const jobject& obj) {
                
       const auto methodID = methodID__packet();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID__sendCondition() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "sendCondition", "comp_1265", "sendCondition", "f_291727_"), "()Ljava/util/function/BooleanSupplier;");
    }

    static jobject _sendCondition(const jobject& obj) {
                
       const auto methodID = methodID__sendCondition();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID__expirationTime() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "expirationTime", "comp_1266", "expirationTime", "f_291012_"), "()J");
    }

    static jlong _expirationTime(const jobject& obj) {
                
       const auto methodID = methodID__expirationTime();
       return MinecraftSDK::env->CallLongMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_CLIENT_NETWORK_CLIENTCOMMONNETWORKHANDLER$QUEUEDPACKET_HPP