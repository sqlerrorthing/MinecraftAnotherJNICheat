// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_COMMAND_STORAGEDATAOBJECT$1_HPP
#define NET_MINECRAFT_COMMAND_STORAGEDATAOBJECT$1_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.command.StorageDataObject$1
 * Remapped: apj$1
 */
namespace StorageDataObject$1 {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("apj$1", "net/minecraft/server/commands/data/StorageDataAccessor$1", "net/minecraft/class_4580$1", "net/minecraft/command/StorageDataObject$1", "net/minecraft/src/C_5404_$C_5405_"));
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

#endif // NET_MINECRAFT_COMMAND_STORAGEDATAOBJECT$1_HPP