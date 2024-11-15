// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_SERVER_COMMAND_ADVANCEMENTCOMMAND_HPP
#define NET_MINECRAFT_SERVER_COMMAND_ADVANCEMENTCOMMAND_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.server.command.AdvancementCommand
 * Remapped: aly
 */
namespace AdvancementCommand {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("aly", "net/minecraft/server/commands/AdvancementCommands", "net/minecraft/class_3008", "net/minecraft/server/command/AdvancementCommand", "net/minecraft/src/C_5291_"));
        }
        return cachedClass;
    };

    // getter for static private field net.minecraft.server.command.AdvancementCommand#GENERIC_EXCEPTION
    [[maybe_unused]] static jobject get_field_GENERIC_EXCEPTION() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "ERROR_NO_ACTION_PERFORMED", "field_47182", "GENERIC_EXCEPTION", "f_302468_"), "Lcom/mojang/brigadier/exceptions/DynamicCommandExceptionType;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.server.command.AdvancementCommand#GENERIC_EXCEPTION
    [[maybe_unused]] static void set_field_GENERIC_EXCEPTION(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "ERROR_NO_ACTION_PERFORMED", "field_47182", "GENERIC_EXCEPTION", "f_302468_"), "Lcom/mojang/brigadier/exceptions/DynamicCommandExceptionType;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.server.command.AdvancementCommand#CRITERION_NOT_FOUND_EXCEPTION
    [[maybe_unused]] static jobject get_field_CRITERION_NOT_FOUND_EXCEPTION() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "ERROR_CRITERION_NOT_FOUND", "field_47183", "CRITERION_NOT_FOUND_EXCEPTION", "f_302376_"), "Lcom/mojang/brigadier/exceptions/Dynamic2CommandExceptionType;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.server.command.AdvancementCommand#CRITERION_NOT_FOUND_EXCEPTION
    [[maybe_unused]] static void set_field_CRITERION_NOT_FOUND_EXCEPTION(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "ERROR_CRITERION_NOT_FOUND", "field_47183", "CRITERION_NOT_FOUND_EXCEPTION", "f_302376_"), "Lcom/mojang/brigadier/exceptions/Dynamic2CommandExceptionType;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.server.command.AdvancementCommand#SUGGESTION_PROVIDER
    [[maybe_unused]] static jobject get_field_SUGGESTION_PROVIDER() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "SUGGEST_ADVANCEMENTS", "field_13453", "SUGGESTION_PROVIDER", "f_136308_"), "Lcom/mojang/brigadier/suggestion/SuggestionProvider;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.server.command.AdvancementCommand#SUGGESTION_PROVIDER
    [[maybe_unused]] static void set_field_SUGGESTION_PROVIDER(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "SUGGEST_ADVANCEMENTS", "field_13453", "SUGGESTION_PROVIDER", "f_136308_"), "Lcom/mojang/brigadier/suggestion/SuggestionProvider;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    static jmethodID methodID_register() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "register", "method_12980", "register", "m_136310_"), "(Lcom/mojang/brigadier/CommandDispatcher;)V");
    }

    static void register(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_register();
       MinecraftSDK::env->CallStaticVoidMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_executeAdvancement() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "perform", "method_12988", "executeAdvancement", "m_136319_"), "(Let;Ljava/util/Collection;Laly$a;Ljava/util/Collection;)I");
    }

    static jint executeAdvancement(const jobject& arg0, const jobject& arg1, const jobject& arg2, const jobject& arg3) {
       const auto clazz = self();
       const auto methodID = methodID_executeAdvancement();
       return MinecraftSDK::env->CallStaticIntMethod(clazz, methodID, arg0, arg1, arg2, arg3);
    };
    
    static jmethodID methodID_executeCriterion() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "performCriterion", "method_12981", "executeCriterion", "m_136324_"), "(Let;Ljava/util/Collection;Laly$a;Lag;Ljava/lang/String;)I");
    }

    static jint executeCriterion(const jobject& arg0, const jobject& arg1, const jobject& arg2, const jobject& arg3, const jobject& arg4) {
       const auto clazz = self();
       const auto methodID = methodID_executeCriterion();
       return MinecraftSDK::env->CallStaticIntMethod(clazz, methodID, arg0, arg1, arg2, arg3, arg4);
    };
    
    static jmethodID methodID_select() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "getAdvancements", "method_12996", "select", "m_136333_"), "(Lcom/mojang/brigadier/context/CommandContext;Lag;Laly$b;)Ljava/util/List;");
    }

    static jobject select(const jobject& arg0, const jobject& arg1, const jobject& arg2) {
       const auto clazz = self();
       const auto methodID = methodID_select();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0, arg1, arg2);
    };
    
    static jmethodID methodID_addChildrenRecursivelyToList() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "addChildren", "method_12990", "addChildrenRecursivelyToList", "m_136330_"), "(Lah;Ljava/util/List;)V");
    }

    static void addChildrenRecursivelyToList(const jobject& arg0, const jobject& arg1) {
       const auto clazz = self();
       const auto methodID = methodID_addChildrenRecursivelyToList();
       MinecraftSDK::env->CallStaticVoidMethod(clazz, methodID, arg0, arg1);
    };
    
};

#endif // NET_MINECRAFT_SERVER_COMMAND_ADVANCEMENTCOMMAND_HPP