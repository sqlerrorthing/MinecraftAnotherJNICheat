// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_SERVER_COMMAND_SCOREBOARDCOMMAND$NUMBERFORMATCOMMANDEXECUTOR_HPP
#define NET_MINECRAFT_SERVER_COMMAND_SCOREBOARDCOMMAND$NUMBERFORMATCOMMANDEXECUTOR_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.server.command.ScoreboardCommand$NumberFormatCommandExecutor
 * Remapped: aoe$a
 */
namespace ScoreboardCommand$NumberFormatCommandExecutor {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("aoe$a", "net/minecraft/server/commands/ScoreboardCommand$NumberFormatCommandExecutor", "net/minecraft/class_3115$class_9008", "net/minecraft/server/command/ScoreboardCommand$NumberFormatCommandExecutor", "net/minecraft/src/C_5367_$C_301964_"));
        }
        return cachedClass;
    };

    static jmethodID methodID_run() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("run", "run", "run", "run", "m_304985_"), "(Lcom/mojang/brigadier/context/CommandContext;Lyp;)I");
    }

    static jint run(const jobject& obj, const jobject& arg0, const jobject& arg1) {
                
       const auto methodID = methodID_run();
       return MinecraftSDK::env->CallIntMethod(obj, methodID, arg0, arg1);
    };
    
};

#endif // NET_MINECRAFT_SERVER_COMMAND_SCOREBOARDCOMMAND$NUMBERFORMATCOMMANDEXECUTOR_HPP