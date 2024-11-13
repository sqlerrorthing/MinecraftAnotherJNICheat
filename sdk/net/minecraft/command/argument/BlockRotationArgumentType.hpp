// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_COMMAND_ARGUMENT_BLOCKROTATIONARGUMENTTYPE_HPP
#define NET_MINECRAFT_COMMAND_ARGUMENT_BLOCKROTATIONARGUMENTTYPE_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.command.argument.BlockRotationArgumentType
 * Remapped: gh
 */
namespace BlockRotationArgumentType {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("gh", "net/minecraft/commands/arguments/TemplateRotationArgument", "net/minecraft/class_7487", "net/minecraft/command/argument/BlockRotationArgumentType", "net/minecraft/src/C_213424_"));
        }
        return cachedClass;
    };

    static jmethodID methodID_blockRotation() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "templateRotation", "method_44102", "blockRotation", "m_234414_"), "()Lgh;");
    }

    static jobject blockRotation() {
       const auto clazz = self();
       const auto methodID = methodID_blockRotation();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID);
    };
    
    static jmethodID methodID_getBlockRotation() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "getRotation", "method_44103", "getBlockRotation", "m_234415_"), "(Lcom/mojang/brigadier/context/CommandContext;Ljava/lang/String;)Ldmm;");
    }

    static jobject getBlockRotation(const jobject& arg0, const jobject& arg1) {
       const auto clazz = self();
       const auto methodID = methodID_getBlockRotation();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0, arg1);
    };
    
};

#endif // NET_MINECRAFT_COMMAND_ARGUMENT_BLOCKROTATIONARGUMENTTYPE_HPP