// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_BLOCK_ENTITY_COMMANDBLOCKBLOCKENTITY$TYPE_HPP
#define NET_MINECRAFT_BLOCK_ENTITY_COMMANDBLOCKBLOCKENTITY$TYPE_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.block.entity.CommandBlockBlockEntity$Type
 * Remapped: dqr$a
 */
namespace CommandBlockBlockEntity$Type {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("dqr$a", "net/minecraft/world/level/block/entity/CommandBlockEntity$Mode", "net/minecraft/class_2593$class_2594", "net/minecraft/block/entity/CommandBlockBlockEntity$Type", "net/minecraft/src/C_1998_$C_2000_"));
        }
        return cachedClass;
    };

    // getter for static public field net.minecraft.block.entity.CommandBlockBlockEntity$Type#SEQUENCE
    [[maybe_unused]] static jobject get_field_SEQUENCE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "SEQUENCE", "field_11922", "SEQUENCE", "SEQUENCE"), "Ldqr$a;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.block.entity.CommandBlockBlockEntity$Type#SEQUENCE
    [[maybe_unused]] static void set_field_SEQUENCE(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "SEQUENCE", "field_11922", "SEQUENCE", "SEQUENCE"), "Ldqr$a;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.block.entity.CommandBlockBlockEntity$Type#AUTO
    [[maybe_unused]] static jobject get_field_AUTO() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "AUTO", "field_11923", "AUTO", "AUTO"), "Ldqr$a;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.block.entity.CommandBlockBlockEntity$Type#AUTO
    [[maybe_unused]] static void set_field_AUTO(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "AUTO", "field_11923", "AUTO", "AUTO"), "Ldqr$a;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.block.entity.CommandBlockBlockEntity$Type#REDSTONE
    [[maybe_unused]] static jobject get_field_REDSTONE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "REDSTONE", "field_11924", "REDSTONE", "REDSTONE"), "Ldqr$a;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.block.entity.CommandBlockBlockEntity$Type#REDSTONE
    [[maybe_unused]] static void set_field_REDSTONE(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "REDSTONE", "field_11924", "REDSTONE", "REDSTONE"), "Ldqr$a;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    static jmethodID methodID_values() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("values", "values", "values", "values", "values"), "()[Ldqr$a;");
    }

    static jobject values() {
       const auto clazz = self();
       const auto methodID = methodID_values();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID);
    };
    
    static jmethodID methodID_valueOf() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("valueOf", "valueOf", "valueOf", "valueOf", "valueOf"), "(Ljava/lang/String;)Ldqr$a;");
    }

    static jobject valueOf(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_valueOf();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0);
    };
    
};

#endif // NET_MINECRAFT_BLOCK_ENTITY_COMMANDBLOCKBLOCKENTITY$TYPE_HPP