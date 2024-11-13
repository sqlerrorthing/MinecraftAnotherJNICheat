// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_SERVER_COMMAND_DEBUGMOBSPAWNINGCOMMAND_HPP
#define NET_MINECRAFT_SERVER_COMMAND_DEBUGMOBSPAWNINGCOMMAND_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.server.command.DebugMobSpawningCommand
 * Remapped: amm
 */
namespace DebugMobSpawningCommand {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("amm", "net/minecraft/server/commands/DebugMobSpawningCommand", "net/minecraft/class_6326", "net/minecraft/server/command/DebugMobSpawningCommand", "net/minecraft/src/C_141897_"));
        }
        return cachedClass;
    };

    static jmethodID methodID_register() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "register", "method_36184", "register", "m_180110_"), "(Lcom/mojang/brigadier/CommandDispatcher;)V");
    }

    static void register(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_register();
       MinecraftSDK::env->CallStaticVoidMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_execute() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "spawnMobs", "method_36186", "execute", "m_180114_"), "(Let;Lbtq;Ljd;)I");
    }

    static jint execute(const jobject& arg0, const jobject& arg1, const jobject& arg2) {
       const auto clazz = self();
       const auto methodID = methodID_execute();
       return MinecraftSDK::env->CallStaticIntMethod(clazz, methodID, arg0, arg1, arg2);
    };
    
};

#endif // NET_MINECRAFT_SERVER_COMMAND_DEBUGMOBSPAWNINGCOMMAND_HPP