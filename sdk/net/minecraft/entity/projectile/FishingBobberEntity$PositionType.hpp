// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_ENTITY_PROJECTILE_FISHINGBOBBERENTITY$POSITIONTYPE_HPP
#define NET_MINECRAFT_ENTITY_PROJECTILE_FISHINGBOBBERENTITY$POSITIONTYPE_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.entity.projectile.FishingBobberEntity$PositionType
 * Remapped: cnl$b
 */
namespace FishingBobberEntity$PositionType {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("cnl$b", "net/minecraft/world/entity/projectile/FishingHook$OpenWaterType", "net/minecraft/class_1536$class_4984", "net/minecraft/entity/projectile/FishingBobberEntity$PositionType", "net/minecraft/src/C_1160_$C_1163_"));
        }
        return cachedClass;
    };

    // getter for static public field net.minecraft.entity.projectile.FishingBobberEntity$PositionType#ABOVE_WATER
    [[maybe_unused]] static jobject get_field_ABOVE_WATER() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "ABOVE_WATER", "field_23236", "ABOVE_WATER", "ABOVE_WATER"), "Lcnl$b;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.entity.projectile.FishingBobberEntity$PositionType#ABOVE_WATER
    [[maybe_unused]] static void set_field_ABOVE_WATER(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "ABOVE_WATER", "field_23236", "ABOVE_WATER", "ABOVE_WATER"), "Lcnl$b;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.entity.projectile.FishingBobberEntity$PositionType#INSIDE_WATER
    [[maybe_unused]] static jobject get_field_INSIDE_WATER() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "INSIDE_WATER", "field_23237", "INSIDE_WATER", "INSIDE_WATER"), "Lcnl$b;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.entity.projectile.FishingBobberEntity$PositionType#INSIDE_WATER
    [[maybe_unused]] static void set_field_INSIDE_WATER(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "INSIDE_WATER", "field_23237", "INSIDE_WATER", "INSIDE_WATER"), "Lcnl$b;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.entity.projectile.FishingBobberEntity$PositionType#INVALID
    [[maybe_unused]] static jobject get_field_INVALID() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "INVALID", "field_23238", "INVALID", "INVALID"), "Lcnl$b;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.entity.projectile.FishingBobberEntity$PositionType#INVALID
    [[maybe_unused]] static void set_field_INVALID(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "INVALID", "field_23238", "INVALID", "INVALID"), "Lcnl$b;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    static jmethodID methodID_values() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("values", "values", "values", "values", "values"), "()[Lcnl$b;");
    }

    static jobject values() {
       const auto clazz = self();
       const auto methodID = methodID_values();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID);
    };
    
    static jmethodID methodID_valueOf() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("valueOf", "valueOf", "valueOf", "valueOf", "valueOf"), "(Ljava/lang/String;)Lcnl$b;");
    }

    static jobject valueOf(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_valueOf();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0);
    };
    
};

#endif // NET_MINECRAFT_ENTITY_PROJECTILE_FISHINGBOBBERENTITY$POSITIONTYPE_HPP