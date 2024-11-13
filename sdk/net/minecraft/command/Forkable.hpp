// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_COMMAND_FORKABLE_HPP
#define NET_MINECRAFT_COMMAND_FORKABLE_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.command.Forkable
 * Remapped: hq
 */
namespace Forkable {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("hq", "net/minecraft/commands/execution/CustomModifierExecutor", "net/minecraft/class_8851", "net/minecraft/command/Forkable", "net/minecraft/src/C_302159_"));
        }
        return cachedClass;
    };

    static jmethodID methodID_execute() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "apply", "method_54270", "execute", "m_306103_"), "(Ljava/lang/Object;Ljava/util/List;Lcom/mojang/brigadier/context/ContextChain;Lhn;Lht;)V");
    }

    static void execute(const jobject& obj, const jobject& arg0, const jobject& arg1, const jobject& arg2, const jobject& arg3, const jobject& arg4) {
                
       const auto methodID = methodID_execute();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1, arg2, arg3, arg4);
    };
    
};

#endif // NET_MINECRAFT_COMMAND_FORKABLE_HPP