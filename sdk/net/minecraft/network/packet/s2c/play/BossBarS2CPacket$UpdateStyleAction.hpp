// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_NETWORK_PACKET_S2C_PLAY_BOSSBARS2CPACKET$UPDATESTYLEACTION_HPP
#define NET_MINECRAFT_NETWORK_PACKET_S2C_PLAY_BOSSBARS2CPACKET$UPDATESTYLEACTION_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.network.packet.s2c.play.BossBarS2CPacket$UpdateStyleAction
 * Remapped: ace$h
 */
namespace BossBarS2CPacket$UpdateStyleAction {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("ace$h", "net/minecraft/network/protocol/game/ClientboundBossEventPacket$UpdateStyleOperation", "net/minecraft/class_2629$class_5887", "net/minecraft/network/packet/s2c/play/BossBarS2CPacket$UpdateStyleAction", "net/minecraft/src/C_5044_$C_141850_"));
        }
        return cachedClass;
    };

    // getter for private field net.minecraft.network.packet.s2c.play.BossBarS2CPacket$UpdateStyleAction#color
    static jobject get_field_color(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "color", "field_29120", "color", "f_178760_"), "Lbqh$a;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.network.packet.s2c.play.BossBarS2CPacket$UpdateStyleAction#color
    static void set_field_color(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "color", "field_29120", "color", "f_178760_"), "Lbqh$a;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.network.packet.s2c.play.BossBarS2CPacket$UpdateStyleAction#style
    static jobject get_field_style(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "overlay", "field_29121", "style", "f_178761_"), "Lbqh$b;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.network.packet.s2c.play.BossBarS2CPacket$UpdateStyleAction#style
    static void set_field_style(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "overlay", "field_29121", "style", "f_178761_"), "Lbqh$b;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID_getType() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getType", "method_34105", "getType", "m_142659_"), "()Lace$d;");
    }

    static jobject getType(const jobject& obj) {
                
       const auto methodID = methodID_getType();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_accept() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "dispatch", "method_34106", "accept", "m_142282_"), "(Ljava/util/UUID;Lace$b;)V");
    }

    static void accept(const jobject& obj, const jobject& arg0, const jobject& arg1) {
                
       const auto methodID = methodID_accept();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_toPacket() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "write", "method_34107", "toPacket", "m_142264_"), "(Lwk;)V");
    }

    static void toPacket(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_toPacket();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
};

#endif // NET_MINECRAFT_NETWORK_PACKET_S2C_PLAY_BOSSBARS2CPACKET$UPDATESTYLEACTION_HPP