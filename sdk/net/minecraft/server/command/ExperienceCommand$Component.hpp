// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_SERVER_COMMAND_EXPERIENCECOMMAND$COMPONENT_HPP
#define NET_MINECRAFT_SERVER_COMMAND_EXPERIENCECOMMAND$COMPONENT_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.server.command.ExperienceCommand$Component
 * Remapped: amu$a
 */
namespace ExperienceCommand$Component {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("amu$a", "net/minecraft/server/commands/ExperienceCommand$Type", "net/minecraft/class_3054$class_3055", "net/minecraft/server/command/ExperienceCommand$Component", "net/minecraft/src/C_5318_$C_5319_"));
        }
        return cachedClass;
    };

    // getter for static public field net.minecraft.server.command.ExperienceCommand$Component#POINTS
    [[maybe_unused]] static jobject get_field_POINTS() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "POINTS", "field_13644", "POINTS", "POINTS"), "Lamu$a;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.server.command.ExperienceCommand$Component#POINTS
    [[maybe_unused]] static void set_field_POINTS(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "POINTS", "field_13644", "POINTS", "POINTS"), "Lamu$a;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.server.command.ExperienceCommand$Component#LEVELS
    [[maybe_unused]] static jobject get_field_LEVELS() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "LEVELS", "field_13641", "LEVELS", "LEVELS"), "Lamu$a;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.server.command.ExperienceCommand$Component#LEVELS
    [[maybe_unused]] static void set_field_LEVELS(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "LEVELS", "field_13641", "LEVELS", "LEVELS"), "Lamu$a;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for public field net.minecraft.server.command.ExperienceCommand$Component#adder
    static jobject get_field_adder(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "add", "field_13639", "adder", "f_137344_"), "Ljava/util/function/BiConsumer;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static public field net.minecraft.server.command.ExperienceCommand$Component#adder
    static void set_field_adder(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "add", "field_13639", "adder", "f_137344_"), "Ljava/util/function/BiConsumer;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for public field net.minecraft.server.command.ExperienceCommand$Component#setter
    static jobject get_field_setter(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "set", "field_13642", "setter", "f_137345_"), "Ljava/util/function/BiPredicate;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static public field net.minecraft.server.command.ExperienceCommand$Component#setter
    static void set_field_setter(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "set", "field_13642", "setter", "f_137345_"), "Ljava/util/function/BiPredicate;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for public field net.minecraft.server.command.ExperienceCommand$Component#name
    static jobject get_field_name(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "name", "field_13643", "name", "f_137346_"), "Ljava/lang/String;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static public field net.minecraft.server.command.ExperienceCommand$Component#name
    static void set_field_name(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "name", "field_13643", "name", "f_137346_"), "Ljava/lang/String;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for default field net.minecraft.server.command.ExperienceCommand$Component#getter
    static jobject get_field_getter(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("f", "query", "field_13645", "getter", "f_137347_"), "Ljava/util/function/ToIntFunction;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static default field net.minecraft.server.command.ExperienceCommand$Component#getter
    static void set_field_getter(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("f", "query", "field_13645", "getter", "f_137347_"), "Ljava/util/function/ToIntFunction;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID_values() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("values", "values", "values", "values", "values"), "()[Lamu$a;");
    }

    static jobject values() {
       const auto clazz = self();
       const auto methodID = methodID_values();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID);
    };
    
    static jmethodID methodID_valueOf() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("valueOf", "valueOf", "valueOf", "valueOf", "valueOf"), "(Ljava/lang/String;)Lamu$a;");
    }

    static jobject valueOf(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_valueOf();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0);
    };
    
};

#endif // NET_MINECRAFT_SERVER_COMMAND_EXPERIENCECOMMAND$COMPONENT_HPP