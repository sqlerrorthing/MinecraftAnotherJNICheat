// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_SERVER_COMMAND_RECIPECOMMAND_HPP
#define NET_MINECRAFT_SERVER_COMMAND_RECIPECOMMAND_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.server.command.RecipeCommand
 * Remapped: anv
 */
namespace RecipeCommand {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("anv", "net/minecraft/server/commands/RecipeCommand", "net/minecraft/class_3095", "net/minecraft/server/command/RecipeCommand", "net/minecraft/src/C_5356_"));
        }
        return cachedClass;
    };

    // getter for static private field net.minecraft.server.command.RecipeCommand#GIVE_FAILED_EXCEPTION
    [[maybe_unused]] static jobject get_field_GIVE_FAILED_EXCEPTION() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "ERROR_GIVE_FAILED", "field_13681", "GIVE_FAILED_EXCEPTION", "f_138197_"), "Lcom/mojang/brigadier/exceptions/SimpleCommandExceptionType;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.server.command.RecipeCommand#GIVE_FAILED_EXCEPTION
    [[maybe_unused]] static void set_field_GIVE_FAILED_EXCEPTION(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "ERROR_GIVE_FAILED", "field_13681", "GIVE_FAILED_EXCEPTION", "f_138197_"), "Lcom/mojang/brigadier/exceptions/SimpleCommandExceptionType;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.server.command.RecipeCommand#TAKE_FAILED_EXCEPTION
    [[maybe_unused]] static jobject get_field_TAKE_FAILED_EXCEPTION() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "ERROR_TAKE_FAILED", "field_13682", "TAKE_FAILED_EXCEPTION", "f_138198_"), "Lcom/mojang/brigadier/exceptions/SimpleCommandExceptionType;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.server.command.RecipeCommand#TAKE_FAILED_EXCEPTION
    [[maybe_unused]] static void set_field_TAKE_FAILED_EXCEPTION(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "ERROR_TAKE_FAILED", "field_13682", "TAKE_FAILED_EXCEPTION", "f_138198_"), "Lcom/mojang/brigadier/exceptions/SimpleCommandExceptionType;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    static jmethodID methodID_register() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "register", "method_13517", "register", "m_138200_"), "(Lcom/mojang/brigadier/CommandDispatcher;)V");
    }

    static void register(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_register();
       MinecraftSDK::env->CallStaticVoidMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_executeGive() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "giveRecipes", "method_13520", "executeGive", "m_138206_"), "(Let;Ljava/util/Collection;Ljava/util/Collection;)I");
    }

    static jint executeGive(const jobject& arg0, const jobject& arg1, const jobject& arg2) {
       const auto clazz = self();
       const auto methodID = methodID_executeGive();
       return MinecraftSDK::env->CallStaticIntMethod(clazz, methodID, arg0, arg1, arg2);
    };
    
    static jmethodID methodID_executeTake() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("b", "takeRecipes", "method_13518", "executeTake", "m_138212_"), "(Let;Ljava/util/Collection;Ljava/util/Collection;)I");
    }

    static jint executeTake(const jobject& arg0, const jobject& arg1, const jobject& arg2) {
       const auto clazz = self();
       const auto methodID = methodID_executeTake();
       return MinecraftSDK::env->CallStaticIntMethod(clazz, methodID, arg0, arg1, arg2);
    };
    
};

#endif // NET_MINECRAFT_SERVER_COMMAND_RECIPECOMMAND_HPP