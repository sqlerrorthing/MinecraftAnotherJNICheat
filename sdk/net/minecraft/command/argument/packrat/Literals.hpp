// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_COMMAND_ARGUMENT_PACKRAT_LITERALS_HPP
#define NET_MINECRAFT_COMMAND_ARGUMENT_PACKRAT_LITERALS_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.command.argument.packrat.Literals
 * Remapped: bmu
 */
namespace Literals {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("bmu", "net/minecraft/util/parsing/packrat/commands/StringReaderTerms", "net/minecraft/class_9413", "net/minecraft/command/argument/packrat/Literals", "net/minecraft/src/C_313687_"));
        }
        return cachedClass;
    };

    static jmethodID methodID_string() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "word", "method_58347", "string", "m_323264_"), "(Ljava/lang/String;)Lbmo;");
    }

    static jobject string(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_string();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_character() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "character", "method_58346", "character", "m_321908_"), "(C)Lbmo;");
    }

    static jobject character(const jchar& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_character();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0);
    };
    
};

#endif // NET_MINECRAFT_COMMAND_ARGUMENT_PACKRAT_LITERALS_HPP