// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_NETWORK_PACKET_S2C_LOGIN_LOGINSUCCESSS2CPACKET_HPP
#define NET_MINECRAFT_NETWORK_PACKET_S2C_LOGIN_LOGINSUCCESSS2CPACKET_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.network.packet.s2c.login.LoginSuccessS2CPacket
 * Remapped: aiq
 */
namespace LoginSuccessS2CPacket {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("aiq", "net/minecraft/network/protocol/login/ClientboundGameProfilePacket", "net/minecraft/class_2901", "net/minecraft/network/packet/s2c/login/LoginSuccessS2CPacket", "net/minecraft/src/C_5205_"));
        }
        return cachedClass;
    };

    // getter for private field net.minecraft.network.packet.s2c.login.LoginSuccessS2CPacket#profile
    static jobject get_field_profile(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "gameProfile", "comp_2363", "profile", "f_134764_"), "Lcom/mojang/authlib/GameProfile;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.network.packet.s2c.login.LoginSuccessS2CPacket#profile
    static void set_field_profile(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "gameProfile", "comp_2363", "profile", "f_134764_"), "Lcom/mojang/authlib/GameProfile;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.network.packet.s2c.login.LoginSuccessS2CPacket#strictErrorHandling
    static jboolean get_field_strictErrorHandling(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "strictErrorHandling", "comp_2662", "strictErrorHandling", "f_315909_"), "Z");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetBooleanField(obj, fieldID);
    };

    // setter for static private field net.minecraft.network.packet.s2c.login.LoginSuccessS2CPacket#strictErrorHandling
    static void set_field_strictErrorHandling(const jobject &obj, const jboolean &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "strictErrorHandling", "comp_2662", "strictErrorHandling", "f_315909_"), "Z");
        return MinecraftSDK::env->SetBooleanField(obj, fieldID, value);
    };

    // getter for static public field net.minecraft.network.packet.s2c.login.LoginSuccessS2CPacket#CODEC
    [[maybe_unused]] static jobject get_field_CODEC() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "STREAM_CODEC", "field_48233", "CODEC", "f_315571_"), "Lyx;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.network.packet.s2c.login.LoginSuccessS2CPacket#CODEC
    [[maybe_unused]] static void set_field_CODEC(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "STREAM_CODEC", "field_48233", "CODEC", "f_315571_"), "Lyx;");
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
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "handle", "method_12594", "apply", "m_5797_"), "(Laio;)V");
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
    
    static jmethodID methodID__profile() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "gameProfile", "comp_2363", "profile", "f_134764_"), "()Lcom/mojang/authlib/GameProfile;");
    }

    static jobject _profile(const jobject& obj) {
                
       const auto methodID = methodID__profile();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID__strictErrorHandling() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("e", "strictErrorHandling", "comp_2662", "strictErrorHandling", "f_315909_"), "()Z");
    }

    static jboolean _strictErrorHandling(const jobject& obj) {
                
       const auto methodID = methodID__strictErrorHandling();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_NETWORK_PACKET_S2C_LOGIN_LOGINSUCCESSS2CPACKET_HPP