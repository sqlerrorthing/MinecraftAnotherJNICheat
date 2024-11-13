// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_COMMAND_ARGUMENT_SCOREBOARDOBJECTIVEARGUMENTTYPE_HPP
#define NET_MINECRAFT_COMMAND_ARGUMENT_SCOREBOARDOBJECTIVEARGUMENTTYPE_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.command.argument.ScoreboardObjectiveArgumentType
 * Remapped: fn
 */
namespace ScoreboardObjectiveArgumentType {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("fn", "net/minecraft/commands/arguments/ObjectiveArgument", "net/minecraft/class_2214", "net/minecraft/command/argument/ScoreboardObjectiveArgumentType", "net/minecraft/src/C_3792_"));
        }
        return cachedClass;
    };

    // getter for static private field net.minecraft.command.argument.ScoreboardObjectiveArgumentType#EXAMPLES
    [[maybe_unused]] static jobject get_field_EXAMPLES() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "EXAMPLES", "field_9919", "EXAMPLES", "f_101952_"), "Ljava/util/Collection;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.command.argument.ScoreboardObjectiveArgumentType#EXAMPLES
    [[maybe_unused]] static void set_field_EXAMPLES(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "EXAMPLES", "field_9919", "EXAMPLES", "f_101952_"), "Ljava/util/Collection;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.command.argument.ScoreboardObjectiveArgumentType#UNKNOWN_OBJECTIVE_EXCEPTION
    [[maybe_unused]] static jobject get_field_UNKNOWN_OBJECTIVE_EXCEPTION() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "ERROR_OBJECTIVE_NOT_FOUND", "field_9922", "UNKNOWN_OBJECTIVE_EXCEPTION", "f_101953_"), "Lcom/mojang/brigadier/exceptions/DynamicCommandExceptionType;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.command.argument.ScoreboardObjectiveArgumentType#UNKNOWN_OBJECTIVE_EXCEPTION
    [[maybe_unused]] static void set_field_UNKNOWN_OBJECTIVE_EXCEPTION(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "ERROR_OBJECTIVE_NOT_FOUND", "field_9922", "UNKNOWN_OBJECTIVE_EXCEPTION", "f_101953_"), "Lcom/mojang/brigadier/exceptions/DynamicCommandExceptionType;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.command.argument.ScoreboardObjectiveArgumentType#READONLY_OBJECTIVE_EXCEPTION
    [[maybe_unused]] static jobject get_field_READONLY_OBJECTIVE_EXCEPTION() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "ERROR_OBJECTIVE_READ_ONLY", "field_9921", "READONLY_OBJECTIVE_EXCEPTION", "f_101954_"), "Lcom/mojang/brigadier/exceptions/DynamicCommandExceptionType;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.command.argument.ScoreboardObjectiveArgumentType#READONLY_OBJECTIVE_EXCEPTION
    [[maybe_unused]] static void set_field_READONLY_OBJECTIVE_EXCEPTION(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "ERROR_OBJECTIVE_READ_ONLY", "field_9921", "READONLY_OBJECTIVE_EXCEPTION", "f_101954_"), "Lcom/mojang/brigadier/exceptions/DynamicCommandExceptionType;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    static jmethodID methodID_scoreboardObjective() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "objective", "method_9391", "scoreboardObjective", "m_101957_"), "()Lfn;");
    }

    static jobject scoreboardObjective() {
       const auto clazz = self();
       const auto methodID = methodID_scoreboardObjective();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID);
    };
    
    static jmethodID methodID_getObjective() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "getObjective", "method_9395", "getObjective", "m_101960_"), "(Lcom/mojang/brigadier/context/CommandContext;Ljava/lang/String;)Lexy;");
    }

    static jobject getObjective(const jobject& arg0, const jobject& arg1) {
       const auto clazz = self();
       const auto methodID = methodID_getObjective();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_getWritableObjective() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("b", "getWritableObjective", "method_9393", "getWritableObjective", "m_101965_"), "(Lcom/mojang/brigadier/context/CommandContext;Ljava/lang/String;)Lexy;");
    }

    static jobject getWritableObjective(const jobject& arg0, const jobject& arg1) {
       const auto clazz = self();
       const auto methodID = methodID_getWritableObjective();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_parse() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "parse", "method_9396", "parse", "parse"), "(Lcom/mojang/brigadier/StringReader;)Ljava/lang/String;");
    }

    static jobject parse(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_parse();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_listSuggestions() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("listSuggestions", "listSuggestions", "listSuggestions", "listSuggestions", "listSuggestions"), "(Lcom/mojang/brigadier/context/CommandContext;Lcom/mojang/brigadier/suggestion/SuggestionsBuilder;)Ljava/util/concurrent/CompletableFuture;");
    }

    static jobject listSuggestions(const jobject& obj, const jobject& arg0, const jobject& arg1) {
                
       const auto methodID = methodID_listSuggestions();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_getExamples() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("getExamples", "getExamples", "", "", "getExamples"), "()Ljava/util/Collection;");
    }

    static jobject getExamples(const jobject& obj) {
                
       const auto methodID = methodID_getExamples();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_COMMAND_ARGUMENT_SCOREBOARDOBJECTIVEARGUMENTTYPE_HPP