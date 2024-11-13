// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_SERVER_DEDICATED_COMMAND_OPCOMMAND_HPP
#define NET_MINECRAFT_SERVER_DEDICATED_COMMAND_OPCOMMAND_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.server.dedicated.command.OpCommand
 * Remapped: anl
 */
namespace OpCommand {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("anl", "net/minecraft/server/commands/OpCommand", "net/minecraft/class_3083", "net/minecraft/server/dedicated/command/OpCommand", "net/minecraft/src/C_5350_"));
        }
        return cachedClass;
    };

    // getter for static private field net.minecraft.server.dedicated.command.OpCommand#ALREADY_OPPED_EXCEPTION
    [[maybe_unused]] static jobject get_field_ALREADY_OPPED_EXCEPTION() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "ERROR_ALREADY_OP", "field_13667", "ALREADY_OPPED_EXCEPTION", "f_138072_"), "Lcom/mojang/brigadier/exceptions/SimpleCommandExceptionType;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.server.dedicated.command.OpCommand#ALREADY_OPPED_EXCEPTION
    [[maybe_unused]] static void set_field_ALREADY_OPPED_EXCEPTION(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "ERROR_ALREADY_OP", "field_13667", "ALREADY_OPPED_EXCEPTION", "f_138072_"), "Lcom/mojang/brigadier/exceptions/SimpleCommandExceptionType;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    static jmethodID methodID_register() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "register", "method_13464", "register", "m_138079_"), "(Lcom/mojang/brigadier/CommandDispatcher;)V");
    }

    static void register(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_register();
       MinecraftSDK::env->CallStaticVoidMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_op() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "opPlayers", "method_13465", "op", "m_138088_"), "(Let;Ljava/util/Collection;)I");
    }

    static jint op(const jobject& arg0, const jobject& arg1) {
       const auto clazz = self();
       const auto methodID = methodID_op();
       return MinecraftSDK::env->CallStaticIntMethod(clazz, methodID, arg0, arg1);
    };
    
};

#endif // NET_MINECRAFT_SERVER_DEDICATED_COMMAND_OPCOMMAND_HPP