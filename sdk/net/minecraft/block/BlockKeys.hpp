// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_BLOCK_BLOCKKEYS_HPP
#define NET_MINECRAFT_BLOCK_BLOCKKEYS_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.block.BlockKeys
 * Remapped: akh
 */
namespace BlockKeys {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("akh", "net/minecraft/references/Blocks", "net/minecraft/class_8803", "net/minecraft/block/BlockKeys", "net/minecraft/src/C_301932_"));
        }
        return cachedClass;
    };

    // getter for static public field net.minecraft.block.BlockKeys#PUMPKIN
    [[maybe_unused]] static jobject get_field_PUMPKIN() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "PUMPKIN", "field_46221", "PUMPKIN", "f_303347_"), "Lakq;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.block.BlockKeys#PUMPKIN
    [[maybe_unused]] static void set_field_PUMPKIN(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "PUMPKIN", "field_46221", "PUMPKIN", "f_303347_"), "Lakq;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.block.BlockKeys#PUMPKIN_STEM
    [[maybe_unused]] static jobject get_field_PUMPKIN_STEM() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "PUMPKIN_STEM", "field_46222", "PUMPKIN_STEM", "f_303375_"), "Lakq;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.block.BlockKeys#PUMPKIN_STEM
    [[maybe_unused]] static void set_field_PUMPKIN_STEM(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "PUMPKIN_STEM", "field_46222", "PUMPKIN_STEM", "f_303375_"), "Lakq;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.block.BlockKeys#ATTACHED_PUMPKIN_STEM
    [[maybe_unused]] static jobject get_field_ATTACHED_PUMPKIN_STEM() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "ATTACHED_PUMPKIN_STEM", "field_46223", "ATTACHED_PUMPKIN_STEM", "f_303705_"), "Lakq;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.block.BlockKeys#ATTACHED_PUMPKIN_STEM
    [[maybe_unused]] static void set_field_ATTACHED_PUMPKIN_STEM(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "ATTACHED_PUMPKIN_STEM", "field_46223", "ATTACHED_PUMPKIN_STEM", "f_303705_"), "Lakq;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.block.BlockKeys#MELON
    [[maybe_unused]] static jobject get_field_MELON() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("d", "MELON", "field_46224", "MELON", "f_303780_"), "Lakq;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.block.BlockKeys#MELON
    [[maybe_unused]] static void set_field_MELON(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("d", "MELON", "field_46224", "MELON", "f_303780_"), "Lakq;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.block.BlockKeys#MELON_STEM
    [[maybe_unused]] static jobject get_field_MELON_STEM() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("e", "MELON_STEM", "field_46225", "MELON_STEM", "f_303757_"), "Lakq;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.block.BlockKeys#MELON_STEM
    [[maybe_unused]] static void set_field_MELON_STEM(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("e", "MELON_STEM", "field_46225", "MELON_STEM", "f_303757_"), "Lakq;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.block.BlockKeys#ATTACHED_MELON_STEM
    [[maybe_unused]] static jobject get_field_ATTACHED_MELON_STEM() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("f", "ATTACHED_MELON_STEM", "field_46226", "ATTACHED_MELON_STEM", "f_302763_"), "Lakq;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.block.BlockKeys#ATTACHED_MELON_STEM
    [[maybe_unused]] static void set_field_ATTACHED_MELON_STEM(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("f", "ATTACHED_MELON_STEM", "field_46226", "ATTACHED_MELON_STEM", "f_302763_"), "Lakq;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    static jmethodID methodID_of() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "createKey", "method_53910", "of", "m_306381_"), "(Ljava/lang/String;)Lakq;");
    }

    static jobject of(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_of();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0);
    };
    
};

#endif // NET_MINECRAFT_BLOCK_BLOCKKEYS_HPP