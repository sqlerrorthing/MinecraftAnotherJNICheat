// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_SERVER_COMMAND_FUNCTIONCOMMAND$3_HPP
#define NET_MINECRAFT_SERVER_COMMAND_FUNCTIONCOMMAND$3_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.server.command.FunctionCommand$3
 * Remapped: amy$3
 */
namespace FunctionCommand$3 {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("amy$3", "net/minecraft/server/commands/FunctionCommand$3", "net/minecraft/class_3062$3", "net/minecraft/server/command/FunctionCommand$3", "net/minecraft/src/C_5334_$C_302155_"));
        }
        return cachedClass;
    };

    static jmethodID methodID_getArguments() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "arguments", "method_54277", "getArguments", "m_304821_"), "(Lcom/mojang/brigadier/context/CommandContext;)Lub;");
    }

    static jobject getArguments(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_getArguments();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
};

#endif // NET_MINECRAFT_SERVER_COMMAND_FUNCTIONCOMMAND$3_HPP