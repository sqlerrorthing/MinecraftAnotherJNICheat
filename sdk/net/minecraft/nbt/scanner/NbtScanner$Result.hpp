// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_NBT_SCANNER_NBTSCANNER$RESULT_HPP
#define NET_MINECRAFT_NBT_SCANNER_NBTSCANNER$RESULT_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.nbt.scanner.NbtScanner$Result
 * Remapped: uv$b
 */
namespace NbtScanner$Result {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("uv$b", "net/minecraft/nbt/StreamTagVisitor$ValueResult", "net/minecraft/class_6836$class_6838", "net/minecraft/nbt/scanner/NbtScanner$Result", "net/minecraft/src/C_196121_$C_196123_"));
        }
        return cachedClass;
    };

    // getter for static public field net.minecraft.nbt.scanner.NbtScanner$Result#CONTINUE
    [[maybe_unused]] static jobject get_field_CONTINUE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "CONTINUE", "field_36253", "CONTINUE", "CONTINUE"), "Luv$b;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.nbt.scanner.NbtScanner$Result#CONTINUE
    [[maybe_unused]] static void set_field_CONTINUE(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "CONTINUE", "field_36253", "CONTINUE", "CONTINUE"), "Luv$b;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.nbt.scanner.NbtScanner$Result#BREAK
    [[maybe_unused]] static jobject get_field_BREAK() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "BREAK", "field_36254", "BREAK", "BREAK"), "Luv$b;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.nbt.scanner.NbtScanner$Result#BREAK
    [[maybe_unused]] static void set_field_BREAK(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "BREAK", "field_36254", "BREAK", "BREAK"), "Luv$b;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.nbt.scanner.NbtScanner$Result#HALT
    [[maybe_unused]] static jobject get_field_HALT() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "HALT", "field_36255", "HALT", "HALT"), "Luv$b;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.nbt.scanner.NbtScanner$Result#HALT
    [[maybe_unused]] static void set_field_HALT(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "HALT", "field_36255", "HALT", "HALT"), "Luv$b;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    static jmethodID methodID_values() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("values", "values", "values", "values", "values"), "()[Luv$b;");
    }

    static jobject values() {
       const auto clazz = self();
       const auto methodID = methodID_values();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID);
    };
    
    static jmethodID methodID_valueOf() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("valueOf", "valueOf", "valueOf", "valueOf", "valueOf"), "(Ljava/lang/String;)Luv$b;");
    }

    static jobject valueOf(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_valueOf();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0);
    };
    
};

#endif // NET_MINECRAFT_NBT_SCANNER_NBTSCANNER$RESULT_HPP