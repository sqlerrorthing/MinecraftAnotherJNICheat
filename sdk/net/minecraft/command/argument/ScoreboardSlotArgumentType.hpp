// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_COMMAND_ARGUMENT_SCOREBOARDSLOTARGUMENTTYPE_HPP
#define NET_MINECRAFT_COMMAND_ARGUMENT_SCOREBOARDSLOTARGUMENTTYPE_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.command.argument.ScoreboardSlotArgumentType
 * Remapped: fz
 */
namespace ScoreboardSlotArgumentType {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("fz", "net/minecraft/commands/arguments/ScoreboardSlotArgument", "net/minecraft/class_2239", "net/minecraft/command/argument/ScoreboardSlotArgumentType", "net/minecraft/src/C_4126_"));
        }
        return cachedClass;
    };

    // getter for static private field net.minecraft.command.argument.ScoreboardSlotArgumentType#EXAMPLES
    [[maybe_unused]] static jobject get_field_EXAMPLES() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "EXAMPLES", "field_9953", "EXAMPLES", "f_109193_"), "Ljava/util/Collection;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.command.argument.ScoreboardSlotArgumentType#EXAMPLES
    [[maybe_unused]] static void set_field_EXAMPLES(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "EXAMPLES", "field_9953", "EXAMPLES", "f_109193_"), "Ljava/util/Collection;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.command.argument.ScoreboardSlotArgumentType#INVALID_SLOT_EXCEPTION
    [[maybe_unused]] static jobject get_field_INVALID_SLOT_EXCEPTION() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "ERROR_INVALID_VALUE", "field_9954", "INVALID_SLOT_EXCEPTION", "f_109192_"), "Lcom/mojang/brigadier/exceptions/DynamicCommandExceptionType;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.command.argument.ScoreboardSlotArgumentType#INVALID_SLOT_EXCEPTION
    [[maybe_unused]] static void set_field_INVALID_SLOT_EXCEPTION(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "ERROR_INVALID_VALUE", "field_9954", "INVALID_SLOT_EXCEPTION", "f_109192_"), "Lcom/mojang/brigadier/exceptions/DynamicCommandExceptionType;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    static jmethodID methodID_scoreboardSlot() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "displaySlot", "method_9468", "scoreboardSlot", "m_109196_"), "()Lfz;");
    }

    static jobject scoreboardSlot() {
       const auto clazz = self();
       const auto methodID = methodID_scoreboardSlot();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID);
    };
    
    static jmethodID methodID_getScoreboardSlot() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "getDisplaySlot", "method_9465", "getScoreboardSlot", "m_109199_"), "(Lcom/mojang/brigadier/context/CommandContext;Ljava/lang/String;)Lexx;");
    }

    static jobject getScoreboardSlot(const jobject& arg0, const jobject& arg1) {
       const auto clazz = self();
       const auto methodID = methodID_getScoreboardSlot();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_parse() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "parse", "method_9466", "parse", "parse"), "(Lcom/mojang/brigadier/StringReader;)Lexx;");
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

#endif // NET_MINECRAFT_COMMAND_ARGUMENT_SCOREBOARDSLOTARGUMENTTYPE_HPP