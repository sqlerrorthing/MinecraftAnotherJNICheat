// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_NETWORK_MESSAGE_SIGNEDCOMMANDARGUMENTS_HPP
#define NET_MINECRAFT_NETWORK_MESSAGE_SIGNEDCOMMANDARGUMENTS_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.network.message.SignedCommandArguments
 * Remapped: er
 */
namespace SignedCommandArguments {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("er", "net/minecraft/commands/CommandSigningContext", "net/minecraft/class_7448", "net/minecraft/network/message/SignedCommandArguments", "net/minecraft/src/C_213308_"));
        }
        return cachedClass;
    };

    // getter for static public field net.minecraft.network.message.SignedCommandArguments#EMPTY
    [[maybe_unused]] static jobject get_field_EMPTY() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "ANONYMOUS", "field_39901", "EMPTY", "f_242494_"), "Ler;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.network.message.SignedCommandArguments#EMPTY
    [[maybe_unused]] static void set_field_EMPTY(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "ANONYMOUS", "field_39901", "EMPTY", "f_242494_"), "Ler;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    static jmethodID methodID_getMessage() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getArgument", "method_44907", "getMessage", "m_213987_"), "(Ljava/lang/String;)Lxp;");
    }

    static jobject getMessage(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_getMessage();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
};

#endif // NET_MINECRAFT_NETWORK_MESSAGE_SIGNEDCOMMANDARGUMENTS_HPP