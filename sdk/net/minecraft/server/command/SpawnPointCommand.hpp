// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_SERVER_COMMAND_SPAWNPOINTCOMMAND_HPP
#define NET_MINECRAFT_SERVER_COMMAND_SPAWNPOINTCOMMAND_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.server.command.SpawnPointCommand
 * Remapped: aoj
 */
namespace SpawnPointCommand {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("aoj", "net/minecraft/server/commands/SetSpawnCommand", "net/minecraft/class_3127", "net/minecraft/server/command/SpawnPointCommand", "net/minecraft/src/C_5373_"));
        }
        return cachedClass;
    };

    static jmethodID methodID_register() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "register", "method_13641", "register", "m_138643_"), "(Lcom/mojang/brigadier/CommandDispatcher;)V");
    }

    static void register(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_register();
       MinecraftSDK::env->CallStaticVoidMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_execute() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "setSpawn", "method_13645", "execute", "m_138649_"), "(Let;Ljava/util/Collection;Ljd;F)I");
    }

    static jint execute(const jobject& arg0, const jobject& arg1, const jobject& arg2, const jfloat& arg3) {
       const auto clazz = self();
       const auto methodID = methodID_execute();
       return MinecraftSDK::env->CallStaticIntMethod(clazz, methodID, arg0, arg1, arg2, arg3);
    };
    
};

#endif // NET_MINECRAFT_SERVER_COMMAND_SPAWNPOINTCOMMAND_HPP