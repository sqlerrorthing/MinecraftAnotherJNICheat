// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_SERVER_SERVERCONFIGHANDLER_HPP
#define NET_MINECRAFT_SERVER_SERVERCONFIGHANDLER_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.server.ServerConfigHandler
 * Remapped: auq
 */
namespace ServerConfigHandler {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("auq", "net/minecraft/server/players/OldUsersConverter", "net/minecraft/class_3321", "net/minecraft/server/ServerConfigHandler", "net/minecraft/src/C_95_"));
        }
        return cachedClass;
    };

    // getter for static default field net.minecraft.server.ServerConfigHandler#LOGGER
    [[maybe_unused]] static jobject get_field_LOGGER() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("e", "LOGGER", "field_14326", "LOGGER", "f_11066_"), "Lorg/slf4j/Logger;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static default field net.minecraft.server.ServerConfigHandler#LOGGER
    [[maybe_unused]] static void set_field_LOGGER(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("e", "LOGGER", "field_14326", "LOGGER", "f_11066_"), "Lorg/slf4j/Logger;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.server.ServerConfigHandler#BANNED_IPS_FILE
    [[maybe_unused]] static jobject get_field_BANNED_IPS_FILE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "OLD_IPBANLIST", "field_14324", "BANNED_IPS_FILE", "f_11062_"), "Ljava/io/File;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.server.ServerConfigHandler#BANNED_IPS_FILE
    [[maybe_unused]] static void set_field_BANNED_IPS_FILE(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "OLD_IPBANLIST", "field_14324", "BANNED_IPS_FILE", "f_11062_"), "Ljava/io/File;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.server.ServerConfigHandler#BANNED_PLAYERS_FILE
    [[maybe_unused]] static jobject get_field_BANNED_PLAYERS_FILE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "OLD_USERBANLIST", "field_14328", "BANNED_PLAYERS_FILE", "f_11063_"), "Ljava/io/File;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.server.ServerConfigHandler#BANNED_PLAYERS_FILE
    [[maybe_unused]] static void set_field_BANNED_PLAYERS_FILE(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "OLD_USERBANLIST", "field_14328", "BANNED_PLAYERS_FILE", "f_11063_"), "Ljava/io/File;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.server.ServerConfigHandler#OPERATORS_FILE
    [[maybe_unused]] static jobject get_field_OPERATORS_FILE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "OLD_OPLIST", "field_14327", "OPERATORS_FILE", "f_11064_"), "Ljava/io/File;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.server.ServerConfigHandler#OPERATORS_FILE
    [[maybe_unused]] static void set_field_OPERATORS_FILE(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "OLD_OPLIST", "field_14327", "OPERATORS_FILE", "f_11064_"), "Ljava/io/File;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.server.ServerConfigHandler#WHITE_LIST_FILE
    [[maybe_unused]] static jobject get_field_WHITE_LIST_FILE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("d", "OLD_WHITELIST", "field_14325", "WHITE_LIST_FILE", "f_11065_"), "Ljava/io/File;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.server.ServerConfigHandler#WHITE_LIST_FILE
    [[maybe_unused]] static void set_field_WHITE_LIST_FILE(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("d", "OLD_WHITELIST", "field_14325", "WHITE_LIST_FILE", "f_11065_"), "Ljava/io/File;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    static jmethodID methodID_processSimpleListFile() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "readOldListFormat", "method_14543", "processSimpleListFile", "m_11073_"), "(Ljava/io/File;Ljava/util/Map;)Ljava/util/List;");
    }

    static jobject processSimpleListFile(const jobject& arg0, const jobject& arg1) {
       const auto clazz = self();
       const auto methodID = methodID_processSimpleListFile();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_lookupProfile() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "lookupPlayers", "method_14538", "lookupProfile", "m_11086_"), "(Lnet/minecraft/server/MinecraftServer;Ljava/util/Collection;Lcom/mojang/authlib/ProfileLookupCallback;)V");
    }

    static void lookupProfile(const jobject& arg0, const jobject& arg1, const jobject& arg2) {
       const auto clazz = self();
       const auto methodID = methodID_lookupProfile();
       MinecraftSDK::env->CallStaticVoidMethod(clazz, methodID, arg0, arg1, arg2);
    };
    
    static jmethodID methodID_convertBannedPlayers() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "convertUserBanlist", "method_14547", "convertBannedPlayers", "m_11081_"), "(Lnet/minecraft/server/MinecraftServer;)Z");
    }

    static jboolean convertBannedPlayers(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_convertBannedPlayers();
       return MinecraftSDK::env->CallStaticBooleanMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_convertBannedIps() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("b", "convertIpBanlist", "method_14545", "convertBannedIps", "m_11098_"), "(Lnet/minecraft/server/MinecraftServer;)Z");
    }

    static jboolean convertBannedIps(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_convertBannedIps();
       return MinecraftSDK::env->CallStaticBooleanMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_convertOperators() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("c", "convertOpsList", "method_14539", "convertOperators", "m_11102_"), "(Lnet/minecraft/server/MinecraftServer;)Z");
    }

    static jboolean convertOperators(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_convertOperators();
       return MinecraftSDK::env->CallStaticBooleanMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_convertWhitelist() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("d", "convertWhiteList", "method_14533", "convertWhitelist", "m_11104_"), "(Lnet/minecraft/server/MinecraftServer;)Z");
    }

    static jboolean convertWhitelist(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_convertWhitelist();
       return MinecraftSDK::env->CallStaticBooleanMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_getPlayerUuidByName() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "convertMobOwnerIfNecessary", "method_14546", "getPlayerUuidByName", "m_11083_"), "(Lnet/minecraft/server/MinecraftServer;Ljava/lang/String;)Ljava/util/UUID;");
    }

    static jobject getPlayerUuidByName(const jobject& arg0, const jobject& arg1) {
       const auto clazz = self();
       const auto methodID = methodID_getPlayerUuidByName();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_convertPlayerFiles() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "convertPlayers", "method_14550", "convertPlayerFiles", "m_11090_"), "(Lapn;)Z");
    }

    static jboolean convertPlayerFiles(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_convertPlayerFiles();
       return MinecraftSDK::env->CallStaticBooleanMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_createDirectory() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "ensureDirectoryExists", "method_14534", "createDirectory", "m_11093_"), "(Ljava/io/File;)V");
    }

    static void createDirectory(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_createDirectory();
       MinecraftSDK::env->CallStaticVoidMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_checkSuccess() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("e", "serverReadyAfterUserconversion", "method_14540", "checkSuccess", "m_11106_"), "(Lnet/minecraft/server/MinecraftServer;)Z");
    }

    static jboolean checkSuccess(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_checkSuccess();
       return MinecraftSDK::env->CallStaticBooleanMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_checkListConversionSuccess() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "areOldUserlistsRemoved", "method_14541", "checkListConversionSuccess", "m_11092_"), "()Z");
    }

    static jboolean checkListConversionSuccess() {
       const auto clazz = self();
       const auto methodID = methodID_checkListConversionSuccess();
       return MinecraftSDK::env->CallStaticBooleanMethod(clazz, methodID);
    };
    
    static jmethodID methodID_checkPlayerConversionSuccess() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("f", "areOldPlayersConverted", "method_14542", "checkPlayerConversionSuccess", "m_11108_"), "(Lnet/minecraft/server/MinecraftServer;)Z");
    }

    static jboolean checkPlayerConversionSuccess(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_checkPlayerConversionSuccess();
       return MinecraftSDK::env->CallStaticBooleanMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_getLevelPlayersFolder() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("g", "getWorldPlayersDirectory", "method_14536", "getLevelPlayersFolder", "m_11110_"), "(Lnet/minecraft/server/MinecraftServer;)Ljava/io/File;");
    }

    static jobject getLevelPlayersFolder(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_getLevelPlayersFolder();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_markFileConverted() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("b", "renameOldFile", "method_14549", "markFileConverted", "m_11100_"), "(Ljava/io/File;)V");
    }

    static void markFileConverted(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_markFileConverted();
       MinecraftSDK::env->CallStaticVoidMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_parseDate() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "parseDate", "method_14535", "parseDate", "m_11095_"), "(Ljava/lang/String;Ljava/util/Date;)Ljava/util/Date;");
    }

    static jobject parseDate(const jobject& arg0, const jobject& arg1) {
       const auto clazz = self();
       const auto methodID = methodID_parseDate();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0, arg1);
    };
    
};

#endif // NET_MINECRAFT_SERVER_SERVERCONFIGHANDLER_HPP