// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_SERVER_COMMAND_FORCELOADCOMMAND_HPP
#define NET_MINECRAFT_SERVER_COMMAND_FORCELOADCOMMAND_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.server.command.ForceLoadCommand
 * Remapped: amx
 */
namespace ForceLoadCommand {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("amx", "net/minecraft/server/commands/ForceLoadCommand", "net/minecraft/class_3060", "net/minecraft/server/command/ForceLoadCommand", "net/minecraft/src/C_5333_"));
        }
        return cachedClass;
    };

    // getter for static private field net.minecraft.server.command.ForceLoadCommand#MAX_CHUNKS
    [[maybe_unused]] static jint get_field_MAX_CHUNKS() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "MAX_CHUNK_LIMIT", "field_33392", "MAX_CHUNKS", "f_180227_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.server.command.ForceLoadCommand#MAX_CHUNKS
    [[maybe_unused]] static void set_field_MAX_CHUNKS(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "MAX_CHUNK_LIMIT", "field_33392", "MAX_CHUNKS", "f_180227_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.server.command.ForceLoadCommand#TOO_BIG_EXCEPTION
    [[maybe_unused]] static jobject get_field_TOO_BIG_EXCEPTION() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "ERROR_TOO_MANY_CHUNKS", "field_13657", "TOO_BIG_EXCEPTION", "f_137668_"), "Lcom/mojang/brigadier/exceptions/Dynamic2CommandExceptionType;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.server.command.ForceLoadCommand#TOO_BIG_EXCEPTION
    [[maybe_unused]] static void set_field_TOO_BIG_EXCEPTION(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "ERROR_TOO_MANY_CHUNKS", "field_13657", "TOO_BIG_EXCEPTION", "f_137668_"), "Lcom/mojang/brigadier/exceptions/Dynamic2CommandExceptionType;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.server.command.ForceLoadCommand#QUERY_FAILURE_EXCEPTION
    [[maybe_unused]] static jobject get_field_QUERY_FAILURE_EXCEPTION() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "ERROR_NOT_TICKING", "field_13659", "QUERY_FAILURE_EXCEPTION", "f_137669_"), "Lcom/mojang/brigadier/exceptions/Dynamic2CommandExceptionType;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.server.command.ForceLoadCommand#QUERY_FAILURE_EXCEPTION
    [[maybe_unused]] static void set_field_QUERY_FAILURE_EXCEPTION(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "ERROR_NOT_TICKING", "field_13659", "QUERY_FAILURE_EXCEPTION", "f_137669_"), "Lcom/mojang/brigadier/exceptions/Dynamic2CommandExceptionType;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.server.command.ForceLoadCommand#ADDED_FAILURE_EXCEPTION
    [[maybe_unused]] static jobject get_field_ADDED_FAILURE_EXCEPTION() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("d", "ERROR_ALL_ADDED", "field_13658", "ADDED_FAILURE_EXCEPTION", "f_137670_"), "Lcom/mojang/brigadier/exceptions/SimpleCommandExceptionType;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.server.command.ForceLoadCommand#ADDED_FAILURE_EXCEPTION
    [[maybe_unused]] static void set_field_ADDED_FAILURE_EXCEPTION(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("d", "ERROR_ALL_ADDED", "field_13658", "ADDED_FAILURE_EXCEPTION", "f_137670_"), "Lcom/mojang/brigadier/exceptions/SimpleCommandExceptionType;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.server.command.ForceLoadCommand#REMOVED_FAILURE_EXCEPTION
    [[maybe_unused]] static jobject get_field_REMOVED_FAILURE_EXCEPTION() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("e", "ERROR_NONE_REMOVED", "field_13660", "REMOVED_FAILURE_EXCEPTION", "f_137671_"), "Lcom/mojang/brigadier/exceptions/SimpleCommandExceptionType;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.server.command.ForceLoadCommand#REMOVED_FAILURE_EXCEPTION
    [[maybe_unused]] static void set_field_REMOVED_FAILURE_EXCEPTION(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("e", "ERROR_NONE_REMOVED", "field_13660", "REMOVED_FAILURE_EXCEPTION", "f_137671_"), "Lcom/mojang/brigadier/exceptions/SimpleCommandExceptionType;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    static jmethodID methodID_register() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "register", "method_13365", "register", "m_137676_"), "(Lcom/mojang/brigadier/CommandDispatcher;)V");
    }

    static void register(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_register();
       MinecraftSDK::env->CallStaticVoidMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_executeQuery() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "queryForceLoad", "method_13374", "executeQuery", "m_137682_"), "(Let;Laqi;)I");
    }

    static jint executeQuery(const jobject& arg0, const jobject& arg1) {
       const auto clazz = self();
       const auto methodID = methodID_executeQuery();
       return MinecraftSDK::env->CallStaticIntMethod(clazz, methodID, arg0, arg1);
    };
    
    static jmethodID methodID__executeQuery() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "listForceLoad", "method_13373", "executeQuery", "m_137680_"), "(Let;)I");
    }

    static jint _executeQuery(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID__executeQuery();
       return MinecraftSDK::env->CallStaticIntMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_executeRemoveAll() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("b", "removeAll", "method_13366", "executeRemoveAll", "m_137695_"), "(Let;)I");
    }

    static jint executeRemoveAll(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_executeRemoveAll();
       return MinecraftSDK::env->CallStaticIntMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_executeChange() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "changeForceLoad", "method_13372", "executeChange", "m_137685_"), "(Let;Laqi;Laqi;Z)I");
    }

    static jint executeChange(const jobject& arg0, const jobject& arg1, const jobject& arg2, const jboolean& arg3) {
       const auto clazz = self();
       const auto methodID = methodID_executeChange();
       return MinecraftSDK::env->CallStaticIntMethod(clazz, methodID, arg0, arg1, arg2, arg3);
    };
    
};

#endif // NET_MINECRAFT_SERVER_COMMAND_FORCELOADCOMMAND_HPP