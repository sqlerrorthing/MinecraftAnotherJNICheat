// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_SERVER_COMMAND_SPREADPLAYERSCOMMAND_HPP
#define NET_MINECRAFT_SERVER_COMMAND_SPREADPLAYERSCOMMAND_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.server.command.SpreadPlayersCommand
 * Remapped: aon
 */
namespace SpreadPlayersCommand {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("aon", "net/minecraft/server/commands/SpreadPlayersCommand", "net/minecraft/class_3131", "net/minecraft/server/command/SpreadPlayersCommand", "net/minecraft/src/C_5376_"));
        }
        return cachedClass;
    };

    // getter for static private field net.minecraft.server.command.SpreadPlayersCommand#MAX_ATTEMPTS
    [[maybe_unused]] static jint get_field_MAX_ATTEMPTS() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "MAX_ITERATION_COUNT", "field_33397", "MAX_ATTEMPTS", "f_180523_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.server.command.SpreadPlayersCommand#MAX_ATTEMPTS
    [[maybe_unused]] static void set_field_MAX_ATTEMPTS(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "MAX_ITERATION_COUNT", "field_33397", "MAX_ATTEMPTS", "f_180523_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.server.command.SpreadPlayersCommand#FAILED_TEAMS_EXCEPTION
    [[maybe_unused]] static jobject get_field_FAILED_TEAMS_EXCEPTION() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "ERROR_FAILED_TO_SPREAD_TEAMS", "field_13734", "FAILED_TEAMS_EXCEPTION", "f_138693_"), "Lcom/mojang/brigadier/exceptions/Dynamic4CommandExceptionType;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.server.command.SpreadPlayersCommand#FAILED_TEAMS_EXCEPTION
    [[maybe_unused]] static void set_field_FAILED_TEAMS_EXCEPTION(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "ERROR_FAILED_TO_SPREAD_TEAMS", "field_13734", "FAILED_TEAMS_EXCEPTION", "f_138693_"), "Lcom/mojang/brigadier/exceptions/Dynamic4CommandExceptionType;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.server.command.SpreadPlayersCommand#FAILED_ENTITIES_EXCEPTION
    [[maybe_unused]] static jobject get_field_FAILED_ENTITIES_EXCEPTION() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "ERROR_FAILED_TO_SPREAD_ENTITIES", "field_13735", "FAILED_ENTITIES_EXCEPTION", "f_138694_"), "Lcom/mojang/brigadier/exceptions/Dynamic4CommandExceptionType;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.server.command.SpreadPlayersCommand#FAILED_ENTITIES_EXCEPTION
    [[maybe_unused]] static void set_field_FAILED_ENTITIES_EXCEPTION(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "ERROR_FAILED_TO_SPREAD_ENTITIES", "field_13735", "FAILED_ENTITIES_EXCEPTION", "f_138694_"), "Lcom/mojang/brigadier/exceptions/Dynamic4CommandExceptionType;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.server.command.SpreadPlayersCommand#INVALID_HEIGHT_EXCEPTION
    [[maybe_unused]] static jobject get_field_INVALID_HEIGHT_EXCEPTION() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("d", "ERROR_INVALID_MAX_HEIGHT", "field_36326", "INVALID_HEIGHT_EXCEPTION", "f_201848_"), "Lcom/mojang/brigadier/exceptions/Dynamic2CommandExceptionType;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.server.command.SpreadPlayersCommand#INVALID_HEIGHT_EXCEPTION
    [[maybe_unused]] static void set_field_INVALID_HEIGHT_EXCEPTION(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("d", "ERROR_INVALID_MAX_HEIGHT", "field_36326", "INVALID_HEIGHT_EXCEPTION", "f_201848_"), "Lcom/mojang/brigadier/exceptions/Dynamic2CommandExceptionType;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    static jmethodID methodID_register() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "register", "method_13654", "register", "m_138696_"), "(Lcom/mojang/brigadier/CommandDispatcher;)V");
    }

    static void register(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_register();
       MinecraftSDK::env->CallStaticVoidMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_execute() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "spreadPlayers", "method_13656", "execute", "m_138702_"), "(Let;Lexb;FFIZLjava/util/Collection;)I");
    }

    static jint execute(const jobject& arg0, const jobject& arg1, const jfloat& arg2, const jfloat& arg3, const jint& arg4, const jboolean& arg5, const jobject& arg6) {
       const auto clazz = self();
       const auto methodID = methodID_execute();
       return MinecraftSDK::env->CallStaticIntMethod(clazz, methodID, arg0, arg1, arg2, arg3, arg4, arg5, arg6);
    };
    
    static jmethodID methodID_getPileCountRespectingTeams() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "getNumberOfTeams", "method_13652", "getPileCountRespectingTeams", "m_138727_"), "(Ljava/util/Collection;)I");
    }

    static jint getPileCountRespectingTeams(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_getPileCountRespectingTeams();
       return MinecraftSDK::env->CallStaticIntMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_spread() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "spreadPositions", "method_13661", "spread", "m_214740_"), "(Lexb;DLaqu;Layw;DDDDI[Laon$a;Z)V");
    }

    static void spread(const jobject& arg0, const jdouble& arg1, const jobject& arg2, const jobject& arg3, const jdouble& arg4, const jdouble& arg5, const jdouble& arg6, const jdouble& arg7, const jint& arg8, const jarray& arg9, const jobject& arg10, const jboolean& arg11) {
       const auto clazz = self();
       const auto methodID = methodID_spread();
       MinecraftSDK::env->CallStaticVoidMethod(clazz, methodID, arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11);
    };
    
    static jmethodID methodID_getMinDistance() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "setPlayerPositions", "method_13657", "getMinDistance", "m_138729_"), "(Ljava/util/Collection;Laqu;[Laon$a;IZ)D");
    }

    static jdouble getMinDistance(const jobject& arg0, const jobject& arg1, const jarray& arg2, const jobject& arg3, const jint& arg4, const jboolean& arg5) {
       const auto clazz = self();
       const auto methodID = methodID_getMinDistance();
       return MinecraftSDK::env->CallStaticDoubleMethod(clazz, methodID, arg0, arg1, arg2, arg3, arg4, arg5);
    };
    
    static jmethodID methodID_makePiles() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "createInitialPositions", "method_13653", "makePiles", "m_214733_"), "(Layw;IDDDD)[Laon$a;");
    }

    static jobject makePiles(const jobject& arg0, const jint& arg1, const jdouble& arg2, const jdouble& arg3, const jdouble& arg4, const jdouble& arg5) {
       const auto clazz = self();
       const auto methodID = methodID_makePiles();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0, arg1, arg2, arg3, arg4, arg5);
    };
    
};

#endif // NET_MINECRAFT_SERVER_COMMAND_SPREADPLAYERSCOMMAND_HPP