// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_COMMAND_COMMANDSOURCE$RELATIVEPOSITION_HPP
#define NET_MINECRAFT_COMMAND_COMMANDSOURCE$RELATIVEPOSITION_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.command.CommandSource$RelativePosition
 * Remapped: ey$b
 */
namespace CommandSource$RelativePosition {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("ey$b", "net/minecraft/commands/SharedSuggestionProvider$TextCoordinates", "net/minecraft/class_2172$class_2173", "net/minecraft/command/CommandSource$RelativePosition", "net/minecraft/src/C_3063_$C_3064_"));
        }
        return cachedClass;
    };

    // getter for static public field net.minecraft.command.CommandSource$RelativePosition#ZERO_LOCAL
    [[maybe_unused]] static jobject get_field_ZERO_LOCAL() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "DEFAULT_LOCAL", "field_9834", "ZERO_LOCAL", "f_82987_"), "Ley$b;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.command.CommandSource$RelativePosition#ZERO_LOCAL
    [[maybe_unused]] static void set_field_ZERO_LOCAL(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "DEFAULT_LOCAL", "field_9834", "ZERO_LOCAL", "f_82987_"), "Ley$b;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.command.CommandSource$RelativePosition#ZERO_WORLD
    [[maybe_unused]] static jobject get_field_ZERO_WORLD() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "DEFAULT_GLOBAL", "field_9838", "ZERO_WORLD", "f_82988_"), "Ley$b;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.command.CommandSource$RelativePosition#ZERO_WORLD
    [[maybe_unused]] static void set_field_ZERO_WORLD(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "DEFAULT_GLOBAL", "field_9838", "ZERO_WORLD", "f_82988_"), "Ley$b;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for public field net.minecraft.command.CommandSource$RelativePosition#x
    static jobject get_field_x(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "x", "field_9835", "x", "f_82989_"), "Ljava/lang/String;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static public field net.minecraft.command.CommandSource$RelativePosition#x
    static void set_field_x(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "x", "field_9835", "x", "f_82989_"), "Ljava/lang/String;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for public field net.minecraft.command.CommandSource$RelativePosition#y
    static jobject get_field_y(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "y", "field_9836", "y", "f_82990_"), "Ljava/lang/String;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static public field net.minecraft.command.CommandSource$RelativePosition#y
    static void set_field_y(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "y", "field_9836", "y", "f_82990_"), "Ljava/lang/String;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for public field net.minecraft.command.CommandSource$RelativePosition#z
    static jobject get_field_z(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "z", "field_9837", "z", "f_82991_"), "Ljava/lang/String;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static public field net.minecraft.command.CommandSource$RelativePosition#z
    static void set_field_z(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "z", "field_9837", "z", "f_82991_"), "Ljava/lang/String;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

};

#endif // NET_MINECRAFT_COMMAND_COMMANDSOURCE$RELATIVEPOSITION_HPP