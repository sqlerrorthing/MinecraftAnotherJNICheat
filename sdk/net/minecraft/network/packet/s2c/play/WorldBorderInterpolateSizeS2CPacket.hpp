// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_NETWORK_PACKET_S2C_PLAY_WORLDBORDERINTERPOLATESIZES2CPACKET_HPP
#define NET_MINECRAFT_NETWORK_PACKET_S2C_PLAY_WORLDBORDERINTERPOLATESIZES2CPACKET_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.network.packet.s2c.play.WorldBorderInterpolateSizeS2CPacket
 * Remapped: aep
 */
namespace WorldBorderInterpolateSizeS2CPacket {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("aep", "net/minecraft/network/protocol/game/ClientboundSetBorderLerpSizePacket", "net/minecraft/class_5896", "net/minecraft/network/packet/s2c/play/WorldBorderInterpolateSizeS2CPacket", "net/minecraft/src/C_141865_"));
        }
        return cachedClass;
    };

    // getter for static public field net.minecraft.network.packet.s2c.play.WorldBorderInterpolateSizeS2CPacket#CODEC
    [[maybe_unused]] static jobject get_field_CODEC() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "STREAM_CODEC", "field_47969", "CODEC", "f_315852_"), "Lyx;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.network.packet.s2c.play.WorldBorderInterpolateSizeS2CPacket#CODEC
    [[maybe_unused]] static void set_field_CODEC(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "STREAM_CODEC", "field_47969", "CODEC", "f_315852_"), "Lyx;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for private field net.minecraft.network.packet.s2c.play.WorldBorderInterpolateSizeS2CPacket#size
    static jdouble get_field_size(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "oldSize", "field_29145", "size", "f_179225_"), "D");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetDoubleField(obj, fieldID);
    };

    // setter for static private field net.minecraft.network.packet.s2c.play.WorldBorderInterpolateSizeS2CPacket#size
    static void set_field_size(const jobject &obj, const jdouble &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "oldSize", "field_29145", "size", "f_179225_"), "D");
        return MinecraftSDK::env->SetDoubleField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.network.packet.s2c.play.WorldBorderInterpolateSizeS2CPacket#sizeLerpTarget
    static jdouble get_field_sizeLerpTarget(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "newSize", "field_29146", "sizeLerpTarget", "f_179226_"), "D");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetDoubleField(obj, fieldID);
    };

    // setter for static private field net.minecraft.network.packet.s2c.play.WorldBorderInterpolateSizeS2CPacket#sizeLerpTarget
    static void set_field_sizeLerpTarget(const jobject &obj, const jdouble &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "newSize", "field_29146", "sizeLerpTarget", "f_179226_"), "D");
        return MinecraftSDK::env->SetDoubleField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.network.packet.s2c.play.WorldBorderInterpolateSizeS2CPacket#sizeLerpTime
    static jlong get_field_sizeLerpTime(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "lerpTime", "field_29147", "sizeLerpTime", "f_179227_"), "J");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetLongField(obj, fieldID);
    };

    // setter for static private field net.minecraft.network.packet.s2c.play.WorldBorderInterpolateSizeS2CPacket#sizeLerpTime
    static void set_field_sizeLerpTime(const jobject &obj, const jlong &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "lerpTime", "field_29147", "sizeLerpTime", "f_179227_"), "J");
        return MinecraftSDK::env->SetLongField(obj, fieldID, value);
    };

    static jmethodID methodID_write() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "write", "method_55916", "write", "m_179232_"), "(Lvw;)V");
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
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "handle", "method_34159", "apply", "m_5797_"), "(Labu;)V");
    }

    static void apply(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_apply();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_getSize() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "getOldSize", "method_34160", "getSize", "m_179238_"), "()D");
    }

    static jdouble getSize(const jobject& obj) {
                
       const auto methodID = methodID_getSize();
       return MinecraftSDK::env->CallDoubleMethod(obj, methodID);
    };
    
    static jmethodID methodID_getSizeLerpTarget() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("e", "getNewSize", "method_34161", "getSizeLerpTarget", "m_179239_"), "()D");
    }

    static jdouble getSizeLerpTarget(const jobject& obj) {
                
       const auto methodID = methodID_getSizeLerpTarget();
       return MinecraftSDK::env->CallDoubleMethod(obj, methodID);
    };
    
    static jmethodID methodID_getSizeLerpTime() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("f", "getLerpTime", "method_34162", "getSizeLerpTime", "m_179240_"), "()J");
    }

    static jlong getSizeLerpTime(const jobject& obj) {
                
       const auto methodID = methodID_getSizeLerpTime();
       return MinecraftSDK::env->CallLongMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_NETWORK_PACKET_S2C_PLAY_WORLDBORDERINTERPOLATESIZES2CPACKET_HPP