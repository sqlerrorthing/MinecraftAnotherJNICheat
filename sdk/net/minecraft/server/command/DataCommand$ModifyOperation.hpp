// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_SERVER_COMMAND_DATACOMMAND$MODIFYOPERATION_HPP
#define NET_MINECRAFT_SERVER_COMMAND_DATACOMMAND$MODIFYOPERATION_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.server.command.DataCommand$ModifyOperation
 * Remapped: aph$a
 */
namespace DataCommand$ModifyOperation {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("aph$a", "net/minecraft/server/commands/data/DataCommands$DataManipulator", "net/minecraft/class_3164$class_3165", "net/minecraft/server/command/DataCommand$ModifyOperation", "net/minecraft/src/C_5398_$C_5399_"));
        }
        return cachedClass;
    };

    static jmethodID methodID_modify() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("modify", "modify", "modify", "modify", "m_139495_"), "(Lcom/mojang/brigadier/context/CommandContext;Lub;Lfl$g;Ljava/util/List;)I");
    }

    static jint modify(const jobject& obj, const jobject& arg0, const jobject& arg1, const jobject& arg2, const jobject& arg3) {
                
       const auto methodID = methodID_modify();
       return MinecraftSDK::env->CallIntMethod(obj, methodID, arg0, arg1, arg2, arg3);
    };
    
};

#endif // NET_MINECRAFT_SERVER_COMMAND_DATACOMMAND$MODIFYOPERATION_HPP