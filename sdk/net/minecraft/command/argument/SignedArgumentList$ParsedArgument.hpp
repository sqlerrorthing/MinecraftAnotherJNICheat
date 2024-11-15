// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_COMMAND_ARGUMENT_SIGNEDARGUMENTLIST$PARSEDARGUMENT_HPP
#define NET_MINECRAFT_COMMAND_ARGUMENT_SIGNEDARGUMENTLIST$PARSEDARGUMENT_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.command.argument.SignedArgumentList$ParsedArgument
 * Remapped: xr$a
 */
namespace SignedArgumentList$ParsedArgument {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("xr$a", "net/minecraft/network/chat/SignableCommand$Argument", "net/minecraft/class_7644$class_7645", "net/minecraft/command/argument/SignedArgumentList$ParsedArgument", "net/minecraft/src/C_243567_$C_243625_"));
        }
        return cachedClass;
    };

    // getter for private field net.minecraft.command.argument.SignedArgumentList$ParsedArgument#node
    static jobject get_field_node(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "node", "comp_975", "node", "f_243965_"), "Lcom/mojang/brigadier/tree/ArgumentCommandNode;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.command.argument.SignedArgumentList$ParsedArgument#node
    static void set_field_node(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "node", "comp_975", "node", "f_243965_"), "Lcom/mojang/brigadier/tree/ArgumentCommandNode;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.command.argument.SignedArgumentList$ParsedArgument#value
    static jobject get_field_value(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "value", "comp_1089", "value", "f_244218_"), "Ljava/lang/String;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.command.argument.SignedArgumentList$ParsedArgument#value
    static void set_field_value(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "value", "comp_1089", "value", "f_244218_"), "Ljava/lang/String;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID_getNodeName() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "name", "method_45046", "getNodeName", "m_246038_"), "()Ljava/lang/String;");
    }

    static jobject getNodeName(const jobject& obj) {
                
       const auto methodID = methodID_getNodeName();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID__node() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "node", "comp_975", "node", "f_243965_"), "()Lcom/mojang/brigadier/tree/ArgumentCommandNode;");
    }

    static jobject _node(const jobject& obj) {
                
       const auto methodID = methodID__node();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID__value() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "value", "comp_1089", "value", "f_244218_"), "()Ljava/lang/String;");
    }

    static jobject _value(const jobject& obj) {
                
       const auto methodID = methodID__value();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_COMMAND_ARGUMENT_SIGNEDARGUMENTLIST$PARSEDARGUMENT_HPP