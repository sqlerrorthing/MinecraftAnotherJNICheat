// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_COMMAND_ARGUMENT_SCOREHOLDERARGUMENTTYPE_HPP
#define NET_MINECRAFT_COMMAND_ARGUMENT_SCOREHOLDERARGUMENTTYPE_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.command.argument.ScoreHolderArgumentType
 * Remapped: fy
 */
namespace ScoreHolderArgumentType {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("fy", "net/minecraft/commands/arguments/ScoreHolderArgument", "net/minecraft/class_2233", "net/minecraft/command/argument/ScoreHolderArgumentType", "net/minecraft/src/C_4081_"));
        }
        return cachedClass;
    };

    // getter for static public field net.minecraft.command.argument.ScoreHolderArgumentType#SUGGESTION_PROVIDER
    [[maybe_unused]] static jobject get_field_SUGGESTION_PROVIDER() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "SUGGEST_SCORE_HOLDERS", "field_9951", "SUGGESTION_PROVIDER", "f_108210_"), "Lcom/mojang/brigadier/suggestion/SuggestionProvider;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.command.argument.ScoreHolderArgumentType#SUGGESTION_PROVIDER
    [[maybe_unused]] static void set_field_SUGGESTION_PROVIDER(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "SUGGEST_SCORE_HOLDERS", "field_9951", "SUGGESTION_PROVIDER", "f_108210_"), "Lcom/mojang/brigadier/suggestion/SuggestionProvider;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.command.argument.ScoreHolderArgumentType#EXAMPLES
    [[maybe_unused]] static jobject get_field_EXAMPLES() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "EXAMPLES", "field_9948", "EXAMPLES", "f_108211_"), "Ljava/util/Collection;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.command.argument.ScoreHolderArgumentType#EXAMPLES
    [[maybe_unused]] static void set_field_EXAMPLES(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "EXAMPLES", "field_9948", "EXAMPLES", "f_108211_"), "Ljava/util/Collection;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.command.argument.ScoreHolderArgumentType#EMPTY_SCORE_HOLDER_EXCEPTION
    [[maybe_unused]] static jobject get_field_EMPTY_SCORE_HOLDER_EXCEPTION() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "ERROR_NO_RESULTS", "field_9950", "EMPTY_SCORE_HOLDER_EXCEPTION", "f_108212_"), "Lcom/mojang/brigadier/exceptions/SimpleCommandExceptionType;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.command.argument.ScoreHolderArgumentType#EMPTY_SCORE_HOLDER_EXCEPTION
    [[maybe_unused]] static void set_field_EMPTY_SCORE_HOLDER_EXCEPTION(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "ERROR_NO_RESULTS", "field_9950", "EMPTY_SCORE_HOLDER_EXCEPTION", "f_108212_"), "Lcom/mojang/brigadier/exceptions/SimpleCommandExceptionType;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for default field net.minecraft.command.argument.ScoreHolderArgumentType#multiple
    static jboolean get_field_multiple(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "multiple", "field_9949", "multiple", "f_108213_"), "Z");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetBooleanField(obj, fieldID);
    };

    // setter for static default field net.minecraft.command.argument.ScoreHolderArgumentType#multiple
    static void set_field_multiple(const jobject &obj, const jboolean &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "multiple", "field_9949", "multiple", "f_108213_"), "Z");
        return MinecraftSDK::env->SetBooleanField(obj, fieldID, value);
    };

    static jmethodID methodID_getScoreHolder() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "getName", "method_9452", "getScoreHolder", "m_108223_"), "(Lcom/mojang/brigadier/context/CommandContext;Ljava/lang/String;)Leyf;");
    }

    static jobject getScoreHolder(const jobject& arg0, const jobject& arg1) {
       const auto clazz = self();
       const auto methodID = methodID_getScoreHolder();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_getScoreHolders() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("b", "getNames", "method_9458", "getScoreHolders", "m_108243_"), "(Lcom/mojang/brigadier/context/CommandContext;Ljava/lang/String;)Ljava/util/Collection;");
    }

    static jobject getScoreHolders(const jobject& arg0, const jobject& arg1) {
       const auto clazz = self();
       const auto methodID = methodID_getScoreHolders();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_getScoreboardScoreHolders() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("c", "getNamesWithDefaultWildcard", "method_9449", "getScoreboardScoreHolders", "m_108246_"), "(Lcom/mojang/brigadier/context/CommandContext;Ljava/lang/String;)Ljava/util/Collection;");
    }

    static jobject getScoreboardScoreHolders(const jobject& arg0, const jobject& arg1) {
       const auto clazz = self();
       const auto methodID = methodID_getScoreboardScoreHolders();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0, arg1);
    };
    
    static jmethodID methodID__getScoreHolders() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "getNames", "method_9450", "getScoreHolders", "m_108226_"), "(Lcom/mojang/brigadier/context/CommandContext;Ljava/lang/String;Ljava/util/function/Supplier;)Ljava/util/Collection;");
    }

    static jobject _getScoreHolders(const jobject& arg0, const jobject& arg1, const jobject& arg2) {
       const auto clazz = self();
       const auto methodID = methodID__getScoreHolders();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0, arg1, arg2);
    };
    
    static jmethodID methodID_scoreHolder() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "scoreHolder", "method_9447", "scoreHolder", "m_108217_"), "()Lfy;");
    }

    static jobject scoreHolder() {
       const auto clazz = self();
       const auto methodID = methodID_scoreHolder();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID);
    };
    
    static jmethodID methodID_scoreHolders() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("b", "scoreHolders", "method_9451", "scoreHolders", "m_108239_"), "()Lfy;");
    }

    static jobject scoreHolders() {
       const auto clazz = self();
       const auto methodID = methodID_scoreHolders();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID);
    };
    
    static jmethodID methodID_parse() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "parse", "method_9453", "parse", "parse"), "(Lcom/mojang/brigadier/StringReader;)Lfy$b;");
    }

    static jobject parse(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_parse();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
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

#endif // NET_MINECRAFT_COMMAND_ARGUMENT_SCOREHOLDERARGUMENTTYPE_HPP