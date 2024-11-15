// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_BLOCK_ENUMS_ATTACHMENT_HPP
#define NET_MINECRAFT_BLOCK_ENUMS_ATTACHMENT_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.block.enums.Attachment
 * Remapped: dtq
 */
namespace Attachment {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("dtq", "net/minecraft/world/level/block/state/properties/BellAttachType", "net/minecraft/class_3867", "net/minecraft/block/enums/Attachment", "net/minecraft/src/C_2082_"));
        }
        return cachedClass;
    };

    // getter for static public field net.minecraft.block.enums.Attachment#FLOOR
    [[maybe_unused]] static jobject get_field_FLOOR() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "FLOOR", "field_17098", "FLOOR", "FLOOR"), "Ldtq;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.block.enums.Attachment#FLOOR
    [[maybe_unused]] static void set_field_FLOOR(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "FLOOR", "field_17098", "FLOOR", "FLOOR"), "Ldtq;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.block.enums.Attachment#CEILING
    [[maybe_unused]] static jobject get_field_CEILING() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "CEILING", "field_17099", "CEILING", "CEILING"), "Ldtq;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.block.enums.Attachment#CEILING
    [[maybe_unused]] static void set_field_CEILING(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "CEILING", "field_17099", "CEILING", "CEILING"), "Ldtq;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.block.enums.Attachment#SINGLE_WALL
    [[maybe_unused]] static jobject get_field_SINGLE_WALL() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "SINGLE_WALL", "field_17100", "SINGLE_WALL", "SINGLE_WALL"), "Ldtq;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.block.enums.Attachment#SINGLE_WALL
    [[maybe_unused]] static void set_field_SINGLE_WALL(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "SINGLE_WALL", "field_17100", "SINGLE_WALL", "SINGLE_WALL"), "Ldtq;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.block.enums.Attachment#DOUBLE_WALL
    [[maybe_unused]] static jobject get_field_DOUBLE_WALL() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("d", "DOUBLE_WALL", "field_17101", "DOUBLE_WALL", "DOUBLE_WALL"), "Ldtq;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.block.enums.Attachment#DOUBLE_WALL
    [[maybe_unused]] static void set_field_DOUBLE_WALL(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("d", "DOUBLE_WALL", "field_17101", "DOUBLE_WALL", "DOUBLE_WALL"), "Ldtq;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for private field net.minecraft.block.enums.Attachment#name
    static jobject get_field_name(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "name", "field_17102", "name", "f_61349_"), "Ljava/lang/String;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.block.enums.Attachment#name
    static void set_field_name(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "name", "field_17102", "name", "f_61349_"), "Ljava/lang/String;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID_values() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("values", "values", "values", "values", "values"), "()[Ldtq;");
    }

    static jobject values() {
       const auto clazz = self();
       const auto methodID = methodID_values();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID);
    };
    
    static jmethodID methodID_valueOf() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("valueOf", "valueOf", "valueOf", "valueOf", "valueOf"), "(Ljava/lang/String;)Ldtq;");
    }

    static jobject valueOf(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_valueOf();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_asString() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "getSerializedName", "method_15434", "asString", "m_7912_"), "()Ljava/lang/String;");
    }

    static jobject asString(const jobject& obj) {
                
       const auto methodID = methodID_asString();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_BLOCK_ENUMS_ATTACHMENT_HPP