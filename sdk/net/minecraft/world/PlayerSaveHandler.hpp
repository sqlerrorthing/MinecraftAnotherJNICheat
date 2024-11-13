// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_WORLD_PLAYERSAVEHANDLER_HPP
#define NET_MINECRAFT_WORLD_PLAYERSAVEHANDLER_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.world.PlayerSaveHandler
 * Remapped: eri
 */
namespace PlayerSaveHandler {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("eri", "net/minecraft/world/level/storage/PlayerDataStorage", "net/minecraft/class_29", "net/minecraft/world/PlayerSaveHandler", "net/minecraft/src/C_2792_"));
        }
        return cachedClass;
    };

    // getter for static private field net.minecraft.world.PlayerSaveHandler#LOGGER
    [[maybe_unused]] static jobject get_field_LOGGER() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "LOGGER", "field_149", "LOGGER", "f_78426_"), "Lorg/slf4j/Logger;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.world.PlayerSaveHandler#LOGGER
    [[maybe_unused]] static void set_field_LOGGER(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "LOGGER", "field_149", "LOGGER", "f_78426_"), "Lorg/slf4j/Logger;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for private field net.minecraft.world.PlayerSaveHandler#playerDataDir
    static jobject get_field_playerDataDir(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "playerDir", "field_144", "playerDataDir", "f_78427_"), "Ljava/io/File;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.world.PlayerSaveHandler#playerDataDir
    static void set_field_playerDataDir(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "playerDir", "field_144", "playerDataDir", "f_78427_"), "Ljava/io/File;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for protected field net.minecraft.world.PlayerSaveHandler#dataFixer
    static jobject get_field_dataFixer(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "fixerUpper", "field_148", "dataFixer", "f_78425_"), "Lcom/mojang/datafixers/DataFixer;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static protected field net.minecraft.world.PlayerSaveHandler#dataFixer
    static void set_field_dataFixer(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "fixerUpper", "field_148", "dataFixer", "f_78425_"), "Lcom/mojang/datafixers/DataFixer;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for static private field net.minecraft.world.PlayerSaveHandler#DATE_TIME_FORMATTER
    [[maybe_unused]] static jobject get_field_DATE_TIME_FORMATTER() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("d", "FORMATTER", "field_47840", "DATE_TIME_FORMATTER", "f_315551_"), "Ljava/time/format/DateTimeFormatter;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.world.PlayerSaveHandler#DATE_TIME_FORMATTER
    [[maybe_unused]] static void set_field_DATE_TIME_FORMATTER(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("d", "FORMATTER", "field_47840", "DATE_TIME_FORMATTER", "f_315551_"), "Ljava/time/format/DateTimeFormatter;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    static jmethodID methodID_savePlayerData() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "save", "method_262", "savePlayerData", "m_78433_"), "(Lcmx;)V");
    }

    static void savePlayerData(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_savePlayerData();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_backupCorruptedPlayerData() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "backup", "method_55787", "backupCorruptedPlayerData", "m_323775_"), "(Lcmx;Ljava/lang/String;)V");
    }

    static void backupCorruptedPlayerData(const jobject& obj, const jobject& arg0, const jobject& arg1) {
                
       const auto methodID = methodID_backupCorruptedPlayerData();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_loadPlayerData() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "load", "method_261", "loadPlayerData", "m_323516_"), "(Lcmx;Ljava/lang/String;)Ljava/util/Optional;");
    }

    static jobject loadPlayerData(const jobject& obj, const jobject& arg0, const jobject& arg1) {
                
       const auto methodID = methodID_loadPlayerData();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID__loadPlayerData() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "load", "method_55789", "loadPlayerData", "m_78435_"), "(Lcmx;)Ljava/util/Optional;");
    }

    static jobject _loadPlayerData(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID__loadPlayerData();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
};

#endif // NET_MINECRAFT_WORLD_PLAYERSAVEHANDLER_HPP