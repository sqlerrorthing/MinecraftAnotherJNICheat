// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_COMMAND_ARGUMENT_PACKRAT_LITERALS$CHARLITERAL_HPP
#define NET_MINECRAFT_COMMAND_ARGUMENT_PACKRAT_LITERALS$CHARLITERAL_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.command.argument.packrat.Literals$CharLiteral
 * Remapped: bmu$a
 */
namespace Literals$CharLiteral {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("bmu$a", "net/minecraft/util/parsing/packrat/commands/StringReaderTerms$TerminalCharacter", "net/minecraft/class_9413$class_9414", "net/minecraft/command/argument/packrat/Literals$CharLiteral", "net/minecraft/src/C_313687_$C_313624_"));
        }
        return cachedClass;
    };

    // getter for private field net.minecraft.command.argument.packrat.Literals$CharLiteral#value
    static jchar get_field_value(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "value", "comp_2486", "value", "f_314795_"), "C");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetCharField(obj, fieldID);
    };

    // setter for static private field net.minecraft.command.argument.packrat.Literals$CharLiteral#value
    static void set_field_value(const jobject &obj, const jchar &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "value", "comp_2486", "value", "f_314795_"), "C");
        return MinecraftSDK::env->SetCharField(obj, fieldID, value);
    };

    static jmethodID methodID_matches() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "parse", "method_58334", "matches", "m_319964_"), "(Lbmk;Lbmm;Lbmg;)Z");
    }

    static jboolean matches(const jobject& obj, const jobject& arg0, const jobject& arg1, const jobject& arg2) {
                
       const auto methodID = methodID_matches();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0, arg1, arg2);
    };
    
    static jmethodID methodID__value() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "value", "comp_2486", "value", "f_314795_"), "()C");
    }

    static jchar _value(const jobject& obj) {
                
       const auto methodID = methodID__value();
       return MinecraftSDK::env->CallCharMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_COMMAND_ARGUMENT_PACKRAT_LITERALS$CHARLITERAL_HPP