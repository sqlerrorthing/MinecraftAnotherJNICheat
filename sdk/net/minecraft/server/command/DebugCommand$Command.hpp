// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_SERVER_COMMAND_DEBUGCOMMAND$COMMAND_HPP
#define NET_MINECRAFT_SERVER_COMMAND_DEBUGCOMMAND$COMMAND_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.server.command.DebugCommand$Command
 * Remapped: amk$a
 */
namespace DebugCommand$Command {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("amk$a", "net/minecraft/server/commands/DebugCommand$TraceCustomExecutor", "net/minecraft/class_3032$class_8829", "net/minecraft/server/command/DebugCommand$Command", "net/minecraft/src/C_5309_$C_301972_"));
        }
        return cachedClass;
    };

    static jmethodID methodID_executeInner() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "runGuarded", "method_54256", "executeInner", "m_305065_"), "(Let;Lcom/mojang/brigadier/context/ContextChain;Lhn;Lht;)V");
    }

    static void executeInner(const jobject& obj, const jobject& arg0, const jobject& arg1, const jobject& arg2, const jobject& arg3) {
                
       const auto methodID = methodID_executeInner();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1, arg2, arg3);
    };
    
};

#endif // NET_MINECRAFT_SERVER_COMMAND_DEBUGCOMMAND$COMMAND_HPP