// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_SERVER_COMMAND_DEBUGCOMMAND$COMMAND$1_HPP
#define NET_MINECRAFT_SERVER_COMMAND_DEBUGCOMMAND$COMMAND$1_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.server.command.DebugCommand$Command$1
 * Remapped: amk$a$1
 */
namespace DebugCommand$Command$1 {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("amk$a$1", "net/minecraft/server/commands/DebugCommand$TraceCustomExecutor$1", "net/minecraft/class_3032$class_8829$1", "net/minecraft/server/command/DebugCommand$Command$1", "net/minecraft/src/C_5309_$C_301972_$C_301943_"));
        }
        return cachedClass;
    };

    static jmethodID methodID_execute() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "execute", "method_54260", "execute", "m_304778_"), "(Let;Lhs;Lhu;)V");
    }

    static void execute(const jobject& obj, const jobject& arg0, const jobject& arg1, const jobject& arg2) {
                
       const auto methodID = methodID_execute();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1, arg2);
    };
    
};

#endif // NET_MINECRAFT_SERVER_COMMAND_DEBUGCOMMAND$COMMAND$1_HPP