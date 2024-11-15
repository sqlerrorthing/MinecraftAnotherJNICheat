// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_SERVER_COMMAND_DEBUGPATHCOMMAND_HPP
#define NET_MINECRAFT_SERVER_COMMAND_DEBUGPATHCOMMAND_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.server.command.DebugPathCommand
 * Remapped: amn
 */
namespace DebugPathCommand {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("amn", "net/minecraft/server/commands/DebugPathCommand", "net/minecraft/class_6327", "net/minecraft/server/command/DebugPathCommand", "net/minecraft/src/C_141898_"));
        }
        return cachedClass;
    };

    // getter for static private field net.minecraft.server.command.DebugPathCommand#SOURCE_NOT_MOB_EXCEPTION
    [[maybe_unused]] static jobject get_field_SOURCE_NOT_MOB_EXCEPTION() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "ERROR_NOT_MOB", "field_33387", "SOURCE_NOT_MOB_EXCEPTION", "f_180118_"), "Lcom/mojang/brigadier/exceptions/SimpleCommandExceptionType;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.server.command.DebugPathCommand#SOURCE_NOT_MOB_EXCEPTION
    [[maybe_unused]] static void set_field_SOURCE_NOT_MOB_EXCEPTION(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "ERROR_NOT_MOB", "field_33387", "SOURCE_NOT_MOB_EXCEPTION", "f_180118_"), "Lcom/mojang/brigadier/exceptions/SimpleCommandExceptionType;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.server.command.DebugPathCommand#PATH_NOT_FOUND_EXCEPTION
    [[maybe_unused]] static jobject get_field_PATH_NOT_FOUND_EXCEPTION() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "ERROR_NO_PATH", "field_33388", "PATH_NOT_FOUND_EXCEPTION", "f_180119_"), "Lcom/mojang/brigadier/exceptions/SimpleCommandExceptionType;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.server.command.DebugPathCommand#PATH_NOT_FOUND_EXCEPTION
    [[maybe_unused]] static void set_field_PATH_NOT_FOUND_EXCEPTION(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "ERROR_NO_PATH", "field_33388", "PATH_NOT_FOUND_EXCEPTION", "f_180119_"), "Lcom/mojang/brigadier/exceptions/SimpleCommandExceptionType;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.server.command.DebugPathCommand#TARGET_NOT_REACHED_EXCEPTION
    [[maybe_unused]] static jobject get_field_TARGET_NOT_REACHED_EXCEPTION() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "ERROR_NOT_COMPLETE", "field_33389", "TARGET_NOT_REACHED_EXCEPTION", "f_180120_"), "Lcom/mojang/brigadier/exceptions/SimpleCommandExceptionType;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.server.command.DebugPathCommand#TARGET_NOT_REACHED_EXCEPTION
    [[maybe_unused]] static void set_field_TARGET_NOT_REACHED_EXCEPTION(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "ERROR_NOT_COMPLETE", "field_33389", "TARGET_NOT_REACHED_EXCEPTION", "f_180120_"), "Lcom/mojang/brigadier/exceptions/SimpleCommandExceptionType;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    static jmethodID methodID_register() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "register", "method_36187", "register", "m_180123_"), "(Lcom/mojang/brigadier/CommandDispatcher;)V");
    }

    static void register(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_register();
       MinecraftSDK::env->CallStaticVoidMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_execute() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "fillBlocks", "method_36190", "execute", "m_180129_"), "(Let;Ljd;)I");
    }

    static jint execute(const jobject& arg0, const jobject& arg1) {
       const auto clazz = self();
       const auto methodID = methodID_execute();
       return MinecraftSDK::env->CallStaticIntMethod(clazz, methodID, arg0, arg1);
    };
    
};

#endif // NET_MINECRAFT_SERVER_COMMAND_DEBUGPATHCOMMAND_HPP