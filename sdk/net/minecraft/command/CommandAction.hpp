// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_COMMAND_COMMANDACTION_HPP
#define NET_MINECRAFT_COMMAND_COMMANDACTION_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.command.CommandAction
 * Remapped: hr
 */
namespace CommandAction {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("hr", "net/minecraft/commands/execution/EntryAction", "net/minecraft/class_8853", "net/minecraft/command/CommandAction", "net/minecraft/src/C_302177_"));
        }
        return cachedClass;
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

#endif // NET_MINECRAFT_COMMAND_COMMANDACTION_HPP