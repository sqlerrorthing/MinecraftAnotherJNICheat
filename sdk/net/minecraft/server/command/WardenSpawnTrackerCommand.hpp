// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_SERVER_COMMAND_WARDENSPAWNTRACKERCOMMAND_HPP
#define NET_MINECRAFT_SERVER_COMMAND_WARDENSPAWNTRACKERCOMMAND_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.server.command.WardenSpawnTrackerCommand
 * Remapped: apb
 */
namespace WardenSpawnTrackerCommand {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("apb", "net/minecraft/server/commands/WardenSpawnTrackerCommand", "net/minecraft/class_7240", "net/minecraft/server/command/WardenSpawnTrackerCommand", "net/minecraft/src/C_212938_"));
        }
        return cachedClass;
    };

    static jmethodID methodID_register() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "register", "method_42100", "register", "m_214773_"), "(Lcom/mojang/brigadier/CommandDispatcher;)V");
    }

    static void register(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_register();
       MinecraftSDK::env->CallStaticVoidMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_setWarningLevel() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "setWarningLevel", "method_42104", "setWarningLevel", "m_214782_"), "(Let;Ljava/util/Collection;I)I");
    }

    static jint setWarningLevel(const jobject& arg0, const jobject& arg1, const jint& arg2) {
       const auto clazz = self();
       const auto methodID = methodID_setWarningLevel();
       return MinecraftSDK::env->CallStaticIntMethod(clazz, methodID, arg0, arg1, arg2);
    };
    
    static jmethodID methodID_clearTracker() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "resetTracker", "method_42103", "clearTracker", "m_214779_"), "(Let;Ljava/util/Collection;)I");
    }

    static jint clearTracker(const jobject& arg0, const jobject& arg1) {
       const auto clazz = self();
       const auto methodID = methodID_clearTracker();
       return MinecraftSDK::env->CallStaticIntMethod(clazz, methodID, arg0, arg1);
    };
    
};

#endif // NET_MINECRAFT_SERVER_COMMAND_WARDENSPAWNTRACKERCOMMAND_HPP