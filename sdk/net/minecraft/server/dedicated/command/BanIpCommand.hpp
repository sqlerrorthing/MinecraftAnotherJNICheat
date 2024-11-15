// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_SERVER_DEDICATED_COMMAND_BANIPCOMMAND_HPP
#define NET_MINECRAFT_SERVER_DEDICATED_COMMAND_BANIPCOMMAND_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.server.dedicated.command.BanIpCommand
 * Remapped: ama
 */
namespace BanIpCommand {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("ama", "net/minecraft/server/commands/BanIpCommands", "net/minecraft/class_3012", "net/minecraft/server/dedicated/command/BanIpCommand", "net/minecraft/src/C_5298_"));
        }
        return cachedClass;
    };

    // getter for static private field net.minecraft.server.dedicated.command.BanIpCommand#INVALID_IP_EXCEPTION
    [[maybe_unused]] static jobject get_field_INVALID_IP_EXCEPTION() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "ERROR_INVALID_IP", "field_13468", "INVALID_IP_EXCEPTION", "f_136524_"), "Lcom/mojang/brigadier/exceptions/SimpleCommandExceptionType;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.server.dedicated.command.BanIpCommand#INVALID_IP_EXCEPTION
    [[maybe_unused]] static void set_field_INVALID_IP_EXCEPTION(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "ERROR_INVALID_IP", "field_13468", "INVALID_IP_EXCEPTION", "f_136524_"), "Lcom/mojang/brigadier/exceptions/SimpleCommandExceptionType;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.server.dedicated.command.BanIpCommand#ALREADY_BANNED_EXCEPTION
    [[maybe_unused]] static jobject get_field_ALREADY_BANNED_EXCEPTION() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "ERROR_ALREADY_BANNED", "field_13467", "ALREADY_BANNED_EXCEPTION", "f_136525_"), "Lcom/mojang/brigadier/exceptions/SimpleCommandExceptionType;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.server.dedicated.command.BanIpCommand#ALREADY_BANNED_EXCEPTION
    [[maybe_unused]] static void set_field_ALREADY_BANNED_EXCEPTION(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "ERROR_ALREADY_BANNED", "field_13467", "ALREADY_BANNED_EXCEPTION", "f_136525_"), "Lcom/mojang/brigadier/exceptions/SimpleCommandExceptionType;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    static jmethodID methodID_register() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "register", "method_13008", "register", "m_136527_"), "(Lcom/mojang/brigadier/CommandDispatcher;)V");
    }

    static void register(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_register();
       MinecraftSDK::env->CallStaticVoidMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_checkIp() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "banIpOrName", "method_13009", "checkIp", "m_136533_"), "(Let;Ljava/lang/String;Lwz;)I");
    }

    static jint checkIp(const jobject& arg0, const jobject& arg1, const jobject& arg2) {
       const auto clazz = self();
       const auto methodID = methodID_checkIp();
       return MinecraftSDK::env->CallStaticIntMethod(clazz, methodID, arg0, arg1, arg2);
    };
    
    static jmethodID methodID_banIp() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("b", "banIp", "method_13007", "banIp", "m_136539_"), "(Let;Ljava/lang/String;Lwz;)I");
    }

    static jint banIp(const jobject& arg0, const jobject& arg1, const jobject& arg2) {
       const auto clazz = self();
       const auto methodID = methodID_banIp();
       return MinecraftSDK::env->CallStaticIntMethod(clazz, methodID, arg0, arg1, arg2);
    };
    
};

#endif // NET_MINECRAFT_SERVER_DEDICATED_COMMAND_BANIPCOMMAND_HPP