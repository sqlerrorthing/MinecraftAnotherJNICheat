// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_NETWORK_PACKET_S2C_PLAY_ENTITYATTRIBUTESS2CPACKET$ENTRY_HPP
#define NET_MINECRAFT_NETWORK_PACKET_S2C_PLAY_ENTITYATTRIBUTESS2CPACKET$ENTRY_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.network.packet.s2c.play.EntityAttributesS2CPacket$Entry
 * Remapped: aga$a
 */
namespace EntityAttributesS2CPacket$Entry {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("aga$a", "net/minecraft/network/protocol/game/ClientboundUpdateAttributesPacket$AttributeSnapshot", "net/minecraft/class_2781$class_2782", "net/minecraft/network/packet/s2c/play/EntityAttributesS2CPacket$Entry", "net/minecraft/src/C_5137_$C_5138_"));
        }
        return cachedClass;
    };

    // getter for private field net.minecraft.network.packet.s2c.play.EntityAttributesS2CPacket$Entry#attribute
    static jobject get_field_attribute(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "attribute", "comp_2177", "attribute", "f_133593_"), "Ljm;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.network.packet.s2c.play.EntityAttributesS2CPacket$Entry#attribute
    static void set_field_attribute(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "attribute", "comp_2177", "attribute", "f_133593_"), "Ljm;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.network.packet.s2c.play.EntityAttributesS2CPacket$Entry#base
    static jdouble get_field_base(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "base", "comp_2178", "base", "f_133594_"), "D");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetDoubleField(obj, fieldID);
    };

    // setter for static private field net.minecraft.network.packet.s2c.play.EntityAttributesS2CPacket$Entry#base
    static void set_field_base(const jobject &obj, const jdouble &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "base", "comp_2178", "base", "f_133594_"), "D");
        return MinecraftSDK::env->SetDoubleField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.network.packet.s2c.play.EntityAttributesS2CPacket$Entry#modifiers
    static jobject get_field_modifiers(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "modifiers", "comp_2179", "modifiers", "f_133595_"), "Ljava/util/Collection;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.network.packet.s2c.play.EntityAttributesS2CPacket$Entry#modifiers
    static void set_field_modifiers(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "modifiers", "comp_2179", "modifiers", "f_133595_"), "Ljava/util/Collection;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for static public field net.minecraft.network.packet.s2c.play.EntityAttributesS2CPacket$Entry#MODIFIER_CODEC
    [[maybe_unused]] static jobject get_field_MODIFIER_CODEC() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "MODIFIER_STREAM_CODEC", "field_48009", "MODIFIER_CODEC", "f_317148_"), "Lyx;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.network.packet.s2c.play.EntityAttributesS2CPacket$Entry#MODIFIER_CODEC
    [[maybe_unused]] static void set_field_MODIFIER_CODEC(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "MODIFIER_STREAM_CODEC", "field_48009", "MODIFIER_CODEC", "f_317148_"), "Lyx;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.network.packet.s2c.play.EntityAttributesS2CPacket$Entry#CODEC
    [[maybe_unused]] static jobject get_field_CODEC() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "STREAM_CODEC", "field_48010", "CODEC", "f_314821_"), "Lyx;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.network.packet.s2c.play.EntityAttributesS2CPacket$Entry#CODEC
    [[maybe_unused]] static void set_field_CODEC(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "STREAM_CODEC", "field_48010", "CODEC", "f_314821_"), "Lyx;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    static jmethodID methodID__attribute() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "attribute", "comp_2177", "attribute", "f_133593_"), "()Ljm;");
    }

    static jobject _attribute(const jobject& obj) {
                
       const auto methodID = methodID__attribute();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID__base() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "base", "comp_2178", "base", "f_133594_"), "()D");
    }

    static jdouble _base(const jobject& obj) {
                
       const auto methodID = methodID__base();
       return MinecraftSDK::env->CallDoubleMethod(obj, methodID);
    };
    
    static jmethodID methodID__modifiers() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "modifiers", "comp_2179", "modifiers", "f_133595_"), "()Ljava/util/Collection;");
    }

    static jobject _modifiers(const jobject& obj) {
                
       const auto methodID = methodID__modifiers();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_NETWORK_PACKET_S2C_PLAY_ENTITYATTRIBUTESS2CPACKET$ENTRY_HPP