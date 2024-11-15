// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_BLOCK_ENTITY_SHULKERBOXBLOCKENTITY$ANIMATIONSTAGE_HPP
#define NET_MINECRAFT_BLOCK_ENTITY_SHULKERBOXBLOCKENTITY$ANIMATIONSTAGE_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.block.entity.ShulkerBoxBlockEntity$AnimationStage
 * Remapped: drr$a
 */
namespace ShulkerBoxBlockEntity$AnimationStage {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("drr$a", "net/minecraft/world/level/block/entity/ShulkerBoxBlockEntity$AnimationStatus", "net/minecraft/class_2627$class_2628", "net/minecraft/block/entity/ShulkerBoxBlockEntity$AnimationStage", "net/minecraft/src/C_2021_$C_2023_"));
        }
        return cachedClass;
    };

    // getter for static public field net.minecraft.block.entity.ShulkerBoxBlockEntity$AnimationStage#CLOSED
    [[maybe_unused]] static jobject get_field_CLOSED() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "CLOSED", "field_12065", "CLOSED", "CLOSED"), "Ldrr$a;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.block.entity.ShulkerBoxBlockEntity$AnimationStage#CLOSED
    [[maybe_unused]] static void set_field_CLOSED(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "CLOSED", "field_12065", "CLOSED", "CLOSED"), "Ldrr$a;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.block.entity.ShulkerBoxBlockEntity$AnimationStage#OPENING
    [[maybe_unused]] static jobject get_field_OPENING() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "OPENING", "field_12066", "OPENING", "OPENING"), "Ldrr$a;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.block.entity.ShulkerBoxBlockEntity$AnimationStage#OPENING
    [[maybe_unused]] static void set_field_OPENING(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "OPENING", "field_12066", "OPENING", "OPENING"), "Ldrr$a;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.block.entity.ShulkerBoxBlockEntity$AnimationStage#OPENED
    [[maybe_unused]] static jobject get_field_OPENED() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "OPENED", "field_12063", "OPENED", "OPENED"), "Ldrr$a;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.block.entity.ShulkerBoxBlockEntity$AnimationStage#OPENED
    [[maybe_unused]] static void set_field_OPENED(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "OPENED", "field_12063", "OPENED", "OPENED"), "Ldrr$a;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.block.entity.ShulkerBoxBlockEntity$AnimationStage#CLOSING
    [[maybe_unused]] static jobject get_field_CLOSING() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("d", "CLOSING", "field_12064", "CLOSING", "CLOSING"), "Ldrr$a;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.block.entity.ShulkerBoxBlockEntity$AnimationStage#CLOSING
    [[maybe_unused]] static void set_field_CLOSING(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("d", "CLOSING", "field_12064", "CLOSING", "CLOSING"), "Ldrr$a;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    static jmethodID methodID_values() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("values", "values", "values", "values", "values"), "()[Ldrr$a;");
    }

    static jobject values() {
       const auto clazz = self();
       const auto methodID = methodID_values();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID);
    };
    
    static jmethodID methodID_valueOf() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("valueOf", "valueOf", "valueOf", "valueOf", "valueOf"), "(Ljava/lang/String;)Ldrr$a;");
    }

    static jobject valueOf(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_valueOf();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0);
    };
    
};

#endif // NET_MINECRAFT_BLOCK_ENTITY_SHULKERBOXBLOCKENTITY$ANIMATIONSTAGE_HPP