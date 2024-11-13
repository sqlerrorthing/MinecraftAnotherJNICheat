// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_WORLD_LEVEL_LEVELINFO_HPP
#define NET_MINECRAFT_WORLD_LEVEL_LEVELINFO_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.world.level.LevelInfo
 * Remapped: dda
 */
namespace LevelInfo {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("dda", "net/minecraft/world/level/LevelSettings", "net/minecraft/class_1940", "net/minecraft/world/level/LevelInfo", "net/minecraft/src/C_1602_"));
        }
        return cachedClass;
    };

    // getter for private field net.minecraft.world.level.LevelInfo#name
    static jobject get_field_name(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "levelName", "field_24105", "name", "f_46902_"), "Ljava/lang/String;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.world.level.LevelInfo#name
    static void set_field_name(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "levelName", "field_24105", "name", "f_46902_"), "Ljava/lang/String;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.world.level.LevelInfo#gameMode
    static jobject get_field_gameMode(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "gameType", "field_9257", "gameMode", "f_46903_"), "Ldct;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.world.level.LevelInfo#gameMode
    static void set_field_gameMode(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "gameType", "field_9257", "gameMode", "f_46903_"), "Ldct;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.world.level.LevelInfo#hardcore
    static jboolean get_field_hardcore(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "hardcore", "field_9262", "hardcore", "f_46904_"), "Z");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetBooleanField(obj, fieldID);
    };

    // setter for static private field net.minecraft.world.level.LevelInfo#hardcore
    static void set_field_hardcore(const jobject &obj, const jboolean &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "hardcore", "field_9262", "hardcore", "f_46904_"), "Z");
        return MinecraftSDK::env->SetBooleanField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.world.level.LevelInfo#difficulty
    static jobject get_field_difficulty(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "difficulty", "field_24106", "difficulty", "f_46905_"), "Lbqo;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.world.level.LevelInfo#difficulty
    static void set_field_difficulty(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "difficulty", "field_24106", "difficulty", "f_46905_"), "Lbqo;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.world.level.LevelInfo#allowCommands
    static jboolean get_field_allowCommands(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "allowCommands", "field_9261", "allowCommands", "f_46906_"), "Z");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetBooleanField(obj, fieldID);
    };

    // setter for static private field net.minecraft.world.level.LevelInfo#allowCommands
    static void set_field_allowCommands(const jobject &obj, const jboolean &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "allowCommands", "field_9261", "allowCommands", "f_46906_"), "Z");
        return MinecraftSDK::env->SetBooleanField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.world.level.LevelInfo#gameRules
    static jobject get_field_gameRules(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("f", "gameRules", "field_24107", "gameRules", "f_46907_"), "Ldcs;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.world.level.LevelInfo#gameRules
    static void set_field_gameRules(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("f", "gameRules", "field_24107", "gameRules", "f_46907_"), "Ldcs;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.world.level.LevelInfo#dataConfiguration
    static jobject get_field_dataConfiguration(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("g", "dataConfiguration", "field_25403", "dataConfiguration", "f_243681_"), "Lddr;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.world.level.LevelInfo#dataConfiguration
    static void set_field_dataConfiguration(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("g", "dataConfiguration", "field_25403", "dataConfiguration", "f_243681_"), "Lddr;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID_fromDynamic() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "parse", "method_28383", "fromDynamic", "m_46924_"), "(Lcom/mojang/serialization/Dynamic;Lddr;)Ldda;");
    }

    static jobject fromDynamic(const jobject& arg0, const jobject& arg1) {
       const auto clazz = self();
       const auto methodID = methodID_fromDynamic();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_getLevelName() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "levelName", "method_27339", "getLevelName", "m_46917_"), "()Ljava/lang/String;");
    }

    static jobject getLevelName(const jobject& obj) {
                
       const auto methodID = methodID_getLevelName();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_getGameMode() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "gameType", "method_8574", "getGameMode", "m_46929_"), "()Ldct;");
    }

    static jobject getGameMode(const jobject& obj) {
                
       const auto methodID = methodID_getGameMode();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_isHardcore() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "hardcore", "method_8583", "isHardcore", "m_46930_"), "()Z");
    }

    static jboolean isHardcore(const jobject& obj) {
                
       const auto methodID = methodID_isHardcore();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID);
    };
    
    static jmethodID methodID_getDifficulty() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("d", "difficulty", "method_27340", "getDifficulty", "m_46931_"), "()Lbqo;");
    }

    static jobject getDifficulty(const jobject& obj) {
                
       const auto methodID = methodID_getDifficulty();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_areCommandsAllowed() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("e", "allowCommands", "method_8582", "areCommandsAllowed", "m_46932_"), "()Z");
    }

    static jboolean areCommandsAllowed(const jobject& obj) {
                
       const auto methodID = methodID_areCommandsAllowed();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID);
    };
    
    static jmethodID methodID_getGameRules() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("f", "gameRules", "method_27341", "getGameRules", "m_46933_"), "()Ldcs;");
    }

    static jobject getGameRules(const jobject& obj) {
                
       const auto methodID = methodID_getGameRules();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_getDataConfiguration() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("g", "getDataConfiguration", "method_29558", "getDataConfiguration", "m_246291_"), "()Lddr;");
    }

    static jobject getDataConfiguration(const jobject& obj) {
                
       const auto methodID = methodID_getDataConfiguration();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_withGameMode() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "withGameType", "method_28382", "withGameMode", "m_46922_"), "(Ldct;)Ldda;");
    }

    static jobject withGameMode(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_withGameMode();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_withDifficulty() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "withDifficulty", "method_28381", "withDifficulty", "m_46918_"), "(Lbqo;)Ldda;");
    }

    static jobject withDifficulty(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_withDifficulty();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_withDataConfiguration() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "withDataConfiguration", "method_29557", "withDataConfiguration", "m_247275_"), "(Lddr;)Ldda;");
    }

    static jobject withDataConfiguration(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_withDataConfiguration();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_withCopiedGameRules() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("h", "copy", "method_28385", "withCopiedGameRules", "m_46935_"), "()Ldda;");
    }

    static jobject withCopiedGameRules(const jobject& obj) {
                
       const auto methodID = methodID_withCopiedGameRules();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_WORLD_LEVEL_LEVELINFO_HPP