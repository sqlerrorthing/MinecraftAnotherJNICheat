// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_COMMAND_ARGUMENT_PACKRAT_PARSINGRULE_HPP
#define NET_MINECRAFT_COMMAND_ARGUMENT_PACKRAT_PARSINGRULE_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.command.argument.packrat.ParsingRule
 * Remapped: bml
 */
namespace ParsingRule {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("bml", "net/minecraft/util/parsing/packrat/Rule", "net/minecraft/class_9396", "net/minecraft/command/argument/packrat/ParsingRule", "net/minecraft/src/C_313574_"));
        }
        return cachedClass;
    };

    static jmethodID methodID_parse() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "parse", "method_58318", "parse", "m_319437_"), "(Lbmk;)Ljava/util/Optional;");
    }

    static jobject parse(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_parse();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_of() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "fromTerm", "method_58320", "of", "m_323835_"), "(Lbmo;Lbml$a;)Lbml;");
    }

    static jobject of(const jobject& arg0, const jobject& arg1) {
       const auto clazz = self();
       const auto methodID = methodID_of();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0, arg1);
    };
    
    static jmethodID methodID__of() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "fromTerm", "method_58321", "of", "m_321433_"), "(Lbmo;Lbml$b;)Lbml;");
    }

    static jobject _of(const jobject& arg0, const jobject& arg1) {
       const auto clazz = self();
       const auto methodID = methodID__of();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0, arg1);
    };
    
};

#endif // NET_MINECRAFT_COMMAND_ARGUMENT_PACKRAT_PARSINGRULE_HPP