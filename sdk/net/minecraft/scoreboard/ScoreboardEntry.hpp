// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_SCOREBOARD_SCOREBOARDENTRY_HPP
#define NET_MINECRAFT_SCOREBOARD_SCOREBOARDENTRY_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.scoreboard.ScoreboardEntry
 * Remapped: exz
 */
namespace ScoreboardEntry {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("exz", "net/minecraft/world/scores/PlayerScoreEntry", "net/minecraft/class_9011", "net/minecraft/scoreboard/ScoreboardEntry", "net/minecraft/src/C_302146_"));
        }
        return cachedClass;
    };

    // getter for private field net.minecraft.scoreboard.ScoreboardEntry#owner
    static jobject get_field_owner(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "owner", "comp_2127", "owner", "f_302847_"), "Ljava/lang/String;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.scoreboard.ScoreboardEntry#owner
    static void set_field_owner(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "owner", "comp_2127", "owner", "f_302847_"), "Ljava/lang/String;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.scoreboard.ScoreboardEntry#value
    static jint get_field_value(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "value", "comp_2128", "value", "f_303807_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetIntField(obj, fieldID);
    };

    // setter for static private field net.minecraft.scoreboard.ScoreboardEntry#value
    static void set_field_value(const jobject &obj, const jint &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "value", "comp_2128", "value", "f_303807_"), "I");
        return MinecraftSDK::env->SetIntField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.scoreboard.ScoreboardEntry#display
    static jobject get_field_display(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "display", "comp_2129", "display", "f_303157_"), "Lwz;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.scoreboard.ScoreboardEntry#display
    static void set_field_display(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "display", "comp_2129", "display", "f_303157_"), "Lwz;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.scoreboard.ScoreboardEntry#numberFormatOverride
    static jobject get_field_numberFormatOverride(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "numberFormatOverride", "comp_2130", "numberFormatOverride", "f_303706_"), "Lyp;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.scoreboard.ScoreboardEntry#numberFormatOverride
    static void set_field_numberFormatOverride(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "numberFormatOverride", "comp_2130", "numberFormatOverride", "f_303706_"), "Lyp;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID_hidden() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "isHidden", "method_55385", "hidden", "m_307477_"), "()Z");
    }

    static jboolean hidden(const jobject& obj) {
                
       const auto methodID = methodID_hidden();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID);
    };
    
    static jmethodID methodID_name() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "ownerName", "method_55387", "name", "m_305530_"), "()Lwz;");
    }

    static jobject name(const jobject& obj) {
                
       const auto methodID = methodID_name();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_formatted() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "formatValue", "method_55386", "formatted", "m_304640_"), "(Lyp;)Lxn;");
    }

    static jobject formatted(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_formatted();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID__owner() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "owner", "comp_2127", "owner", "f_302847_"), "()Ljava/lang/String;");
    }

    static jobject _owner(const jobject& obj) {
                
       const auto methodID = methodID__owner();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID__value() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("d", "value", "comp_2128", "value", "f_303807_"), "()I");
    }

    static jint _value(const jobject& obj) {
                
       const auto methodID = methodID__value();
       return MinecraftSDK::env->CallIntMethod(obj, methodID);
    };
    
    static jmethodID methodID__display() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("e", "display", "comp_2129", "display", "f_303157_"), "()Lwz;");
    }

    static jobject _display(const jobject& obj) {
                
       const auto methodID = methodID__display();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID__numberFormatOverride() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("f", "numberFormatOverride", "comp_2130", "numberFormatOverride", "f_303706_"), "()Lyp;");
    }

    static jobject _numberFormatOverride(const jobject& obj) {
                
       const auto methodID = methodID__numberFormatOverride();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_SCOREBOARD_SCOREBOARDENTRY_HPP