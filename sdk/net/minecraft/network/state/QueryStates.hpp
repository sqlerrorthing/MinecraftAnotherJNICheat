// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_NETWORK_STATE_QUERYSTATES_HPP
#define NET_MINECRAFT_NETWORK_STATE_QUERYSTATES_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.network.state.QueryStates
 * Remapped: aju
 */
namespace QueryStates {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("aju", "net/minecraft/network/protocol/status/StatusProtocols", "net/minecraft/class_9103", "net/minecraft/network/state/QueryStates", "net/minecraft/src/C_313861_"));
        }
        return cachedClass;
    };

    // getter for static public field net.minecraft.network.state.QueryStates#C2S_FACTORY
    [[maybe_unused]] static jobject get_field_C2S_FACTORY() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "SERVERBOUND_TEMPLATE", "field_52200", "C2S_FACTORY", "f_337379_"), "Lwh$a;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.network.state.QueryStates#C2S_FACTORY
    [[maybe_unused]] static void set_field_C2S_FACTORY(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "SERVERBOUND_TEMPLATE", "field_52200", "C2S_FACTORY", "f_337379_"), "Lwh$a;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.network.state.QueryStates#C2S
    [[maybe_unused]] static jobject get_field_C2S() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "SERVERBOUND", "field_48263", "C2S", "f_316093_"), "Lwh;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.network.state.QueryStates#C2S
    [[maybe_unused]] static void set_field_C2S(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "SERVERBOUND", "field_48263", "C2S", "f_316093_"), "Lwh;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.network.state.QueryStates#S2C_FACTORY
    [[maybe_unused]] static jobject get_field_S2C_FACTORY() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "CLIENTBOUND_TEMPLATE", "field_52201", "S2C_FACTORY", "f_336795_"), "Lwh$a;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.network.state.QueryStates#S2C_FACTORY
    [[maybe_unused]] static void set_field_S2C_FACTORY(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "CLIENTBOUND_TEMPLATE", "field_52201", "S2C_FACTORY", "f_336795_"), "Lwh$a;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.network.state.QueryStates#S2C
    [[maybe_unused]] static jobject get_field_S2C() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("d", "CLIENTBOUND", "field_48264", "S2C", "f_315277_"), "Lwh;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.network.state.QueryStates#S2C
    [[maybe_unused]] static void set_field_S2C(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("d", "CLIENTBOUND", "field_48264", "S2C", "f_315277_"), "Lwh;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

};

#endif // NET_MINECRAFT_NETWORK_STATE_QUERYSTATES_HPP