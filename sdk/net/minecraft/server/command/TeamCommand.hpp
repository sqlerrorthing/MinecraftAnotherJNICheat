// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_SERVER_COMMAND_TEAMCOMMAND_HPP
#define NET_MINECRAFT_SERVER_COMMAND_TEAMCOMMAND_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.server.command.TeamCommand
 * Remapped: aos
 */
namespace TeamCommand {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("aos", "net/minecraft/server/commands/TeamCommand", "net/minecraft/class_3142", "net/minecraft/server/command/TeamCommand", "net/minecraft/src/C_5382_"));
        }
        return cachedClass;
    };

    // getter for static private field net.minecraft.server.command.TeamCommand#ADD_DUPLICATE_EXCEPTION
    [[maybe_unused]] static jobject get_field_ADD_DUPLICATE_EXCEPTION() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "ERROR_TEAM_ALREADY_EXISTS", "field_13749", "ADD_DUPLICATE_EXCEPTION", "f_138862_"), "Lcom/mojang/brigadier/exceptions/SimpleCommandExceptionType;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.server.command.TeamCommand#ADD_DUPLICATE_EXCEPTION
    [[maybe_unused]] static void set_field_ADD_DUPLICATE_EXCEPTION(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "ERROR_TEAM_ALREADY_EXISTS", "field_13749", "ADD_DUPLICATE_EXCEPTION", "f_138862_"), "Lcom/mojang/brigadier/exceptions/SimpleCommandExceptionType;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.server.command.TeamCommand#EMPTY_UNCHANGED_EXCEPTION
    [[maybe_unused]] static jobject get_field_EMPTY_UNCHANGED_EXCEPTION() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "ERROR_TEAM_ALREADY_EMPTY", "field_13751", "EMPTY_UNCHANGED_EXCEPTION", "f_138864_"), "Lcom/mojang/brigadier/exceptions/SimpleCommandExceptionType;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.server.command.TeamCommand#EMPTY_UNCHANGED_EXCEPTION
    [[maybe_unused]] static void set_field_EMPTY_UNCHANGED_EXCEPTION(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "ERROR_TEAM_ALREADY_EMPTY", "field_13751", "EMPTY_UNCHANGED_EXCEPTION", "f_138864_"), "Lcom/mojang/brigadier/exceptions/SimpleCommandExceptionType;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.server.command.TeamCommand#OPTION_NAME_UNCHANGED_EXCEPTION
    [[maybe_unused]] static jobject get_field_OPTION_NAME_UNCHANGED_EXCEPTION() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "ERROR_TEAM_ALREADY_NAME", "field_13755", "OPTION_NAME_UNCHANGED_EXCEPTION", "f_138865_"), "Lcom/mojang/brigadier/exceptions/SimpleCommandExceptionType;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.server.command.TeamCommand#OPTION_NAME_UNCHANGED_EXCEPTION
    [[maybe_unused]] static void set_field_OPTION_NAME_UNCHANGED_EXCEPTION(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "ERROR_TEAM_ALREADY_NAME", "field_13755", "OPTION_NAME_UNCHANGED_EXCEPTION", "f_138865_"), "Lcom/mojang/brigadier/exceptions/SimpleCommandExceptionType;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.server.command.TeamCommand#OPTION_COLOR_UNCHANGED_EXCEPTION
    [[maybe_unused]] static jobject get_field_OPTION_COLOR_UNCHANGED_EXCEPTION() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("d", "ERROR_TEAM_ALREADY_COLOR", "field_13746", "OPTION_COLOR_UNCHANGED_EXCEPTION", "f_138866_"), "Lcom/mojang/brigadier/exceptions/SimpleCommandExceptionType;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.server.command.TeamCommand#OPTION_COLOR_UNCHANGED_EXCEPTION
    [[maybe_unused]] static void set_field_OPTION_COLOR_UNCHANGED_EXCEPTION(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("d", "ERROR_TEAM_ALREADY_COLOR", "field_13746", "OPTION_COLOR_UNCHANGED_EXCEPTION", "f_138866_"), "Lcom/mojang/brigadier/exceptions/SimpleCommandExceptionType;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.server.command.TeamCommand#OPTION_FRIENDLY_FIRE_ALREADY_ENABLED_EXCEPTION
    [[maybe_unused]] static jobject get_field_OPTION_FRIENDLY_FIRE_ALREADY_ENABLED_EXCEPTION() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("e", "ERROR_TEAM_ALREADY_FRIENDLYFIRE_ENABLED", "field_13753", "OPTION_FRIENDLY_FIRE_ALREADY_ENABLED_EXCEPTION", "f_138867_"), "Lcom/mojang/brigadier/exceptions/SimpleCommandExceptionType;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.server.command.TeamCommand#OPTION_FRIENDLY_FIRE_ALREADY_ENABLED_EXCEPTION
    [[maybe_unused]] static void set_field_OPTION_FRIENDLY_FIRE_ALREADY_ENABLED_EXCEPTION(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("e", "ERROR_TEAM_ALREADY_FRIENDLYFIRE_ENABLED", "field_13753", "OPTION_FRIENDLY_FIRE_ALREADY_ENABLED_EXCEPTION", "f_138867_"), "Lcom/mojang/brigadier/exceptions/SimpleCommandExceptionType;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.server.command.TeamCommand#OPTION_FRIENDLY_FIRE_ALREADY_DISABLED_EXCEPTION
    [[maybe_unused]] static jobject get_field_OPTION_FRIENDLY_FIRE_ALREADY_DISABLED_EXCEPTION() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("f", "ERROR_TEAM_ALREADY_FRIENDLYFIRE_DISABLED", "field_13754", "OPTION_FRIENDLY_FIRE_ALREADY_DISABLED_EXCEPTION", "f_138868_"), "Lcom/mojang/brigadier/exceptions/SimpleCommandExceptionType;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.server.command.TeamCommand#OPTION_FRIENDLY_FIRE_ALREADY_DISABLED_EXCEPTION
    [[maybe_unused]] static void set_field_OPTION_FRIENDLY_FIRE_ALREADY_DISABLED_EXCEPTION(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("f", "ERROR_TEAM_ALREADY_FRIENDLYFIRE_DISABLED", "field_13754", "OPTION_FRIENDLY_FIRE_ALREADY_DISABLED_EXCEPTION", "f_138868_"), "Lcom/mojang/brigadier/exceptions/SimpleCommandExceptionType;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.server.command.TeamCommand#OPTION_SEE_FRIENDLY_INVISIBLES_ALREADY_ENABLED_EXCEPTION
    [[maybe_unused]] static jobject get_field_OPTION_SEE_FRIENDLY_INVISIBLES_ALREADY_ENABLED_EXCEPTION() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("g", "ERROR_TEAM_ALREADY_FRIENDLYINVISIBLES_ENABLED", "field_13747", "OPTION_SEE_FRIENDLY_INVISIBLES_ALREADY_ENABLED_EXCEPTION", "f_138869_"), "Lcom/mojang/brigadier/exceptions/SimpleCommandExceptionType;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.server.command.TeamCommand#OPTION_SEE_FRIENDLY_INVISIBLES_ALREADY_ENABLED_EXCEPTION
    [[maybe_unused]] static void set_field_OPTION_SEE_FRIENDLY_INVISIBLES_ALREADY_ENABLED_EXCEPTION(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("g", "ERROR_TEAM_ALREADY_FRIENDLYINVISIBLES_ENABLED", "field_13747", "OPTION_SEE_FRIENDLY_INVISIBLES_ALREADY_ENABLED_EXCEPTION", "f_138869_"), "Lcom/mojang/brigadier/exceptions/SimpleCommandExceptionType;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.server.command.TeamCommand#OPTION_SEE_FRIENDLY_INVISIBLES_ALREADY_DISABLED_EXCEPTION
    [[maybe_unused]] static jobject get_field_OPTION_SEE_FRIENDLY_INVISIBLES_ALREADY_DISABLED_EXCEPTION() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("h", "ERROR_TEAM_ALREADY_FRIENDLYINVISIBLES_DISABLED", "field_13756", "OPTION_SEE_FRIENDLY_INVISIBLES_ALREADY_DISABLED_EXCEPTION", "f_138870_"), "Lcom/mojang/brigadier/exceptions/SimpleCommandExceptionType;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.server.command.TeamCommand#OPTION_SEE_FRIENDLY_INVISIBLES_ALREADY_DISABLED_EXCEPTION
    [[maybe_unused]] static void set_field_OPTION_SEE_FRIENDLY_INVISIBLES_ALREADY_DISABLED_EXCEPTION(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("h", "ERROR_TEAM_ALREADY_FRIENDLYINVISIBLES_DISABLED", "field_13756", "OPTION_SEE_FRIENDLY_INVISIBLES_ALREADY_DISABLED_EXCEPTION", "f_138870_"), "Lcom/mojang/brigadier/exceptions/SimpleCommandExceptionType;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.server.command.TeamCommand#OPTION_NAMETAG_VISIBILITY_UNCHANGED_EXCEPTION
    [[maybe_unused]] static jobject get_field_OPTION_NAMETAG_VISIBILITY_UNCHANGED_EXCEPTION() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("i", "ERROR_TEAM_NAMETAG_VISIBLITY_UNCHANGED", "field_13752", "OPTION_NAMETAG_VISIBILITY_UNCHANGED_EXCEPTION", "f_138871_"), "Lcom/mojang/brigadier/exceptions/SimpleCommandExceptionType;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.server.command.TeamCommand#OPTION_NAMETAG_VISIBILITY_UNCHANGED_EXCEPTION
    [[maybe_unused]] static void set_field_OPTION_NAMETAG_VISIBILITY_UNCHANGED_EXCEPTION(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("i", "ERROR_TEAM_NAMETAG_VISIBLITY_UNCHANGED", "field_13752", "OPTION_NAMETAG_VISIBILITY_UNCHANGED_EXCEPTION", "f_138871_"), "Lcom/mojang/brigadier/exceptions/SimpleCommandExceptionType;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.server.command.TeamCommand#OPTION_DEATH_MESSAGE_VISIBILITY_UNCHANGED_EXCEPTION
    [[maybe_unused]] static jobject get_field_OPTION_DEATH_MESSAGE_VISIBILITY_UNCHANGED_EXCEPTION() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("j", "ERROR_TEAM_DEATH_MESSAGE_VISIBLITY_UNCHANGED", "field_13757", "OPTION_DEATH_MESSAGE_VISIBILITY_UNCHANGED_EXCEPTION", "f_138872_"), "Lcom/mojang/brigadier/exceptions/SimpleCommandExceptionType;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.server.command.TeamCommand#OPTION_DEATH_MESSAGE_VISIBILITY_UNCHANGED_EXCEPTION
    [[maybe_unused]] static void set_field_OPTION_DEATH_MESSAGE_VISIBILITY_UNCHANGED_EXCEPTION(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("j", "ERROR_TEAM_DEATH_MESSAGE_VISIBLITY_UNCHANGED", "field_13757", "OPTION_DEATH_MESSAGE_VISIBILITY_UNCHANGED_EXCEPTION", "f_138872_"), "Lcom/mojang/brigadier/exceptions/SimpleCommandExceptionType;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.server.command.TeamCommand#OPTION_COLLISION_RULE_UNCHANGED_EXCEPTION
    [[maybe_unused]] static jobject get_field_OPTION_COLLISION_RULE_UNCHANGED_EXCEPTION() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("k", "ERROR_TEAM_COLLISION_UNCHANGED", "field_13750", "OPTION_COLLISION_RULE_UNCHANGED_EXCEPTION", "f_138873_"), "Lcom/mojang/brigadier/exceptions/SimpleCommandExceptionType;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.server.command.TeamCommand#OPTION_COLLISION_RULE_UNCHANGED_EXCEPTION
    [[maybe_unused]] static void set_field_OPTION_COLLISION_RULE_UNCHANGED_EXCEPTION(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("k", "ERROR_TEAM_COLLISION_UNCHANGED", "field_13750", "OPTION_COLLISION_RULE_UNCHANGED_EXCEPTION", "f_138873_"), "Lcom/mojang/brigadier/exceptions/SimpleCommandExceptionType;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    static jmethodID methodID_register() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "register", "method_13736", "register", "m_138877_"), "(Lcom/mojang/brigadier/CommandDispatcher;Lep;)V");
    }

    static void register(const jobject& arg0, const jobject& arg1) {
       const auto clazz = self();
       const auto methodID = methodID_register();
       MinecraftSDK::env->CallStaticVoidMethod(clazz, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_getMemberName() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "getFirstMemberName", "method_55372", "getMemberName", "m_306339_"), "(Ljava/util/Collection;)Lwz;");
    }

    static jobject getMemberName(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_getMemberName();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_executeLeave() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "leaveTeam", "method_13714", "executeLeave", "m_138917_"), "(Let;Ljava/util/Collection;)I");
    }

    static jint executeLeave(const jobject& arg0, const jobject& arg1) {
       const auto clazz = self();
       const auto methodID = methodID_executeLeave();
       return MinecraftSDK::env->CallStaticIntMethod(clazz, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_executeJoin() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "joinTeam", "method_13720", "executeJoin", "m_138894_"), "(Let;Leyb;Ljava/util/Collection;)I");
    }

    static jint executeJoin(const jobject& arg0, const jobject& arg1, const jobject& arg2) {
       const auto clazz = self();
       const auto methodID = methodID_executeJoin();
       return MinecraftSDK::env->CallStaticIntMethod(clazz, methodID, arg0, arg1, arg2);
    };
    
    static jmethodID methodID_executeModifyNametagVisibility() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "setNametagVisibility", "method_13732", "executeModifyNametagVisibility", "m_138890_"), "(Let;Leyb;Leyi$b;)I");
    }

    static jint executeModifyNametagVisibility(const jobject& arg0, const jobject& arg1, const jobject& arg2) {
       const auto clazz = self();
       const auto methodID = methodID_executeModifyNametagVisibility();
       return MinecraftSDK::env->CallStaticIntMethod(clazz, methodID, arg0, arg1, arg2);
    };
    
    static jmethodID methodID_executeModifyDeathMessageVisibility() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("b", "setDeathMessageVisibility", "method_13735", "executeModifyDeathMessageVisibility", "m_138929_"), "(Let;Leyb;Leyi$b;)I");
    }

    static jint executeModifyDeathMessageVisibility(const jobject& arg0, const jobject& arg1, const jobject& arg2) {
       const auto clazz = self();
       const auto methodID = methodID_executeModifyDeathMessageVisibility();
       return MinecraftSDK::env->CallStaticIntMethod(clazz, methodID, arg0, arg1, arg2);
    };
    
    static jmethodID methodID_executeModifyCollisionRule() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "setCollision", "method_13713", "executeModifyCollisionRule", "m_138886_"), "(Let;Leyb;Leyi$a;)I");
    }

    static jint executeModifyCollisionRule(const jobject& arg0, const jobject& arg1, const jobject& arg2) {
       const auto clazz = self();
       const auto methodID = methodID_executeModifyCollisionRule();
       return MinecraftSDK::env->CallStaticIntMethod(clazz, methodID, arg0, arg1, arg2);
    };
    
    static jmethodID methodID_executeModifySeeFriendlyInvisibles() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "setFriendlySight", "method_13751", "executeModifySeeFriendlyInvisibles", "m_138906_"), "(Let;Leyb;Z)I");
    }

    static jint executeModifySeeFriendlyInvisibles(const jobject& arg0, const jobject& arg1, const jboolean& arg2) {
       const auto clazz = self();
       const auto methodID = methodID_executeModifySeeFriendlyInvisibles();
       return MinecraftSDK::env->CallStaticIntMethod(clazz, methodID, arg0, arg1, arg2);
    };
    
    static jmethodID methodID_executeModifyFriendlyFire() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("b", "setFriendlyFire", "method_13754", "executeModifyFriendlyFire", "m_138937_"), "(Let;Leyb;Z)I");
    }

    static jint executeModifyFriendlyFire(const jobject& arg0, const jobject& arg1, const jboolean& arg2) {
       const auto clazz = self();
       const auto methodID = methodID_executeModifyFriendlyFire();
       return MinecraftSDK::env->CallStaticIntMethod(clazz, methodID, arg0, arg1, arg2);
    };
    
    static jmethodID methodID_executeModifyDisplayName() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "setDisplayName", "method_13711", "executeModifyDisplayName", "m_138902_"), "(Let;Leyb;Lwz;)I");
    }

    static jint executeModifyDisplayName(const jobject& arg0, const jobject& arg1, const jobject& arg2) {
       const auto clazz = self();
       const auto methodID = methodID_executeModifyDisplayName();
       return MinecraftSDK::env->CallStaticIntMethod(clazz, methodID, arg0, arg1, arg2);
    };
    
    static jmethodID methodID_executeModifyColor() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "setColor", "method_13745", "executeModifyColor", "m_138898_"), "(Let;Leyb;Ln;)I");
    }

    static jint executeModifyColor(const jobject& arg0, const jobject& arg1, const jobject& arg2) {
       const auto clazz = self();
       const auto methodID = methodID_executeModifyColor();
       return MinecraftSDK::env->CallStaticIntMethod(clazz, methodID, arg0, arg1, arg2);
    };
    
    static jmethodID methodID_executeEmpty() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "emptyTeam", "method_13723", "executeEmpty", "m_138883_"), "(Let;Leyb;)I");
    }

    static jint executeEmpty(const jobject& arg0, const jobject& arg1) {
       const auto clazz = self();
       const auto methodID = methodID_executeEmpty();
       return MinecraftSDK::env->CallStaticIntMethod(clazz, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_executeRemove() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("b", "deleteTeam", "method_13747", "executeRemove", "m_138926_"), "(Let;Leyb;)I");
    }

    static jint executeRemove(const jobject& arg0, const jobject& arg1) {
       const auto clazz = self();
       const auto methodID = methodID_executeRemove();
       return MinecraftSDK::env->CallStaticIntMethod(clazz, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_executeAdd() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "createTeam", "method_13757", "executeAdd", "m_138910_"), "(Let;Ljava/lang/String;)I");
    }

    static jint executeAdd(const jobject& arg0, const jobject& arg1) {
       const auto clazz = self();
       const auto methodID = methodID_executeAdd();
       return MinecraftSDK::env->CallStaticIntMethod(clazz, methodID, arg0, arg1);
    };
    
    static jmethodID methodID__executeAdd() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "createTeam", "method_13715", "executeAdd", "m_138913_"), "(Let;Ljava/lang/String;Lwz;)I");
    }

    static jint _executeAdd(const jobject& arg0, const jobject& arg1, const jobject& arg2) {
       const auto clazz = self();
       const auto methodID = methodID__executeAdd();
       return MinecraftSDK::env->CallStaticIntMethod(clazz, methodID, arg0, arg1, arg2);
    };
    
    static jmethodID methodID_executeListMembers() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("c", "listMembers", "method_13748", "executeListMembers", "m_138943_"), "(Let;Leyb;)I");
    }

    static jint executeListMembers(const jobject& arg0, const jobject& arg1) {
       const auto clazz = self();
       const auto methodID = methodID_executeListMembers();
       return MinecraftSDK::env->CallStaticIntMethod(clazz, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_executeListTeams() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "listTeams", "method_13728", "executeListTeams", "m_138881_"), "(Let;)I");
    }

    static jint executeListTeams(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_executeListTeams();
       return MinecraftSDK::env->CallStaticIntMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_executeModifyPrefix() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("b", "setPrefix", "method_13743", "executeModifyPrefix", "m_138933_"), "(Let;Leyb;Lwz;)I");
    }

    static jint executeModifyPrefix(const jobject& arg0, const jobject& arg1, const jobject& arg2) {
       const auto clazz = self();
       const auto methodID = methodID_executeModifyPrefix();
       return MinecraftSDK::env->CallStaticIntMethod(clazz, methodID, arg0, arg1, arg2);
    };
    
    static jmethodID methodID_executeModifySuffix() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("c", "setSuffix", "method_13756", "executeModifySuffix", "m_138946_"), "(Let;Leyb;Lwz;)I");
    }

    static jint executeModifySuffix(const jobject& arg0, const jobject& arg1, const jobject& arg2) {
       const auto clazz = self();
       const auto methodID = methodID_executeModifySuffix();
       return MinecraftSDK::env->CallStaticIntMethod(clazz, methodID, arg0, arg1, arg2);
    };
    
};

#endif // NET_MINECRAFT_SERVER_COMMAND_TEAMCOMMAND_HPP