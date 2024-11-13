// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_COMMAND_ARGUMENT_NUMBERRANGEARGUMENTTYPE_HPP
#define NET_MINECRAFT_COMMAND_ARGUMENT_NUMBERRANGEARGUMENTTYPE_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.command.argument.NumberRangeArgumentType
 * Remapped: fr
 */
namespace NumberRangeArgumentType {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("fr", "net/minecraft/commands/arguments/RangeArgument", "net/minecraft/class_2224", "net/minecraft/command/argument/NumberRangeArgumentType", "net/minecraft/src/C_3910_"));
        }
        return cachedClass;
    };

    static jmethodID methodID_intRange() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "intRange", "method_9422", "intRange", "m_105404_"), "()Lfr$b;");
    }

    static jobject intRange() {
       const auto clazz = self();
       const auto methodID = methodID_intRange();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID);
    };
    
    static jmethodID methodID_floatRange() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("b", "floatRange", "method_30918", "floatRange", "m_105405_"), "()Lfr$a;");
    }

    static jobject floatRange() {
       const auto clazz = self();
       const auto methodID = methodID_floatRange();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID);
    };
    
};

#endif // NET_MINECRAFT_COMMAND_ARGUMENT_NUMBERRANGEARGUMENTTYPE_HPP