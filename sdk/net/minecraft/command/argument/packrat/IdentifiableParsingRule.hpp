// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_COMMAND_ARGUMENT_PACKRAT_IDENTIFIABLEPARSINGRULE_HPP
#define NET_MINECRAFT_COMMAND_ARGUMENT_PACKRAT_IDENTIFIABLEPARSINGRULE_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.command.argument.packrat.IdentifiableParsingRule
 * Remapped: bmr
 */
namespace IdentifiableParsingRule {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("bmr", "net/minecraft/util/parsing/packrat/commands/ResourceLookupRule", "net/minecraft/class_9410", "net/minecraft/command/argument/packrat/IdentifiableParsingRule", "net/minecraft/src/C_313642_"));
        }
        return cachedClass;
    };

    // getter for private field net.minecraft.command.argument.packrat.IdentifiableParsingRule#symbol
    static jobject get_field_symbol(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "idParser", "field_49969", "symbol", "f_316581_"), "Lbmf;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.command.argument.packrat.IdentifiableParsingRule#symbol
    static void set_field_symbol(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "idParser", "field_49969", "symbol", "f_316581_"), "Lbmf;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for protected field net.minecraft.command.argument.packrat.IdentifiableParsingRule#callbacks
    static jobject get_field_callbacks(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "context", "field_49968", "callbacks", "f_314968_"), "Ljava/lang/Object;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static protected field net.minecraft.command.argument.packrat.IdentifiableParsingRule#callbacks
    static void set_field_callbacks(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "context", "field_49968", "callbacks", "f_314968_"), "Ljava/lang/Object;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID_parse() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "parse", "method_58318", "parse", "m_319437_"), "(Lbmk;)Ljava/util/Optional;");
    }

    static jobject parse(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_parse();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID__parse() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "validateElement", "method_58343", "parse", "m_319888_"), "(Lcom/mojang/brigadier/ImmutableStringReader;Lakr;)Ljava/lang/Object;");
    }

    static jobject _parse(const jobject& obj, const jobject& arg0, const jobject& arg1) {
                
       const auto methodID = methodID__parse();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1);
    };
    
};

#endif // NET_MINECRAFT_COMMAND_ARGUMENT_PACKRAT_IDENTIFIABLEPARSINGRULE_HPP