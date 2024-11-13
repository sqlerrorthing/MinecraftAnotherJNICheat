// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_COMMAND_ARGUMENT_SCOREBOARDCRITERIONARGUMENTTYPE_HPP
#define NET_MINECRAFT_COMMAND_ARGUMENT_SCOREBOARDCRITERIONARGUMENTTYPE_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.command.argument.ScoreboardCriterionArgumentType
 * Remapped: fo
 */
namespace ScoreboardCriterionArgumentType {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("fo", "net/minecraft/commands/arguments/ObjectiveCriteriaArgument", "net/minecraft/class_2216", "net/minecraft/command/argument/ScoreboardCriterionArgumentType", "net/minecraft/src/C_3816_"));
        }
        return cachedClass;
    };

    // getter for static private field net.minecraft.command.argument.ScoreboardCriterionArgumentType#EXAMPLES
    [[maybe_unused]] static jobject get_field_EXAMPLES() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "EXAMPLES", "field_9926", "EXAMPLES", "f_102552_"), "Ljava/util/Collection;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.command.argument.ScoreboardCriterionArgumentType#EXAMPLES
    [[maybe_unused]] static void set_field_EXAMPLES(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "EXAMPLES", "field_9926", "EXAMPLES", "f_102552_"), "Ljava/util/Collection;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.command.argument.ScoreboardCriterionArgumentType#INVALID_CRITERION_EXCEPTION
    [[maybe_unused]] static jobject get_field_INVALID_CRITERION_EXCEPTION() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "ERROR_INVALID_VALUE", "field_9927", "INVALID_CRITERION_EXCEPTION", "f_102551_"), "Lcom/mojang/brigadier/exceptions/DynamicCommandExceptionType;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.command.argument.ScoreboardCriterionArgumentType#INVALID_CRITERION_EXCEPTION
    [[maybe_unused]] static void set_field_INVALID_CRITERION_EXCEPTION(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "ERROR_INVALID_VALUE", "field_9927", "INVALID_CRITERION_EXCEPTION", "f_102551_"), "Lcom/mojang/brigadier/exceptions/DynamicCommandExceptionType;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    static jmethodID methodID_scoreboardCriterion() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "criteria", "method_9399", "scoreboardCriterion", "m_102555_"), "()Lfo;");
    }

    static jobject scoreboardCriterion() {
       const auto clazz = self();
       const auto methodID = methodID_scoreboardCriterion();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID);
    };
    
    static jmethodID methodID_getCriterion() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "getCriteria", "method_9402", "getCriterion", "m_102565_"), "(Lcom/mojang/brigadier/context/CommandContext;Ljava/lang/String;)Leyj;");
    }

    static jobject getCriterion(const jobject& arg0, const jobject& arg1) {
       const auto clazz = self();
       const auto methodID = methodID_getCriterion();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_parse() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "parse", "method_9403", "parse", "parse"), "(Lcom/mojang/brigadier/StringReader;)Leyj;");
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
    
    static jmethodID methodID_getStatName() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getName", "method_9400", "getStatName", "m_102556_"), "(Lavy;Ljava/lang/Object;)Ljava/lang/String;");
    }

    static jobject getStatName(const jobject& obj, const jobject& arg0, const jobject& arg1) {
                
       const auto methodID = methodID_getStatName();
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

#endif // NET_MINECRAFT_COMMAND_ARGUMENT_SCOREBOARDCRITERIONARGUMENTTYPE_HPP