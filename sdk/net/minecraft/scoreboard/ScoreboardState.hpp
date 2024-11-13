// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_SCOREBOARD_SCOREBOARDSTATE_HPP
#define NET_MINECRAFT_SCOREBOARD_SCOREBOARDSTATE_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.scoreboard.ScoreboardState
 * Remapped: eyh
 */
namespace ScoreboardState {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("eyh", "net/minecraft/world/scores/ScoreboardSaveData", "net/minecraft/class_273", "net/minecraft/scoreboard/ScoreboardState", "net/minecraft/src/C_3077_"));
        }
        return cachedClass;
    };

    // getter for static private field net.minecraft.scoreboard.ScoreboardState#LOGGER
    [[maybe_unused]] static jobject get_field_LOGGER() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "LOGGER", "field_45181", "LOGGER", "f_291361_"), "Lorg/slf4j/Logger;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.scoreboard.ScoreboardState#LOGGER
    [[maybe_unused]] static void set_field_LOGGER(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "LOGGER", "field_45181", "LOGGER", "f_291361_"), "Lorg/slf4j/Logger;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.scoreboard.ScoreboardState#SCOREBOARD_KEY
    [[maybe_unused]] static jobject get_field_SCOREBOARD_KEY() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "FILE_ID", "field_31893", "SCOREBOARD_KEY", "f_166099_"), "Ljava/lang/String;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.scoreboard.ScoreboardState#SCOREBOARD_KEY
    [[maybe_unused]] static void set_field_SCOREBOARD_KEY(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "FILE_ID", "field_31893", "SCOREBOARD_KEY", "f_166099_"), "Ljava/lang/String;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for private field net.minecraft.scoreboard.ScoreboardState#scoreboard
    static jobject get_field_scoreboard(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "scoreboard", "field_27936", "scoreboard", "f_83509_"), "Leyg;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.scoreboard.ScoreboardState#scoreboard
    static void set_field_scoreboard(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "scoreboard", "field_27936", "scoreboard", "f_83509_"), "Leyg;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID_readNbt() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "load", "method_32481", "readNbt", "m_166102_"), "(Lub;Ljo$a;)Leyh;");
    }

    static jobject readNbt(const jobject& obj, const jobject& arg0, const jobject& arg1) {
                
       const auto methodID = methodID_readNbt();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_readTeamsNbt() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "loadTeams", "method_1219", "readTeamsNbt", "m_83524_"), "(Luh;Ljo$a;)V");
    }

    static void readTeamsNbt(const jobject& obj, const jobject& arg0, const jobject& arg1) {
                
       const auto methodID = methodID_readTeamsNbt();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_readTeamPlayersNbt() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "loadTeamPlayers", "method_1215", "readTeamPlayersNbt", "m_83514_"), "(Leyb;Luh;)V");
    }

    static void readTeamPlayersNbt(const jobject& obj, const jobject& arg0, const jobject& arg1) {
                
       const auto methodID = methodID_readTeamPlayersNbt();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_readDisplaySlotsNbt() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "loadDisplaySlots", "method_1221", "readDisplaySlotsNbt", "m_83530_"), "(Lub;)V");
    }

    static void readDisplaySlotsNbt(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_readDisplaySlotsNbt();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_readObjectivesNbt() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "loadObjectives", "method_1220", "readObjectivesNbt", "m_83528_"), "(Luh;Ljo$a;)V");
    }

    static void readObjectivesNbt(const jobject& obj, const jobject& arg0, const jobject& arg1) {
                
       const auto methodID = methodID_readObjectivesNbt();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_writeNbt() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "save", "method_75", "writeNbt", "m_7176_"), "(Lub;Ljo$a;)Lub;");
    }

    static jobject writeNbt(const jobject& obj, const jobject& arg0, const jobject& arg1) {
                
       const auto methodID = methodID_writeNbt();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_teamsToNbt() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "saveTeams", "method_1217", "teamsToNbt", "m_83513_"), "(Ljo$a;)Luh;");
    }

    static jobject teamsToNbt(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_teamsToNbt();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_writeDisplaySlotsNbt() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "saveDisplaySlots", "method_1222", "writeDisplaySlotsNbt", "m_83532_"), "(Lub;)V");
    }

    static void writeDisplaySlotsNbt(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_writeDisplaySlotsNbt();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_objectivesToNbt() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "saveObjectives", "method_1216", "objectivesToNbt", "m_83534_"), "(Ljo$a;)Luh;");
    }

    static jobject objectivesToNbt(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_objectivesToNbt();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
};

#endif // NET_MINECRAFT_SCOREBOARD_SCOREBOARDSTATE_HPP