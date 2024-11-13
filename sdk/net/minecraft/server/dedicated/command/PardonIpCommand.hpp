// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_SERVER_DEDICATED_COMMAND_PARDONIPCOMMAND_HPP
#define NET_MINECRAFT_SERVER_DEDICATED_COMMAND_PARDONIPCOMMAND_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.server.dedicated.command.PardonIpCommand
 * Remapped: ann
 */
namespace PardonIpCommand {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("ann", "net/minecraft/server/commands/PardonIpCommand", "net/minecraft/class_3088", "net/minecraft/server/dedicated/command/PardonIpCommand", "net/minecraft/src/C_5352_"));
        }
        return cachedClass;
    };

    // getter for static private field net.minecraft.server.dedicated.command.PardonIpCommand#INVALID_IP_EXCEPTION
    [[maybe_unused]] static jobject get_field_INVALID_IP_EXCEPTION() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "ERROR_INVALID", "field_13671", "INVALID_IP_EXCEPTION", "f_138105_"), "Lcom/mojang/brigadier/exceptions/SimpleCommandExceptionType;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.server.dedicated.command.PardonIpCommand#INVALID_IP_EXCEPTION
    [[maybe_unused]] static void set_field_INVALID_IP_EXCEPTION(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "ERROR_INVALID", "field_13671", "INVALID_IP_EXCEPTION", "f_138105_"), "Lcom/mojang/brigadier/exceptions/SimpleCommandExceptionType;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.server.dedicated.command.PardonIpCommand#ALREADY_UNBANNED_EXCEPTION
    [[maybe_unused]] static jobject get_field_ALREADY_UNBANNED_EXCEPTION() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "ERROR_NOT_BANNED", "field_13672", "ALREADY_UNBANNED_EXCEPTION", "f_138106_"), "Lcom/mojang/brigadier/exceptions/SimpleCommandExceptionType;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.server.dedicated.command.PardonIpCommand#ALREADY_UNBANNED_EXCEPTION
    [[maybe_unused]] static void set_field_ALREADY_UNBANNED_EXCEPTION(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "ERROR_NOT_BANNED", "field_13672", "ALREADY_UNBANNED_EXCEPTION", "f_138106_"), "Lcom/mojang/brigadier/exceptions/SimpleCommandExceptionType;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    static jmethodID methodID_register() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "register", "method_13478", "register", "m_138108_"), "(Lcom/mojang/brigadier/CommandDispatcher;)V");
    }

    static void register(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_register();
       MinecraftSDK::env->CallStaticVoidMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_pardonIp() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "unban", "method_13482", "pardonIp", "m_138117_"), "(Let;Ljava/lang/String;)I");
    }

    static jint pardonIp(const jobject& arg0, const jobject& arg1) {
       const auto clazz = self();
       const auto methodID = methodID_pardonIp();
       return MinecraftSDK::env->CallStaticIntMethod(clazz, methodID, arg0, arg1);
    };
    
};

#endif // NET_MINECRAFT_SERVER_DEDICATED_COMMAND_PARDONIPCOMMAND_HPP