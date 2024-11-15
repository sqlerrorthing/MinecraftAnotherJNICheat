// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_SERVER_COMMAND_DEBUGCOMMAND_HPP
#define NET_MINECRAFT_SERVER_COMMAND_DEBUGCOMMAND_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.server.command.DebugCommand
 * Remapped: amk
 */
namespace DebugCommand {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("amk", "net/minecraft/server/commands/DebugCommand", "net/minecraft/class_3032", "net/minecraft/server/command/DebugCommand", "net/minecraft/src/C_5309_"));
        }
        return cachedClass;
    };

    // getter for static default field net.minecraft.server.command.DebugCommand#LOGGER
    [[maybe_unused]] static jobject get_field_LOGGER() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "LOGGER", "field_20283", "LOGGER", "f_136900_"), "Lorg/slf4j/Logger;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static default field net.minecraft.server.command.DebugCommand#LOGGER
    [[maybe_unused]] static void set_field_LOGGER(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "LOGGER", "field_20283", "LOGGER", "f_136900_"), "Lorg/slf4j/Logger;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.server.command.DebugCommand#NOT_RUNNING_EXCEPTION
    [[maybe_unused]] static jobject get_field_NOT_RUNNING_EXCEPTION() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "ERROR_NOT_RUNNING", "field_13597", "NOT_RUNNING_EXCEPTION", "f_136901_"), "Lcom/mojang/brigadier/exceptions/SimpleCommandExceptionType;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.server.command.DebugCommand#NOT_RUNNING_EXCEPTION
    [[maybe_unused]] static void set_field_NOT_RUNNING_EXCEPTION(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "ERROR_NOT_RUNNING", "field_13597", "NOT_RUNNING_EXCEPTION", "f_136901_"), "Lcom/mojang/brigadier/exceptions/SimpleCommandExceptionType;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.server.command.DebugCommand#ALREADY_RUNNING_EXCEPTION
    [[maybe_unused]] static jobject get_field_ALREADY_RUNNING_EXCEPTION() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "ERROR_ALREADY_RUNNING", "field_13596", "ALREADY_RUNNING_EXCEPTION", "f_136902_"), "Lcom/mojang/brigadier/exceptions/SimpleCommandExceptionType;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.server.command.DebugCommand#ALREADY_RUNNING_EXCEPTION
    [[maybe_unused]] static void set_field_ALREADY_RUNNING_EXCEPTION(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "ERROR_ALREADY_RUNNING", "field_13596", "ALREADY_RUNNING_EXCEPTION", "f_136902_"), "Lcom/mojang/brigadier/exceptions/SimpleCommandExceptionType;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static default field net.minecraft.server.command.DebugCommand#NO_RECURSION_EXCEPTION
    [[maybe_unused]] static jobject get_field_NO_RECURSION_EXCEPTION() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("d", "NO_RECURSIVE_TRACES", "field_46638", "NO_RECURSION_EXCEPTION", "f_303735_"), "Lcom/mojang/brigadier/exceptions/SimpleCommandExceptionType;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static default field net.minecraft.server.command.DebugCommand#NO_RECURSION_EXCEPTION
    [[maybe_unused]] static void set_field_NO_RECURSION_EXCEPTION(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("d", "NO_RECURSIVE_TRACES", "field_46638", "NO_RECURSION_EXCEPTION", "f_303735_"), "Lcom/mojang/brigadier/exceptions/SimpleCommandExceptionType;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static default field net.minecraft.server.command.DebugCommand#NO_RETURN_RUN_EXCEPTION
    [[maybe_unused]] static jobject get_field_NO_RETURN_RUN_EXCEPTION() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("e", "NO_RETURN_RUN", "field_47151", "NO_RETURN_RUN_EXCEPTION", "f_302589_"), "Lcom/mojang/brigadier/exceptions/SimpleCommandExceptionType;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static default field net.minecraft.server.command.DebugCommand#NO_RETURN_RUN_EXCEPTION
    [[maybe_unused]] static void set_field_NO_RETURN_RUN_EXCEPTION(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("e", "NO_RETURN_RUN", "field_47151", "NO_RETURN_RUN_EXCEPTION", "f_302589_"), "Lcom/mojang/brigadier/exceptions/SimpleCommandExceptionType;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    static jmethodID methodID_register() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "register", "method_13156", "register", "m_136905_"), "(Lcom/mojang/brigadier/CommandDispatcher;)V");
    }

    static void register(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_register();
       MinecraftSDK::env->CallStaticVoidMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_executeStart() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "start", "method_13159", "executeStart", "m_136909_"), "(Let;)I");
    }

    static jint executeStart(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_executeStart();
       return MinecraftSDK::env->CallStaticIntMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_executeStop() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("b", "stop", "method_13158", "executeStop", "m_136915_"), "(Let;)I");
    }

    static jint executeStop(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_executeStop();
       return MinecraftSDK::env->CallStaticIntMethod(clazz, methodID, arg0);
    };
    
};

#endif // NET_MINECRAFT_SERVER_COMMAND_DEBUGCOMMAND_HPP