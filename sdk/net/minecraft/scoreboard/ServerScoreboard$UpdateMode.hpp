// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_SCOREBOARD_SERVERSCOREBOARD$UPDATEMODE_HPP
#define NET_MINECRAFT_SCOREBOARD_SERVERSCOREBOARD$UPDATEMODE_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.scoreboard.ServerScoreboard$UpdateMode
 * Remapped: alk$a
 */
namespace ServerScoreboard$UpdateMode {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("alk$a", "net/minecraft/server/ServerScoreboard$Method", "net/minecraft/class_2995$class_2996", "net/minecraft/scoreboard/ServerScoreboard$UpdateMode", "net/minecraft/src/C_5286_$C_5287_"));
        }
        return cachedClass;
    };

    // getter for static public field net.minecraft.scoreboard.ServerScoreboard$UpdateMode#CHANGE
    [[maybe_unused]] static jobject get_field_CHANGE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "CHANGE", "field_13431", "CHANGE", "CHANGE"), "Lalk$a;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.scoreboard.ServerScoreboard$UpdateMode#CHANGE
    [[maybe_unused]] static void set_field_CHANGE(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "CHANGE", "field_13431", "CHANGE", "CHANGE"), "Lalk$a;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.scoreboard.ServerScoreboard$UpdateMode#REMOVE
    [[maybe_unused]] static jobject get_field_REMOVE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "REMOVE", "field_13430", "REMOVE", "REMOVE"), "Lalk$a;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.scoreboard.ServerScoreboard$UpdateMode#REMOVE
    [[maybe_unused]] static void set_field_REMOVE(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "REMOVE", "field_13430", "REMOVE", "REMOVE"), "Lalk$a;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    static jmethodID methodID_values() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("values", "values", "values", "values", "values"), "()[Lalk$a;");
    }

    static jobject values() {
       const auto clazz = self();
       const auto methodID = methodID_values();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID);
    };
    
    static jmethodID methodID_valueOf() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("valueOf", "valueOf", "valueOf", "valueOf", "valueOf"), "(Ljava/lang/String;)Lalk$a;");
    }

    static jobject valueOf(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_valueOf();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0);
    };
    
};

#endif // NET_MINECRAFT_SCOREBOARD_SERVERSCOREBOARD$UPDATEMODE_HPP