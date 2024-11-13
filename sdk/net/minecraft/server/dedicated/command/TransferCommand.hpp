// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_SERVER_DEDICATED_COMMAND_TRANSFERCOMMAND_HPP
#define NET_MINECRAFT_SERVER_DEDICATED_COMMAND_TRANSFERCOMMAND_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.server.dedicated.command.TransferCommand
 * Remapped: aoz
 */
namespace TransferCommand {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("aoz", "net/minecraft/server/commands/TransferCommand", "net/minecraft/class_9159", "net/minecraft/server/dedicated/command/TransferCommand", "net/minecraft/src/C_313321_"));
        }
        return cachedClass;
    };

    // getter for static private field net.minecraft.server.dedicated.command.TransferCommand#NO_PLAYERS_EXCEPTION
    [[maybe_unused]] static jobject get_field_NO_PLAYERS_EXCEPTION() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "ERROR_NO_PLAYERS", "field_48710", "NO_PLAYERS_EXCEPTION", "f_314323_"), "Lcom/mojang/brigadier/exceptions/SimpleCommandExceptionType;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.server.dedicated.command.TransferCommand#NO_PLAYERS_EXCEPTION
    [[maybe_unused]] static void set_field_NO_PLAYERS_EXCEPTION(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "ERROR_NO_PLAYERS", "field_48710", "NO_PLAYERS_EXCEPTION", "f_314323_"), "Lcom/mojang/brigadier/exceptions/SimpleCommandExceptionType;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    static jmethodID methodID_register() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "register", "method_56522", "register", "m_319902_"), "(Lcom/mojang/brigadier/CommandDispatcher;)V");
    }

    static void register(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_register();
       MinecraftSDK::env->CallStaticVoidMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_executeTransfer() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "transfer", "method_56525", "executeTransfer", "m_320446_"), "(Let;Ljava/lang/String;ILjava/util/Collection;)I");
    }

    static jint executeTransfer(const jobject& arg0, const jobject& arg1, const jint& arg2, const jobject& arg3) {
       const auto clazz = self();
       const auto methodID = methodID_executeTransfer();
       return MinecraftSDK::env->CallStaticIntMethod(clazz, methodID, arg0, arg1, arg2, arg3);
    };
    
};

#endif // NET_MINECRAFT_SERVER_DEDICATED_COMMAND_TRANSFERCOMMAND_HPP