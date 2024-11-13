// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_SERVER_COMMAND_RAIDCOMMAND_HPP
#define NET_MINECRAFT_SERVER_COMMAND_RAIDCOMMAND_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.server.command.RaidCommand
 * Remapped: ant
 */
namespace RaidCommand {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("ant", "net/minecraft/server/commands/RaidCommand", "net/minecraft/class_6329", "net/minecraft/server/command/RaidCommand", "net/minecraft/src/C_141901_"));
        }
        return cachedClass;
    };

    static jmethodID methodID_register() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "register", "method_36192", "register", "m_180468_"), "(Lcom/mojang/brigadier/CommandDispatcher;Lep;)V");
    }

    static void register(const jobject& arg0, const jobject& arg1) {
       const auto clazz = self();
       const auto methodID = methodID_register();
       MinecraftSDK::env->CallStaticVoidMethod(clazz, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_executeGlow() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "glow", "method_36194", "executeGlow", "m_180472_"), "(Let;)I");
    }

    static jint executeGlow(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_executeGlow();
       return MinecraftSDK::env->CallStaticIntMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_executeSetOmen() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "setRaidOmenLevel", "method_36195", "executeSetOmen", "m_180474_"), "(Let;I)I");
    }

    static jint executeSetOmen(const jobject& arg0, const jint& arg1) {
       const auto clazz = self();
       const auto methodID = methodID_executeSetOmen();
       return MinecraftSDK::env->CallStaticIntMethod(clazz, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_executeSpawnLeader() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("b", "spawnLeader", "method_36198", "executeSpawnLeader", "m_180482_"), "(Let;)I");
    }

    static jint executeSpawnLeader(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_executeSpawnLeader();
       return MinecraftSDK::env->CallStaticIntMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_executeSound() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "playSound", "method_36196", "executeSound", "m_180477_"), "(Let;Lwz;)I");
    }

    static jint executeSound(const jobject& arg0, const jobject& arg1) {
       const auto clazz = self();
       const auto methodID = methodID_executeSound();
       return MinecraftSDK::env->CallStaticIntMethod(clazz, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_executeStart() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("b", "start", "method_36199", "executeStart", "m_180484_"), "(Let;I)I");
    }

    static jint executeStart(const jobject& arg0, const jint& arg1) {
       const auto clazz = self();
       const auto methodID = methodID_executeStart();
       return MinecraftSDK::env->CallStaticIntMethod(clazz, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_executeStop() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("c", "stop", "method_36201", "executeStop", "m_180489_"), "(Let;)I");
    }

    static jint executeStop(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_executeStop();
       return MinecraftSDK::env->CallStaticIntMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_executeCheck() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("d", "check", "method_36203", "executeCheck", "m_180493_"), "(Let;)I");
    }

    static jint executeCheck(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_executeCheck();
       return MinecraftSDK::env->CallStaticIntMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_getRaid() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "getRaid", "method_36191", "getRaid", "m_180466_"), "(Laqv;)Lcoi;");
    }

    static jobject getRaid(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_getRaid();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0);
    };
    
};

#endif // NET_MINECRAFT_SERVER_COMMAND_RAIDCOMMAND_HPP