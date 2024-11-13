// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_SERVER_DEDICATED_COMMAND_PARDONCOMMAND_HPP
#define NET_MINECRAFT_SERVER_DEDICATED_COMMAND_PARDONCOMMAND_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.server.dedicated.command.PardonCommand
 * Remapped: anm
 */
namespace PardonCommand {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("anm", "net/minecraft/server/commands/PardonCommand", "net/minecraft/class_3086", "net/minecraft/server/dedicated/command/PardonCommand", "net/minecraft/src/C_5351_"));
        }
        return cachedClass;
    };

    // getter for static private field net.minecraft.server.dedicated.command.PardonCommand#ALREADY_UNBANNED_EXCEPTION
    [[maybe_unused]] static jobject get_field_ALREADY_UNBANNED_EXCEPTION() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "ERROR_NOT_BANNED", "field_13669", "ALREADY_UNBANNED_EXCEPTION", "f_138091_"), "Lcom/mojang/brigadier/exceptions/SimpleCommandExceptionType;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.server.dedicated.command.PardonCommand#ALREADY_UNBANNED_EXCEPTION
    [[maybe_unused]] static void set_field_ALREADY_UNBANNED_EXCEPTION(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "ERROR_NOT_BANNED", "field_13669", "ALREADY_UNBANNED_EXCEPTION", "f_138091_"), "Lcom/mojang/brigadier/exceptions/SimpleCommandExceptionType;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    static jmethodID methodID_register() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "register", "method_13472", "register", "m_138093_"), "(Lcom/mojang/brigadier/CommandDispatcher;)V");
    }

    static void register(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_register();
       MinecraftSDK::env->CallStaticVoidMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_pardon() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "pardonPlayers", "method_13473", "pardon", "m_138102_"), "(Let;Ljava/util/Collection;)I");
    }

    static jint pardon(const jobject& arg0, const jobject& arg1) {
       const auto clazz = self();
       const auto methodID = methodID_pardon();
       return MinecraftSDK::env->CallStaticIntMethod(clazz, methodID, arg0, arg1);
    };
    
};

#endif // NET_MINECRAFT_SERVER_DEDICATED_COMMAND_PARDONCOMMAND_HPP