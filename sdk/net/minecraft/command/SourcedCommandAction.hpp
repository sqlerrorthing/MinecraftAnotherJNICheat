// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_COMMAND_SOURCEDCOMMANDACTION_HPP
#define NET_MINECRAFT_COMMAND_SOURCEDCOMMANDACTION_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.command.SourcedCommandAction
 * Remapped: hw
 */
namespace SourcedCommandAction {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("hw", "net/minecraft/commands/execution/UnboundEntryAction", "net/minecraft/class_8856", "net/minecraft/command/SourcedCommandAction", "net/minecraft/src/C_302004_"));
        }
        return cachedClass;
    };

    static jmethodID methodID_execute() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("execute", "execute", "execute", "execute", "m_304778_"), "(Ljava/lang/Object;Lhs;Lhu;)V");
    }

    static void execute(const jobject& obj, const jobject& arg0, const jobject& arg1, const jobject& arg2) {
                
       const auto methodID = methodID_execute();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1, arg2);
    };
    
    static jmethodID methodID_bind() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("bind", "bind", "bind", "bind", "m_307530_"), "(Ljava/lang/Object;)Lhr;");
    }

    static jobject bind(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_bind();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
};

#endif // NET_MINECRAFT_COMMAND_SOURCEDCOMMANDACTION_HPP