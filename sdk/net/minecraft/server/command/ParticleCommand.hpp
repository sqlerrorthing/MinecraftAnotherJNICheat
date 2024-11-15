// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_SERVER_COMMAND_PARTICLECOMMAND_HPP
#define NET_MINECRAFT_SERVER_COMMAND_PARTICLECOMMAND_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.server.command.ParticleCommand
 * Remapped: ano
 */
namespace ParticleCommand {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("ano", "net/minecraft/server/commands/ParticleCommand", "net/minecraft/class_3089", "net/minecraft/server/command/ParticleCommand", "net/minecraft/src/C_5353_"));
        }
        return cachedClass;
    };

    // getter for static private field net.minecraft.server.command.ParticleCommand#FAILED_EXCEPTION
    [[maybe_unused]] static jobject get_field_FAILED_EXCEPTION() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "ERROR_FAILED", "field_13673", "FAILED_EXCEPTION", "f_138120_"), "Lcom/mojang/brigadier/exceptions/SimpleCommandExceptionType;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.server.command.ParticleCommand#FAILED_EXCEPTION
    [[maybe_unused]] static void set_field_FAILED_EXCEPTION(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "ERROR_FAILED", "field_13673", "FAILED_EXCEPTION", "f_138120_"), "Lcom/mojang/brigadier/exceptions/SimpleCommandExceptionType;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    static jmethodID methodID_register() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "register", "method_13486", "register", "m_138122_"), "(Lcom/mojang/brigadier/CommandDispatcher;Lep;)V");
    }

    static void register(const jobject& arg0, const jobject& arg1) {
       const auto clazz = self();
       const auto methodID = methodID_register();
       MinecraftSDK::env->CallStaticVoidMethod(clazz, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_execute() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "sendParticles", "method_13491", "execute", "m_138128_"), "(Let;Llk;Lexc;Lexc;FIZLjava/util/Collection;)I");
    }

    static jint execute(const jobject& arg0, const jobject& arg1, const jobject& arg2, const jobject& arg3, const jfloat& arg4, const jint& arg5, const jboolean& arg6, const jobject& arg7) {
       const auto clazz = self();
       const auto methodID = methodID_execute();
       return MinecraftSDK::env->CallStaticIntMethod(clazz, methodID, arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7);
    };
    
};

#endif // NET_MINECRAFT_SERVER_COMMAND_PARTICLECOMMAND_HPP