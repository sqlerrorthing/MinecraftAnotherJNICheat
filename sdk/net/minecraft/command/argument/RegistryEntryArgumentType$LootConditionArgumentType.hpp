// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_COMMAND_ARGUMENT_REGISTRYENTRYARGUMENTTYPE$LOOTCONDITIONARGUMENTTYPE_HPP
#define NET_MINECRAFT_COMMAND_ARGUMENT_REGISTRYENTRYARGUMENTTYPE$LOOTCONDITIONARGUMENTTYPE_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.command.argument.RegistryEntryArgumentType$LootConditionArgumentType
 * Remapped: fv$b
 */
namespace RegistryEntryArgumentType$LootConditionArgumentType {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("fv$b", "net/minecraft/commands/arguments/ResourceOrIdArgument$LootPredicateArgument", "net/minecraft/class_9433$class_9435", "net/minecraft/command/argument/RegistryEntryArgumentType$LootConditionArgumentType", "net/minecraft/src/C_313558_$C_313373_"));
        }
        return cachedClass;
    };

};

#endif // NET_MINECRAFT_COMMAND_ARGUMENT_REGISTRYENTRYARGUMENTTYPE$LOOTCONDITIONARGUMENTTYPE_HPP