// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_COMMAND_ARGUMENT_PACKRAT_PACKRATPARSING$COMPONENTPARSINGRULE_HPP
#define NET_MINECRAFT_COMMAND_ARGUMENT_PACKRAT_PACKRATPARSING$COMPONENTPARSINGRULE_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.command.argument.packrat.PackratParsing$ComponentParsingRule
 * Remapped: ha$a
 */
namespace PackratParsing$ComponentParsingRule {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("ha$a", "net/minecraft/commands/arguments/item/ComponentPredicateParser$ComponentLookupRule", "net/minecraft/class_9437$class_9438", "net/minecraft/command/argument/packrat/PackratParsing$ComponentParsingRule", "net/minecraft/src/C_313610_$C_313832_"));
        }
        return cachedClass;
    };

    static jmethodID methodID_parse() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "validateElement", "method_58343", "parse", "m_319888_"), "(Lcom/mojang/brigadier/ImmutableStringReader;Lakr;)Ljava/lang/Object;");
    }

    static jobject parse(const jobject& obj, const jobject& arg0, const jobject& arg1) {
                
       const auto methodID = methodID_parse();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_possibleIds() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "possibleResources", "method_58344", "possibleIds", "m_319106_"), "()Ljava/util/stream/Stream;");
    }

    static jobject possibleIds(const jobject& obj) {
                
       const auto methodID = methodID_possibleIds();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_COMMAND_ARGUMENT_PACKRAT_PACKRATPARSING$COMPONENTPARSINGRULE_HPP