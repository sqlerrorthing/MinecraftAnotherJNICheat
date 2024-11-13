// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_SERVER_COMMAND_SETWORLDSPAWNCOMMAND_HPP
#define NET_MINECRAFT_SERVER_COMMAND_SETWORLDSPAWNCOMMAND_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.server.command.SetWorldSpawnCommand
 * Remapped: aok
 */
namespace SetWorldSpawnCommand {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("aok", "net/minecraft/server/commands/SetWorldSpawnCommand", "net/minecraft/class_3128", "net/minecraft/server/command/SetWorldSpawnCommand", "net/minecraft/src/C_5374_"));
        }
        return cachedClass;
    };

    static jmethodID methodID_register() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "register", "method_13647", "register", "m_138660_"), "(Lcom/mojang/brigadier/CommandDispatcher;)V");
    }

    static void register(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_register();
       MinecraftSDK::env->CallStaticVoidMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_execute() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "setSpawn", "method_13650", "execute", "m_138666_"), "(Let;Ljd;F)I");
    }

    static jint execute(const jobject& arg0, const jobject& arg1, const jfloat& arg2) {
       const auto clazz = self();
       const auto methodID = methodID_execute();
       return MinecraftSDK::env->CallStaticIntMethod(clazz, methodID, arg0, arg1, arg2);
    };
    
};

#endif // NET_MINECRAFT_SERVER_COMMAND_SETWORLDSPAWNCOMMAND_HPP