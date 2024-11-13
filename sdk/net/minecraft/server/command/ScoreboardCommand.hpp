// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_SERVER_COMMAND_SCOREBOARDCOMMAND_HPP
#define NET_MINECRAFT_SERVER_COMMAND_SCOREBOARDCOMMAND_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.server.command.ScoreboardCommand
 * Remapped: aoe
 */
namespace ScoreboardCommand {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("aoe", "net/minecraft/server/commands/ScoreboardCommand", "net/minecraft/class_3115", "net/minecraft/server/command/ScoreboardCommand", "net/minecraft/src/C_5367_"));
        }
        return cachedClass;
    };

    // getter for static private field net.minecraft.server.command.ScoreboardCommand#OBJECTIVES_ADD_DUPLICATE_EXCEPTION
    [[maybe_unused]] static jobject get_field_OBJECTIVES_ADD_DUPLICATE_EXCEPTION() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "ERROR_OBJECTIVE_ALREADY_EXISTS", "field_13712", "OBJECTIVES_ADD_DUPLICATE_EXCEPTION", "f_138460_"), "Lcom/mojang/brigadier/exceptions/SimpleCommandExceptionType;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.server.command.ScoreboardCommand#OBJECTIVES_ADD_DUPLICATE_EXCEPTION
    [[maybe_unused]] static void set_field_OBJECTIVES_ADD_DUPLICATE_EXCEPTION(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "ERROR_OBJECTIVE_ALREADY_EXISTS", "field_13712", "OBJECTIVES_ADD_DUPLICATE_EXCEPTION", "f_138460_"), "Lcom/mojang/brigadier/exceptions/SimpleCommandExceptionType;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.server.command.ScoreboardCommand#OBJECTIVES_DISPLAY_ALREADY_EMPTY_EXCEPTION
    [[maybe_unused]] static jobject get_field_OBJECTIVES_DISPLAY_ALREADY_EMPTY_EXCEPTION() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "ERROR_DISPLAY_SLOT_ALREADY_EMPTY", "field_13715", "OBJECTIVES_DISPLAY_ALREADY_EMPTY_EXCEPTION", "f_138461_"), "Lcom/mojang/brigadier/exceptions/SimpleCommandExceptionType;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.server.command.ScoreboardCommand#OBJECTIVES_DISPLAY_ALREADY_EMPTY_EXCEPTION
    [[maybe_unused]] static void set_field_OBJECTIVES_DISPLAY_ALREADY_EMPTY_EXCEPTION(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "ERROR_DISPLAY_SLOT_ALREADY_EMPTY", "field_13715", "OBJECTIVES_DISPLAY_ALREADY_EMPTY_EXCEPTION", "f_138461_"), "Lcom/mojang/brigadier/exceptions/SimpleCommandExceptionType;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.server.command.ScoreboardCommand#OBJECTIVES_DISPLAY_ALREADY_SET_EXCEPTION
    [[maybe_unused]] static jobject get_field_OBJECTIVES_DISPLAY_ALREADY_SET_EXCEPTION() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "ERROR_DISPLAY_SLOT_ALREADY_SET", "field_13713", "OBJECTIVES_DISPLAY_ALREADY_SET_EXCEPTION", "f_138462_"), "Lcom/mojang/brigadier/exceptions/SimpleCommandExceptionType;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.server.command.ScoreboardCommand#OBJECTIVES_DISPLAY_ALREADY_SET_EXCEPTION
    [[maybe_unused]] static void set_field_OBJECTIVES_DISPLAY_ALREADY_SET_EXCEPTION(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "ERROR_DISPLAY_SLOT_ALREADY_SET", "field_13713", "OBJECTIVES_DISPLAY_ALREADY_SET_EXCEPTION", "f_138462_"), "Lcom/mojang/brigadier/exceptions/SimpleCommandExceptionType;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.server.command.ScoreboardCommand#PLAYERS_ENABLE_FAILED_EXCEPTION
    [[maybe_unused]] static jobject get_field_PLAYERS_ENABLE_FAILED_EXCEPTION() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("d", "ERROR_TRIGGER_ALREADY_ENABLED", "field_13714", "PLAYERS_ENABLE_FAILED_EXCEPTION", "f_138463_"), "Lcom/mojang/brigadier/exceptions/SimpleCommandExceptionType;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.server.command.ScoreboardCommand#PLAYERS_ENABLE_FAILED_EXCEPTION
    [[maybe_unused]] static void set_field_PLAYERS_ENABLE_FAILED_EXCEPTION(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("d", "ERROR_TRIGGER_ALREADY_ENABLED", "field_13714", "PLAYERS_ENABLE_FAILED_EXCEPTION", "f_138463_"), "Lcom/mojang/brigadier/exceptions/SimpleCommandExceptionType;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.server.command.ScoreboardCommand#PLAYERS_ENABLE_INVALID_EXCEPTION
    [[maybe_unused]] static jobject get_field_PLAYERS_ENABLE_INVALID_EXCEPTION() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("e", "ERROR_NOT_TRIGGER", "field_13710", "PLAYERS_ENABLE_INVALID_EXCEPTION", "f_138464_"), "Lcom/mojang/brigadier/exceptions/SimpleCommandExceptionType;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.server.command.ScoreboardCommand#PLAYERS_ENABLE_INVALID_EXCEPTION
    [[maybe_unused]] static void set_field_PLAYERS_ENABLE_INVALID_EXCEPTION(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("e", "ERROR_NOT_TRIGGER", "field_13710", "PLAYERS_ENABLE_INVALID_EXCEPTION", "f_138464_"), "Lcom/mojang/brigadier/exceptions/SimpleCommandExceptionType;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.server.command.ScoreboardCommand#PLAYERS_GET_NULL_EXCEPTION
    [[maybe_unused]] static jobject get_field_PLAYERS_GET_NULL_EXCEPTION() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("f", "ERROR_NO_VALUE", "field_13711", "PLAYERS_GET_NULL_EXCEPTION", "f_138465_"), "Lcom/mojang/brigadier/exceptions/Dynamic2CommandExceptionType;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.server.command.ScoreboardCommand#PLAYERS_GET_NULL_EXCEPTION
    [[maybe_unused]] static void set_field_PLAYERS_GET_NULL_EXCEPTION(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("f", "ERROR_NO_VALUE", "field_13711", "PLAYERS_GET_NULL_EXCEPTION", "f_138465_"), "Lcom/mojang/brigadier/exceptions/Dynamic2CommandExceptionType;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    static jmethodID methodID_register() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "register", "method_13595", "register", "m_138468_"), "(Lcom/mojang/brigadier/CommandDispatcher;Lep;)V");
    }

    static void register(const jobject& arg0, const jobject& arg1) {
       const auto clazz = self();
       const auto methodID = methodID_register();
       MinecraftSDK::env->CallStaticVoidMethod(clazz, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_makeNumberFormatArguments() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "addNumberFormats", "method_55345", "makeNumberFormatArguments", "m_305922_"), "(Lep;Lcom/mojang/brigadier/builder/ArgumentBuilder;Laoe$a;)Lcom/mojang/brigadier/builder/ArgumentBuilder;");
    }

    static jobject makeNumberFormatArguments(const jobject& arg0, const jobject& arg1, const jobject& arg2) {
       const auto clazz = self();
       const auto methodID = methodID_makeNumberFormatArguments();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0, arg1, arg2);
    };
    
    static jmethodID methodID_makeRenderTypeArguments() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "createRenderTypeModify", "method_13606", "makeRenderTypeArguments", "m_138467_"), "()Lcom/mojang/brigadier/builder/LiteralArgumentBuilder;");
    }

    static jobject makeRenderTypeArguments() {
       const auto clazz = self();
       const auto methodID = methodID_makeRenderTypeArguments();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID);
    };
    
    static jmethodID methodID_suggestDisabled() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "suggestTriggers", "method_13613", "suggestDisabled", "m_138510_"), "(Let;Ljava/util/Collection;Lcom/mojang/brigadier/suggestion/SuggestionsBuilder;)Ljava/util/concurrent/CompletableFuture;");
    }

    static jobject suggestDisabled(const jobject& arg0, const jobject& arg1, const jobject& arg2) {
       const auto clazz = self();
       const auto methodID = methodID_suggestDisabled();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0, arg1, arg2);
    };
    
    static jmethodID methodID_executeGet() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "getScore", "method_13607", "executeGet", "m_138498_"), "(Let;Leyf;Lexy;)I");
    }

    static jint executeGet(const jobject& arg0, const jobject& arg1, const jobject& arg2) {
       const auto clazz = self();
       const auto methodID = methodID_executeGet();
       return MinecraftSDK::env->CallStaticIntMethod(clazz, methodID, arg0, arg1, arg2);
    };
    
    static jmethodID methodID_getNextDisplayName() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "getFirstTargetName", "method_55352", "getNextDisplayName", "m_307514_"), "(Ljava/util/Collection;)Lwz;");
    }

    static jobject getNextDisplayName(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_getNextDisplayName();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_executeOperation() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "performOperation", "method_13584", "executeOperation", "m_138523_"), "(Let;Ljava/util/Collection;Lexy;Lfp$a;Ljava/util/Collection;Lexy;)I");
    }

    static jint executeOperation(const jobject& arg0, const jobject& arg1, const jobject& arg2, const jobject& arg3, const jobject& arg4, const jobject& arg5) {
       const auto clazz = self();
       const auto methodID = methodID_executeOperation();
       return MinecraftSDK::env->CallStaticIntMethod(clazz, methodID, arg0, arg1, arg2, arg3, arg4, arg5);
    };
    
    static jmethodID methodID_executeEnable() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "enableTrigger", "method_13609", "executeEnable", "m_138514_"), "(Let;Ljava/util/Collection;Lexy;)I");
    }

    static jint executeEnable(const jobject& arg0, const jobject& arg1, const jobject& arg2) {
       const auto clazz = self();
       const auto methodID = methodID_executeEnable();
       return MinecraftSDK::env->CallStaticIntMethod(clazz, methodID, arg0, arg1, arg2);
    };
    
    static jmethodID methodID_executeReset() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "resetScores", "method_13575", "executeReset", "m_138507_"), "(Let;Ljava/util/Collection;)I");
    }

    static jint executeReset(const jobject& arg0, const jobject& arg1) {
       const auto clazz = self();
       const auto methodID = methodID_executeReset();
       return MinecraftSDK::env->CallStaticIntMethod(clazz, methodID, arg0, arg1);
    };
    
    static jmethodID methodID__executeReset() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("b", "resetScore", "method_13586", "executeReset", "m_138540_"), "(Let;Ljava/util/Collection;Lexy;)I");
    }

    static jint _executeReset(const jobject& arg0, const jobject& arg1, const jobject& arg2) {
       const auto clazz = self();
       const auto methodID = methodID__executeReset();
       return MinecraftSDK::env->CallStaticIntMethod(clazz, methodID, arg0, arg1, arg2);
    };
    
    static jmethodID methodID_executeSet() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "setScore", "method_13604", "executeSet", "m_138518_"), "(Let;Ljava/util/Collection;Lexy;I)I");
    }

    static jint executeSet(const jobject& arg0, const jobject& arg1, const jobject& arg2, const jint& arg3) {
       const auto clazz = self();
       const auto methodID = methodID_executeSet();
       return MinecraftSDK::env->CallStaticIntMethod(clazz, methodID, arg0, arg1, arg2, arg3);
    };
    
    static jmethodID methodID_executeSetDisplayName() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "setScoreDisplay", "method_55349", "executeSetDisplayName", "m_306848_"), "(Let;Ljava/util/Collection;Lexy;Lwz;)I");
    }

    static jint executeSetDisplayName(const jobject& arg0, const jobject& arg1, const jobject& arg2, const jobject& arg3) {
       const auto clazz = self();
       const auto methodID = methodID_executeSetDisplayName();
       return MinecraftSDK::env->CallStaticIntMethod(clazz, methodID, arg0, arg1, arg2, arg3);
    };
    
    static jmethodID methodID_executeSetNumberFormat() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "setScoreNumberFormat", "method_55350", "executeSetNumberFormat", "m_305811_"), "(Let;Ljava/util/Collection;Lexy;Lyp;)I");
    }

    static jint executeSetNumberFormat(const jobject& arg0, const jobject& arg1, const jobject& arg2, const jobject& arg3) {
       const auto clazz = self();
       const auto methodID = methodID_executeSetNumberFormat();
       return MinecraftSDK::env->CallStaticIntMethod(clazz, methodID, arg0, arg1, arg2, arg3);
    };
    
    static jmethodID methodID_executeAdd() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("b", "addScore", "method_13578", "executeAdd", "m_138544_"), "(Let;Ljava/util/Collection;Lexy;I)I");
    }

    static jint executeAdd(const jobject& arg0, const jobject& arg1, const jobject& arg2, const jint& arg3) {
       const auto clazz = self();
       const auto methodID = methodID_executeAdd();
       return MinecraftSDK::env->CallStaticIntMethod(clazz, methodID, arg0, arg1, arg2, arg3);
    };
    
    static jmethodID methodID_executeRemove() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("c", "removeScore", "method_13600", "executeRemove", "m_138553_"), "(Let;Ljava/util/Collection;Lexy;I)I");
    }

    static jint executeRemove(const jobject& arg0, const jobject& arg1, const jobject& arg2, const jint& arg3) {
       const auto clazz = self();
       const auto methodID = methodID_executeRemove();
       return MinecraftSDK::env->CallStaticIntMethod(clazz, methodID, arg0, arg1, arg2, arg3);
    };
    
    static jmethodID methodID_executeListPlayers() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "listTrackedPlayers", "method_13589", "executeListPlayers", "m_138475_"), "(Let;)I");
    }

    static jint executeListPlayers(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_executeListPlayers();
       return MinecraftSDK::env->CallStaticIntMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_executeListScores() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "listTrackedPlayerScores", "method_13614", "executeListScores", "m_138495_"), "(Let;Leyf;)I");
    }

    static jint executeListScores(const jobject& arg0, const jobject& arg1) {
       const auto clazz = self();
       const auto methodID = methodID_executeListScores();
       return MinecraftSDK::env->CallStaticIntMethod(clazz, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_executeClearDisplay() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "clearDisplaySlot", "method_13592", "executeClearDisplay", "m_138477_"), "(Let;Lexx;)I");
    }

    static jint executeClearDisplay(const jobject& arg0, const jobject& arg1) {
       const auto clazz = self();
       const auto methodID = methodID_executeClearDisplay();
       return MinecraftSDK::env->CallStaticIntMethod(clazz, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_executeSetDisplay() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "setDisplaySlot", "method_13596", "executeSetDisplay", "m_138480_"), "(Let;Lexx;Lexy;)I");
    }

    static jint executeSetDisplay(const jobject& arg0, const jobject& arg1, const jobject& arg2) {
       const auto clazz = self();
       const auto methodID = methodID_executeSetDisplay();
       return MinecraftSDK::env->CallStaticIntMethod(clazz, methodID, arg0, arg1, arg2);
    };
    
    static jmethodID methodID_executeModifyObjective() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "setDisplayName", "method_13576", "executeModifyObjective", "m_138491_"), "(Let;Lexy;Lwz;)I");
    }

    static jint executeModifyObjective(const jobject& arg0, const jobject& arg1, const jobject& arg2) {
       const auto clazz = self();
       const auto methodID = methodID_executeModifyObjective();
       return MinecraftSDK::env->CallStaticIntMethod(clazz, methodID, arg0, arg1, arg2);
    };
    
    static jmethodID methodID_executeModifyDisplayAutoUpdate() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "setDisplayAutoUpdate", "method_55348", "executeModifyDisplayAutoUpdate", "m_306862_"), "(Let;Lexy;Z)I");
    }

    static jint executeModifyDisplayAutoUpdate(const jobject& arg0, const jobject& arg1, const jboolean& arg2) {
       const auto clazz = self();
       const auto methodID = methodID_executeModifyDisplayAutoUpdate();
       return MinecraftSDK::env->CallStaticIntMethod(clazz, methodID, arg0, arg1, arg2);
    };
    
    static jmethodID methodID_executeModifyObjectiveFormat() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "setObjectiveFormat", "method_55347", "executeModifyObjectiveFormat", "m_306532_"), "(Let;Lexy;Lyp;)I");
    }

    static jint executeModifyObjectiveFormat(const jobject& arg0, const jobject& arg1, const jobject& arg2) {
       const auto clazz = self();
       const auto methodID = methodID_executeModifyObjectiveFormat();
       return MinecraftSDK::env->CallStaticIntMethod(clazz, methodID, arg0, arg1, arg2);
    };
    
    static jmethodID methodID_executeModifyRenderType() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "setRenderType", "method_13581", "executeModifyRenderType", "m_138487_"), "(Let;Lexy;Leyj$a;)I");
    }

    static jint executeModifyRenderType(const jobject& arg0, const jobject& arg1, const jobject& arg2) {
       const auto clazz = self();
       const auto methodID = methodID_executeModifyRenderType();
       return MinecraftSDK::env->CallStaticIntMethod(clazz, methodID, arg0, arg1, arg2);
    };
    
    static jmethodID methodID_executeRemoveObjective() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "removeObjective", "method_13602", "executeRemoveObjective", "m_138484_"), "(Let;Lexy;)I");
    }

    static jint executeRemoveObjective(const jobject& arg0, const jobject& arg1) {
       const auto clazz = self();
       const auto methodID = methodID_executeRemoveObjective();
       return MinecraftSDK::env->CallStaticIntMethod(clazz, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_executeAddObjective() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "addObjective", "method_13611", "executeAddObjective", "m_138502_"), "(Let;Ljava/lang/String;Leyj;Lwz;)I");
    }

    static jint executeAddObjective(const jobject& arg0, const jobject& arg1, const jobject& arg2, const jobject& arg3) {
       const auto clazz = self();
       const auto methodID = methodID_executeAddObjective();
       return MinecraftSDK::env->CallStaticIntMethod(clazz, methodID, arg0, arg1, arg2, arg3);
    };
    
    static jmethodID methodID_executeListObjectives() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("b", "listObjectives", "method_13597", "executeListObjectives", "m_138538_"), "(Let;)I");
    }

    static jint executeListObjectives(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_executeListObjectives();
       return MinecraftSDK::env->CallStaticIntMethod(clazz, methodID, arg0);
    };
    
};

#endif // NET_MINECRAFT_SERVER_COMMAND_SCOREBOARDCOMMAND_HPP