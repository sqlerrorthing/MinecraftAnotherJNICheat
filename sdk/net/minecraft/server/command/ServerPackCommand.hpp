// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_SERVER_COMMAND_SERVERPACKCOMMAND_HPP
#define NET_MINECRAFT_SERVER_COMMAND_SERVERPACKCOMMAND_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.server.command.ServerPackCommand
 * Remapped: aog
 */
namespace ServerPackCommand {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("aog", "net/minecraft/server/commands/ServerPackCommand", "net/minecraft/class_9027", "net/minecraft/server/command/ServerPackCommand", "net/minecraft/src/C_301881_"));
        }
        return cachedClass;
    };

    static jmethodID methodID_register() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "register", "method_55474", "register", "m_305387_"), "(Lcom/mojang/brigadier/CommandDispatcher;)V");
    }

    static void register(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_register();
       MinecraftSDK::env->CallStaticVoidMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_sendToAll() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "sendToAllConnections", "method_55479", "sendToAll", "m_306175_"), "(Let;Lzg;)V");
    }

    static void sendToAll(const jobject& arg0, const jobject& arg1) {
       const auto clazz = self();
       const auto methodID = methodID_sendToAll();
       MinecraftSDK::env->CallStaticVoidMethod(clazz, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_executePush() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "pushPack", "method_55477", "executePush", "m_305052_"), "(Let;Ljava/lang/String;Ljava/util/Optional;Ljava/util/Optional;)I");
    }

    static jint executePush(const jobject& arg0, const jobject& arg1, const jobject& arg2, const jobject& arg3) {
       const auto clazz = self();
       const auto methodID = methodID_executePush();
       return MinecraftSDK::env->CallStaticIntMethod(clazz, methodID, arg0, arg1, arg2, arg3);
    };
    
    static jmethodID methodID_executePop() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "popPack", "method_55478", "executePop", "m_306703_"), "(Let;Ljava/util/UUID;)I");
    }

    static jint executePop(const jobject& arg0, const jobject& arg1) {
       const auto clazz = self();
       const auto methodID = methodID_executePop();
       return MinecraftSDK::env->CallStaticIntMethod(clazz, methodID, arg0, arg1);
    };
    
};

#endif // NET_MINECRAFT_SERVER_COMMAND_SERVERPACKCOMMAND_HPP