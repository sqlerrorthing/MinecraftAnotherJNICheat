// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_COMMAND_ARGUMENT_POSARGUMENT_HPP
#define NET_MINECRAFT_COMMAND_ARGUMENT_POSARGUMENT_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.command.argument.PosArgument
 * Remapped: gr
 */
namespace PosArgument {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("gr", "net/minecraft/commands/arguments/coordinates/Coordinates", "net/minecraft/class_2267", "net/minecraft/command/argument/PosArgument", "net/minecraft/src/C_4546_"));
        }
        return cachedClass;
    };

    static jmethodID methodID_toAbsolutePos() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getPosition", "method_9708", "toAbsolutePos", "m_6955_"), "(Let;)Lexc;");
    }

    static jobject toAbsolutePos(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_toAbsolutePos();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_toAbsoluteRotation() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "getRotation", "method_9709", "toAbsoluteRotation", "m_6970_"), "(Let;)Lexb;");
    }

    static jobject toAbsoluteRotation(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_toAbsoluteRotation();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_toAbsoluteBlockPos() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "getBlockPos", "method_9704", "toAbsoluteBlockPos", "m_119568_"), "(Let;)Ljd;");
    }

    static jobject toAbsoluteBlockPos(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_toAbsoluteBlockPos();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_isXRelative() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "isXRelative", "method_9705", "isXRelative", "m_6888_"), "()Z");
    }

    static jboolean isXRelative(const jobject& obj) {
                
       const auto methodID = methodID_isXRelative();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID);
    };
    
    static jmethodID methodID_isYRelative() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "isYRelative", "method_9706", "isYRelative", "m_6892_"), "()Z");
    }

    static jboolean isYRelative(const jobject& obj) {
                
       const auto methodID = methodID_isYRelative();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID);
    };
    
    static jmethodID methodID_isZRelative() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "isZRelative", "method_9707", "isZRelative", "m_6900_"), "()Z");
    }

    static jboolean isZRelative(const jobject& obj) {
                
       const auto methodID = methodID_isZRelative();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_COMMAND_ARGUMENT_POSARGUMENT_HPP