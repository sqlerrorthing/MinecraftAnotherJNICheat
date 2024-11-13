// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_NETWORK_STATE_HANDSHAKESTATES_HPP
#define NET_MINECRAFT_NETWORK_STATE_HANDSHAKESTATES_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.network.state.HandshakeStates
 * Remapped: ail
 */
namespace HandshakeStates {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("ail", "net/minecraft/network/protocol/handshake/HandshakeProtocols", "net/minecraft/class_9097", "net/minecraft/network/state/HandshakeStates", "net/minecraft/src/C_313438_"));
        }
        return cachedClass;
    };

    // getter for static public field net.minecraft.network.state.HandshakeStates#C2S_FACTORY
    [[maybe_unused]] static jobject get_field_C2S_FACTORY() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "SERVERBOUND_TEMPLATE", "field_52197", "C2S_FACTORY", "f_336688_"), "Lwh$a;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.network.state.HandshakeStates#C2S_FACTORY
    [[maybe_unused]] static void set_field_C2S_FACTORY(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "SERVERBOUND_TEMPLATE", "field_52197", "C2S_FACTORY", "f_336688_"), "Lwh$a;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.network.state.HandshakeStates#C2S
    [[maybe_unused]] static jobject get_field_C2S() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "SERVERBOUND", "field_48231", "C2S", "f_316563_"), "Lwh;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.network.state.HandshakeStates#C2S
    [[maybe_unused]] static void set_field_C2S(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "SERVERBOUND", "field_48231", "C2S", "f_316563_"), "Lwh;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

};

#endif // NET_MINECRAFT_NETWORK_STATE_HANDSHAKESTATES_HPP