// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_BLOCK_PISTON_PISTONBEHAVIOR_HPP
#define NET_MINECRAFT_BLOCK_PISTON_PISTONBEHAVIOR_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.block.piston.PistonBehavior
 * Remapped: epj
 */
namespace PistonBehavior {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("epj", "net/minecraft/world/level/material/PushReaction", "net/minecraft/class_3619", "net/minecraft/block/piston/PistonBehavior", "net/minecraft/src/C_2699_"));
        }
        return cachedClass;
    };

    // getter for static public field net.minecraft.block.piston.PistonBehavior#NORMAL
    [[maybe_unused]] static jobject get_field_NORMAL() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "NORMAL", "field_15974", "NORMAL", "NORMAL"), "Lepj;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.block.piston.PistonBehavior#NORMAL
    [[maybe_unused]] static void set_field_NORMAL(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "NORMAL", "field_15974", "NORMAL", "NORMAL"), "Lepj;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.block.piston.PistonBehavior#DESTROY
    [[maybe_unused]] static jobject get_field_DESTROY() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "DESTROY", "field_15971", "DESTROY", "DESTROY"), "Lepj;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.block.piston.PistonBehavior#DESTROY
    [[maybe_unused]] static void set_field_DESTROY(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "DESTROY", "field_15971", "DESTROY", "DESTROY"), "Lepj;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.block.piston.PistonBehavior#BLOCK
    [[maybe_unused]] static jobject get_field_BLOCK() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "BLOCK", "field_15972", "BLOCK", "BLOCK"), "Lepj;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.block.piston.PistonBehavior#BLOCK
    [[maybe_unused]] static void set_field_BLOCK(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "BLOCK", "field_15972", "BLOCK", "BLOCK"), "Lepj;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.block.piston.PistonBehavior#IGNORE
    [[maybe_unused]] static jobject get_field_IGNORE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("d", "IGNORE", "field_15975", "IGNORE", "IGNORE"), "Lepj;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.block.piston.PistonBehavior#IGNORE
    [[maybe_unused]] static void set_field_IGNORE(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("d", "IGNORE", "field_15975", "IGNORE", "IGNORE"), "Lepj;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.block.piston.PistonBehavior#PUSH_ONLY
    [[maybe_unused]] static jobject get_field_PUSH_ONLY() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("e", "PUSH_ONLY", "field_15970", "PUSH_ONLY", "PUSH_ONLY"), "Lepj;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.block.piston.PistonBehavior#PUSH_ONLY
    [[maybe_unused]] static void set_field_PUSH_ONLY(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("e", "PUSH_ONLY", "field_15970", "PUSH_ONLY", "PUSH_ONLY"), "Lepj;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    static jmethodID methodID_values() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("values", "values", "values", "values", "values"), "()[Lepj;");
    }

    static jobject values() {
       const auto clazz = self();
       const auto methodID = methodID_values();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID);
    };
    
    static jmethodID methodID_valueOf() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("valueOf", "valueOf", "valueOf", "valueOf", "valueOf"), "(Ljava/lang/String;)Lepj;");
    }

    static jobject valueOf(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_valueOf();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0);
    };
    
};

#endif // NET_MINECRAFT_BLOCK_PISTON_PISTONBEHAVIOR_HPP