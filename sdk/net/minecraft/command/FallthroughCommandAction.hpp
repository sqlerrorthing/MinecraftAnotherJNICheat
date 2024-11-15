// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_COMMAND_FALLTHROUGHCOMMANDACTION_HPP
#define NET_MINECRAFT_COMMAND_FALLTHROUGHCOMMANDACTION_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.command.FallthroughCommandAction
 * Remapped: ic
 */
namespace FallthroughCommandAction {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("ic", "net/minecraft/commands/execution/tasks/FallthroughTask", "net/minecraft/class_8939", "net/minecraft/command/FallthroughCommandAction", "net/minecraft/src/C_301898_"));
        }
        return cachedClass;
    };

    // getter for static private field net.minecraft.command.FallthroughCommandAction#INSTANCE
    [[maybe_unused]] static jobject get_field_INSTANCE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "INSTANCE", "field_47169", "INSTANCE", "f_303135_"), "Lic;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.command.FallthroughCommandAction#INSTANCE
    [[maybe_unused]] static void set_field_INSTANCE(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "INSTANCE", "field_47169", "INSTANCE", "f_303135_"), "Lic;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    static jmethodID methodID_getInstance() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "instance", "method_54899", "getInstance", "m_304796_"), "()Lhr;");
    }

    static jobject getInstance() {
       const auto clazz = self();
       const auto methodID = methodID_getInstance();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID);
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

#endif // NET_MINECRAFT_COMMAND_FALLTHROUGHCOMMANDACTION_HPP