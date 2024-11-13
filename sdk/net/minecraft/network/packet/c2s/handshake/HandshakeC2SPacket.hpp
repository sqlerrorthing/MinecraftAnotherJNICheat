// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_NETWORK_PACKET_C2S_HANDSHAKE_HANDSHAKEC2SPACKET_HPP
#define NET_MINECRAFT_NETWORK_PACKET_C2S_HANDSHAKE_HANDSHAKEC2SPACKET_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.network.packet.c2s.handshake.HandshakeC2SPacket
 * Remapped: aij
 */
namespace HandshakeC2SPacket {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("aij", "net/minecraft/network/protocol/handshake/ClientIntentionPacket", "net/minecraft/class_2889", "net/minecraft/network/packet/c2s/handshake/HandshakeC2SPacket", "net/minecraft/src/C_5200_"));
        }
        return cachedClass;
    };

    // getter for private field net.minecraft.network.packet.c2s.handshake.HandshakeC2SPacket#protocolVersion
    static jint get_field_protocolVersion(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "protocolVersion", "comp_1563", "protocolVersion", "f_134720_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetIntField(obj, fieldID);
    };

    // setter for static private field net.minecraft.network.packet.c2s.handshake.HandshakeC2SPacket#protocolVersion
    static void set_field_protocolVersion(const jobject &obj, const jint &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "protocolVersion", "comp_1563", "protocolVersion", "f_134720_"), "I");
        return MinecraftSDK::env->SetIntField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.network.packet.c2s.handshake.HandshakeC2SPacket#address
    static jobject get_field_address(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "hostName", "comp_1564", "address", "f_134721_"), "Ljava/lang/String;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.network.packet.c2s.handshake.HandshakeC2SPacket#address
    static void set_field_address(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "hostName", "comp_1564", "address", "f_134721_"), "Ljava/lang/String;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.network.packet.c2s.handshake.HandshakeC2SPacket#port
    static jint get_field_port(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "port", "comp_1565", "port", "f_134722_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetIntField(obj, fieldID);
    };

    // setter for static private field net.minecraft.network.packet.c2s.handshake.HandshakeC2SPacket#port
    static void set_field_port(const jobject &obj, const jint &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "port", "comp_1565", "port", "f_134722_"), "I");
        return MinecraftSDK::env->SetIntField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.network.packet.c2s.handshake.HandshakeC2SPacket#intendedState
    static jobject get_field_intendedState(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "intention", "comp_1566", "intendedState", "f_134723_"), "Laii;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.network.packet.c2s.handshake.HandshakeC2SPacket#intendedState
    static void set_field_intendedState(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "intention", "comp_1566", "intendedState", "f_134723_"), "Laii;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for static public field net.minecraft.network.packet.c2s.handshake.HandshakeC2SPacket#CODEC
    [[maybe_unused]] static jobject get_field_CODEC() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "STREAM_CODEC", "field_48229", "CODEC", "f_317116_"), "Lyx;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.network.packet.c2s.handshake.HandshakeC2SPacket#CODEC
    [[maybe_unused]] static void set_field_CODEC(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "STREAM_CODEC", "field_48229", "CODEC", "f_317116_"), "Lyx;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.network.packet.c2s.handshake.HandshakeC2SPacket#MAX_ADDRESS_LENGTH
    [[maybe_unused]] static jint get_field_MAX_ADDRESS_LENGTH() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("f", "MAX_HOST_LENGTH", "field_33372", "MAX_ADDRESS_LENGTH", "f_179799_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.network.packet.c2s.handshake.HandshakeC2SPacket#MAX_ADDRESS_LENGTH
    [[maybe_unused]] static void set_field_MAX_ADDRESS_LENGTH(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("f", "MAX_HOST_LENGTH", "field_33372", "MAX_ADDRESS_LENGTH", "f_179799_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    static jmethodID methodID_write() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "write", "method_56007", "write", "m_134736_"), "(Lvw;)V");
    }

    static void write(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_write();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
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
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "handle", "method_12575", "apply", "m_5797_"), "(Laim;)V");
    }

    static void apply(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_apply();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_transitionsNetworkState() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("d", "isTerminal", "method_55943", "transitionsNetworkState", "m_319635_"), "()Z");
    }

    static jboolean transitionsNetworkState(const jobject& obj) {
                
       const auto methodID = methodID_transitionsNetworkState();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID);
    };
    
    static jmethodID methodID__protocolVersion() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "protocolVersion", "comp_1563", "protocolVersion", "f_134720_"), "()I");
    }

    static jint _protocolVersion(const jobject& obj) {
                
       const auto methodID = methodID__protocolVersion();
       return MinecraftSDK::env->CallIntMethod(obj, methodID);
    };
    
    static jmethodID methodID__address() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("e", "hostName", "comp_1564", "address", "f_134721_"), "()Ljava/lang/String;");
    }

    static jobject _address(const jobject& obj) {
                
       const auto methodID = methodID__address();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID__port() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("f", "port", "comp_1565", "port", "f_134722_"), "()I");
    }

    static jint _port(const jobject& obj) {
                
       const auto methodID = methodID__port();
       return MinecraftSDK::env->CallIntMethod(obj, methodID);
    };
    
    static jmethodID methodID__intendedState() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("g", "intention", "comp_1566", "intendedState", "f_134723_"), "()Laii;");
    }

    static jobject _intendedState(const jobject& obj) {
                
       const auto methodID = methodID__intendedState();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_NETWORK_PACKET_C2S_HANDSHAKE_HANDSHAKEC2SPACKET_HPP