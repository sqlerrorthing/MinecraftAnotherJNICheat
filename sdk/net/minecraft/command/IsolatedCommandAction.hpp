// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_COMMAND_ISOLATEDCOMMANDACTION_HPP
#define NET_MINECRAFT_COMMAND_ISOLATEDCOMMANDACTION_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.command.IsolatedCommandAction
 * Remapped: id
 */
namespace IsolatedCommandAction {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("id", "net/minecraft/commands/execution/tasks/IsolatedCall", "net/minecraft/class_8940", "net/minecraft/command/IsolatedCommandAction", "net/minecraft/src/C_301916_"));
        }
        return cachedClass;
    };

    // getter for private field net.minecraft.command.IsolatedCommandAction#controlConsumer
    static jobject get_field_controlConsumer(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "taskProducer", "field_47170", "controlConsumer", "f_302491_"), "Ljava/util/function/Consumer;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.command.IsolatedCommandAction#controlConsumer
    static void set_field_controlConsumer(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "taskProducer", "field_47170", "controlConsumer", "f_302491_"), "Ljava/util/function/Consumer;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.command.IsolatedCommandAction#returnValueConsumer
    static jobject get_field_returnValueConsumer(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "output", "field_47171", "returnValueConsumer", "f_303355_"), "Leq;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.command.IsolatedCommandAction#returnValueConsumer
    static void set_field_returnValueConsumer(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "output", "field_47171", "returnValueConsumer", "f_303355_"), "Leq;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID_execute() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("execute", "execute", "execute", "execute", "m_305380_"), "(Lhs;Lhu;)V");
    }

    static void execute(const jobject& obj, const jobject& arg0, const jobject& arg1) {
                
       const auto methodID = methodID_execute();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1);
    };
    
};

#endif // NET_MINECRAFT_COMMAND_ISOLATEDCOMMANDACTION_HPP