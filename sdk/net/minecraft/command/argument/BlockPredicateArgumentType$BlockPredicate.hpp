// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_COMMAND_ARGUMENT_BLOCKPREDICATEARGUMENTTYPE$BLOCKPREDICATE_HPP
#define NET_MINECRAFT_COMMAND_ARGUMENT_BLOCKPREDICATEARGUMENTTYPE$BLOCKPREDICATE_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.command.argument.BlockPredicateArgumentType$BlockPredicate
 * Remapped: gl$b
 */
namespace BlockPredicateArgumentType$BlockPredicate {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("gl$b", "net/minecraft/commands/arguments/blocks/BlockPredicateArgument$Result", "net/minecraft/class_2252$class_2254", "net/minecraft/command/argument/BlockPredicateArgumentType$BlockPredicate", "net/minecraft/src/C_4367_$C_4370_"));
        }
        return cachedClass;
    };

    static jmethodID methodID_hasNbt() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "requiresNbt", "method_38559", "hasNbt", "m_183631_"), "()Z");
    }

    static jboolean hasNbt(const jobject& obj) {
                
       const auto methodID = methodID_hasNbt();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_COMMAND_ARGUMENT_BLOCKPREDICATEARGUMENTTYPE$BLOCKPREDICATE_HPP