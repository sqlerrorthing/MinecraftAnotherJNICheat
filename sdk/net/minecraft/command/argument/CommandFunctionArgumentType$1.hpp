// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_COMMAND_ARGUMENT_COMMANDFUNCTIONARGUMENTTYPE$1_HPP
#define NET_MINECRAFT_COMMAND_ARGUMENT_COMMANDFUNCTIONARGUMENTTYPE$1_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.command.argument.CommandFunctionArgumentType$1
 * Remapped: hb$1
 */
namespace CommandFunctionArgumentType$1 {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("hb$1", "net/minecraft/commands/arguments/item/FunctionArgument$1", "net/minecraft/class_2284$1", "net/minecraft/command/argument/CommandFunctionArgumentType$1", "net/minecraft/src/C_4638_$C_4639_"));
        }
        return cachedClass;
    };

    static jmethodID methodID_getFunctions() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "create", "method_9771", "getFunctions", "m_7588_"), "(Lcom/mojang/brigadier/context/CommandContext;)Ljava/util/Collection;");
    }

    static jobject getFunctions(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_getFunctions();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_getFunctionOrTag() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "unwrap", "method_9770", "getFunctionOrTag", "m_5911_"), "(Lcom/mojang/brigadier/context/CommandContext;)Lcom/mojang/datafixers/util/Pair;");
    }

    static jobject getFunctionOrTag(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_getFunctionOrTag();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_getIdentifiedFunctions() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "unwrapToCollection", "method_55591", "getIdentifiedFunctions", "m_305224_"), "(Lcom/mojang/brigadier/context/CommandContext;)Lcom/mojang/datafixers/util/Pair;");
    }

    static jobject getIdentifiedFunctions(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_getIdentifiedFunctions();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
};

#endif // NET_MINECRAFT_COMMAND_ARGUMENT_COMMANDFUNCTIONARGUMENTTYPE$1_HPP