// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_NETWORK_PACKET_S2C_PLAY_BOSSBARS2CPACKET$UPDATEPROGRESSACTION_HPP
#define NET_MINECRAFT_NETWORK_PACKET_S2C_PLAY_BOSSBARS2CPACKET$UPDATEPROGRESSACTION_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.network.packet.s2c.play.BossBarS2CPacket$UpdateProgressAction
 * Remapped: ace$f
 */
namespace BossBarS2CPacket$UpdateProgressAction {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("ace$f", "net/minecraft/network/protocol/game/ClientboundBossEventPacket$UpdateProgressOperation", "net/minecraft/class_2629$class_5885", "net/minecraft/network/packet/s2c/play/BossBarS2CPacket$UpdateProgressAction", "net/minecraft/src/C_5044_$C_141848_"));
        }
        return cachedClass;
    };

    // getter for private field net.minecraft.network.packet.s2c.play.BossBarS2CPacket$UpdateProgressAction#progress
    static jfloat get_field_progress(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "progress", "comp_2261", "progress", "f_178734_"), "F");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetFloatField(obj, fieldID);
    };

    // setter for static private field net.minecraft.network.packet.s2c.play.BossBarS2CPacket$UpdateProgressAction#progress
    static void set_field_progress(const jobject &obj, const jfloat &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "progress", "comp_2261", "progress", "f_178734_"), "F");
        return MinecraftSDK::env->SetFloatField(obj, fieldID, value);
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
    
    static jmethodID methodID__progress() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "progress", "comp_2261", "progress", "f_178734_"), "()F");
    }

    static jfloat _progress(const jobject& obj) {
                
       const auto methodID = methodID__progress();
       return MinecraftSDK::env->CallFloatMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_NETWORK_PACKET_S2C_PLAY_BOSSBARS2CPACKET$UPDATEPROGRESSACTION_HPP