// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_COMMAND_ARGUMENT_PACKRAT_TERM$1_HPP
#define NET_MINECRAFT_COMMAND_ARGUMENT_PACKRAT_TERM$1_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.command.argument.packrat.Term$1
 * Remapped: bmo$1
 */
namespace Term$1 {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("bmo$1", "net/minecraft/util/parsing/packrat/Term$1", "net/minecraft/class_9402$1", "net/minecraft/command/argument/packrat/Term$1", "net/minecraft/src/C_313597_$C_313657_"));
        }
        return cachedClass;
    };

    static jmethodID methodID_matches() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "parse", "method_58334", "matches", "m_319964_"), "(Lbmk;Lbmm;Lbmg;)Z");
    }

    static jboolean matches(const jobject& obj, const jobject& arg0, const jobject& arg1, const jobject& arg2) {
                
       const auto methodID = methodID_matches();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0, arg1, arg2);
    };
    
};

#endif // NET_MINECRAFT_COMMAND_ARGUMENT_PACKRAT_TERM$1_HPP