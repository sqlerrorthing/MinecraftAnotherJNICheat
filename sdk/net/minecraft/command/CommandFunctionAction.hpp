// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_COMMAND_COMMANDFUNCTIONACTION_HPP
#define NET_MINECRAFT_COMMAND_COMMANDFUNCTIONACTION_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.command.CommandFunctionAction
 * Remapped: hz
 */
namespace CommandFunctionAction {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("hz", "net/minecraft/commands/execution/tasks/CallFunction", "net/minecraft/class_8862", "net/minecraft/command/CommandFunctionAction", "net/minecraft/src/C_302062_"));
        }
        return cachedClass;
    };

    // getter for private field net.minecraft.command.CommandFunctionAction#function
    static jobject get_field_function(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "function", "field_46747", "function", "f_302292_"), "Lii;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.command.CommandFunctionAction#function
    static void set_field_function(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "function", "field_46747", "function", "f_302292_"), "Lii;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.command.CommandFunctionAction#returnValueConsumer
    static jobject get_field_returnValueConsumer(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "resultCallback", "field_47166", "returnValueConsumer", "f_302190_"), "Leq;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.command.CommandFunctionAction#returnValueConsumer
    static void set_field_returnValueConsumer(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "resultCallback", "field_47166", "returnValueConsumer", "f_302190_"), "Leq;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.command.CommandFunctionAction#propagateReturn
    static jboolean get_field_propagateReturn(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "returnParentFrame", "field_47167", "propagateReturn", "f_303519_"), "Z");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetBooleanField(obj, fieldID);
    };

    // setter for static private field net.minecraft.command.CommandFunctionAction#propagateReturn
    static void set_field_propagateReturn(const jobject &obj, const jboolean &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "returnParentFrame", "field_47167", "propagateReturn", "f_303519_"), "Z");
        return MinecraftSDK::env->SetBooleanField(obj, fieldID, value);
    };

    static jmethodID methodID_execute() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "execute", "method_54851", "execute", "m_304778_"), "(Lev;Lhs;Lhu;)V");
    }

    static void execute(const jobject& obj, const jobject& arg0, const jobject& arg1, const jobject& arg2) {
                
       const auto methodID = methodID_execute();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1, arg2);
    };
    
};

#endif // NET_MINECRAFT_COMMAND_COMMANDFUNCTIONACTION_HPP