// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_SERVER_COMMAND_DATACOMMAND$OBJECTTYPE_HPP
#define NET_MINECRAFT_SERVER_COMMAND_DATACOMMAND$OBJECTTYPE_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.server.command.DataCommand$ObjectType
 * Remapped: aph$c
 */
namespace DataCommand$ObjectType {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("aph$c", "net/minecraft/server/commands/data/DataCommands$DataProvider", "net/minecraft/class_3164$class_3167", "net/minecraft/server/command/DataCommand$ObjectType", "net/minecraft/src/C_5398_$C_5401_"));
        }
        return cachedClass;
    };

    static jmethodID methodID_getObject() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "access", "method_13924", "getObject", "m_7018_"), "(Lcom/mojang/brigadier/context/CommandContext;)Lapg;");
    }

    static jobject getObject(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_getObject();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_addArgumentsToBuilder() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "wrap", "method_13925", "addArgumentsToBuilder", "m_7621_"), "(Lcom/mojang/brigadier/builder/ArgumentBuilder;Ljava/util/function/Function;)Lcom/mojang/brigadier/builder/ArgumentBuilder;");
    }

    static jobject addArgumentsToBuilder(const jobject& obj, const jobject& arg0, const jobject& arg1) {
                
       const auto methodID = methodID_addArgumentsToBuilder();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1);
    };
    
};

#endif // NET_MINECRAFT_SERVER_COMMAND_DATACOMMAND$OBJECTTYPE_HPP