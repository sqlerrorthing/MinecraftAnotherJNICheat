// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_SCOREBOARD_SCOREHOLDER$2_HPP
#define NET_MINECRAFT_SCOREBOARD_SCOREHOLDER$2_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.scoreboard.ScoreHolder$2
 * Remapped: eyf$2
 */
namespace ScoreHolder$2 {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("eyf$2", "net/minecraft/world/scores/ScoreHolder$2", "net/minecraft/class_9015$2", "net/minecraft/scoreboard/ScoreHolder$2", "net/minecraft/src/C_301985_$C_301914_"));
        }
        return cachedClass;
    };

    static jmethodID methodID_getNameForScoreboard() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("cB", "getScoreboardName", "method_5820", "getNameForScoreboard", "m_6302_"), "()Ljava/lang/String;");
    }

    static jobject getNameForScoreboard(const jobject& obj) {
                
       const auto methodID = methodID_getNameForScoreboard();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_getStyledDisplayName() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("gY", "getFeedbackDisplayName", "method_55423", "getStyledDisplayName", "m_305099_"), "()Lwz;");
    }

    static jobject getStyledDisplayName(const jobject& obj) {
                
       const auto methodID = methodID_getStyledDisplayName();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_SCOREBOARD_SCOREHOLDER$2_HPP