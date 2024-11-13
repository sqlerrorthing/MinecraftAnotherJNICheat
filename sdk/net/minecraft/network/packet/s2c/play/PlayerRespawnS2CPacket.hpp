// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_NETWORK_PACKET_S2C_PLAY_PLAYERRESPAWNS2CPACKET_HPP
#define NET_MINECRAFT_NETWORK_PACKET_S2C_PLAY_PLAYERRESPAWNS2CPACKET_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.network.packet.s2c.play.PlayerRespawnS2CPacket
 * Remapped: aei
 */
namespace PlayerRespawnS2CPacket {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("aei", "net/minecraft/network/protocol/game/ClientboundRespawnPacket", "net/minecraft/class_2724", "net/minecraft/network/packet/s2c/play/PlayerRespawnS2CPacket", "net/minecraft/src/C_5103_"));
        }
        return cachedClass;
    };

    // getter for private field net.minecraft.network.packet.s2c.play.PlayerRespawnS2CPacket#commonPlayerSpawnInfo
    static jobject get_field_commonPlayerSpawnInfo(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "commonPlayerSpawnInfo", "comp_1728", "commonPlayerSpawnInfo", "f_290899_"), "Lagd;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.network.packet.s2c.play.PlayerRespawnS2CPacket#commonPlayerSpawnInfo
    static void set_field_commonPlayerSpawnInfo(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "commonPlayerSpawnInfo", "comp_1728", "commonPlayerSpawnInfo", "f_290899_"), "Lagd;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.network.packet.s2c.play.PlayerRespawnS2CPacket#flag
    static jbyte get_field_flag(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("f", "dataToKeep", "comp_1729", "flag", "f_263553_"), "B");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetByteField(obj, fieldID);
    };

    // setter for static private field net.minecraft.network.packet.s2c.play.PlayerRespawnS2CPacket#flag
    static void set_field_flag(const jobject &obj, const jbyte &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("f", "dataToKeep", "comp_1729", "flag", "f_263553_"), "B");
        return MinecraftSDK::env->SetByteField(obj, fieldID, value);
    };

    // getter for static public field net.minecraft.network.packet.s2c.play.PlayerRespawnS2CPacket#CODEC
    [[maybe_unused]] static jobject get_field_CODEC() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "STREAM_CODEC", "field_47962", "CODEC", "f_314716_"), "Lyx;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.network.packet.s2c.play.PlayerRespawnS2CPacket#CODEC
    [[maybe_unused]] static void set_field_CODEC(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "STREAM_CODEC", "field_47962", "CODEC", "f_314716_"), "Lyx;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.network.packet.s2c.play.PlayerRespawnS2CPacket#KEEP_ATTRIBUTES
    [[maybe_unused]] static jbyte get_field_KEEP_ATTRIBUTES() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "KEEP_ATTRIBUTE_MODIFIERS", "field_41730", "KEEP_ATTRIBUTES", "f_337219_"), "B");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticByteField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.network.packet.s2c.play.PlayerRespawnS2CPacket#KEEP_ATTRIBUTES
    [[maybe_unused]] static void set_field_KEEP_ATTRIBUTES(const jbyte &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "KEEP_ATTRIBUTE_MODIFIERS", "field_41730", "KEEP_ATTRIBUTES", "f_337219_"), "B");
        return MinecraftSDK::env->SetStaticByteField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.network.packet.s2c.play.PlayerRespawnS2CPacket#KEEP_TRACKED_DATA
    [[maybe_unused]] static jbyte get_field_KEEP_TRACKED_DATA() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "KEEP_ENTITY_DATA", "field_41731", "KEEP_TRACKED_DATA", "f_263552_"), "B");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticByteField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.network.packet.s2c.play.PlayerRespawnS2CPacket#KEEP_TRACKED_DATA
    [[maybe_unused]] static void set_field_KEEP_TRACKED_DATA(const jbyte &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "KEEP_ENTITY_DATA", "field_41731", "KEEP_TRACKED_DATA", "f_263552_"), "B");
        return MinecraftSDK::env->SetStaticByteField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.network.packet.s2c.play.PlayerRespawnS2CPacket#KEEP_ALL
    [[maybe_unused]] static jbyte get_field_KEEP_ALL() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("d", "KEEP_ALL_DATA", "field_41732", "KEEP_ALL", "f_263554_"), "B");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticByteField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.network.packet.s2c.play.PlayerRespawnS2CPacket#KEEP_ALL
    [[maybe_unused]] static void set_field_KEEP_ALL(const jbyte &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("d", "KEEP_ALL_DATA", "field_41732", "KEEP_ALL", "f_263554_"), "B");
        return MinecraftSDK::env->SetStaticByteField(clazz, fieldID, value);
    };

    static jmethodID methodID_write() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "write", "method_55909", "write", "m_132953_"), "(Lwk;)V");
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
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "handle", "method_11782", "apply", "m_5797_"), "(Labu;)V");
    }

    static void apply(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_apply();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_hasFlag() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "shouldKeep", "method_48016", "hasFlag", "m_263558_"), "(B)Z");
    }

    static jboolean hasFlag(const jobject& obj, const jbyte& arg0) {
                
       const auto methodID = methodID_hasFlag();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID__commonPlayerSpawnInfo() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "commonPlayerSpawnInfo", "comp_1728", "commonPlayerSpawnInfo", "f_290899_"), "()Lagd;");
    }

    static jobject _commonPlayerSpawnInfo(const jobject& obj) {
                
       const auto methodID = methodID__commonPlayerSpawnInfo();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID__flag() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("e", "dataToKeep", "comp_1729", "flag", "f_263553_"), "()B");
    }

    static jbyte _flag(const jobject& obj) {
                
       const auto methodID = methodID__flag();
       return MinecraftSDK::env->CallByteMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_NETWORK_PACKET_S2C_PLAY_PLAYERRESPAWNS2CPACKET_HPP