// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_SERVER_COMMAND_SETBLOCKCOMMAND$FILTER_HPP
#define NET_MINECRAFT_SERVER_COMMAND_SETBLOCKCOMMAND$FILTER_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.server.command.SetBlockCommand$Filter
 * Remapped: aoh$a
 */
namespace SetBlockCommand$Filter {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("aoh$a", "net/minecraft/server/commands/SetBlockCommand$Filter", "net/minecraft/class_3119$class_3120", "net/minecraft/server/command/SetBlockCommand$Filter", "net/minecraft/src/C_5369_$C_5370_"));
        }
        return cachedClass;
    };

    static jmethodID methodID_filter() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("filter", "filter", "filter", "filter", "m_138619_"), "(Lejj;Ljd;Lgk;Laqu;)Lgk;");
    }

    static jobject filter(const jobject& obj, const jobject& arg0, const jobject& arg1, const jobject& arg2, const jobject& arg3) {
                
       const auto methodID = methodID_filter();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1, arg2, arg3);
    };
    
};

#endif // NET_MINECRAFT_SERVER_COMMAND_SETBLOCKCOMMAND$FILTER_HPP