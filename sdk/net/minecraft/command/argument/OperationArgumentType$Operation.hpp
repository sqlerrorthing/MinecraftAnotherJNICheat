// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_COMMAND_ARGUMENT_OPERATIONARGUMENTTYPE$OPERATION_HPP
#define NET_MINECRAFT_COMMAND_ARGUMENT_OPERATIONARGUMENTTYPE$OPERATION_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.command.argument.OperationArgumentType$Operation
 * Remapped: fp$a
 */
namespace OperationArgumentType$Operation {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("fp$a", "net/minecraft/commands/arguments/OperationArgument$Operation", "net/minecraft/class_2218$class_2219", "net/minecraft/command/argument/OperationArgumentType$Operation", "net/minecraft/src/C_3847_$C_3848_"));
        }
        return cachedClass;
    };

    static jmethodID methodID_apply() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("apply", "apply", "apply", "apply", "m_6407_"), "(Leye;Leye;)V");
    }

    static void apply(const jobject& obj, const jobject& arg0, const jobject& arg1) {
                
       const auto methodID = methodID_apply();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1);
    };
    
};

#endif // NET_MINECRAFT_COMMAND_ARGUMENT_OPERATIONARGUMENTTYPE$OPERATION_HPP