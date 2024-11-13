// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_SERVER_DEDICATED_COMMAND_PERFCOMMAND_HPP
#define NET_MINECRAFT_SERVER_DEDICATED_COMMAND_PERFCOMMAND_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.server.dedicated.command.PerfCommand
 * Remapped: anp
 */
namespace PerfCommand {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("anp", "net/minecraft/server/commands/PerfCommand", "net/minecraft/class_6413", "net/minecraft/server/dedicated/command/PerfCommand", "net/minecraft/src/C_141900_"));
        }
        return cachedClass;
    };

    // getter for static private field net.minecraft.server.dedicated.command.PerfCommand#LOGGER
    [[maybe_unused]] static jobject get_field_LOGGER() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "LOGGER", "field_33985", "LOGGER", "f_180432_"), "Lorg/slf4j/Logger;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.server.dedicated.command.PerfCommand#LOGGER
    [[maybe_unused]] static void set_field_LOGGER(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "LOGGER", "field_33985", "LOGGER", "f_180432_"), "Lorg/slf4j/Logger;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.server.dedicated.command.PerfCommand#NOT_RUNNING_EXCEPTION
    [[maybe_unused]] static jobject get_field_NOT_RUNNING_EXCEPTION() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "ERROR_NOT_RUNNING", "field_33986", "NOT_RUNNING_EXCEPTION", "f_180433_"), "Lcom/mojang/brigadier/exceptions/SimpleCommandExceptionType;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.server.dedicated.command.PerfCommand#NOT_RUNNING_EXCEPTION
    [[maybe_unused]] static void set_field_NOT_RUNNING_EXCEPTION(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "ERROR_NOT_RUNNING", "field_33986", "NOT_RUNNING_EXCEPTION", "f_180433_"), "Lcom/mojang/brigadier/exceptions/SimpleCommandExceptionType;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.server.dedicated.command.PerfCommand#ALREADY_RUNNING_EXCEPTION
    [[maybe_unused]] static jobject get_field_ALREADY_RUNNING_EXCEPTION() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "ERROR_ALREADY_RUNNING", "field_33987", "ALREADY_RUNNING_EXCEPTION", "f_180434_"), "Lcom/mojang/brigadier/exceptions/SimpleCommandExceptionType;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.server.dedicated.command.PerfCommand#ALREADY_RUNNING_EXCEPTION
    [[maybe_unused]] static void set_field_ALREADY_RUNNING_EXCEPTION(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "ERROR_ALREADY_RUNNING", "field_33987", "ALREADY_RUNNING_EXCEPTION", "f_180434_"), "Lcom/mojang/brigadier/exceptions/SimpleCommandExceptionType;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    static jmethodID methodID_register() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "register", "method_37331", "register", "m_180437_"), "(Lcom/mojang/brigadier/CommandDispatcher;)V");
    }

    static void register(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_register();
       MinecraftSDK::env->CallStaticVoidMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_executeStart() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "startProfilingDedicatedServer", "method_37333", "executeStart", "m_180441_"), "(Let;)I");
    }

    static jint executeStart(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_executeStart();
       return MinecraftSDK::env->CallStaticIntMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_executeStop() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("b", "stopProfilingDedicatedServer", "method_37338", "executeStop", "m_180456_"), "(Let;)I");
    }

    static jint executeStop(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_executeStop();
       return MinecraftSDK::env->CallStaticIntMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_saveReport() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "saveResults", "method_37335", "saveReport", "m_180446_"), "(Let;Ljava/nio/file/Path;Lnet/minecraft/server/MinecraftServer;)V");
    }

    static void saveReport(const jobject& arg0, const jobject& arg1, const jobject& arg2) {
       const auto clazz = self();
       const auto methodID = methodID_saveReport();
       MinecraftSDK::env->CallStaticVoidMethod(clazz, methodID, arg0, arg1, arg2);
    };
    
    static jmethodID methodID_sendProfilingStoppedMessage() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "whenStopped", "method_37334", "sendProfilingStoppedMessage", "m_180443_"), "(Let;Lbne;)V");
    }

    static void sendProfilingStoppedMessage(const jobject& arg0, const jobject& arg1) {
       const auto clazz = self();
       const auto methodID = methodID_sendProfilingStoppedMessage();
       MinecraftSDK::env->CallStaticVoidMethod(clazz, methodID, arg0, arg1);
    };
    
};

#endif // NET_MINECRAFT_SERVER_DEDICATED_COMMAND_PERFCOMMAND_HPP