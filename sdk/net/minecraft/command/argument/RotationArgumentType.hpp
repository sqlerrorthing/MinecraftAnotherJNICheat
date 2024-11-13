// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_COMMAND_ARGUMENT_ROTATIONARGUMENTTYPE_HPP
#define NET_MINECRAFT_COMMAND_ARGUMENT_ROTATIONARGUMENTTYPE_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.command.argument.RotationArgumentType
 * Remapped: gt
 */
namespace RotationArgumentType {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("gt", "net/minecraft/commands/arguments/coordinates/RotationArgument", "net/minecraft/class_2270", "net/minecraft/command/argument/RotationArgumentType", "net/minecraft/src/C_4612_"));
        }
        return cachedClass;
    };

    // getter for static private field net.minecraft.command.argument.RotationArgumentType#EXAMPLES
    [[maybe_unused]] static jobject get_field_EXAMPLES() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "EXAMPLES", "field_10735", "EXAMPLES", "f_120476_"), "Ljava/util/Collection;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.command.argument.RotationArgumentType#EXAMPLES
    [[maybe_unused]] static void set_field_EXAMPLES(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "EXAMPLES", "field_10735", "EXAMPLES", "f_120476_"), "Ljava/util/Collection;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.command.argument.RotationArgumentType#INCOMPLETE_ROTATION_EXCEPTION
    [[maybe_unused]] static jobject get_field_INCOMPLETE_ROTATION_EXCEPTION() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "ERROR_NOT_COMPLETE", "field_10736", "INCOMPLETE_ROTATION_EXCEPTION", "f_120475_"), "Lcom/mojang/brigadier/exceptions/SimpleCommandExceptionType;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.command.argument.RotationArgumentType#INCOMPLETE_ROTATION_EXCEPTION
    [[maybe_unused]] static void set_field_INCOMPLETE_ROTATION_EXCEPTION(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "ERROR_NOT_COMPLETE", "field_10736", "INCOMPLETE_ROTATION_EXCEPTION", "f_120475_"), "Lcom/mojang/brigadier/exceptions/SimpleCommandExceptionType;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    static jmethodID methodID_rotation() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "rotation", "method_9717", "rotation", "m_120479_"), "()Lgt;");
    }

    static jobject rotation() {
       const auto clazz = self();
       const auto methodID = methodID_rotation();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID);
    };
    
    static jmethodID methodID_getRotation() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "getRotation", "method_9716", "getRotation", "m_120482_"), "(Lcom/mojang/brigadier/context/CommandContext;Ljava/lang/String;)Lgr;");
    }

    static jobject getRotation(const jobject& arg0, const jobject& arg1) {
       const auto clazz = self();
       const auto methodID = methodID_getRotation();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_parse() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "parse", "method_9718", "parse", "parse"), "(Lcom/mojang/brigadier/StringReader;)Lgr;");
    }

    static jobject parse(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_parse();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_getExamples() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("getExamples", "getExamples", "", "", "getExamples"), "()Ljava/util/Collection;");
    }

    static jobject getExamples(const jobject& obj) {
                
       const auto methodID = methodID_getExamples();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_COMMAND_ARGUMENT_ROTATIONARGUMENTTYPE_HPP