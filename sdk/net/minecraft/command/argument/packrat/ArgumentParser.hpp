// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_COMMAND_ARGUMENT_PACKRAT_ARGUMENTPARSER_HPP
#define NET_MINECRAFT_COMMAND_ARGUMENT_PACKRAT_ARGUMENTPARSER_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.command.argument.packrat.ArgumentParser
 * Remapped: bmp
 */
namespace ArgumentParser {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("bmp", "net/minecraft/util/parsing/packrat/commands/Grammar", "net/minecraft/class_9408", "net/minecraft/command/argument/packrat/ArgumentParser", "net/minecraft/src/C_313590_"));
        }
        return cachedClass;
    };

    // getter for private field net.minecraft.command.argument.packrat.ArgumentParser#rules
    static jobject get_field_rules(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "rules", "comp_2484", "rules", "f_317156_"), "Lbmh;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.command.argument.packrat.ArgumentParser#rules
    static void set_field_rules(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "rules", "comp_2484", "rules", "f_317156_"), "Lbmh;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.command.argument.packrat.ArgumentParser#top
    static jobject get_field_top(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "top", "comp_2485", "top", "f_316874_"), "Lbmf;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.command.argument.packrat.ArgumentParser#top
    static void set_field_top(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "top", "comp_2485", "top", "f_316874_"), "Lbmf;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID_startParsing() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "parse", "method_58340", "startParsing", "m_322930_"), "(Lbmk;)Ljava/util/Optional;");
    }

    static jobject startParsing(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_startParsing();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_parse() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "parseForCommands", "method_58341", "parse", "m_320023_"), "(Lcom/mojang/brigadier/StringReader;)Ljava/lang/Object;");
    }

    static jobject parse(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_parse();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_listSuggestions() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "parseForSuggestions", "method_58342", "listSuggestions", "m_320779_"), "(Lcom/mojang/brigadier/suggestion/SuggestionsBuilder;)Ljava/util/concurrent/CompletableFuture;");
    }

    static jobject listSuggestions(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_listSuggestions();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID__rules() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "rules", "comp_2484", "rules", "f_317156_"), "()Lbmh;");
    }

    static jobject _rules(const jobject& obj) {
                
       const auto methodID = methodID__rules();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID__top() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "top", "comp_2485", "top", "f_316874_"), "()Lbmf;");
    }

    static jobject _top(const jobject& obj) {
                
       const auto methodID = methodID__top();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_COMMAND_ARGUMENT_PACKRAT_ARGUMENTPARSER_HPP