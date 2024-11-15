// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_NETWORK_PACKET_S2C_PLAY_REMOVEENTITYSTATUSEFFECTS2CPACKET_HPP
#define NET_MINECRAFT_NETWORK_PACKET_S2C_PLAY_REMOVEENTITYSTATUSEFFECTS2CPACKET_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.network.packet.s2c.play.RemoveEntityStatusEffectS2CPacket
 * Remapped: aeg
 */
namespace RemoveEntityStatusEffectS2CPacket {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("aeg", "net/minecraft/network/protocol/game/ClientboundRemoveMobEffectPacket", "net/minecraft/class_2718", "net/minecraft/network/packet/s2c/play/RemoveEntityStatusEffectS2CPacket", "net/minecraft/src/C_5101_"));
        }
        return cachedClass;
    };

    // getter for private field net.minecraft.network.packet.s2c.play.RemoveEntityStatusEffectS2CPacket#entityId
    static jint get_field_entityId(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "entityId", "comp_2175", "entityId", "f_132895_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetIntField(obj, fieldID);
    };

    // setter for static private field net.minecraft.network.packet.s2c.play.RemoveEntityStatusEffectS2CPacket#entityId
    static void set_field_entityId(const jobject &obj, const jint &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "entityId", "comp_2175", "entityId", "f_132895_"), "I");
        return MinecraftSDK::env->SetIntField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.network.packet.s2c.play.RemoveEntityStatusEffectS2CPacket#effect
    static jobject get_field_effect(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "effect", "comp_2176", "effect", "f_132896_"), "Ljm;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.network.packet.s2c.play.RemoveEntityStatusEffectS2CPacket#effect
    static void set_field_effect(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "effect", "comp_2176", "effect", "f_132896_"), "Ljm;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for static public field net.minecraft.network.packet.s2c.play.RemoveEntityStatusEffectS2CPacket#CODEC
    [[maybe_unused]] static jobject get_field_CODEC() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "STREAM_CODEC", "field_47960", "CODEC", "f_314015_"), "Lyx;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.network.packet.s2c.play.RemoveEntityStatusEffectS2CPacket#CODEC
    [[maybe_unused]] static void set_field_CODEC(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "STREAM_CODEC", "field_47960", "CODEC", "f_314015_"), "Lyx;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
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
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "handle", "method_11769", "apply", "m_5797_"), "(Labu;)V");
    }

    static void apply(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_apply();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_getEntity() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getEntity", "method_11767", "getEntity", "m_132901_"), "(Ldcw;)Lbsr;");
    }

    static jobject getEntity(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_getEntity();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID__entityId() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "entityId", "comp_2175", "entityId", "f_132895_"), "()I");
    }

    static jint _entityId(const jobject& obj) {
                
       const auto methodID = methodID__entityId();
       return MinecraftSDK::env->CallIntMethod(obj, methodID);
    };
    
    static jmethodID methodID__effect() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("e", "effect", "comp_2176", "effect", "f_132896_"), "()Ljm;");
    }

    static jobject _effect(const jobject& obj) {
                
       const auto methodID = methodID__effect();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_NETWORK_PACKET_S2C_PLAY_REMOVEENTITYSTATUSEFFECTS2CPACKET_HPP