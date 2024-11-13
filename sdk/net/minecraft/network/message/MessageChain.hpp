// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_NETWORK_MESSAGE_MESSAGECHAIN_HPP
#define NET_MINECRAFT_NETWORK_MESSAGE_MESSAGECHAIN_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.network.message.MessageChain
 * Remapped: xt
 */
namespace MessageChain {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("xt", "net/minecraft/network/chat/SignedMessageChain", "net/minecraft/class_7610", "net/minecraft/network/message/MessageChain", "net/minecraft/src/C_240854_"));
        }
        return cachedClass;
    };

    // getter for static default field net.minecraft.network.message.MessageChain#LOGGER
    [[maybe_unused]] static jobject get_field_LOGGER() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "LOGGER", "field_40691", "LOGGER", "f_243812_"), "Lorg/slf4j/Logger;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static default field net.minecraft.network.message.MessageChain#LOGGER
    [[maybe_unused]] static void set_field_LOGGER(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "LOGGER", "field_40691", "LOGGER", "f_243812_"), "Lorg/slf4j/Logger;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for default field net.minecraft.network.message.MessageChain#link
    static jobject get_field_link(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "nextLink", "field_40692", "link", "f_244563_"), "Lxu;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static default field net.minecraft.network.message.MessageChain#link
    static void set_field_link(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "nextLink", "field_40692", "link", "f_244563_"), "Lxu;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for default field net.minecraft.network.message.MessageChain#lastTimestamp
    static jobject get_field_lastTimestamp(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "lastTimeStamp", "field_47703", "lastTimestamp", "f_302755_"), "Ljava/time/Instant;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static default field net.minecraft.network.message.MessageChain#lastTimestamp
    static void set_field_lastTimestamp(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "lastTimeStamp", "field_47703", "lastTimestamp", "f_302755_"), "Ljava/time/Instant;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID_getPacker() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "encoder", "method_44880", "getPacker", "m_247027_"), "(Lazc;)Lxt$c;");
    }

    static jobject getPacker(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_getPacker();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_getUnpacker() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "decoder", "method_44874", "getUnpacker", "m_247594_"), "(Lcna;)Lxt$b;");
    }

    static jobject getUnpacker(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_getUnpacker();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
};

#endif // NET_MINECRAFT_NETWORK_MESSAGE_MESSAGECHAIN_HPP