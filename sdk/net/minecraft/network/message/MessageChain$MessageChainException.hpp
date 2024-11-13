// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_NETWORK_MESSAGE_MESSAGECHAIN$MESSAGECHAINEXCEPTION_HPP
#define NET_MINECRAFT_NETWORK_MESSAGE_MESSAGECHAIN$MESSAGECHAINEXCEPTION_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.network.message.MessageChain$MessageChainException
 * Remapped: xt$a
 */
namespace MessageChain$MessageChainException {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("xt$a", "net/minecraft/network/chat/SignedMessageChain$DecodeException", "net/minecraft/class_7610$class_7825", "net/minecraft/network/message/MessageChain$MessageChainException", "net/minecraft/src/C_240854_$C_243508_"));
        }
        return cachedClass;
    };

    // getter for static default field net.minecraft.network.message.MessageChain$MessageChainException#MISSING_PROFILE_KEY_EXCEPTION
    [[maybe_unused]] static jobject get_field_MISSING_PROFILE_KEY_EXCEPTION() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "MISSING_PROFILE_KEY", "field_50256", "MISSING_PROFILE_KEY_EXCEPTION", "f_315060_"), "Lwz;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static default field net.minecraft.network.message.MessageChain$MessageChainException#MISSING_PROFILE_KEY_EXCEPTION
    [[maybe_unused]] static void set_field_MISSING_PROFILE_KEY_EXCEPTION(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "MISSING_PROFILE_KEY", "field_50256", "MISSING_PROFILE_KEY_EXCEPTION", "f_315060_"), "Lwz;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static default field net.minecraft.network.message.MessageChain$MessageChainException#CHAIN_BROKEN_EXCEPTION
    [[maybe_unused]] static jobject get_field_CHAIN_BROKEN_EXCEPTION() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "CHAIN_BROKEN", "field_50257", "CHAIN_BROKEN_EXCEPTION", "f_316173_"), "Lwz;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static default field net.minecraft.network.message.MessageChain$MessageChainException#CHAIN_BROKEN_EXCEPTION
    [[maybe_unused]] static void set_field_CHAIN_BROKEN_EXCEPTION(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "CHAIN_BROKEN", "field_50257", "CHAIN_BROKEN_EXCEPTION", "f_316173_"), "Lwz;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static default field net.minecraft.network.message.MessageChain$MessageChainException#EXPIRED_PROFILE_KEY_EXCEPTION
    [[maybe_unused]] static jobject get_field_EXPIRED_PROFILE_KEY_EXCEPTION() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "EXPIRED_PROFILE_KEY", "field_50258", "EXPIRED_PROFILE_KEY_EXCEPTION", "f_314329_"), "Lwz;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static default field net.minecraft.network.message.MessageChain$MessageChainException#EXPIRED_PROFILE_KEY_EXCEPTION
    [[maybe_unused]] static void set_field_EXPIRED_PROFILE_KEY_EXCEPTION(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "EXPIRED_PROFILE_KEY", "field_50258", "EXPIRED_PROFILE_KEY_EXCEPTION", "f_314329_"), "Lwz;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static default field net.minecraft.network.message.MessageChain$MessageChainException#INVALID_SIGNATURE_EXCEPTION
    [[maybe_unused]] static jobject get_field_INVALID_SIGNATURE_EXCEPTION() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("d", "INVALID_SIGNATURE", "field_50259", "INVALID_SIGNATURE_EXCEPTION", "f_314709_"), "Lwz;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static default field net.minecraft.network.message.MessageChain$MessageChainException#INVALID_SIGNATURE_EXCEPTION
    [[maybe_unused]] static void set_field_INVALID_SIGNATURE_EXCEPTION(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("d", "INVALID_SIGNATURE", "field_50259", "INVALID_SIGNATURE_EXCEPTION", "f_314709_"), "Lwz;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static default field net.minecraft.network.message.MessageChain$MessageChainException#OUT_OF_ORDER_CHAT_EXCEPTION
    [[maybe_unused]] static jobject get_field_OUT_OF_ORDER_CHAT_EXCEPTION() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("e", "OUT_OF_ORDER_CHAT", "field_50260", "OUT_OF_ORDER_CHAT_EXCEPTION", "f_315233_"), "Lwz;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static default field net.minecraft.network.message.MessageChain$MessageChainException#OUT_OF_ORDER_CHAT_EXCEPTION
    [[maybe_unused]] static void set_field_OUT_OF_ORDER_CHAT_EXCEPTION(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("e", "OUT_OF_ORDER_CHAT", "field_50260", "OUT_OF_ORDER_CHAT_EXCEPTION", "f_315233_"), "Lwz;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

};

#endif // NET_MINECRAFT_NETWORK_MESSAGE_MESSAGECHAIN$MESSAGECHAINEXCEPTION_HPP