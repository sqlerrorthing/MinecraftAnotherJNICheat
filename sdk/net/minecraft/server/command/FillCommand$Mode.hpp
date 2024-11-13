// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_SERVER_COMMAND_FILLCOMMAND$MODE_HPP
#define NET_MINECRAFT_SERVER_COMMAND_FILLCOMMAND$MODE_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.server.command.FillCommand$Mode
 * Remapped: amw$a
 */
namespace FillCommand$Mode {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("amw$a", "net/minecraft/server/commands/FillCommand$Mode", "net/minecraft/class_3057$class_3058", "net/minecraft/server/command/FillCommand$Mode", "net/minecraft/src/C_5320_$C_5321_"));
        }
        return cachedClass;
    };

    // getter for static public field net.minecraft.server.command.FillCommand$Mode#REPLACE
    [[maybe_unused]] static jobject get_field_REPLACE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "REPLACE", "field_13655", "REPLACE", "REPLACE"), "Lamw$a;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.server.command.FillCommand$Mode#REPLACE
    [[maybe_unused]] static void set_field_REPLACE(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "REPLACE", "field_13655", "REPLACE", "REPLACE"), "Lamw$a;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.server.command.FillCommand$Mode#OUTLINE
    [[maybe_unused]] static jobject get_field_OUTLINE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "OUTLINE", "field_13652", "OUTLINE", "OUTLINE"), "Lamw$a;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.server.command.FillCommand$Mode#OUTLINE
    [[maybe_unused]] static void set_field_OUTLINE(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "OUTLINE", "field_13652", "OUTLINE", "OUTLINE"), "Lamw$a;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.server.command.FillCommand$Mode#HOLLOW
    [[maybe_unused]] static jobject get_field_HOLLOW() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "HOLLOW", "field_13656", "HOLLOW", "HOLLOW"), "Lamw$a;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.server.command.FillCommand$Mode#HOLLOW
    [[maybe_unused]] static void set_field_HOLLOW(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "HOLLOW", "field_13656", "HOLLOW", "HOLLOW"), "Lamw$a;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.server.command.FillCommand$Mode#DESTROY
    [[maybe_unused]] static jobject get_field_DESTROY() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("d", "DESTROY", "field_13651", "DESTROY", "DESTROY"), "Lamw$a;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.server.command.FillCommand$Mode#DESTROY
    [[maybe_unused]] static void set_field_DESTROY(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("d", "DESTROY", "field_13651", "DESTROY", "DESTROY"), "Lamw$a;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for public field net.minecraft.server.command.FillCommand$Mode#filter
    static jobject get_field_filter(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "filter", "field_13654", "filter", "f_137410_"), "Laoh$a;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static public field net.minecraft.server.command.FillCommand$Mode#filter
    static void set_field_filter(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "filter", "field_13654", "filter", "f_137410_"), "Laoh$a;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID_values() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("values", "values", "values", "values", "values"), "()[Lamw$a;");
    }

    static jobject values() {
       const auto clazz = self();
       const auto methodID = methodID_values();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID);
    };
    
    static jmethodID methodID_valueOf() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("valueOf", "valueOf", "valueOf", "valueOf", "valueOf"), "(Ljava/lang/String;)Lamw$a;");
    }

    static jobject valueOf(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_valueOf();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0);
    };
    
};

#endif // NET_MINECRAFT_SERVER_COMMAND_FILLCOMMAND$MODE_HPP